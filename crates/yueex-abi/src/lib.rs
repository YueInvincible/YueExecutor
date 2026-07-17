//! YueEx ABI — Shared types, configuration, and IPC protocol definitions.
//!
//! This crate is the single source of truth for all cross-boundary contracts
//! between `yueex-engine` (out-of-process) and `yueex-dll` (in-process runtime).

pub mod config;
pub mod ipc_protocol;
pub mod types;
