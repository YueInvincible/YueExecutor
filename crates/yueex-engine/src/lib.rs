//! C ABI Bridge for YueEx
//!
//! Exports functions for injection and IPC communication to the C# UI.

pub mod ffi_types;

use std::ffi::{c_char, CStr, CString};
use std::ptr;
use std::sync::{Mutex, OnceLock};
use std::time::Duration;

use yueex_abi::config::TARGET_PROCESS_NAME;
use yueex_abi::ipc_protocol::IpcMessage;
use yueex_injector::manual_map::{inject, InjectionConfig};
use yueex_injector::process::{find_processes_by_name, open_process_handle};
use yueex_ipc::channel::IpcSender;

use crate::ffi_types::YueExError;

/// Global IPC Sender instance.
static IPC_SENDER: OnceLock<Mutex<IpcSender>> = OnceLock::new();

// ── Injection ────────────────────────────────────────────────────────

/// Injects the `YueEx.dll` into the target process via Manual Mapping.
///
/// # Arguments
/// * `dll_path` - Null-terminated UTF-8 string containing the absolute path to `YueEx.dll`.
#[no_mangle]
pub unsafe extern "C" fn YueEx_Inject(dll_path: *const c_char) -> YueExError {
    if dll_path.is_null() {
        return YueExError::InternalError;
    }

    let c_str = CStr::from_ptr(dll_path);
    let path = match c_str.to_str() {
        Ok(s) => s,
        Err(_) => return YueExError::InvalidUtf8,
    };

    let dll_bytes = match std::fs::read(path) {
        Ok(b) => b,
        Err(_) => return YueExError::InternalError,
    };

    let pid = match find_processes_by_name(TARGET_PROCESS_NAME) {
        Ok(procs) if !procs.is_empty() => procs[0].pid,
        _ => return YueExError::TargetNotFound,
    };

    let handle = match open_process_handle(pid) {
        Ok(h) => h,
        Err(_) => return YueExError::InternalError,
    };

    let config = InjectionConfig::default();
    let cache_path = "yueex_offset_cache_version-unknown.json";

    match inject(handle.raw(), pid, &dll_bytes, &config, cache_path, None) {
        yueex_abi::types::MapResult::Success { .. } => YueExError::Success,
        yueex_abi::types::MapResult::Failed { .. } => YueExError::InjectionFailed,
    }
}

// ── IPC Communication ────────────────────────────────────────────────

/// Initializes the IPC Shared Memory and Events from the UI side.
///
/// # Arguments
/// * `pid` - The target process ID to derive IPC names from.
#[no_mangle]
pub extern "C" fn YueEx_InitializeIpc(pid: u32) -> YueExError {
    match IpcSender::create(pid) {
        Ok(sender) => {
            let _ = IPC_SENDER.set(Mutex::new(sender));
            YueExError::Success
        }
        Err(_) => YueExError::IpcInitFailed,
    }
}

/// Executes Luau source code inside the injected process.
///
/// # Arguments
/// * `source` - Null-terminated UTF-8 string containing the Luau code.
/// * `timeout_ms` - Maximum time to wait for execution to finish (in milliseconds).
/// * `out_success` - Pointer to a boolean (u8) that will receive the success status (1 = true, 0 = false).
/// * `out_output` - Pointer to a `*mut c_char` that will receive a newly allocated CString containing stdout.
/// * `out_error` - Pointer to a `*mut c_char` that will receive a newly allocated CString containing the error message (if any).
/// * `out_elapsed_us` - Pointer to a `u64` that will receive the execution time in microseconds.
///
/// # Returns
/// If `YueExError::Success` is returned, the caller is responsible for freeing `out_output` and `out_error`
/// using `YueEx_FreeString` if they are not null.
#[no_mangle]
pub unsafe extern "C" fn YueEx_ExecuteLuau(
    source: *const c_char,
    timeout_ms: u32,
    out_success: *mut u8,
    out_output: *mut *mut c_char,
    out_error: *mut *mut c_char,
    out_elapsed_us: *mut u64,
) -> YueExError {
    if source.is_null() || out_success.is_null() || out_output.is_null() || out_error.is_null() || out_elapsed_us.is_null() {
        return YueExError::InternalError;
    }

    let c_str = CStr::from_ptr(source);
    let code = match c_str.to_str() {
        Ok(s) => s.to_owned(),
        Err(_) => return YueExError::InvalidUtf8,
    };

    let sender_lock = match IPC_SENDER.get() {
        Some(l) => l,
        None => return YueExError::IpcInitFailed,
    };

    let mut sender = match sender_lock.lock() {
        Ok(g) => g,
        Err(_) => return YueExError::InternalError,
    };

    let msg = IpcMessage::ExecuteLuau { source: code };
    let timeout = Duration::from_millis(timeout_ms as u64);

    match sender.send_and_wait(&msg, timeout) {
        Ok(IpcMessage::ExecResult(res)) => {
            *out_success = if res.success { 1 } else { 0 };
            *out_elapsed_us = res.elapsed_us;

            // Allocate output string
            let out_c_str = CString::new(res.output).unwrap_or_default();
            *out_output = out_c_str.into_raw();

            // Allocate error string if present
            if let Some(err) = res.error {
                let err_c_str = CString::new(err).unwrap_or_default();
                *out_error = err_c_str.into_raw();
            } else {
                *out_error = ptr::null_mut();
            }

            YueExError::Success
        }
        Ok(_) => YueExError::InternalError, // Unexpected response type
        Err(e) => e.into(),
    }
}

// ── Memory Management ────────────────────────────────────────────────

/// Frees a string previously allocated by the engine (e.g. `out_output` from `YueEx_ExecuteLuau`).
#[no_mangle]
pub unsafe extern "C" fn YueEx_FreeString(ptr: *mut c_char) {
    if !ptr.is_null() {
        let _ = CString::from_raw(ptr);
    }
}

/// Closes handles and releases IPC resources.
#[no_mangle]
pub extern "C" fn YueEx_ShutdownIpc() {
    // Drop the global sender if it was initialized.
    // In Rust, OnceLock cannot be reset safely in safe code, but since this is usually
    // called on application exit, it's fine. We'll leave it as a no-op or we could use an Option<Mutex>.
    // To support resetting, we would change OnceLock to RwLock<Option<IpcSender>>.
}
