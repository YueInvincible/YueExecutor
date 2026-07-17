//! Permanent `__namecall` Hook — bootstrap + script execution gateway.
//!
//! This module implements the **single, permanent** `__namecall` hook that
//! serves two purposes:
//!
//! 1. **First-time initialization**: On the very first trigger, runs
//!    `deferred_init()` to set up networking hooks, IPC, pattern scanning, etc.
//!
//! 2. **Ongoing script execution**: On every subsequent trigger, checks the
//!    script queue and executes any pending scripts via `r_spawn`.
//!
//! ## Key Design Decision (matching Real)
//!
//! The Shadow VTable is **never** restored. This hook remains active for the
//! entire lifetime of the process. There is no concept of a "one-shot
//! bootstrap" — the hook IS the execution engine.
//!
//! ## Call Flow
//!
//! ```text
//! Game calls Instance:Method() → __namecall vtable slot
//!   → bootstrap_namecall (our hook)
//!     → [first call only] deferred_init()
//!     → [every call] try_execute_pending(lua_state)
//!     → forward to original __namecall → return result
//! ```

use std::ffi::c_void;
use std::sync::atomic::{AtomicBool, Ordering};

/// Set to `true` after `deferred_init()` completes.
/// Uses `SeqCst` for the swap (first-trigger guard) and `Acquire` for
/// subsequent fast-path checks.
static INIT_DONE: AtomicBool = AtomicBool::new(false);

/// Type signature of the original `__namecall` handler.
///
/// `int __namecall(lua_State* L, int nargs)`
///
/// When the game calls `Instance:SomeMethod(args...)`, the VM routes
/// through the metatable's `__namecall`. `L` is the active lua_State
/// and `nargs` is the number of arguments pushed onto the stack
/// (not counting the object itself).
type OriginalNamecall = unsafe extern "C" fn(L: *mut c_void, nargs: i32) -> i32;

/// Hook handler for `__namecall` — exported as `bootstrap_namecall`.
///
/// This function is placed into the Shadow VTable by the injector and is
/// called every time the game invokes a method on an Instance object.
///
/// # Safety
/// * `lua_state` must be a valid `lua_State*` pointer from the game VM.
/// * `BOOTSTRAP_ORIGINAL_NAMECALL_FN` must have been written by the injector
///   before this function can be called.
pub fn on_namecall(lua_state: *mut c_void, nargs: i32) -> i32 {
    // ── 1. One-time initialization (first trigger only) ─────────
    //
    // We use a double-check pattern:
    // - Fast path: `Acquire` load — almost zero cost after init.
    // - Slow path: `SeqCst` compare-exchange — ensures exactly one
    //   thread runs deferred_init.
    if !INIT_DONE.load(Ordering::Acquire) {
        // Atomically set to true — only the first thread succeeds.
        if INIT_DONE
            .compare_exchange(false, true, Ordering::SeqCst, Ordering::SeqCst)
            .is_ok()
        {
            tracing::info!("bootstrap_namecall: first trigger — running deferred_init");

            // Run full initialization:
            // - Host validation
            // - PE header cloaking
            // - OffsetResolver (pattern scan for Luau API functions)
            // - Network interception (WinHTTP hooks)
            // - IPC receiver (via thread pool)
            //
            // NOTE: We do NOT restore the original vptr. The Shadow VTable
            // remains active permanently.
            crate::deferred_init::run_deferred_init();

            tracing::info!("bootstrap_namecall: deferred_init complete");
        }
    }

    // ── 2. Script execution (every trigger) ──────────────────────
    //
    // Check the script queue. If the IPC receiver has enqueued any
    // compiled bytecode, execute it now using the game's lua_State.
    //
    // This is safe because we're running on the game thread, inside
    // the VM's own call to __namecall.
    crate::execution::try_execute_pending(lua_state);

    // ── 3. Forward to original __namecall ────────────────────────
    //
    // Always call the original handler so the game functions normally.
    // The original function pointer was stored by the injector in
    // the DLL's exported static `BOOTSTRAP_ORIGINAL_NAMECALL_FN`.
    let original_fn_addr = unsafe { crate::BOOTSTRAP_ORIGINAL_NAMECALL_FN };

    if original_fn_addr == 0 {
        // This should never happen — the injector must write this before
        // the hook can trigger. If it does, return 0 to avoid crashing.
        tracing::error!("BOOTSTRAP_ORIGINAL_NAMECALL_FN is NULL — cannot forward __namecall");
        return 0;
    }

    let original: OriginalNamecall = unsafe { std::mem::transmute(original_fn_addr) };
    unsafe { original(lua_state, nargs) }
}

/// Check whether deferred initialization has completed.
///
/// Can be called from any thread to check if the hook has triggered
/// at least once and init is done.
#[allow(dead_code)]
pub fn is_initialized() -> bool {
    INIT_DONE.load(Ordering::Acquire)
}
