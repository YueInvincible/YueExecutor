//! Named Event management.
//!
//! Wraps `CreateEventW` and `OpenEventW` to create or open named synchronization
//! events for signaling when shared memory is ready to be read.

use std::time::Duration;

use thiserror::Error;

use windows::Win32::Foundation::{CloseHandle, HANDLE};
use windows::Win32::System::Threading::{
    CreateEventW, OpenEventW, SetEvent, WaitForSingleObject, EVENT_ALL_ACCESS,
};

#[derive(Debug, Error)]
pub enum EventError {
    #[error("Failed to create event: {0}")]
    CreateFailed(String),

    #[error("Failed to open event: {0}")]
    OpenFailed(String),

    #[error("Failed to signal event: {0}")]
    SignalFailed(String),
}

/// A wrapper around a Windows named event.
pub struct NamedEvent {
    handle: HANDLE,
}

// Safety: NamedEvents are safe to send between threads.
unsafe impl Send for NamedEvent {}
unsafe impl Sync for NamedEvent {}

impl NamedEvent {
    /// Create a new named event (auto-reset, initially unsignaled).
    pub fn create(name: &str) -> Result<Self, EventError> {
        let name_w: Vec<u16> = name.encode_utf16().chain(std::iter::once(0)).collect();

        let handle = unsafe {
            CreateEventW(
                None,
                false, // bManualReset = FALSE (auto-reset)
                false, // bInitialState = FALSE (unsignaled)
                windows::core::PCWSTR(name_w.as_ptr()),
            )
        }
        .map_err(|e| EventError::CreateFailed(e.message().to_string()))?;

        if handle.is_invalid() {
            return Err(EventError::CreateFailed("Invalid handle returned".into()));
        }

        Ok(Self { handle })
    }

    /// Open an existing named event.
    pub fn open(name: &str) -> Result<Self, EventError> {
        let name_w: Vec<u16> = name.encode_utf16().chain(std::iter::once(0)).collect();

        let handle = unsafe {
            OpenEventW(
                EVENT_ALL_ACCESS,
                false,
                windows::core::PCWSTR(name_w.as_ptr()),
            )
        }
        .map_err(|e| EventError::OpenFailed(e.message().to_string()))?;

        if handle.is_invalid() {
            return Err(EventError::OpenFailed("Invalid handle returned".into()));
        }

        Ok(Self { handle })
    }

    /// Signal the event (wake up a waiting thread).
    pub fn set(&self) -> Result<(), EventError> {
        unsafe { SetEvent(self.handle) }
            .map_err(|e| EventError::SignalFailed(e.message().to_string()))
    }

    /// Wait for the event to be signaled.
    ///
    /// Returns `true` if signaled, `false` if the timeout elapsed.
    pub fn wait(&self, timeout: Duration) -> bool {
        let timeout_ms = timeout.as_millis() as u32;
        let result = unsafe { WaitForSingleObject(self.handle, timeout_ms) };
        result == windows::Win32::Foundation::WAIT_OBJECT_0
    }

    /// Wait indefinitely for the event to be signaled.
    pub fn wait_infinite(&self) {
        let result = unsafe { WaitForSingleObject(self.handle, windows::Win32::System::Threading::INFINITE) };
        debug_assert_eq!(result, windows::Win32::Foundation::WAIT_OBJECT_0);
    }
}

impl Drop for NamedEvent {
    fn drop(&mut self) {
        if !self.handle.is_invalid() {
            unsafe {
                let _ = CloseHandle(self.handle);
            }
        }
    }
}
