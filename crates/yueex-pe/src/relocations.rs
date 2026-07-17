//! Base Relocation Table parsing for fixup during Manual Mapping.
//!
//! When the PE image is mapped at a different base address than its
//! preferred `ImageBase`, every absolute address in the code/data must
//! be adjusted by `delta = actual_base - preferred_base`.

use crate::sections::SectionHeader;
use crate::{read_u16, read_u32, rva_to_file_offset, PeError};

// ── Relocation Types ─────────────────────────────────────────────────

/// No relocation; used for padding.
pub const IMAGE_REL_BASED_ABSOLUTE: u8 = 0;
/// Add the high 16 bits of the delta.
pub const IMAGE_REL_BASED_HIGH: u8 = 1;
/// Add the low 16 bits of the delta.
pub const IMAGE_REL_BASED_LOW: u8 = 2;
/// Add the full 32-bit delta.
pub const IMAGE_REL_BASED_HIGHLOW: u8 = 3;
/// Add the full 64-bit delta (PE32+ only).
pub const IMAGE_REL_BASED_DIR64: u8 = 10;

// ── Relocation Block ─────────────────────────────────────────────────

/// A base relocation block. Each block covers a 4 KiB page and contains
/// a list of entries that need fixup within that page.
#[derive(Debug, Clone)]
pub struct RelocationBlock {
    /// RVA of the page this block applies to.
    pub page_rva: u32,
    /// Total size of this block in bytes (including the header).
    pub block_size: u32,
    /// Individual relocation entries within this page.
    pub entries: Vec<RelocationEntry>,
}

/// A single relocation entry within a block.
#[derive(Debug, Clone, Copy)]
pub struct RelocationEntry {
    /// Relocation type (upper 4 bits of the raw entry).
    pub reloc_type: u8,
    /// Offset within the page (lower 12 bits of the raw entry).
    pub offset: u16,
}

impl RelocationEntry {
    /// The full RVA of this relocation target (page_rva + offset).
    pub fn rva(&self, page_rva: u32) -> u32 {
        page_rva + self.offset as u32
    }

    /// Returns true if this is a padding entry (type ABSOLUTE / 0).
    pub fn is_padding(&self) -> bool {
        self.reloc_type == IMAGE_REL_BASED_ABSOLUTE
    }
}

// ── Parsing ──────────────────────────────────────────────────────────

/// Parse all base relocation blocks from the relocation directory.
///
/// # Arguments
/// * `data` — Raw PE file bytes.
/// * `reloc_dir_rva` — RVA of the Base Relocation directory.
/// * `reloc_dir_size` — Total size of the relocation directory.
/// * `sections` — Parsed section headers (for RVA → offset conversion).
pub fn parse_relocations(
    data: &[u8],
    reloc_dir_rva: u32,
    reloc_dir_size: u32,
    sections: &[SectionHeader],
) -> Result<Vec<RelocationBlock>, PeError> {
    let dir_offset = rva_to_file_offset(reloc_dir_rva, sections)?;
    let dir_end = dir_offset + reloc_dir_size as usize;

    let mut blocks = Vec::new();
    let mut pos = dir_offset;

    while pos + 8 <= dir_end && pos + 8 <= data.len() {
        let page_rva = read_u32(data, pos);
        let block_size = read_u32(data, pos + 4);

        // A block_size of 0 or less than 8 means we're done.
        if block_size < 8 {
            break;
        }

        // Number of 2-byte entries in this block (excluding the 8-byte header).
        let entry_count = (block_size as usize - 8) / 2;
        let mut entries = Vec::with_capacity(entry_count);

        for j in 0..entry_count {
            let entry_offset = pos + 8 + j * 2;
            if entry_offset + 2 > data.len() {
                return Err(PeError::InvalidRelocationBlock { offset: pos });
            }

            let raw = read_u16(data, entry_offset);
            let reloc_type = (raw >> 12) as u8;
            let offset = raw & 0x0FFF;

            entries.push(RelocationEntry { reloc_type, offset });
        }

        blocks.push(RelocationBlock {
            page_rva,
            block_size,
            entries,
        });

        pos += block_size as usize;
    }

    Ok(blocks)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn relocation_entry_rva() {
        let entry = RelocationEntry {
            reloc_type: IMAGE_REL_BASED_DIR64,
            offset: 0x100,
        };
        assert_eq!(entry.rva(0x5000), 0x5100);
        assert!(!entry.is_padding());
    }

    #[test]
    fn padding_entry() {
        let entry = RelocationEntry {
            reloc_type: IMAGE_REL_BASED_ABSOLUTE,
            offset: 0,
        };
        assert!(entry.is_padding());
    }
}
