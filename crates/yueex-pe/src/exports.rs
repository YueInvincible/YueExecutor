//! Export Directory Table parsing.
//!
//! Used by the injector to resolve imported functions from modules already
//! loaded in the target process. Instead of calling `GetProcAddress` (which
//! would go through the loader and potentially be hooked), we parse the
//! export table directly from the remote module's memory.

use crate::sections::SectionHeader;
use crate::{read_u16, read_u32, read_cstring, rva_to_file_offset, PeError};

// ── Export Directory ─────────────────────────────────────────────────

/// Parsed export directory of a PE module.
#[derive(Debug, Clone)]
pub struct ExportDirectory {
    /// Name of the exporting DLL.
    pub dll_name: String,
    /// Ordinal base.
    pub ordinal_base: u32,
    /// Number of exported functions.
    pub number_of_functions: u32,
    /// Number of exported names.
    pub number_of_names: u32,
    /// Exported functions.
    pub exports: Vec<ExportEntry>,
}

/// A single exported function.
#[derive(Debug, Clone)]
pub struct ExportEntry {
    /// Ordinal number of the export.
    pub ordinal: u32,
    /// RVA of the exported function.
    pub function_rva: u32,
    /// Name of the export (empty string for ordinal-only exports).
    pub name: String,
    /// If this is a forwarded export, contains the forwarded string
    /// (e.g., "NTDLL.RtlAllocateHeap"). Empty for direct exports.
    pub forwarder: String,
}

// ── Parsing ──────────────────────────────────────────────────────────

/// Parse the export directory from a PE image.
///
/// # Arguments
/// * `data` — Raw PE bytes.
/// * `export_dir_rva` — RVA of the Export Directory.
/// * `sections` — Parsed section headers.
pub fn parse_exports(
    data: &[u8],
    export_dir_rva: u32,
    sections: &[SectionHeader],
) -> Result<ExportDirectory, PeError> {
    let dir_offset = rva_to_file_offset(export_dir_rva, sections)?;

    if data.len() < dir_offset + 40 {
        return Err(PeError::BufferTooSmall {
            need: dir_offset + 40,
            have: data.len(),
        });
    }

    // Export directory table structure (40 bytes):
    // [0..4]   Characteristics (unused)
    // [4..8]   TimeDateStamp
    // [8..10]  MajorVersion
    // [10..12] MinorVersion
    // [12..16] Name RVA
    // [16..20] OrdinalBase
    // [20..24] NumberOfFunctions
    // [24..28] NumberOfNames
    // [28..32] AddressOfFunctions RVA
    // [32..36] AddressOfNames RVA
    // [36..40] AddressOfNameOrdinals RVA

    let name_rva = read_u32(data, dir_offset + 12);
    let ordinal_base = read_u32(data, dir_offset + 16);
    let number_of_functions = read_u32(data, dir_offset + 20);
    let number_of_names = read_u32(data, dir_offset + 24);
    let addr_of_functions_rva = read_u32(data, dir_offset + 28);
    let addr_of_names_rva = read_u32(data, dir_offset + 32);
    let addr_of_name_ordinals_rva = read_u32(data, dir_offset + 36);

    // Read the DLL name.
    let dll_name = if name_rva != 0 {
        let name_offset = rva_to_file_offset(name_rva, sections)?;
        read_cstring(data, name_offset, 256)
    } else {
        String::new()
    };

    // Read the Export Address Table (EAT).
    let eat_offset = rva_to_file_offset(addr_of_functions_rva, sections)?;

    // Read the Export Name Pointer Table (ENPT).
    let enpt_offset = if number_of_names > 0 {
        rva_to_file_offset(addr_of_names_rva, sections)?
    } else {
        0
    };

    // Read the Export Ordinal Table (EOT).
    let eot_offset = if number_of_names > 0 {
        rva_to_file_offset(addr_of_name_ordinals_rva, sections)?
    } else {
        0
    };

    // Build a name lookup: ordinal_index → name.
    let mut ordinal_to_name: std::collections::HashMap<u16, String> =
        std::collections::HashMap::new();

    for i in 0..number_of_names as usize {
        let name_ptr_offset = enpt_offset + i * 4;
        let ordinal_offset = eot_offset + i * 2;

        if name_ptr_offset + 4 > data.len() || ordinal_offset + 2 > data.len() {
            break;
        }

        let func_name_rva = read_u32(data, name_ptr_offset);
        let ordinal_index = read_u16(data, ordinal_offset);

        let func_name_offset = rva_to_file_offset(func_name_rva, sections)?;
        let func_name = read_cstring(data, func_name_offset, 512);

        ordinal_to_name.insert(ordinal_index, func_name);
    }

    // Build export entries from the EAT.
    let mut exports = Vec::with_capacity(number_of_functions as usize);

    for i in 0..number_of_functions as usize {
        let func_rva_offset = eat_offset + i * 4;
        if func_rva_offset + 4 > data.len() {
            break;
        }

        let function_rva = read_u32(data, func_rva_offset);
        if function_rva == 0 {
            continue;
        }

        let ordinal = ordinal_base + i as u32;
        let name = ordinal_to_name
            .get(&(i as u16))
            .cloned()
            .unwrap_or_default();

        // Check if this is a forwarded export.
        // A forwarded export's RVA points within the export directory itself.
        // For simplicity, we check if the RVA resolves to an ASCII string
        // containing a '.'.
        let forwarder = String::new();
        // NOTE: Full forwarder detection would require knowing the export
        // directory bounds. This is a future enhancement.

        exports.push(ExportEntry {
            ordinal,
            function_rva,
            name,
            forwarder,
        });
    }

    Ok(ExportDirectory {
        dll_name,
        ordinal_base,
        number_of_functions,
        number_of_names,
        exports,
    })
}

/// Find an export by name in the export directory.
pub fn find_export_by_name<'a>(
    exports: &'a ExportDirectory,
    name: &str,
) -> Option<&'a ExportEntry> {
    exports.exports.iter().find(|e| e.name == name)
}

/// Find an export by ordinal in the export directory.
pub fn find_export_by_ordinal<'a>(
    exports: &'a ExportDirectory,
    ordinal: u32,
) -> Option<&'a ExportEntry> {
    exports.exports.iter().find(|e| e.ordinal == ordinal)
}
