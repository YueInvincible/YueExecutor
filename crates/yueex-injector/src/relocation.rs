//! Base relocation fixup for remote-mapped PE images.
//!
//! When the image is mapped at a different base than its preferred `ImageBase`,
//! every embedded absolute address must be adjusted by `delta = actual - preferred`.

use windows::Win32::Foundation::HANDLE;

use yueex_abi::types::InjectionError;
use yueex_pe::relocations::{
    RelocationBlock, IMAGE_REL_BASED_ABSOLUTE, IMAGE_REL_BASED_DIR64,
    IMAGE_REL_BASED_HIGH, IMAGE_REL_BASED_HIGHLOW, IMAGE_REL_BASED_LOW,
};

use crate::memory;

/// Apply all base relocation fixups to a remotely mapped image.
///
/// # Arguments
/// * `process` — Handle to the target process.
/// * `remote_base` — Actual base address of the mapped image.
/// * `preferred_base` — Preferred `ImageBase` from the PE optional header.
/// * `blocks` — Parsed relocation blocks from the PE.
pub fn apply_relocations(
    process: HANDLE,
    remote_base: u64,
    preferred_base: u64,
    blocks: &[RelocationBlock],
) -> Result<u32, InjectionError> {
    let delta = remote_base.wrapping_sub(preferred_base);

    if delta == 0 {
        // No relocations needed — image is at its preferred base.
        return Ok(0);
    }

    let mut total_fixups = 0u32;

    for block in blocks {
        for entry in &block.entries {
            if entry.is_padding() {
                continue;
            }

            let target_rva = entry.rva(block.page_rva) as u64;
            let target_addr = remote_base + target_rva;

            match entry.reloc_type {
                IMAGE_REL_BASED_DIR64 => {
                    // 64-bit fixup: read 8 bytes, add delta, write back.
                    let original: u64 = memory::read_remote_value(process, target_addr)
                        .map_err(|_| reloc_err(target_rva, "DIR64 read failed"))?;
                    let fixed = original.wrapping_add(delta);
                    let bytes = fixed.to_le_bytes();
                    memory::write_remote(process, target_addr, &bytes)
                        .map_err(|_| reloc_err(target_rva, "DIR64 write failed"))?;
                }

                IMAGE_REL_BASED_HIGHLOW => {
                    // 32-bit fixup: read 4 bytes, add delta (truncated), write back.
                    let original: u32 = memory::read_remote_value(process, target_addr)
                        .map_err(|_| reloc_err(target_rva, "HIGHLOW read failed"))?;
                    let fixed = original.wrapping_add(delta as u32);
                    let bytes = fixed.to_le_bytes();
                    memory::write_remote(process, target_addr, &bytes)
                        .map_err(|_| reloc_err(target_rva, "HIGHLOW write failed"))?;
                }

                IMAGE_REL_BASED_HIGH => {
                    let original: u16 = memory::read_remote_value(process, target_addr)
                        .map_err(|_| reloc_err(target_rva, "HIGH read failed"))?;
                    let fixed = original.wrapping_add((delta >> 16) as u16);
                    let bytes = fixed.to_le_bytes();
                    memory::write_remote(process, target_addr, &bytes)
                        .map_err(|_| reloc_err(target_rva, "HIGH write failed"))?;
                }

                IMAGE_REL_BASED_LOW => {
                    let original: u16 = memory::read_remote_value(process, target_addr)
                        .map_err(|_| reloc_err(target_rva, "LOW read failed"))?;
                    let fixed = original.wrapping_add(delta as u16);
                    let bytes = fixed.to_le_bytes();
                    memory::write_remote(process, target_addr, &bytes)
                        .map_err(|_| reloc_err(target_rva, "LOW write failed"))?;
                }

                IMAGE_REL_BASED_ABSOLUTE => {
                    // Padding — skip.
                }

                other => {
                    return Err(reloc_err(
                        target_rva,
                        &format!("unsupported relocation type {other}"),
                    ));
                }
            }

            total_fixups += 1;
        }
    }

    Ok(total_fixups)
}

fn reloc_err(rva: u64, detail: &str) -> InjectionError {
    InjectionError::RelocationFailed {
        rva,
        reason: detail.to_string(),
    }
}
