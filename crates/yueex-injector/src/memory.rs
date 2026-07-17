//! Remote memory operation wrappers.
//!
//! Thin, safe-ish wrappers around `VirtualAllocEx`, `WriteProcessMemory`,
//! `ReadProcessMemory`, `VirtualProtectEx`, and `VirtualFreeEx`.
//! All functions return typed `Result` for structured error handling.

use std::ffi::c_void;

use windows::Win32::Foundation::HANDLE;
use windows::Win32::System::Diagnostics::Debug::{ReadProcessMemory, WriteProcessMemory};
use windows::Win32::System::Memory::{
    VirtualAllocEx, VirtualFreeEx, VirtualProtectEx, MEM_COMMIT, MEM_RELEASE, MEM_RESERVE,
    PAGE_PROTECTION_FLAGS, PAGE_READWRITE, VIRTUAL_ALLOCATION_TYPE,
};

use yueex_abi::types::InjectionError;

// ── Remote Allocation ────────────────────────────────────────────────

/// Allocate memory in the remote process.
///
/// Returns the base address of the allocated region.
///
/// # Arguments
/// * `process` — Handle to the target process.
/// * `size` — Number of bytes to allocate.
/// * `protection` — Initial memory protection (e.g., `PAGE_READWRITE`).
pub fn alloc_remote(
    process: HANDLE,
    size: usize,
    protection: PAGE_PROTECTION_FLAGS,
) -> Result<u64, InjectionError> {
    let addr = unsafe {
        VirtualAllocEx(
            process,
            None,
            size,
            MEM_RESERVE | MEM_COMMIT,
            protection,
        )
    };

    if addr.is_null() {
        return Err(InjectionError::AllocFailed {
            reason: format!(
                "VirtualAllocEx({size} bytes, prot=0x{:X}) returned NULL",
                protection.0
            ),
        });
    }

    Ok(addr as u64)
}

/// Allocate memory at a specific address in the remote process.
///
/// Useful for reserving memory at a predetermined location.
pub fn alloc_remote_at(
    process: HANDLE,
    address: u64,
    size: usize,
    alloc_type: VIRTUAL_ALLOCATION_TYPE,
    protection: PAGE_PROTECTION_FLAGS,
) -> Result<u64, InjectionError> {
    let addr = unsafe {
        VirtualAllocEx(
            process,
            Some(address as *const c_void),
            size,
            alloc_type,
            protection,
        )
    };

    if addr.is_null() {
        return Err(InjectionError::AllocFailed {
            reason: format!(
                "VirtualAllocEx(at 0x{address:016X}, {size} bytes) returned NULL"
            ),
        });
    }

    Ok(addr as u64)
}

/// Free memory in the remote process.
pub fn free_remote(process: HANDLE, address: u64, size: usize) -> Result<(), InjectionError> {
    let result =
        unsafe { VirtualFreeEx(process, address as *mut c_void, size, MEM_RELEASE) };

    result.map_err(|e| InjectionError::WinApi {
        code: (e.code().0 & 0xFFFF) as u32,
        message: format!("VirtualFreeEx(0x{address:016X}): {}", e.message()),
    })
}

// ── Remote Read / Write ──────────────────────────────────────────────

/// Write a byte buffer into the remote process memory.
pub fn write_remote(
    process: HANDLE,
    remote_addr: u64,
    data: &[u8],
) -> Result<(), InjectionError> {
    unsafe {
        WriteProcessMemory(
            process,
            remote_addr as *const c_void,
            data.as_ptr() as *const c_void,
            data.len(),
            None,
        )
    }
    .map_err(|e| InjectionError::WriteFailed {
        rva: remote_addr,
        reason: format!("WriteProcessMemory({} bytes): {}", data.len(), e.message()),
    })
}

/// Read bytes from the remote process memory into a local buffer.
pub fn read_remote(
    process: HANDLE,
    remote_addr: u64,
    buf: &mut [u8],
) -> Result<(), InjectionError> {
    unsafe {
        ReadProcessMemory(
            process,
            remote_addr as *const c_void,
            buf.as_mut_ptr() as *mut c_void,
            buf.len(),
            None,
        )
    }
    .map_err(|e| InjectionError::ReadFailed {
        address: remote_addr,
        reason: format!("ReadProcessMemory({} bytes): {}", buf.len(), e.message()),
    })
}

/// Read a `T` from remote process memory.
///
/// # Safety
/// `T` must be a valid POD type that can be safely zero-initialized
/// and read from raw memory.
pub fn read_remote_value<T: Copy + Default>(
    process: HANDLE,
    remote_addr: u64,
) -> Result<T, InjectionError> {
    let mut value = T::default();
    let buf = unsafe {
        std::slice::from_raw_parts_mut(&mut value as *mut T as *mut u8, std::mem::size_of::<T>())
    };
    read_remote(process, remote_addr, buf)?;
    Ok(value)
}

// ── Memory Protection ────────────────────────────────────────────────

/// Change the memory protection of a region in the remote process.
///
/// Returns the old protection flags.
pub fn protect_remote(
    process: HANDLE,
    address: u64,
    size: usize,
    new_protection: PAGE_PROTECTION_FLAGS,
) -> Result<PAGE_PROTECTION_FLAGS, InjectionError> {
    let mut old_protection = PAGE_PROTECTION_FLAGS::default();

    unsafe {
        VirtualProtectEx(
            process,
            address as *const c_void,
            size,
            new_protection,
            &mut old_protection,
        )
    }
    .map_err(|e| InjectionError::ProtectFailed {
        section: format!("0x{address:016X}+0x{size:X}"),
        reason: format!(
            "VirtualProtectEx(new=0x{:X}): {}",
            new_protection.0,
            e.message()
        ),
    })?;

    Ok(old_protection)
}

/// Change protection, write data, then restore original protection.
///
/// Used for writing to memory regions that are not currently writable
/// (e.g., `.text` sections mapped as `PAGE_EXECUTE_READ`).
pub fn write_remote_protected(
    process: HANDLE,
    remote_addr: u64,
    data: &[u8],
) -> Result<(), InjectionError> {
    let old_prot = protect_remote(process, remote_addr, data.len(), PAGE_READWRITE)?;
    let write_result = write_remote(process, remote_addr, data);
    // Always try to restore protection, even if write failed.
    let _ = protect_remote(process, remote_addr, data.len(), old_prot);
    write_result
}
