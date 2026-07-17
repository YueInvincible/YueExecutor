//! PE section header parsing and memory protection mapping.

use crate::{read_u16, read_u32, PeError};

// ── Section Characteristics Flags ────────────────────────────────────

/// Section contains executable code.
pub const IMAGE_SCN_CNT_CODE: u32 = 0x0000_0020;
/// Section contains initialized data.
pub const IMAGE_SCN_CNT_INITIALIZED_DATA: u32 = 0x0000_0040;
/// Section contains uninitialized data.
pub const IMAGE_SCN_CNT_UNINITIALIZED_DATA: u32 = 0x0000_0080;
/// Section can be discarded as needed.
pub const IMAGE_SCN_MEM_DISCARDABLE: u32 = 0x0200_0000;
/// Section is not cacheable.
pub const IMAGE_SCN_MEM_NOT_CACHED: u32 = 0x0400_0000;
/// Section is not pageable.
pub const IMAGE_SCN_MEM_NOT_PAGED: u32 = 0x0800_0000;
/// Section can be shared in memory.
pub const IMAGE_SCN_MEM_SHARED: u32 = 0x1000_0000;
/// Section can be executed as code.
pub const IMAGE_SCN_MEM_EXECUTE: u32 = 0x2000_0000;
/// Section can be read.
pub const IMAGE_SCN_MEM_READ: u32 = 0x4000_0000;
/// Section can be written to.
pub const IMAGE_SCN_MEM_WRITE: u32 = 0x8000_0000;

// ── Windows PAGE_* Constants ─────────────────────────────────────────
// These match the Windows SDK values for VirtualProtect.

pub const PAGE_NOACCESS: u32 = 0x01;
pub const PAGE_READONLY: u32 = 0x02;
pub const PAGE_READWRITE: u32 = 0x04;
pub const PAGE_WRITECOPY: u32 = 0x08;
pub const PAGE_EXECUTE: u32 = 0x10;
pub const PAGE_EXECUTE_READ: u32 = 0x20;
pub const PAGE_EXECUTE_READWRITE: u32 = 0x40;
pub const PAGE_EXECUTE_WRITECOPY: u32 = 0x80;

// ── Section Header ───────────────────────────────────────────────────

/// Size of a single section header entry (40 bytes).
pub const SECTION_HEADER_SIZE: usize = 40;

/// A parsed PE section header.
#[derive(Debug, Clone)]
pub struct SectionHeader {
    /// Section name (up to 8 bytes, null-padded).
    pub name: [u8; 8],
    /// Virtual size of the section when loaded in memory.
    pub virtual_size: u32,
    /// RVA where this section should be loaded.
    pub virtual_address: u32,
    /// Size of the section's raw data on disk.
    pub size_of_raw_data: u32,
    /// File offset to the section's raw data.
    pub pointer_to_raw_data: u32,
    /// File offset to relocations (usually 0).
    pub pointer_to_relocations: u32,
    /// File offset to line numbers (usually 0).
    pub pointer_to_linenumbers: u32,
    /// Number of relocation entries.
    pub number_of_relocations: u16,
    /// Number of line-number entries.
    pub number_of_linenumbers: u16,
    /// Section characteristics flags.
    pub characteristics: u32,
}

impl SectionHeader {
    /// Returns the section name as a UTF-8 string (trimmed of null bytes).
    pub fn name_str(&self) -> String {
        let nul_pos = self.name.iter().position(|&b| b == 0).unwrap_or(8);
        String::from_utf8_lossy(&self.name[..nul_pos]).into_owned()
    }

    /// Returns the effective size of the section in memory.
    ///
    /// Uses `virtual_size` if nonzero, otherwise `size_of_raw_data`.
    pub fn effective_size(&self) -> u32 {
        if self.virtual_size > 0 {
            self.virtual_size
        } else {
            self.size_of_raw_data
        }
    }

    /// Returns `true` if this section contains executable code.
    pub fn is_executable(&self) -> bool {
        self.characteristics & IMAGE_SCN_MEM_EXECUTE != 0
    }

    /// Returns `true` if this section is writable.
    pub fn is_writable(&self) -> bool {
        self.characteristics & IMAGE_SCN_MEM_WRITE != 0
    }

    /// Returns `true` if this section is readable.
    pub fn is_readable(&self) -> bool {
        self.characteristics & IMAGE_SCN_MEM_READ != 0
    }

    /// Returns `true` if this section can be discarded after loading.
    pub fn is_discardable(&self) -> bool {
        self.characteristics & IMAGE_SCN_MEM_DISCARDABLE != 0
    }

    /// Map section characteristics to a Windows `PAGE_*` memory protection constant.
    ///
    /// This is used by the Manual Mapper to set correct protections after
    /// writing section data into the target process.
    pub fn memory_protection(&self) -> u32 {
        let r = self.characteristics & IMAGE_SCN_MEM_READ != 0;
        let w = self.characteristics & IMAGE_SCN_MEM_WRITE != 0;
        let x = self.characteristics & IMAGE_SCN_MEM_EXECUTE != 0;

        match (x, w, r) {
            (true, true, _) => PAGE_EXECUTE_READWRITE,
            (true, false, true) => PAGE_EXECUTE_READ,
            (true, false, false) => PAGE_EXECUTE,
            (false, true, _) => PAGE_READWRITE,
            (false, false, true) => PAGE_READONLY,
            (false, false, false) => PAGE_NOACCESS,
        }
    }
}

// ── Parsing ──────────────────────────────────────────────────────────

/// Parse all section headers from the section table.
pub fn parse_sections(
    data: &[u8],
    table_offset: usize,
    count: u16,
) -> Result<Vec<SectionHeader>, PeError> {
    let mut sections = Vec::with_capacity(count as usize);

    for i in 0..count as usize {
        let offset = table_offset + i * SECTION_HEADER_SIZE;
        if data.len() < offset + SECTION_HEADER_SIZE {
            return Err(PeError::InvalidSectionHeader { index: i });
        }

        let mut name = [0u8; 8];
        name.copy_from_slice(&data[offset..offset + 8]);

        sections.push(SectionHeader {
            name,
            virtual_size: read_u32(data, offset + 8),
            virtual_address: read_u32(data, offset + 12),
            size_of_raw_data: read_u32(data, offset + 16),
            pointer_to_raw_data: read_u32(data, offset + 20),
            pointer_to_relocations: read_u32(data, offset + 24),
            pointer_to_linenumbers: read_u32(data, offset + 28),
            number_of_relocations: read_u16(data, offset + 32),
            number_of_linenumbers: read_u16(data, offset + 34),
            characteristics: read_u32(data, offset + 36),
        });
    }

    Ok(sections)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn memory_protection_mapping() {
        // Code section (.text): EXECUTE | READ
        let sec = SectionHeader {
            name: *b".text\0\0\0",
            virtual_size: 0x1000,
            virtual_address: 0x1000,
            size_of_raw_data: 0x1000,
            pointer_to_raw_data: 0x200,
            pointer_to_relocations: 0,
            pointer_to_linenumbers: 0,
            number_of_relocations: 0,
            number_of_linenumbers: 0,
            characteristics: IMAGE_SCN_MEM_EXECUTE | IMAGE_SCN_MEM_READ | IMAGE_SCN_CNT_CODE,
        };
        assert_eq!(sec.memory_protection(), PAGE_EXECUTE_READ);
        assert!(sec.is_executable());
        assert!(!sec.is_writable());

        // Data section (.data): READ | WRITE
        let sec = SectionHeader {
            name: *b".data\0\0\0",
            characteristics: IMAGE_SCN_MEM_READ
                | IMAGE_SCN_MEM_WRITE
                | IMAGE_SCN_CNT_INITIALIZED_DATA,
            ..sec
        };
        assert_eq!(sec.memory_protection(), PAGE_READWRITE);
        assert!(!sec.is_executable());
        assert!(sec.is_writable());

        // Read-only data (.rdata): READ
        let sec = SectionHeader {
            name: *b".rdata\0\0",
            characteristics: IMAGE_SCN_MEM_READ | IMAGE_SCN_CNT_INITIALIZED_DATA,
            ..sec
        };
        assert_eq!(sec.memory_protection(), PAGE_READONLY);
    }

    #[test]
    fn section_name_str() {
        let sec = SectionHeader {
            name: *b".text\0\0\0",
            virtual_size: 0,
            virtual_address: 0,
            size_of_raw_data: 0,
            pointer_to_raw_data: 0,
            pointer_to_relocations: 0,
            pointer_to_linenumbers: 0,
            number_of_relocations: 0,
            number_of_linenumbers: 0,
            characteristics: 0,
        };
        assert_eq!(sec.name_str(), ".text");

        // Full 8-byte name with no null
        let sec = SectionHeader {
            name: *b"longname",
            ..sec
        };
        assert_eq!(sec.name_str(), "longname");
    }
}
