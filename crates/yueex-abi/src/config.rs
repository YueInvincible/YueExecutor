//! Runtime configuration constants for YueEx.
//!
//! These values are compile-time defaults. A future version may read them
//! from a TOML file or environment variable; for now they are `const`.

/// Expected host process name that `YueEx.dll` will validate on attach.
/// If the current process name does not match, initialization returns
/// [`crate::types::RuntimeError::InvalidHostProcess`].
pub const YUEEX_EXPECTED_HOST_PROCESS_NAME: &str = "RobloxPlayerBeta.exe";

// ── IPC Object Names ─────────────────────────────────────────────────
// Named kernel objects used by the Shared-Memory + Event IPC channel.
// Both sides (engine and DLL) must agree on these names exactly.
//
// Instead of using hardcoded names (which anti-cheats can enumerate and
// flag), we generate session-unique names based on the target PID.
// The UI/engine must call `ipc_names_for_pid(pid)` to get the same names.

/// Base prefix for IPC object names (kept short and generic).
const IPC_PREFIX: &str = "Local\\YxS_";

/// Generate IPC object names for a specific process.
/// Both the engine and the DLL must use the same PID to derive matching names.
pub fn ipc_names_for_pid(pid: u32) -> IpcNames {
    // Simple but deterministic: use PID as a suffix.
    // This ensures both sides generate identical names without shared state.
    let suffix = format!("{:08X}", pid.wrapping_mul(0x9E3779B9));
    IpcNames {
        shared_memory: format!("{}sm_{}", IPC_PREFIX, suffix),
        request_event: format!("{}rq_{}", IPC_PREFIX, suffix),
        response_event: format!("{}rs_{}", IPC_PREFIX, suffix),
    }
}

/// IPC kernel object names for a session.
#[derive(Debug, Clone)]
pub struct IpcNames {
    pub shared_memory: String,
    pub request_event: String,
    pub response_event: String,
}

// Legacy constants — kept for backward compatibility but marked deprecated.
// New code should use `ipc_names_for_pid()` instead.
#[deprecated(note = "Use ipc_names_for_pid() for session-unique names")]
pub const IPC_SHARED_MEMORY_NAME: &str = "Local\\YueEx_SharedMem_v1";
#[deprecated(note = "Use ipc_names_for_pid() for session-unique names")]
pub const IPC_REQUEST_EVENT_NAME: &str = "Local\\YueEx_RequestEvent_v1";
#[deprecated(note = "Use ipc_names_for_pid() for session-unique names")]
pub const IPC_RESPONSE_EVENT_NAME: &str = "Local\\YueEx_ResponseEvent_v1";

/// The name of the host process we expect to be injected into.
pub const TARGET_PROCESS_NAME: &str = "RobloxPlayerBeta.exe";

/// Total size of the shared memory region in bytes.
/// Layout: [Header: 16 bytes][Payload: remaining bytes]
pub const IPC_SHARED_MEMORY_SIZE: u32 = 64 * 1024; // 64 KiB

// ── Shared Memory Header Layout ──────────────────────────────────────

/// Offset (bytes) of the `message_id` field (u32) in the SHM header.
pub const SHM_OFFSET_MESSAGE_ID: usize = 0;

/// Offset (bytes) of the `payload_len` field (u32) in the SHM header.
pub const SHM_OFFSET_PAYLOAD_LEN: usize = 4;

/// Offset (bytes) of the `flags` field (u64) in the SHM header.
pub const SHM_OFFSET_FLAGS: usize = 8;

/// Offset where the payload data begins (right after the 16-byte header).
pub const SHM_PAYLOAD_OFFSET: usize = 16;

/// Maximum payload size = total SHM size minus the header.
pub const SHM_MAX_PAYLOAD_SIZE: usize = (IPC_SHARED_MEMORY_SIZE as usize) - SHM_PAYLOAD_OFFSET;

// ── Timeouts ─────────────────────────────────────────────────────────

/// Default timeout (ms) when waiting for an IPC response event.
pub const IPC_DEFAULT_TIMEOUT_MS: u32 = 10_000;

/// Heartbeat interval (ms) for the in-process runtime keep-alive.
pub const RUNTIME_HEARTBEAT_INTERVAL_MS: u64 = 2_000;
