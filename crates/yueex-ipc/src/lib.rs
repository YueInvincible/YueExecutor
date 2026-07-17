//! # yueex-ipc — Shared Memory + Named Event IPC
//!
//! Cross-process communication channel between YueEx.exe (engine) and
//! YueEx.dll (in-process runtime).
//!
//! **Status: Phase 4 — Stub. Full implementation pending.**

pub mod channel;
pub mod event;
pub mod shared_mem;
