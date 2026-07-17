//! # yueex-pe — Portable Executable Parser
//!
//! A zero-dependency, zero-copy PE32/PE32+ parser built specifically for
//! Manual Mapping. Parses headers, sections, imports, exports, and
//! base relocations from a raw `&[u8]` buffer.
//!
//! ## Design
//! - All parsing is **bounds-checked** — no unchecked indexing.
//! - Structures use manual byte reads (little-endian) rather than transmute,
//!   ensuring no alignment issues on arbitrary buffers.
//! - Supports both PE32 (32-bit) and PE32+ (64-bit).

pub mod exports;
pub mod headers;
pub mod imports;
pub mod relocations;
pub mod sections;

use headers::{NtHeaders, PeFormat};
use thiserror::Error;

/// Errors that can occur during PE parsing.
#[derive(Debug, Error)]
pub enum PeError {
    #[error("Buffer too small: need at least {need} bytes, have {have}")]
    BufferTooSmall { need: usize, have: usize },

    #[error("Invalid DOS signature: expected 0x5A4D ('MZ'), found 0x{found:04X}")]
    InvalidDosSignature { found: u16 },

    #[error("Invalid NT signature: expected 0x00004550 ('PE\\0\\0'), found 0x{found:08X}")]
    InvalidNtSignature { found: u32 },

    #[error("Unsupported PE format magic: 0x{magic:04X} (expected 0x010B for PE32 or 0x020B for PE32+)")]
    UnsupportedMagic { magic: u16 },

    #[error("Offset 0x{offset:08X} is out of bounds (buffer size: {buf_len})")]
    OffsetOutOfBounds { offset: usize, buf_len: usize },

    #[error("Invalid section header at index {index}")]
    InvalidSectionHeader { index: usize },

    #[error("RVA 0x{rva:08X} does not map to any section")]
    RvaNotInSection { rva: u32 },

    #[error("Invalid import descriptor at offset 0x{offset:08X}")]
    InvalidImportDescriptor { offset: usize },

    #[error("Invalid relocation block at offset 0x{offset:08X}")]
    InvalidRelocationBlock { offset: usize },
}

/// A parsed PE image. This is the main entry point for the PE parser.
///
/// Holds a reference to the raw PE buffer and cached header offsets.
#[derive(Debug)]
pub struct PeImage<'a> {
    /// Raw PE file bytes.
    data: &'a [u8],
    /// Offset to the NT headers (from `e_lfanew`).
    #[allow(dead_code)]
    nt_offset: usize,
    /// Parsed NT headers (includes COFF + Optional header).
    nt_headers: NtHeaders,
    /// Offset to the first section header.
    section_table_offset: usize,
}

impl<'a> PeImage<'a> {
    /// Parse a PE image from raw bytes.
    ///
    /// Validates the DOS and NT signatures, parses headers, and locates
    /// the section table.
    pub fn parse(data: &'a [u8]) -> Result<Self, PeError> {
        // ── DOS Header ───────────────────────────────────────────
        if data.len() < 64 {
            return Err(PeError::BufferTooSmall {
                need: 64,
                have: data.len(),
            });
        }

        let dos_sig = read_u16(data, 0);
        if dos_sig != 0x5A4D {
            return Err(PeError::InvalidDosSignature { found: dos_sig });
        }

        let e_lfanew = read_u32(data, 0x3C) as usize;

        // ── NT Headers ───────────────────────────────────────────
        if data.len() < e_lfanew + 4 {
            return Err(PeError::OffsetOutOfBounds {
                offset: e_lfanew,
                buf_len: data.len(),
            });
        }

        let nt_sig = read_u32(data, e_lfanew);
        if nt_sig != 0x0000_4550 {
            return Err(PeError::InvalidNtSignature { found: nt_sig });
        }

        let nt_headers = NtHeaders::parse(data, e_lfanew)?;

        // Section table starts right after the optional header.
        let optional_header_offset = e_lfanew + 4 + 20; // PE sig + COFF header
        let section_table_offset =
            optional_header_offset + nt_headers.coff.size_of_optional_header as usize;

        Ok(Self {
            data,
            nt_offset: e_lfanew,
            nt_headers,
            section_table_offset,
        })
    }

    /// Returns the raw PE buffer.
    pub fn data(&self) -> &'a [u8] {
        self.data
    }

    /// Returns the parsed NT headers.
    pub fn nt_headers(&self) -> &NtHeaders {
        &self.nt_headers
    }

    /// Returns whether this is a PE32+ (64-bit) image.
    pub fn is_64bit(&self) -> bool {
        matches!(self.nt_headers.format, PeFormat::Pe32Plus)
    }

    /// Returns the preferred image base address.
    pub fn image_base(&self) -> u64 {
        self.nt_headers.optional.image_base
    }

    /// Returns the total size of the image when mapped in memory.
    pub fn size_of_image(&self) -> u32 {
        self.nt_headers.optional.size_of_image
    }

    /// Returns the size of all headers (DOS + NT + section table).
    pub fn size_of_headers(&self) -> u32 {
        self.nt_headers.optional.size_of_headers
    }

    /// Returns the entry point RVA (relative to image base).
    pub fn entry_point_rva(&self) -> u32 {
        self.nt_headers.optional.address_of_entry_point
    }

    /// Returns the offset to the section table.
    pub fn section_table_offset(&self) -> usize {
        self.section_table_offset
    }

    /// Returns the number of sections.
    pub fn number_of_sections(&self) -> u16 {
        self.nt_headers.coff.number_of_sections
    }

    /// Parse all section headers.
    pub fn sections(&self) -> Result<Vec<sections::SectionHeader>, PeError> {
        sections::parse_sections(
            self.data,
            self.section_table_offset,
            self.nt_headers.coff.number_of_sections,
        )
    }

    /// Parse all import descriptors.
    pub fn imports(&self) -> Result<Vec<imports::ImportDescriptor>, PeError> {
        let import_dir = &self.nt_headers.optional.data_directories
            [headers::DATA_DIR_IMPORT];

        if import_dir.virtual_address == 0 || import_dir.size == 0 {
            return Ok(Vec::new());
        }

        let sections = self.sections()?;
        imports::parse_imports(
            self.data,
            import_dir.virtual_address,
            &sections,
            self.is_64bit(),
        )
    }

    /// Parse all base relocation blocks.
    pub fn relocations(&self) -> Result<Vec<relocations::RelocationBlock>, PeError> {
        let reloc_dir = &self.nt_headers.optional.data_directories
            [headers::DATA_DIR_BASERELOC];

        if reloc_dir.virtual_address == 0 || reloc_dir.size == 0 {
            return Ok(Vec::new());
        }

        let sections = self.sections()?;
        relocations::parse_relocations(
            self.data,
            reloc_dir.virtual_address,
            reloc_dir.size,
            &sections,
        )
    }

    /// Parse the export directory (if present).
    pub fn exports(&self) -> Result<Option<exports::ExportDirectory>, PeError> {
        let export_dir = &self.nt_headers.optional.data_directories
            [headers::DATA_DIR_EXPORT];

        if export_dir.virtual_address == 0 || export_dir.size == 0 {
            return Ok(None);
        }

        let sections = self.sections()?;
        exports::parse_exports(self.data, export_dir.virtual_address, &sections)
            .map(Some)
    }

    /// Convert an RVA to a file offset using the section table.
    pub fn rva_to_offset(&self, rva: u32) -> Result<usize, PeError> {
        let sections = self.sections()?;
        rva_to_file_offset(rva, &sections)
    }
}

// ── Helper Functions ─────────────────────────────────────────────────

/// Read a `u16` (little-endian) from `data` at `offset`.
#[inline]
pub fn read_u16(data: &[u8], offset: usize) -> u16 {
    u16::from_le_bytes([data[offset], data[offset + 1]])
}

/// Read a `u32` (little-endian) from `data` at `offset`.
#[inline]
pub fn read_u32(data: &[u8], offset: usize) -> u32 {
    u32::from_le_bytes([
        data[offset],
        data[offset + 1],
        data[offset + 2],
        data[offset + 3],
    ])
}

/// Read a `u64` (little-endian) from `data` at `offset`.
#[inline]
pub fn read_u64(data: &[u8], offset: usize) -> u64 {
    u64::from_le_bytes([
        data[offset],
        data[offset + 1],
        data[offset + 2],
        data[offset + 3],
        data[offset + 4],
        data[offset + 5],
        data[offset + 6],
        data[offset + 7],
    ])
}

/// Convert an RVA to a raw file offset using the section table.
pub fn rva_to_file_offset(
    rva: u32,
    sections: &[sections::SectionHeader],
) -> Result<usize, PeError> {
    for section in sections {
        let section_start = section.virtual_address;
        let section_end = section_start + section.virtual_size;
        if rva >= section_start && rva < section_end {
            let delta = rva - section_start;
            return Ok((section.pointer_to_raw_data + delta) as usize);
        }
    }
    Err(PeError::RvaNotInSection { rva })
}

/// Read a null-terminated ASCII string from `data` starting at `offset`.
/// Returns at most `max_len` characters.
pub(crate) fn read_cstring(data: &[u8], offset: usize, max_len: usize) -> String {
    let end = (offset + max_len).min(data.len());
    let slice = &data[offset..end];
    let nul_pos = slice.iter().position(|&b| b == 0).unwrap_or(slice.len());
    String::from_utf8_lossy(&slice[..nul_pos]).into_owned()
}
