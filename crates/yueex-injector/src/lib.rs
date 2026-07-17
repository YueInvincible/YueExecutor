//! # yueex-injector — Manual Mapping Injection Engine
//!
//! This crate implements the core injection pipeline for YueEx:
//!
//! 1. **Process enumeration** — find and open the target MyApp process
//! 2. **Memory allocation** — direct (`MEM_PRIVATE`) or Module Overloading (`MEM_IMAGE`)
//! 3. **PE section mapping** — write DLL sections into remote memory
//! 4. **Base relocation** — fix absolute addresses for the new base
//! 5. **IAT resolution** — manually walk remote export tables (no `GetProcAddress`)
//! 6. **Memory protection** — set correct `PAGE_*` flags per section
//! 7. **DllMain execution** — Thread Execution Hijacking (no `CreateRemoteThread`)
//! 8. **PE header cloaking** — zero-fill headers to prevent identification
//!
//! ## Usage
//! ```rust,no_run
//! use yueex_injector::{manual_map, process};
//!
//! // Find the target process.
//! let targets = process::find_processes_by_name("MyApp.exe").unwrap();
//! let target = &targets[0];
//!
//! // Open a handle.
//! let handle = process::open_process_handle(target.pid).unwrap();
//!
//! // Read the DLL bytes.
//! let dll_bytes = std::fs::read("YueEx.dll").unwrap();
//!
//! // Inject.
//! let config = manual_map::InjectionConfig::default();
//! let result = manual_map::inject(
//!     handle.raw(), target.pid, &dll_bytes, &config, None,
//! );
//! ```

pub mod cloaking;
pub mod iat_resolver;
pub mod manual_map;
pub mod memory;
pub mod module_overload;
pub mod process;
pub mod relocation;
pub mod thread_hijack;
pub mod vtable_activation;

// Re-export key types for convenience.
pub use manual_map::{inject, InjectionConfig};
pub use process::{find_processes_by_name, open_process_handle, OwnedHandle};
