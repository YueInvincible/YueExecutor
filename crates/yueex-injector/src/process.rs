//! Process enumeration and handle acquisition.
//!
//! Uses the ToolHelp32 API to snapshot running processes and threads
//! without relying on Psapi (which may be hooked).

use std::mem;

use windows::Win32::Foundation::{CloseHandle, HANDLE, BOOL};
use windows::Win32::System::Diagnostics::ToolHelp::{
    CreateToolhelp32Snapshot, Module32FirstW, Module32NextW, Process32FirstW,
    Process32NextW, Thread32First, Thread32Next, MODULEENTRY32W, PROCESSENTRY32W,
    THREADENTRY32, TH32CS_SNAPMODULE, TH32CS_SNAPMODULE32, TH32CS_SNAPPROCESS,
    TH32CS_SNAPTHREAD,
};
use windows::Win32::System::Threading::{
    OpenProcess, PROCESS_CREATE_THREAD, PROCESS_QUERY_INFORMATION,
    PROCESS_VM_OPERATION, PROCESS_VM_READ, PROCESS_VM_WRITE,
};

use yueex_abi::types::{InjectionError, ProcessInfo};

// ── RAII Handle ──────────────────────────────────────────────────────

/// RAII wrapper for a Windows `HANDLE`. Automatically calls `CloseHandle` on drop.
pub struct OwnedHandle(HANDLE);

impl OwnedHandle {
    /// Wrap an existing handle.
    pub fn new(handle: HANDLE) -> Self {
        Self(handle)
    }

    /// Returns the raw handle value.
    pub fn raw(&self) -> HANDLE {
        self.0
    }
}

impl Drop for OwnedHandle {
    fn drop(&mut self) {
        if !self.0.is_invalid() && !self.0 .0.is_null() {
            unsafe {
                let _ = CloseHandle(self.0);
            }
        }
    }
}

// ── Process Enumeration ──────────────────────────────────────────────

/// Find all running processes whose name matches `target_name` (case-insensitive).
pub fn find_processes_by_name(target_name: &str) -> Result<Vec<ProcessInfo>, InjectionError> {
    let snapshot = unsafe { CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0) }.map_err(|e| {
        win_err("CreateToolhelp32Snapshot(PROCESS)", e)
    })?;
    let _guard = OwnedHandle::new(snapshot);

    let mut entry: PROCESSENTRY32W = unsafe { mem::zeroed() };
    entry.dwSize = mem::size_of::<PROCESSENTRY32W>() as u32;

    let mut processes = Vec::new();

    unsafe {
        if Process32FirstW(snapshot, &mut entry).is_ok() {
            loop {
                let exe_name = wchar_to_string(&entry.szExeFile);
                if exe_name.eq_ignore_ascii_case(target_name) {
                    processes.push(ProcessInfo {
                        pid: entry.th32ProcessID,
                        name: exe_name,
                        exe_path: None,
                    });
                }

                entry.dwSize = mem::size_of::<PROCESSENTRY32W>() as u32;
                if Process32NextW(snapshot, &mut entry).is_err() {
                    break;
                }
            }
        }
    }

    Ok(processes)
}

/// Open a handle to the process with minimum required permissions for injection.
///
/// Uses specific flags instead of `PROCESS_ALL_ACCESS` to reduce detection
/// surface — anti-cheats flag overly-broad access requests.
pub fn open_process_handle(pid: u32) -> Result<OwnedHandle, InjectionError> {
    let access_flags = PROCESS_VM_OPERATION
        | PROCESS_VM_READ
        | PROCESS_VM_WRITE
        | PROCESS_QUERY_INFORMATION
        | PROCESS_CREATE_THREAD;

    let handle = unsafe { OpenProcess(access_flags, BOOL(0), pid) }.map_err(|e| {
        InjectionError::OpenProcessFailed {
            pid,
            reason: e.message().to_string(),
        }
    })?;

    Ok(OwnedHandle::new(handle))
}

// ── Module Enumeration ───────────────────────────────────────────────

/// Information about a module loaded in a remote process.
#[derive(Debug, Clone)]
pub struct RemoteModuleInfo {
    /// Module name (e.g., "kernel32.dll").
    pub name: String,
    /// Full path to the module on disk.
    pub path: String,
    /// Base address of the module in the remote process.
    pub base_address: u64,
    /// Size of the module image in memory.
    pub image_size: u32,
}

/// Enumerate all modules loaded in the target process.
///
/// Uses `TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32` to capture both 32-bit
/// and 64-bit modules.
pub fn enumerate_remote_modules(pid: u32) -> Result<Vec<RemoteModuleInfo>, InjectionError> {
    let snapshot = unsafe {
        CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid)
    }
    .map_err(|e| win_err("CreateToolhelp32Snapshot(MODULE)", e))?;
    let _guard = OwnedHandle::new(snapshot);

    let mut entry: MODULEENTRY32W = unsafe { mem::zeroed() };
    entry.dwSize = mem::size_of::<MODULEENTRY32W>() as u32;

    let mut modules = Vec::new();

    unsafe {
        if Module32FirstW(snapshot, &mut entry).is_ok() {
            loop {
                let name = wchar_to_string(&entry.szModule);
                let path = wchar_to_string(&entry.szExePath);
                let base_address = entry.modBaseAddr as u64;
                let image_size = entry.modBaseSize;

                modules.push(RemoteModuleInfo {
                    name,
                    path,
                    base_address,
                    image_size,
                });

                entry.dwSize = mem::size_of::<MODULEENTRY32W>() as u32;
                if Module32NextW(snapshot, &mut entry).is_err() {
                    break;
                }
            }
        }
    }

    Ok(modules)
}

// ── Thread Enumeration ───────────────────────────────────────────────

/// Minimal information about a thread in a remote process.
#[derive(Debug, Clone)]
pub struct RemoteThreadInfo {
    /// Thread ID.
    pub thread_id: u32,
    /// Owning process ID.
    pub owner_pid: u32,
}

/// Enumerate all threads belonging to the given process.
pub fn enumerate_threads(pid: u32) -> Result<Vec<RemoteThreadInfo>, InjectionError> {
    let snapshot = unsafe { CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0) }
        .map_err(|e| win_err("CreateToolhelp32Snapshot(THREAD)", e))?;
    let _guard = OwnedHandle::new(snapshot);

    let mut entry: THREADENTRY32 = unsafe { mem::zeroed() };
    entry.dwSize = mem::size_of::<THREADENTRY32>() as u32;

    let mut threads = Vec::new();

    unsafe {
        if Thread32First(snapshot, &mut entry).is_ok() {
            loop {
                if entry.th32OwnerProcessID == pid {
                    threads.push(RemoteThreadInfo {
                        thread_id: entry.th32ThreadID,
                        owner_pid: entry.th32OwnerProcessID,
                    });
                }

                entry.dwSize = mem::size_of::<THREADENTRY32>() as u32;
                if Thread32Next(snapshot, &mut entry).is_err() {
                    break;
                }
            }
        }
    }

    Ok(threads)
}

// ── Helpers ──────────────────────────────────────────────────────────

/// Convert a null-terminated wide string to a Rust `String`.
fn wchar_to_string(s: &[u16]) -> String {
    let nul = s.iter().position(|&c| c == 0).unwrap_or(s.len());
    String::from_utf16_lossy(&s[..nul])
}

/// Convert a `windows::core::Error` to an `InjectionError::WinApi`.
pub(crate) fn win_err(context: &str, err: windows::core::Error) -> InjectionError {
    InjectionError::WinApi {
        code: (err.code().0 & 0xFFFF) as u32,
        message: format!("{context}: {}", err.message()),
    }
}
