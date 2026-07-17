//! # yueex-stealth — Ultimate Usermode Anti-Detection Suite
//!
//! This crate implements advanced Ring 3 stealth techniques to bypass
//! strict anti-cheat systems (e.g., Byfron/Hyperion):
//!
//! - **Indirect Syscalls**: Execute NT syscalls via clean `syscall` opcodes
//!   found inside `ntdll.dll`, with instrumentation callback bypass.
//! - **Stack Spoofing**: Forge call stacks to appear as if API calls
//!   originate from signed system modules.
//! - **Memory Cloaking**: Hide injected memory using VEH + PAGE_GUARD
//!   single-step execution.
//! - **API Hashing**: Resolve APIs by hash at runtime — no plaintext
//!   function names in the binary.
//! - **Thread Pool Hijacking**: Queue work to existing Windows thread
//!   pool workers instead of creating new threads.

pub mod api_hash;
pub mod indirect_syscall;
pub mod memory_cloak;
pub mod stack_spoof;
pub mod string_crypt;
pub mod thread_pool;
