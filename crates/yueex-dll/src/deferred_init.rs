//! Deferred initialization — runs heavy setup OUTSIDE DllMain.
//!
//! In v2, this is triggered by the first `__namecall` hook trigger
//! (via `bootstrap::on_namecall`), NOT by a shellcode call or thread
//! hijacking.  The hook runs on the game's own thread, so we are
//! guaranteed to be outside loader lock.
//!
//! ## v2 Changes
//! - Removed `store_hinstance()` / `HINSTANCE_VALUE` — no longer needed.
//! - Removed `yueex_deferred_init` export — bootstrap_namecall handles it.
//! - Added `net_hook::install_hooks()` call.
//! - IPC receiver now runs via Thread Pool (non-blocking).
//! - Does NOT install any additional VTable hooks — the permanent
//!   `__namecall` hook from the injector is the only hook needed.

use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::Once;

use crate::cloak;
use crate::init;
use crate::ipc_receiver;
use crate::net_hook;
use crate::offset_resolver;

// ── Shared State ─────────────────────────────────────────────────────

/// Set to `true` once deferred init has completed successfully.
static INIT_COMPLETE: AtomicBool = AtomicBool::new(false);

/// Guard to make sure deferred init only runs once.
static INIT_ONCE: Once = Once::new();

// ── Public API ───────────────────────────────────────────────────────

/// Check whether deferred init has completed.
#[allow(dead_code)]
pub fn is_initialized() -> bool {
    INIT_COMPLETE.load(Ordering::SeqCst)
}

/// Entry point for deferred initialization.
///
/// Called from `bootstrap::on_namecall()` on the first `__namecall` trigger.
/// At this point we are on the game thread, outside loader lock, so all
/// APIs are safe to call.
///
/// This function is idempotent — calling it multiple times is safe.
pub fn run_deferred_init() {
    INIT_ONCE.call_once(|| {
        if let Err(_e) = run_deferred_init_inner() {
            // Initialization failed.  We intentionally do NOT panic —
            // crashing the host process would be worse than a silent
            // failure.  The IPC channel will never come up, so the UI
            // will time out and show an error.
        }
    });
}

// ── Internal ─────────────────────────────────────────────────────────

fn run_deferred_init_inner() -> Result<(), Box<dyn std::error::Error>> {
    // ── 0. Init Diagnostics Logger ──
    let file_appender = tracing_appender::rolling::never(".", "yueex_dll.log");
    let (non_blocking, _guard) = tracing_appender::non_blocking(file_appender);
    
    // We intentionally ignore initialization errors here in case it was already initialized
    let _ = tracing_subscriber::fmt()
        .with_writer(non_blocking)
        .with_thread_ids(true)
        .with_target(false)
        .with_ansi(false)
        .try_init();

    tracing::info!("YueEx DLL Deferred Init Started (v2 — triggered by __namecall hook)");

    // ── 1. Validate host process (fast — just reads process name) ──
    let _state = init::initialize().map_err(|e| {
        tracing::error!("Host validation failed: {e}");
        format!("Host validation failed: {e}")
    })?;

    // ── 2. Cloak PE headers (local, fast) ──
    // v2: Get DLL base via VirtualQuery on one of our exported statics
    // instead of relying on HINSTANCE from DllMain.
    cloak_own_headers();

    // ── 3. Initialize OffsetResolver (pattern scan for Luau API) ──
    // This populates the global CACHED_OFFSETS used by execution.rs
    // to resolve lua_newthread, luau_load, r_spawn, etc.
    let _resolver = offset_resolver::OffsetResolver::init();
    tracing::info!("OffsetResolver initialized — Luau API functions resolved");

    // ── 4. Install Network Interception (WinHTTP hooks) ──
    // Blocks/rewrites requests to Roblox telemetry & client settings endpoints.
    net_hook::install_hooks();
    tracing::info!("Network interception hooks installed");

    // ── 5. Start IPC Receiver via Thread Pool (non-blocking) ──
    // Submit the IPC run loop to the native thread pool so it runs on
    // an existing worker thread without triggering CreateThread callbacks.
    start_ipc_via_threadpool();

    INIT_COMPLETE.store(true, Ordering::SeqCst);
    tracing::info!("YueEx deferred init complete — runtime active");

    Ok(())
}

/// Cloak our own PE headers using VirtualQuery to find the DLL base.
fn cloak_own_headers() {
    use windows::Win32::Foundation::HINSTANCE;
    use windows::Win32::System::Memory::{VirtualQuery, MEMORY_BASIC_INFORMATION};

    // Use the address of one of our exported statics to find our module base.
    let our_addr = unsafe { &raw const crate::BOOTSTRAP_ORIGINAL_VPTR as *const u64 as usize };

    unsafe {
        let mut mbi = MEMORY_BASIC_INFORMATION::default();
        let result = VirtualQuery(
            Some(our_addr as *const std::ffi::c_void),
            &mut mbi,
            std::mem::size_of::<MEMORY_BASIC_INFORMATION>(),
        );

        if result > 0 && !mbi.AllocationBase.is_null() {
            let hinstance = HINSTANCE(mbi.AllocationBase);
            cloak::cloak_pe_headers(hinstance);
            tracing::info!(
                "PE headers cloaked (base: 0x{:016X})",
                mbi.AllocationBase as u64
            );
        } else {
            tracing::warn!("VirtualQuery failed — PE headers NOT cloaked");
        }
    }
}

/// Start the IPC receiver on a thread pool worker thread.
fn start_ipc_via_threadpool() {
    /// Thread pool callback wrapper.
    unsafe extern "system" fn ipc_threadpool_callback(
        _instance: *mut std::ffi::c_void,
        _context: *mut std::ffi::c_void,
        _work: *mut std::ffi::c_void,
    ) {
        tracing::info!("IPC receiver starting on thread pool worker");

        if let Ok(mut receiver) = ipc_receiver::IpcReceiver::new() {
            receiver.run_loop();
        } else {
            tracing::error!("Failed to create IPC receiver");
        }
    }

    let success = yueex_stealth::thread_pool::submit_threadpool_work(
        ipc_threadpool_callback,
        std::ptr::null_mut(),
    );

    if success {
        tracing::info!("IPC receiver submitted to thread pool");
    } else {
        tracing::error!("Failed to submit IPC receiver to thread pool — falling back to blocking");
        // Fallback: run IPC on current thread (will block the game thread momentarily
        // during the first __namecall, which is acceptable as a last resort).
        if let Ok(mut receiver) = ipc_receiver::IpcReceiver::new() {
            // NOTE: This blocks — only used if thread pool is unavailable.
            // In practice, TpAllocWork should always work.
            tracing::warn!("Running IPC receiver on game thread (blocking fallback)");
            receiver.run_loop();
        }
    }
}
