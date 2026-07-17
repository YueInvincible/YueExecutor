//! Import Directory Table parsing for IAT resolution during Manual Mapping.

use crate::sections::SectionHeader;
use crate::{read_u16, read_u32, read_u64, read_cstring, rva_to_file_offset, PeError};

// ── Import Descriptor ────────────────────────────────────────────────

/// A parsed import descriptor — represents one imported DLL.
#[derive(Debug, Clone)]
pub struct ImportDescriptor {
    /// Name of the imported DLL (e.g., "kernel32.dll").
    pub dll_name: String,
    /// RVA of the Import Lookup Table (Original First Thunk).
    pub original_first_thunk_rva: u32,
    /// RVA of the Import Address Table (First Thunk) — this is what we patch.
    pub first_thunk_rva: u32,
    /// Individual imported functions.
    pub entries: Vec<ImportEntry>,
}

/// A single imported function.
#[derive(Debug, Clone)]
pub struct ImportEntry {
    /// If true, this import is by ordinal rather than by name.
    pub is_ordinal: bool,
    /// Ordinal value (meaningful only when `is_ordinal` is true).
    pub ordinal: u16,
    /// Import hint (loader hint for faster lookup).
    pub hint: u16,
    /// Function name (empty string for ordinal-only imports).
    pub name: String,
    /// Offset of this thunk entry in the IAT (relative to first_thunk_rva),
    /// measured in thunk-entry units (index * thunk_size).
    pub thunk_index: usize,
}

// ── Parsing ──────────────────────────────────────────────────────────

/// Size of a raw import descriptor (20 bytes).
const IMPORT_DESCRIPTOR_SIZE: usize = 20;

/// Ordinal flag for 64-bit PE (bit 63).
const IMAGE_ORDINAL_FLAG64: u64 = 0x8000_0000_0000_0000;

/// Ordinal flag for 32-bit PE (bit 31).
const IMAGE_ORDINAL_FLAG32: u32 = 0x8000_0000;

/// Parse all import descriptors from the Import Directory Table.
///
/// # Arguments
/// * `data` — Raw PE file bytes.
/// * `import_dir_rva` — RVA of the Import Directory (from data directory).
/// * `sections` — Parsed section headers (for RVA → file offset conversion).
/// * `is_64bit` — Whether this is a PE32+ image.
pub fn parse_imports(
    data: &[u8],
    import_dir_rva: u32,
    sections: &[SectionHeader],
    is_64bit: bool,
) -> Result<Vec<ImportDescriptor>, PeError> {
    let mut descriptors = Vec::new();
    let dir_offset = rva_to_file_offset(import_dir_rva, sections)?;

    let mut i = 0;
    loop {
        let desc_offset = dir_offset + i * IMPORT_DESCRIPTOR_SIZE;

        // Check if we have enough data for this descriptor.
        if data.len() < desc_offset + IMPORT_DESCRIPTOR_SIZE {
            break;
        }

        let original_first_thunk_rva = read_u32(data, desc_offset);
        let _time_date_stamp = read_u32(data, desc_offset + 4);
        let _forwarder_chain = read_u32(data, desc_offset + 8);
        let name_rva = read_u32(data, desc_offset + 12);
        let first_thunk_rva = read_u32(data, desc_offset + 16);

        // All-zero descriptor marks the end of the import table.
        if original_first_thunk_rva == 0 && name_rva == 0 && first_thunk_rva == 0 {
            break;
        }

        // Read DLL name.
        let name_offset = rva_to_file_offset(name_rva, sections)?;
        let dll_name = read_cstring(data, name_offset, 256);

        // Parse the Import Lookup Table (ILT / Original First Thunk).
        // If ILT RVA is zero, fall back to the IAT (First Thunk).
        let lookup_rva = if original_first_thunk_rva != 0 {
            original_first_thunk_rva
        } else {
            first_thunk_rva
        };

        let entries = parse_import_entries(data, lookup_rva, sections, is_64bit)?;

        descriptors.push(ImportDescriptor {
            dll_name,
            original_first_thunk_rva,
            first_thunk_rva,
            entries,
        });

        i += 1;
    }

    Ok(descriptors)
}

/// Parse individual import entries (thunks) from the ILT/IAT.
fn parse_import_entries(
    data: &[u8],
    lookup_rva: u32,
    sections: &[SectionHeader],
    is_64bit: bool,
) -> Result<Vec<ImportEntry>, PeError> {
    let thunk_size = if is_64bit { 8usize } else { 4usize };
    let lookup_offset = rva_to_file_offset(lookup_rva, sections)?;

    let mut entries = Vec::new();
    let mut idx = 0;

    loop {
        let entry_offset = lookup_offset + idx * thunk_size;

        if data.len() < entry_offset + thunk_size {
            break;
        }

        if is_64bit {
            let thunk_value = read_u64(data, entry_offset);

            // Zero thunk marks the end.
            if thunk_value == 0 {
                break;
            }

            if thunk_value & IMAGE_ORDINAL_FLAG64 != 0 {
                // Import by ordinal.
                entries.push(ImportEntry {
                    is_ordinal: true,
                    ordinal: (thunk_value & 0xFFFF) as u16,
                    hint: 0,
                    name: String::new(),
                    thunk_index: idx,
                });
            } else {
                // Import by name — thunk_value is RVA to Hint/Name entry.
                let hint_name_rva = thunk_value as u32;
                let hint_name_offset = rva_to_file_offset(hint_name_rva, sections)?;

                if data.len() < hint_name_offset + 2 {
                    break;
                }

                let hint = read_u16(data, hint_name_offset);
                let name = read_cstring(data, hint_name_offset + 2, 256);

                entries.push(ImportEntry {
                    is_ordinal: false,
                    ordinal: 0,
                    hint,
                    name,
                    thunk_index: idx,
                });
            }
        } else {
            let thunk_value = read_u32(data, entry_offset);

            if thunk_value == 0 {
                break;
            }

            if thunk_value & IMAGE_ORDINAL_FLAG32 != 0 {
                entries.push(ImportEntry {
                    is_ordinal: true,
                    ordinal: (thunk_value & 0xFFFF) as u16,
                    hint: 0,
                    name: String::new(),
                    thunk_index: idx,
                });
            } else {
                let hint_name_offset = rva_to_file_offset(thunk_value, sections)?;

                if data.len() < hint_name_offset + 2 {
                    break;
                }

                let hint = read_u16(data, hint_name_offset);
                let name = read_cstring(data, hint_name_offset + 2, 256);

                entries.push(ImportEntry {
                    is_ordinal: false,
                    ordinal: 0,
                    hint,
                    name,
                    thunk_index: idx,
                });
            }
        }

        idx += 1;
    }

    Ok(entries)
}
