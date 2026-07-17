//! IPC Receiver loop.
//!
//! Listens for incoming IPC messages from the UI and dispatches them.
//!
//! ## v2 Changes
//! - `ExecuteLuau` now enqueues bytecode into the script execution queue
//!   (`execution::enqueue_script`) instead of going through the stub
//!   `SchedulerHook` / `LuauBridge` path.
//! - The actual execution happens on the game thread when the permanent
//!   `__namecall` hook triggers `try_execute_pending()`.

use yueex_abi::ipc_protocol::IpcMessage;
use yueex_abi::types::RuntimeError;
use yueex_ipc::channel::IpcReceiver as ChannelReceiver;

use crate::execution;

/// The main IPC message loop running inside the injected DLL.
pub struct IpcReceiver {
    channel: ChannelReceiver,
}

impl IpcReceiver {
    /// Initialize the receiver and connect to the existing IPC channel.
    pub fn new() -> Result<Self, RuntimeError> {
        let channel = ChannelReceiver::open().map_err(|e| {
            RuntimeError::InitializationFailed(format!("Failed to open IPC channel: {}", e))
        })?;

        Ok(Self { channel })
    }

    /// Run the receiver loop infinitely.
    pub fn run_loop(&mut self) {
        tracing::info!("IPC receiver loop started (v2 — script queue mode).");

        loop {
            // Block until a command is received from the UI.
            match self.channel.recv_command() {
                Ok(IpcMessage::ExecuteLuau { source }) => {
                    tracing::info!("Received ExecuteLuau command ({} chars)", source.len());

                    // v2: Compile and enqueue bytecode for execution on game thread.
                    //
                    // In a full implementation, we would compile the Luau source
                    // to bytecode here using `luau_compile()`. For now, we pass
                    // the raw source as bytes — the offset_resolver will have
                    // resolved `luau_load` which can accept source strings with
                    // the right flags.
                    //
                    // TODO: Add proper Luau compilation step here.
                    // For now, enqueue the source directly as bytecode placeholder.
                    let bytecode = source.as_bytes().to_vec();
                    let source_name = format!(
                        "YueEx_{}",
                        std::time::SystemTime::now()
                            .duration_since(std::time::UNIX_EPOCH)
                            .map(|d| d.as_secs())
                            .unwrap_or(0)
                    );

                    execution::enqueue_script(bytecode, source_name);

                    // Send acknowledgment back to UI.
                    // The actual execution result will come later (async).
                    let rsp = IpcMessage::ExecResult(yueex_abi::types::ExecutionResult {
                        success: true,
                        output: "Script enqueued for execution".to_string(),
                        error: None,
                        elapsed_us: 0,
                    });
                    let _ = self.channel.send_response(&rsp);
                }
                Ok(IpcMessage::Ping) => {
                    let _ = self.channel.send_response(&IpcMessage::Pong);
                }
                Ok(IpcMessage::Shutdown) => {
                    tracing::info!("Shutdown requested via IPC.");
                    break;
                }
                Ok(msg) => {
                    tracing::warn!("Received unexpected IPC message: {:?}", msg);
                    let _ = self.channel.send_response(&IpcMessage::ErrorReport {
                        message: "Unexpected message type".to_string(),
                    });
                }
                Err(e) => {
                    tracing::error!("IPC receive error: {}", e);
                    // On severe channel error, we might need to abort the loop.
                    std::thread::sleep(std::time::Duration::from_secs(1));
                }
            }
        }
    }
}
