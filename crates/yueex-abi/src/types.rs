//! Shared type definitions used across the YueEx boundary.
//!
//! These types are the canonical representation of results, errors, and
//! metadata exchanged between the out-of-process engine and the in-process
//! runtime. FFI-compatible representations live in `yueex-engine::ffi_types`.

use thiserror::Error;

// ── Injection (Loader → Target Process) ──────────────────────────────

/// Outcome of a Manual-Mapping injection attempt.
#[derive(Debug, Clone)]
pub enum MapResult {
    /// DLL was successfully mapped and DllMain returned TRUE.
    Success {
        /// Base address of the mapped image in the remote process.
        remote_base: u64,
        /// Size of the mapped image.
        image_size: u64,
        /// Whether Module Overloading was used (true) or direct alloc (false).
        module_overloaded: bool,
    },
    /// Injection failed at a specific stage.
    Failed {
        stage: InjectionStage,
        error: InjectionError,
    },
}

/// Discrete stages of the Manual-Mapping pipeline, for telemetry/diagnostics.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum InjectionStage {
    /// Reading the DLL bytes from disk or embedded resource.
    ReadDll,
    /// Parsing PE headers.
    ParsePe,
    /// Finding target process.
    FindProcess,
    /// Opening a handle to the target process.
    OpenProcess,
    /// Allocating remote memory (direct or Module Overloading).
    AllocateMemory,
    /// Mapping PE sections into remote memory.
    MapSections,
    /// Fixing base relocations.
    FixRelocations,
    /// Resolving Import Address Table.
    ResolveImports,
    /// Setting section memory protections.
    SetPermissions,
    /// Executing DllMain via thread hijacking (legacy).
    ExecuteDllMain,
    /// Activating the DLL via Shadow VTable hook.
    VTableActivation,
    /// Erasing PE headers in remote memory.
    CloakHeaders,
}

impl std::fmt::Display for InjectionStage {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        let label = match self {
            Self::ReadDll => "ReadDll",
            Self::ParsePe => "ParsePe",
            Self::FindProcess => "FindProcess",
            Self::OpenProcess => "OpenProcess",
            Self::AllocateMemory => "AllocateMemory",
            Self::MapSections => "MapSections",
            Self::FixRelocations => "FixRelocations",
            Self::ResolveImports => "ResolveImports",
            Self::SetPermissions => "SetPermissions",
            Self::ExecuteDllMain => "ExecuteDllMain",
            Self::VTableActivation => "VTableActivation",
            Self::CloakHeaders => "CloakHeaders",
        };
        write!(f, "{label}")
    }
}

/// Errors that can occur during the injection pipeline.
#[derive(Debug, Clone, Error)]
pub enum InjectionError {
    #[error("DLL file not found or unreadable: {path}")]
    DllNotFound { path: String },

    #[error("Invalid PE format: {reason}")]
    InvalidPe { reason: String },

    #[error("Target process '{name}' not found")]
    ProcessNotFound { name: String },

    #[error("Failed to open process (PID {pid}): {reason}")]
    OpenProcessFailed { pid: u32, reason: String },

    #[error("Memory allocation failed in remote process: {reason}")]
    AllocFailed { reason: String },

    #[error("WriteProcessMemory failed at RVA 0x{rva:08X}: {reason}")]
    WriteFailed { rva: u64, reason: String },

    #[error("ReadProcessMemory failed at address 0x{address:016X}: {reason}")]
    ReadFailed { address: u64, reason: String },

    #[error("Import resolution failed: {dll_name}!{func_name} — {reason}")]
    ImportResolveFailed {
        dll_name: String,
        func_name: String,
        reason: String,
    },

    #[error("Base relocation failed at RVA 0x{rva:08X}: {reason}")]
    RelocationFailed { rva: u64, reason: String },

    #[error("VirtualProtectEx failed for section '{section}': {reason}")]
    ProtectFailed { section: String, reason: String },

    #[error("Thread hijacking failed: {reason}")]
    ThreadHijackFailed { reason: String },

    #[error("DllMain returned FALSE (attach failed)")]
    DllMainFailed,

    #[error("Module Overloading failed: {reason}")]
    ModuleOverloadFailed { reason: String },

    #[error("PE header cloaking failed: {reason}")]
    CloakingFailed { reason: String },

    #[error("VTable activation failed: {reason}")]
    VTableActivationFailed { reason: String },

    #[error("Windows API error (code {code}): {message}")]
    WinApi { code: u32, message: String },
}

// ── Runtime (In-Process DLL) ─────────────────────────────────────────

/// Errors originating from the in-process runtime (`YueEx.dll`).
#[derive(Debug, Clone, Error)]
pub enum RuntimeError {
    /// Failed to initialize the runtime.
    #[error("Initialization failed: {0}")]
    InitializationFailed(String),

    /// Loaded in the wrong process.
    #[error("Host validation failed (expected {expected}, got {actual})")]
    HostValidationFailed { expected: String, actual: String },

    #[error("Invalid host process: expected '{expected}', found '{found}'")]
    InvalidHostProcess { expected: String, found: String },

    #[error("IPC initialization failed: {reason}")]
    IpcInitFailed { reason: String },

    #[error("Luau compilation error: {message}")]
    LuauCompileError { message: String },

    #[error("Luau runtime error: {message}")]
    LuauRuntimeError { message: String },

    #[error("Scheduler hook failed: {0}")]
    SchedulerError(String),

    #[error("Cloaking failed: {reason}")]
    CloakFailed { reason: String },
}

/// Result of executing a Luau script in the target process.
#[derive(Debug, Clone)]
pub struct ExecutionResult {
    /// Whether execution completed without error.
    pub success: bool,
    /// Captured output / return value (if any).
    pub output: String,
    /// Error message (if `success` is false).
    pub error: Option<String>,
    /// Wall-clock execution time in microseconds.
    pub elapsed_us: u64,
}

// ── Process Info ─────────────────────────────────────────────────────

/// Minimal information about a discovered target process.
#[derive(Debug, Clone)]
pub struct ProcessInfo {
    /// Process ID.
    pub pid: u32,
    /// Process name (e.g., "MyApp.exe").
    pub name: String,
    /// Full path to the executable (if retrievable).
    pub exe_path: Option<String>,
}

// ── Telemetry ────────────────────────────────────────────────────────

/// A single diagnostic event emitted during injection or runtime operation.
#[derive(Debug, Clone)]
pub struct DiagnosticEvent {
    /// Monotonic timestamp in microseconds since injection start.
    pub timestamp_us: u64,
    /// Severity level.
    pub level: DiagnosticLevel,
    /// Human-readable message.
    pub message: String,
    /// Optional structured data (key=value pairs).
    pub metadata: Vec<(String, String)>,
}

/// Severity level for diagnostic events.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum DiagnosticLevel {
    Trace,
    Debug,
    Info,
    Warn,
    Error,
}
