//! Shared Memory segment management.
//!
//! Wraps `CreateFileMappingW` and `MapViewOfFile` to create or open
//! a named shared memory region for IPC.

use std::slice;

use thiserror::Error;

use windows::Win32::Foundation::{CloseHandle, HANDLE, INVALID_HANDLE_VALUE};
use windows::Win32::System::Memory::{
    CreateFileMappingW, MapViewOfFile, OpenFileMappingW, UnmapViewOfFile,
    FILE_MAP_ALL_ACCESS, PAGE_READWRITE,
};

use yueex_abi::config::IPC_SHARED_MEMORY_SIZE;

#[derive(Debug, Error)]
pub enum SharedMemError {
    #[error("Failed to create file mapping: {0}")]
    CreateFailed(String),

    #[error("Failed to open file mapping: {0}")]
    OpenFailed(String),

    #[error("Failed to map view of file: {0}")]
    MapFailed(String),
}

/// A handle to a shared memory region.
pub struct SharedMem {
    handle: HANDLE,
    address: *mut u8,
    size: usize,
}

// Safety: SharedMem is safe to send between threads.
unsafe impl Send for SharedMem {}
unsafe impl Sync for SharedMem {}

impl SharedMem {
    /// Create a new named shared memory region (used by the server/injector).
    pub fn create(name: &str) -> Result<Self, SharedMemError> {
        let name_w: Vec<u16> = name.encode_utf16().chain(std::iter::once(0)).collect();

        let handle = unsafe {
            CreateFileMappingW(
                INVALID_HANDLE_VALUE,
                None,
                PAGE_READWRITE,
                0,
                IPC_SHARED_MEMORY_SIZE,
                windows::core::PCWSTR(name_w.as_ptr()),
            )
        }
        .map_err(|e| SharedMemError::CreateFailed(e.message().to_string()))?;

        if handle.is_invalid() {
            return Err(SharedMemError::CreateFailed("Invalid handle returned".into()));
        }

        Self::map(handle, IPC_SHARED_MEMORY_SIZE as usize)
    }

    /// Open an existing named shared memory region (used by the client/DLL).
    pub fn open(name: &str) -> Result<Self, SharedMemError> {
        let name_w: Vec<u16> = name.encode_utf16().chain(std::iter::once(0)).collect();

        let handle = unsafe {
            OpenFileMappingW(
                FILE_MAP_ALL_ACCESS.0,
                false,
                windows::core::PCWSTR(name_w.as_ptr()),
            )
        }
        .map_err(|e| SharedMemError::OpenFailed(e.message().to_string()))?;

        if handle.is_invalid() {
            return Err(SharedMemError::OpenFailed("Invalid handle returned".into()));
        }

        Self::map(handle, IPC_SHARED_MEMORY_SIZE as usize)
    }

    /// Internal map helper.
    fn map(handle: HANDLE, size: usize) -> Result<Self, SharedMemError> {
        let address = unsafe {
            MapViewOfFile(
                handle,
                FILE_MAP_ALL_ACCESS,
                0,
                0,
                size,
            )
        };

        if address.Value.is_null() {
            unsafe {
                let _ = CloseHandle(handle);
            }
            return Err(SharedMemError::MapFailed("MapViewOfFile returned NULL".into()));
        }

        Ok(Self {
            handle,
            address: address.Value as *mut u8,
            size,
        })
    }

    /// Access the shared memory as a mutable byte slice.
    ///
    /// # Safety
    /// The caller must ensure proper synchronization (e.g., using Events)
    /// before accessing this slice to prevent data races.
    #[allow(clippy::mut_from_ref)]
    pub unsafe fn as_mut_slice(&self) -> &mut [u8] {
        slice::from_raw_parts_mut(self.address, self.size)
    }

    /// Get the raw pointer to the mapped memory.
    pub fn as_ptr(&self) -> *mut u8 {
        self.address
    }
}

impl Drop for SharedMem {
    fn drop(&mut self) {
        if !self.address.is_null() {
            unsafe {
                let _ = UnmapViewOfFile(windows::Win32::System::Memory::MEMORY_MAPPED_VIEW_ADDRESS {
                    Value: self.address as *mut std::ffi::c_void,
                });
            }
        }
        if !self.handle.is_invalid() {
            unsafe {
                let _ = CloseHandle(self.handle);
            }
        }
    }
}
