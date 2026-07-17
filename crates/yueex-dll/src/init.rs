//! Initialization logic for the YueEx in-process runtime.
//!
//! Validates the host environment and sets up global state.

use std::ptr;

use windows::Win32::Foundation::{HMODULE, MAX_PATH};
use windows::Win32::System::LibraryLoader::GetModuleFileNameW;
use windows::Win32::System::Threading::GetCurrentProcessId;

use yueex_abi::config::TARGET_PROCESS_NAME;
use yueex_abi::types::RuntimeError;

/// Basic runtime state initialized during startup.
#[derive(Debug)]
pub struct RuntimeState {
    pub process_id: u32,
    pub host_exe_path: String,
    pub host_exe_name: String,
}

/// Validate the host process and initialize basic runtime state.
///
/// Ensures the DLL is only running inside the intended target process.
pub fn initialize() -> Result<RuntimeState, RuntimeError> {
    // 1. Get current process ID.
    let process_id = unsafe { GetCurrentProcessId() };

    // 2. Get host executable path.
    let mut path_buf = [0u16; MAX_PATH as usize];
    let len = unsafe { GetModuleFileNameW(HMODULE(ptr::null_mut()), &mut path_buf) };
    if len == 0 {
        return Err(RuntimeError::InitializationFailed(
            "GetModuleFileNameW failed".to_string(),
        ));
    }

    let host_exe_path = String::from_utf16_lossy(&path_buf[..len as usize]);
    
    // 3. Extract the executable name from the path.
    let host_exe_name = if let Some(idx) = host_exe_path.rfind('\\') {
        host_exe_path[idx + 1..].to_string()
    } else {
        host_exe_path.clone()
    };

    // 4. Validate host name.
    if !host_exe_name.eq_ignore_ascii_case(TARGET_PROCESS_NAME) {
        return Err(RuntimeError::HostValidationFailed {
            expected: TARGET_PROCESS_NAME.to_string(),
            actual: host_exe_name,
        });
    }

    Ok(RuntimeState {
        process_id,
        host_exe_path,
        host_exe_name,
    })
}
