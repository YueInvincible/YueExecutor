//! # yueex-dll — YueEx In-Process Runtime
//!
//! This crate compiles to `YueEx.dll` and is manually mapped into the target
//! MyApp process by `yueex-injector`. It contains:
//!
//! - `DllMain` entry point (intentionally minimal — just returns TRUE)
//! - Bootstrap hook (`bootstrap_namecall`) — permanent `__namecall` hook
//! - Script execution queue (`execution.rs`) — bytecode staging + r_spawn
//! - Deferred initialization (runs when bootstrap hook first triggers)
//! - PE header cloaking (zero-fill headers after init)
//! - IPC receiver (shared memory message loop)
//! - Luau bridge (future: compile and execute Luau scripts)
//! - Scheduler integration (future: hook MyApp task scheduler)
//! - Network interception (`net_hook.rs`) — WinHTTP domain rewriting
//!
//! ## v2 Architecture
//!
//! The injector patches the Instance metatable's VTable to point
//! `__namecall` at `bootstrap_namecall`. This function is the ONLY
//! hook — it handles both initialization (first call) and script
//! execution (every call). The VTable is **never** restored.
//!
//! **Design: DllMain is intentionally minimal to avoid loader-lock
//! deadlocks and anti-cheat detection. All heavy initialization is
//! triggered by the first `__namecall` call via `bootstrap_namecall`.**

pub mod bootstrap;
pub mod cloak;
pub mod deferred_init;
pub mod execution;
pub mod init;
pub mod ipc_receiver;
pub mod luau_bridge;
pub mod net_hook;
pub mod offset_resolver;
pub mod scheduler;

use std::ffi::c_void;

use windows::Win32::Foundation::{BOOL, HINSTANCE, TRUE};
use windows::Win32::System::SystemServices::DLL_PROCESS_ATTACH;

// ── Exported statics for injector ────────────────────────────────────
//
// The injector writes these values BEFORE swapping the vptr, so they
// are available when `bootstrap_namecall` is first called.

/// Original vptr of the Instance metatable.
/// Kept for reference — NOT used to restore the VTable (hook is permanent).
#[no_mangle]
pub static mut BOOTSTRAP_ORIGINAL_VPTR: u64 = 0;

/// Address of the original `__namecall` function in the original VTable.
/// `bootstrap_namecall` forwards every call to this after processing.
#[no_mangle]
pub static mut BOOTSTRAP_ORIGINAL_NAMECALL_FN: u64 = 0;

/// Address of the shadow VTable allocated by the injector.
/// Used for identification / debugging.
#[no_mangle]
pub static mut BOOTSTRAP_SHADOW_VTABLE: u64 = 0;

// ── DllMain ──────────────────────────────────────────────────────────

/// DllMain entry point — intentionally minimal.
///
/// # Safety
/// Called by the OS or Manual Mapper during DLL loading.
/// Only handles `DLL_PROCESS_ATTACH`.
///
/// # v2 Design
/// DllMain does NOTHING except return TRUE.  All initialization is
/// triggered by the first `__namecall` hit via `bootstrap_namecall`.
/// No HINSTANCE storage needed — we get our base address from
/// VirtualQuery or the exported statics if needed.
#[no_mangle]
#[allow(non_snake_case)]
pub unsafe extern "system" fn DllMain(
    _hinstance: HINSTANCE,
    reason: u32,
    _reserved: *mut c_void,
) -> BOOL {
    if reason == DLL_PROCESS_ATTACH {
        // v2: Do nothing. No store_hinstance, no thread creation.
        // The bootstrap_namecall hook handles everything.
    }
    TRUE
}

// ── Exported bootstrap hook ──────────────────────────────────────────

/// Permanent `__namecall` hook — replaces the vtable entry.
///
/// The injector places this function's address in the Shadow VTable at
/// the `__namecall` slot. Every time the game calls a method on an
/// Instance, this function runs.
///
/// On first call: runs `deferred_init()`.
/// On every call: checks script queue, then forwards to original.
///
/// # Safety
/// `lua_state` must be a valid `lua_State*` from the game VM.
#[no_mangle]
pub unsafe extern "C" fn bootstrap_namecall(
    lua_state: *mut c_void,
    nargs: i32,
) -> i32 {
    bootstrap::on_namecall(lua_state, nargs)
}
