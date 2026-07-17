//! High-level IPC channel using Shared Memory and Named Events.
//!
//! Provides a `Sender` (for the injector/UI) and a `Receiver` (for the injected DLL).
//! Uses dynamic, PID-derived IPC names to avoid detection via named-object enumeration.

use std::time::Duration;

use thiserror::Error;

use yueex_abi::config::{ipc_names_for_pid, IpcNames};
use yueex_abi::ipc_protocol::IpcMessage;

use crate::event::{EventError, NamedEvent};
use crate::shared_mem::{SharedMem, SharedMemError};

#[derive(Debug, Error)]
pub enum ChannelError {
    #[error("Shared memory error: {0}")]
    SharedMem(#[from] SharedMemError),

    #[error("Event error: {0}")]
    Event(#[from] EventError),

    #[error("Timeout waiting for response")]
    Timeout,

    #[error("Buffer too small for message")]
    BufferTooSmall,

    #[error("Failed to parse message")]
    ParseError,
}

// ── Shared Ipc Core ──────────────────────────────────────────────────

struct IpcCore {
    shm: SharedMem,
    req_event: NamedEvent,
    rsp_event: NamedEvent,
}

impl IpcCore {
    /// Read a message from shared memory.
    fn recv(&self) -> Result<IpcMessage, ChannelError> {
        // Safety: We assume the remote end has signaled us and finished writing.
        let buf = unsafe { self.shm.as_mut_slice() };
        
        // Parse the message.
        IpcMessage::deserialize(buf)
            .map(|(msg, _len)| msg)
            .map_err(|_| ChannelError::ParseError)
    }
}

// ── Sender (UI/Injector side) ────────────────────────────────────────

pub struct IpcSender {
    core: IpcCore,
}

impl IpcSender {
    /// Create the IPC infrastructure (called by the host application).
    ///
    /// Uses dynamic, PID-derived IPC names to avoid detection.
    pub fn create(pid: u32) -> Result<Self, ChannelError> {
        let names = ipc_names_for_pid(pid);
        let shm = SharedMem::create(&names.shared_memory)?;
        let req_event = NamedEvent::create(&names.request_event)?;
        let rsp_event = NamedEvent::create(&names.response_event)?;

        Ok(Self {
            core: IpcCore { shm, req_event, rsp_event },
        })
    }

    /// Send a command to the DLL and wait for a response.
    pub fn send_and_wait(&mut self, req: &IpcMessage, timeout: Duration) -> Result<IpcMessage, ChannelError> {
        let buf = unsafe { self.core.shm.as_mut_slice() };
        let _len = req.serialize(buf).map_err(|_| ChannelError::BufferTooSmall)?;
        self.core.req_event.set()?;

        if !self.core.rsp_event.wait(timeout) {
            return Err(ChannelError::Timeout);
        }

        self.core.recv()
    }
}

// ── Receiver (DLL side) ──────────────────────────────────────────────

pub struct IpcReceiver {
    core: IpcCore,
}

impl IpcReceiver {
    /// Open the existing IPC infrastructure (called by the injected DLL).
    ///
    /// Uses dynamic, PID-derived IPC names to match the sender.
    pub fn open() -> Result<Self, ChannelError> {
        // Get our own PID to derive the same IPC names the sender created.
        let pid = unsafe { windows::Win32::System::Threading::GetCurrentProcessId() };
        let names = ipc_names_for_pid(pid);

        let shm = SharedMem::open(&names.shared_memory)?;
        let req_event = NamedEvent::open(&names.request_event)?;
        let rsp_event = NamedEvent::open(&names.response_event)?;

        Ok(Self {
            core: IpcCore { shm, req_event, rsp_event },
        })
    }

    /// Block until a command is received.
    pub fn recv_command(&self) -> Result<IpcMessage, ChannelError> {
        self.core.req_event.wait_infinite();
        self.core.recv()
    }

    /// Send a response back to the UI.
    pub fn send_response(&mut self, rsp: &IpcMessage) -> Result<(), ChannelError> {
        let buf = unsafe { self.core.shm.as_mut_slice() };
        let _len = rsp.serialize(buf).map_err(|_| ChannelError::BufferTooSmall)?;
        self.core.rsp_event.set()?;
        Ok(())
    }
}
