//! PE header structures — DOS, COFF, Optional (PE32 / PE32+), and Data Directories.

use crate::{read_u16, read_u32, read_u64, PeError};

// ── Data Directory Indices ───────────────────────────────────────────

pub const DATA_DIR_EXPORT: usize = 0;
pub const DATA_DIR_IMPORT: usize = 1;
pub const DATA_DIR_RESOURCE: usize = 2;
pub const DATA_DIR_EXCEPTION: usize = 3;
pub const DATA_DIR_SECURITY: usize = 4;
pub const DATA_DIR_BASERELOC: usize = 5;
pub const DATA_DIR_DEBUG: usize = 6;
pub const DATA_DIR_TLS: usize = 9;
pub const DATA_DIR_IAT: usize = 12;

/// Maximum number of data directory entries we parse.
pub const MAX_DATA_DIRECTORIES: usize = 16;

// ── PE Format ────────────────────────────────────────────────────────

/// Distinguishes PE32 (32-bit) from PE32+ (64-bit).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PeFormat {
    /// PE32 — Magic 0x010B
    Pe32,
    /// PE32+ — Magic 0x020B
    Pe32Plus,
}

// ── COFF Header ──────────────────────────────────────────────────────

/// COFF file header (20 bytes), immediately following the PE signature.
#[derive(Debug, Clone)]
pub struct CoffHeader {
    /// Target machine type (e.g., 0x8664 = AMD64, 0x014C = i386).
    pub machine: u16,
    /// Number of sections.
    pub number_of_sections: u16,
    /// UNIX timestamp when the file was created.
    pub time_date_stamp: u32,
    /// Offset to the COFF symbol table (usually 0 for executables).
    pub pointer_to_symbol_table: u32,
    /// Number of symbols.
    pub number_of_symbols: u32,
    /// Size of the optional header.
    pub size_of_optional_header: u16,
    /// Characteristics flags.
    pub characteristics: u16,
}

impl CoffHeader {
    /// Parse a COFF header from `data` starting at `offset`.
    pub fn parse(data: &[u8], offset: usize) -> Result<Self, PeError> {
        if data.len() < offset + 20 {
            return Err(PeError::BufferTooSmall {
                need: offset + 20,
                have: data.len(),
            });
        }

        Ok(Self {
            machine: read_u16(data, offset),
            number_of_sections: read_u16(data, offset + 2),
            time_date_stamp: read_u32(data, offset + 4),
            pointer_to_symbol_table: read_u32(data, offset + 8),
            number_of_symbols: read_u32(data, offset + 12),
            size_of_optional_header: read_u16(data, offset + 16),
            characteristics: read_u16(data, offset + 18),
        })
    }
}

// ── Data Directory Entry ─────────────────────────────────────────────

/// A single data directory entry (RVA + Size).
#[derive(Debug, Clone, Copy, Default)]
pub struct DataDirectory {
    /// RVA of the directory.
    pub virtual_address: u32,
    /// Size of the directory in bytes.
    pub size: u32,
}

// ── Optional Header ──────────────────────────────────────────────────

/// Parsed optional header fields common to PE32 and PE32+.
/// Field sizes that differ between PE32/PE32+ are stored as u64.
#[derive(Debug, Clone)]
pub struct OptionalHeader {
    /// PE format magic (0x010B or 0x020B).
    pub magic: u16,
    /// Linker major version.
    pub major_linker_version: u8,
    /// Linker minor version.
    pub minor_linker_version: u8,
    /// Total size of all code sections.
    pub size_of_code: u32,
    /// Total size of all initialized data sections.
    pub size_of_initialized_data: u32,
    /// Total size of all uninitialized data sections.
    pub size_of_uninitialized_data: u32,
    /// RVA of the entry point.
    pub address_of_entry_point: u32,
    /// RVA of the beginning of the code section.
    pub base_of_code: u32,
    /// Preferred base address of the image.
    pub image_base: u64,
    /// Alignment of sections in memory.
    pub section_alignment: u32,
    /// Alignment of sections in the file.
    pub file_alignment: u32,
    /// Required OS major version.
    pub major_os_version: u16,
    /// Required OS minor version.
    pub minor_os_version: u16,
    /// Image major version.
    pub major_image_version: u16,
    /// Image minor version.
    pub minor_image_version: u16,
    /// Subsystem major version.
    pub major_subsystem_version: u16,
    /// Subsystem minor version.
    pub minor_subsystem_version: u16,
    /// Reserved (must be zero).
    pub win32_version_value: u32,
    /// Total size of the image when mapped in memory.
    pub size_of_image: u32,
    /// Size of all headers (rounded up to file alignment).
    pub size_of_headers: u32,
    /// Image checksum.
    pub checksum: u32,
    /// Subsystem required (e.g., WINDOWS_GUI = 2, WINDOWS_CUI = 3).
    pub subsystem: u16,
    /// DLL characteristics flags.
    pub dll_characteristics: u16,
    /// Stack reserve size.
    pub size_of_stack_reserve: u64,
    /// Stack commit size.
    pub size_of_stack_commit: u64,
    /// Heap reserve size.
    pub size_of_heap_reserve: u64,
    /// Heap commit size.
    pub size_of_heap_commit: u64,
    /// Reserved (usually 0).
    pub loader_flags: u32,
    /// Number of data directory entries.
    pub number_of_rva_and_sizes: u32,
    /// Data directories (up to 16).
    pub data_directories: [DataDirectory; MAX_DATA_DIRECTORIES],
}

impl OptionalHeader {
    /// Parse the optional header from `data` starting at `offset`.
    /// Returns the header and the PE format.
    pub fn parse(data: &[u8], offset: usize) -> Result<(Self, PeFormat), PeError> {
        if data.len() < offset + 2 {
            return Err(PeError::BufferTooSmall {
                need: offset + 2,
                have: data.len(),
            });
        }

        let magic = read_u16(data, offset);
        let format = match magic {
            0x010B => PeFormat::Pe32,
            0x020B => PeFormat::Pe32Plus,
            _ => return Err(PeError::UnsupportedMagic { magic }),
        };

        // PE32 optional header is 96 bytes before data dirs.
        // PE32+ optional header is 112 bytes before data dirs.
        let (header, _num_data_dirs) = match format {
            PeFormat::Pe32 => Self::parse_pe32(data, offset)?,
            PeFormat::Pe32Plus => Self::parse_pe32plus(data, offset)?,
        };

        Ok((header, format))
    }

    fn parse_pe32(data: &[u8], o: usize) -> Result<(Self, u32), PeError> {
        let min_size = o + 96;
        if data.len() < min_size {
            return Err(PeError::BufferTooSmall {
                need: min_size,
                have: data.len(),
            });
        }

        let number_of_rva_and_sizes = read_u32(data, o + 92);
        let data_dirs = Self::parse_data_directories(data, o + 96, number_of_rva_and_sizes)?;

        let header = Self {
            magic: read_u16(data, o),
            major_linker_version: data[o + 2],
            minor_linker_version: data[o + 3],
            size_of_code: read_u32(data, o + 4),
            size_of_initialized_data: read_u32(data, o + 8),
            size_of_uninitialized_data: read_u32(data, o + 12),
            address_of_entry_point: read_u32(data, o + 16),
            base_of_code: read_u32(data, o + 20),
            // BaseOfData at o+24 (PE32 only, we skip it)
            image_base: read_u32(data, o + 28) as u64,
            section_alignment: read_u32(data, o + 32),
            file_alignment: read_u32(data, o + 36),
            major_os_version: read_u16(data, o + 40),
            minor_os_version: read_u16(data, o + 42),
            major_image_version: read_u16(data, o + 44),
            minor_image_version: read_u16(data, o + 46),
            major_subsystem_version: read_u16(data, o + 48),
            minor_subsystem_version: read_u16(data, o + 50),
            win32_version_value: read_u32(data, o + 52),
            size_of_image: read_u32(data, o + 56),
            size_of_headers: read_u32(data, o + 60),
            checksum: read_u32(data, o + 64),
            subsystem: read_u16(data, o + 68),
            dll_characteristics: read_u16(data, o + 70),
            size_of_stack_reserve: read_u32(data, o + 72) as u64,
            size_of_stack_commit: read_u32(data, o + 76) as u64,
            size_of_heap_reserve: read_u32(data, o + 80) as u64,
            size_of_heap_commit: read_u32(data, o + 84) as u64,
            loader_flags: read_u32(data, o + 88),
            number_of_rva_and_sizes,
            data_directories: data_dirs,
        };

        Ok((header, number_of_rva_and_sizes))
    }

    fn parse_pe32plus(data: &[u8], o: usize) -> Result<(Self, u32), PeError> {
        let min_size = o + 112;
        if data.len() < min_size {
            return Err(PeError::BufferTooSmall {
                need: min_size,
                have: data.len(),
            });
        }

        let number_of_rva_and_sizes = read_u32(data, o + 108);
        let data_dirs = Self::parse_data_directories(data, o + 112, number_of_rva_and_sizes)?;

        let header = Self {
            magic: read_u16(data, o),
            major_linker_version: data[o + 2],
            minor_linker_version: data[o + 3],
            size_of_code: read_u32(data, o + 4),
            size_of_initialized_data: read_u32(data, o + 8),
            size_of_uninitialized_data: read_u32(data, o + 12),
            address_of_entry_point: read_u32(data, o + 16),
            base_of_code: read_u32(data, o + 20),
            // PE32+ has no BaseOfData — image_base is 8 bytes at o+24
            image_base: read_u64(data, o + 24),
            section_alignment: read_u32(data, o + 32),
            file_alignment: read_u32(data, o + 36),
            major_os_version: read_u16(data, o + 40),
            minor_os_version: read_u16(data, o + 42),
            major_image_version: read_u16(data, o + 44),
            minor_image_version: read_u16(data, o + 46),
            major_subsystem_version: read_u16(data, o + 48),
            minor_subsystem_version: read_u16(data, o + 50),
            win32_version_value: read_u32(data, o + 52),
            size_of_image: read_u32(data, o + 56),
            size_of_headers: read_u32(data, o + 60),
            checksum: read_u32(data, o + 64),
            subsystem: read_u16(data, o + 68),
            dll_characteristics: read_u16(data, o + 70),
            size_of_stack_reserve: read_u64(data, o + 72),
            size_of_stack_commit: read_u64(data, o + 80),
            size_of_heap_reserve: read_u64(data, o + 88),
            size_of_heap_commit: read_u64(data, o + 96),
            loader_flags: read_u32(data, o + 104),
            number_of_rva_and_sizes,
            data_directories: data_dirs,
        };

        Ok((header, number_of_rva_and_sizes))
    }

    fn parse_data_directories(
        data: &[u8],
        offset: usize,
        count: u32,
    ) -> Result<[DataDirectory; MAX_DATA_DIRECTORIES], PeError> {
        let mut dirs = [DataDirectory::default(); MAX_DATA_DIRECTORIES];
        let actual_count = (count as usize).min(MAX_DATA_DIRECTORIES);

        let needed = offset + actual_count * 8;
        if data.len() < needed {
            return Err(PeError::BufferTooSmall {
                need: needed,
                have: data.len(),
            });
        }

        for i in 0..actual_count {
            let o = offset + i * 8;
            dirs[i] = DataDirectory {
                virtual_address: read_u32(data, o),
                size: read_u32(data, o + 4),
            };
        }

        Ok(dirs)
    }
}

// ── NT Headers ───────────────────────────────────────────────────────

/// Combined NT headers (PE signature + COFF + Optional).
#[derive(Debug, Clone)]
pub struct NtHeaders {
    /// PE format (PE32 or PE32+).
    pub format: PeFormat,
    /// COFF file header.
    pub coff: CoffHeader,
    /// Optional header.
    pub optional: OptionalHeader,
}

impl NtHeaders {
    /// Parse NT headers from `data` starting at `nt_offset` (the position of
    /// the PE signature `"PE\0\0"`).
    pub fn parse(data: &[u8], nt_offset: usize) -> Result<Self, PeError> {
        // COFF header starts 4 bytes after PE signature.
        let coff_offset = nt_offset + 4;
        let coff = CoffHeader::parse(data, coff_offset)?;

        // Optional header starts immediately after COFF header (20 bytes).
        let optional_offset = coff_offset + 20;
        let (optional, format) = OptionalHeader::parse(data, optional_offset)?;

        Ok(Self {
            format,
            coff,
            optional,
        })
    }
}

// ── Constants ────────────────────────────────────────────────────────

/// Machine type: AMD64 (x86_64).
pub const IMAGE_FILE_MACHINE_AMD64: u16 = 0x8664;

/// Machine type: i386 (x86).
pub const IMAGE_FILE_MACHINE_I386: u16 = 0x014C;

/// Characteristics: DLL.
pub const IMAGE_FILE_DLL: u16 = 0x2000;

/// Characteristics: executable image.
pub const IMAGE_FILE_EXECUTABLE_IMAGE: u16 = 0x0002;

/// DLL characteristics: dynamic base (ASLR).
pub const IMAGE_DLLCHARACTERISTICS_DYNAMIC_BASE: u16 = 0x0040;
