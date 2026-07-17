//! Module Overloading — overwrite a benign system DLL to get `MEM_IMAGE` status.
//!
//! Instead of allocating fresh `MEM_PRIVATE` memory (which is easily detected
//! by memory scanners), this module finds an already-loaded, non-critical DLL
//! in the target process and overwrites its sections with our payload.
//! The memory region retains its original `MEM_IMAGE` type, making it appear
//! as a legitimate module to the MyApp verifier.

use windows::Win32::Foundation::HANDLE;
use windows::Win32::System::Memory::PAGE_READWRITE;

use yueex_abi::types::InjectionError;

use crate::memory;
use crate::process::{enumerate_remote_modules, RemoteModuleInfo};

// ── Critical Module List ─────────────────────────────────────────────

/// DLLs that must NEVER be overloaded — overwriting these will crash the process.
const CRITICAL_MODULES: &[&str] = &[
    "ntdll.dll",
    "kernel32.dll",
    "kernelbase.dll",
    "user32.dll",
    "gdi32.dll",
    "advapi32.dll",
    "msvcrt.dll",
    "ucrtbase.dll",
    "combase.dll",
    "rpcrt4.dll",
    "sechost.dll",
    "bcryptprimitives.dll",
    "win32u.dll",
    "gdi32full.dll",
    "msvcp_win.dll",
    "shell32.dll",
    "ole32.dll",
    "oleaut32.dll",
    "ws2_32.dll",
    "nsi.dll",
    "imm32.dll",
];

/// Preferred sacrificial DLLs — typically loaded but rarely used after init.
const PREFERRED_SACRIFICIAL: &[&str] = &[
    "amsi.dll",
    "clbcatq.dll",
    "propsys.dll",
    "profapi.dll",
    "dpapi.dll",
    "cryptsp.dll",
    "edputil.dll",
    "urlmon.dll",
    "iertutil.dll",
    "srvcli.dll",
    "netutils.dll",
    "wldp.dll",
];

// ── Public API ───────────────────────────────────────────────────────

/// Result of a Module Overloading operation.
#[derive(Debug, Clone)]
pub struct OverloadResult {
    /// Base address of the sacrificial module (now containing our payload).
    pub base_address: u64,
    /// Image size of the sacrificial module.
    pub image_size: u32,
    /// Name of the sacrificial module that was overwritten.
    pub sacrificial_module_name: String,
}

/// Find a suitable sacrificial module and prepare it for overloading.
///
/// Returns the module info and base address to use for mapping.
///
/// # Arguments
/// * `pid` — Target process ID.
/// * `required_size` — Minimum image size required (our DLL's `SizeOfImage`).
pub fn find_sacrificial_module(
    pid: u32,
    required_size: u32,
) -> Result<RemoteModuleInfo, InjectionError> {
    let modules = enumerate_remote_modules(pid)?;

    // First pass: look for preferred sacrificial modules with enough size.
    for pref_name in PREFERRED_SACRIFICIAL {
        if let Some(module) = modules.iter().find(|m| {
            m.name.eq_ignore_ascii_case(pref_name) && m.image_size >= required_size
        }) {
            return Ok(module.clone());
        }
    }

    // Second pass: any non-critical module large enough.
    let mut candidates: Vec<&RemoteModuleInfo> = modules
        .iter()
        .filter(|m| {
            let is_critical = CRITICAL_MODULES
                .iter()
                .any(|c| m.name.eq_ignore_ascii_case(c));
            !is_critical && m.image_size >= required_size
        })
        .collect();

    // Sort by image_size ascending — prefer the smallest module that fits.
    candidates.sort_by_key(|m| m.image_size);

    candidates
        .first()
        .map(|m| (*m).clone())
        .ok_or_else(|| InjectionError::ModuleOverloadFailed {
            reason: format!(
                "no suitable sacrificial module found (need >= 0x{required_size:X} bytes, \
                 checked {} modules)",
                modules.len()
            ),
        })
}

/// Prepare a sacrificial module for overloading.
///
/// Changes section protections to `PAGE_READWRITE` and zeroes them
/// **section-by-section** rather than modifying the entire module region
/// in one call.  This reduces the chance of triggering anti-cheat hooks
/// on `VirtualProtectEx` that look for suspiciously large protection changes.
///
/// The PE headers region is handled separately (first `SizeOfHeaders` bytes).
pub fn prepare_module_for_overload(
    process: HANDLE,
    module: &RemoteModuleInfo,
) -> Result<(), InjectionError> {
    // We don't have the remote PE parsed, so we use a coarse approach:
    // change the first page (headers) + the rest in reasonably sized chunks.
    // This is less suspicious than a single VirtualProtectEx for the entire image.

    let chunk_size: usize = 64 * 1024; // 64 KiB chunks
    let total_size = module.image_size as usize;
    let mut offset: usize = 0;

    while offset < total_size {
        let current_chunk = chunk_size.min(total_size - offset);
        let addr = module.base_address + offset as u64;

        // Change protection to writable.
        memory::protect_remote(process, addr, current_chunk, PAGE_READWRITE)
            .map_err(|e| InjectionError::ModuleOverloadFailed {
                reason: format!(
                    "failed to make {} writable at offset 0x{offset:X}: {e}",
                    module.name
                ),
            })?;

        // Zero-fill this chunk.
        let zeroes = vec![0u8; current_chunk];
        memory::write_remote(process, addr, &zeroes).map_err(|e| {
            InjectionError::ModuleOverloadFailed {
                reason: format!(
                    "failed to zero-fill {} at offset 0x{offset:X}: {e}",
                    module.name
                ),
            }
        })?;

        offset += current_chunk;
    }

    Ok(())
}

