//! Core Manual Mapping logic — orchestrates the full injection pipeline.
//!
//! This module ties together all the sub-components to perform a complete
//! Manual Map injection:
//!
//! 1. Parse PE headers from the DLL bytes
//! 2. Choose memory strategy (Module Overloading or direct allocation)
//! 3. Map PE sections into the remote process
//! 4. Apply base relocation fixups
//! 5. Resolve Import Address Table
//! 6. Set correct section memory protections
//! 7. Execute DllMain via Thread Hijacking
//! 8. Erase PE headers (cloaking)

use windows::Win32::Foundation::HANDLE;
use windows::Win32::System::Memory::PAGE_READWRITE;

use yueex_abi::types::{InjectionError, InjectionStage, MapResult};
use yueex_pe::PeImage;

use crate::{cloaking, iat_resolver, memory, module_overload, relocation};

// ── Configuration ────────────────────────────────────────────────────

/// Configuration for the Manual Mapping injection pipeline.
#[derive(Debug, Clone)]
pub struct InjectionConfig {
    /// If true, attempt Module Overloading before falling back to direct alloc.
    pub use_module_overloading: bool,
    /// If true, erase PE headers after successful initialization.
    pub cloak_headers: bool,
    /// If true, activate the DLL via Shadow VTable hook.
    /// If false, skip activation (useful for testing section mapping).
    pub activate_via_vtable: bool,
}

impl Default for InjectionConfig {
    fn default() -> Self {
        Self {
            use_module_overloading: true,
            cloak_headers: true,
            activate_via_vtable: true,
        }
    }
}

/// Callback type for reporting injection progress.
pub type ProgressCallback = Box<dyn Fn(InjectionStage, &str) + Send>;

// ── Public API ───────────────────────────────────────────────────────

/// Perform a complete Manual Map injection of a DLL into a target process.
///
/// # Arguments
/// * `process` — Handle to the target process (must have `PROCESS_ALL_ACCESS`).
/// * `pid` — Process ID of the target.
/// * `dll_bytes` — Raw bytes of the DLL to inject.
/// * `config` — Injection configuration.
/// * `on_progress` — Optional callback for reporting progress.
///
/// # Returns
/// [`MapResult`] on success or failure with detailed stage and error information.
pub fn inject(
    process: HANDLE,
    pid: u32,
    dll_bytes: &[u8],
    config: &InjectionConfig,
    offset_cache_path: &str,
    on_progress: Option<&ProgressCallback>,
) -> MapResult {
    match inject_inner(process, pid, dll_bytes, config, offset_cache_path, on_progress) {
        Ok(result) => result,
        Err((stage, error)) => MapResult::Failed { stage, error },
    }
}

/// Inner injection logic that returns structured errors.
fn inject_inner(
    process: HANDLE,
    pid: u32,
    dll_bytes: &[u8],
    config: &InjectionConfig,
    offset_cache_path: &str,
    on_progress: Option<&ProgressCallback>,
) -> Result<MapResult, (InjectionStage, InjectionError)> {
    let report = |stage: InjectionStage, msg: &str| {
        if let Some(cb) = on_progress {
            cb(stage, msg);
        }
    };

    // ── Stage 1: Parse PE ────────────────────────────────────────
    report(InjectionStage::ParsePe, "Parsing PE headers...");

    let pe = PeImage::parse(dll_bytes).map_err(|e| {
        (
            InjectionStage::ParsePe,
            InjectionError::InvalidPe {
                reason: e.to_string(),
            },
        )
    })?;

    let sections = pe.sections().map_err(|e| {
        (
            InjectionStage::ParsePe,
            InjectionError::InvalidPe {
                reason: format!("failed to parse sections: {e}"),
            },
        )
    })?;

    let image_size = pe.size_of_image();
    let preferred_base = pe.image_base();
    let is_64bit = pe.is_64bit();

    report(
        InjectionStage::ParsePe,
        &format!(
            "PE parsed: {image_size:#X} bytes, {} sections, {}",
            sections.len(),
            if is_64bit { "PE32+" } else { "PE32" }
        ),
    );

    // ── Stage 2: Allocate Remote Memory ──────────────────────────
    report(InjectionStage::AllocateMemory, "Allocating remote memory...");

    let (remote_base, module_overloaded) = if config.use_module_overloading {
        match allocate_via_module_overloading(process, pid, image_size) {
            Ok((base, name)) => {
                report(
                    InjectionStage::AllocateMemory,
                    &format!(
                        "Module Overloading: using '{name}' at 0x{base:016X} (MEM_IMAGE)"
                    ),
                );
                (base, true)
            }
            Err(e) => {
                report(
                    InjectionStage::AllocateMemory,
                    &format!("Module Overloading failed ({e}), falling back to direct alloc"),
                );
                let base = allocate_direct(process, image_size)
                    .map_err(|e| (InjectionStage::AllocateMemory, e))?;
                report(
                    InjectionStage::AllocateMemory,
                    &format!("Direct allocation at 0x{base:016X} (MEM_PRIVATE)"),
                );
                (base, false)
            }
        }
    } else {
        let base = allocate_direct(process, image_size)
            .map_err(|e| (InjectionStage::AllocateMemory, e))?;
        report(
            InjectionStage::AllocateMemory,
            &format!("Direct allocation at 0x{base:016X}"),
        );
        (base, false)
    };

    // ── Stage 3: Map Sections ────────────────────────────────────
    report(InjectionStage::MapSections, "Mapping PE sections...");

    map_sections(process, remote_base, &pe, &sections)
        .map_err(|e| (InjectionStage::MapSections, e))?;

    report(
        InjectionStage::MapSections,
        &format!("Mapped {} sections", sections.len()),
    );

    // ── Stage 4: Fix Relocations ─────────────────────────────────
    report(InjectionStage::FixRelocations, "Fixing base relocations...");

    let reloc_blocks = pe.relocations().map_err(|e| {
        (
            InjectionStage::FixRelocations,
            InjectionError::InvalidPe {
                reason: format!("failed to parse relocations: {e}"),
            },
        )
    })?;

    let num_fixups =
        relocation::apply_relocations(process, remote_base, preferred_base, &reloc_blocks)
            .map_err(|e| (InjectionStage::FixRelocations, e))?;

    report(
        InjectionStage::FixRelocations,
        &format!("Applied {num_fixups} relocation fixups (delta=0x{:X})",
            remote_base.wrapping_sub(preferred_base)),
    );

    // ── Stage 5: Resolve IAT ─────────────────────────────────────
    report(InjectionStage::ResolveImports, "Resolving imports...");

    let imports = pe.imports().map_err(|e| {
        (
            InjectionStage::ResolveImports,
            InjectionError::InvalidPe {
                reason: format!("failed to parse imports: {e}"),
            },
        )
    })?;

    let num_imports =
        iat_resolver::resolve_imports(process, remote_base, &imports, is_64bit, pid)
            .map_err(|e| (InjectionStage::ResolveImports, e))?;

    report(
        InjectionStage::ResolveImports,
        &format!("Resolved {num_imports} imports from {} DLLs", imports.len()),
    );

    // ── Stage 6: Set Section Permissions ─────────────────────────
    report(InjectionStage::SetPermissions, "Setting section protections...");

    set_section_protections(process, remote_base, &sections)
        .map_err(|e| (InjectionStage::SetPermissions, e))?;

    report(
        InjectionStage::SetPermissions,
        "Section protections applied",
    );

    // ── Stage 7: VTable Activation ───────────────
    if config.activate_via_vtable {
        report(
            InjectionStage::VTableActivation,
            "Activating DLL via Shadow VTable hook...",
        );

        crate::vtable_activation::activate_via_vtable(
            process,
            pid,
            remote_base,
            dll_bytes,
            offset_cache_path,
        )
        .map_err(|e| (InjectionStage::VTableActivation, e))?;

        report(
            InjectionStage::VTableActivation,
            "VTable hook activated successfully",
        );
    }

    // ── Stage 8: Cloak PE Headers ────────────────────────────────
    if config.cloak_headers {
        report(InjectionStage::CloakHeaders, "Erasing PE headers...");

        cloaking::erase_remote_pe_headers(process, remote_base, pe.size_of_headers())
            .map_err(|e| (InjectionStage::CloakHeaders, e))?;

        report(
            InjectionStage::CloakHeaders,
            "PE headers erased — zero-footprint achieved",
        );
    }

    Ok(MapResult::Success {
        remote_base,
        image_size: image_size as u64,
        module_overloaded,
    })
}

// ── Internal Helpers ─────────────────────────────────────────────────

/// Attempt to allocate memory via Module Overloading.
///
/// Returns `(base_address, sacrificial_module_name)`.
fn allocate_via_module_overloading(
    process: HANDLE,
    pid: u32,
    required_size: u32,
) -> Result<(u64, String), InjectionError> {
    let module = module_overload::find_sacrificial_module(pid, required_size)?;
    let name = module.name.clone();
    let base = module.base_address;

    module_overload::prepare_module_for_overload(process, &module)?;

    Ok((base, name))
}

/// Allocate fresh memory via `VirtualAllocEx` (direct allocation).
fn allocate_direct(process: HANDLE, image_size: u32) -> Result<u64, InjectionError> {
    memory::alloc_remote(process, image_size as usize, PAGE_READWRITE)
}

/// Map PE sections from the DLL bytes into the remote process.
fn map_sections(
    process: HANDLE,
    remote_base: u64,
    pe: &PeImage<'_>,
    sections: &[yueex_pe::sections::SectionHeader],
) -> Result<(), InjectionError> {
    // First, write the PE headers (DOS + NT + section table).
    let header_size = pe.size_of_headers() as usize;
    let header_data = &pe.data()[..header_size.min(pe.data().len())];
    memory::write_remote(process, remote_base, header_data)?;

    // Map each section.
    for section in sections {
        if section.size_of_raw_data == 0 {
            continue; // Skip empty sections (e.g., .bss).
        }

        let raw_offset = section.pointer_to_raw_data as usize;
        let raw_size = section.size_of_raw_data as usize;
        let target_addr = remote_base + section.virtual_address as u64;

        // Bounds check.
        if raw_offset + raw_size > pe.data().len() {
            return Err(InjectionError::WriteFailed {
                rva: section.virtual_address as u64,
                reason: format!(
                    "section '{}' raw data (offset=0x{raw_offset:X}, size=0x{raw_size:X}) \
                     exceeds DLL buffer",
                    section.name_str()
                ),
            });
        }

        let section_data = &pe.data()[raw_offset..raw_offset + raw_size];
        memory::write_remote(process, target_addr, section_data).map_err(|e| {
            InjectionError::WriteFailed {
                rva: section.virtual_address as u64,
                reason: format!("section '{}': {e}", section.name_str()),
            }
        })?;
    }

    Ok(())
}

/// Set the correct memory protection for each section.
fn set_section_protections(
    process: HANDLE,
    remote_base: u64,
    sections: &[yueex_pe::sections::SectionHeader],
) -> Result<(), InjectionError> {
    use windows::Win32::System::Memory::PAGE_PROTECTION_FLAGS;

    for section in sections {
        let section_addr = remote_base + section.virtual_address as u64;
        let section_size = section.effective_size() as usize;
        let protection = PAGE_PROTECTION_FLAGS(section.memory_protection());

        memory::protect_remote(process, section_addr, section_size, protection).map_err(
            |_| InjectionError::ProtectFailed {
                section: section.name_str(),
                reason: format!("VirtualProtectEx(prot=0x{:X})", protection.0),
            },
        )?;
    }

    Ok(())
}

/// Find an exported function's RVA by name from the local DLL bytes.
///
/// This searches the PE's export table for a function named `export_name`
/// and returns its RVA (relative to image base).  Used to locate
/// `yueex_deferred_init` so the shellcode can call it after DllMain.
fn find_export_rva_by_name(
    _dll_bytes: &[u8],
    pe: &PeImage<'_>,
    export_name: &str,
) -> Result<u32, InjectionError> {
    let export_dir = pe.exports().map_err(|e| InjectionError::InvalidPe {
        reason: format!("failed to parse exports: {e}"),
    })?;

    let export_dir = export_dir.ok_or_else(|| InjectionError::InvalidPe {
        reason: "DLL has no export directory".to_string(),
    })?;

    for export in &export_dir.exports {
        if export.name == export_name {
            return Ok(export.function_rva);
        }
    }

    Err(InjectionError::ImportResolveFailed {
        dll_name: "yueex-dll".to_string(),
        func_name: export_name.to_string(),
        reason: "export not found in DLL — ensure the function is #[no_mangle] pub extern \"system\"".to_string(),
    })
}


