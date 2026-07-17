//! Remote PE header cloaking — zero-fill PE headers in the target process.
//!
//! After successful injection and DllMain execution, the PE headers
//! (DOS header, NT headers, section table) are erased from the remote
//! process memory. This prevents memory scanners from identifying the
//! mapped image as a PE file.

use windows::Win32::Foundation::HANDLE;

use yueex_abi::types::InjectionError;

use crate::memory;

/// Erase PE headers from the mapped image in the remote process.
///
/// Zeroes out the first `size_of_headers` bytes at `remote_base`.
/// Uses `write_remote_protected` to temporarily change protections
/// if the region is read-only.
///
/// # Arguments
/// * `process` — Handle to the target process.
/// * `remote_base` — Base address of the mapped PE image.
/// * `header_size` — Size of the PE headers to erase (`SizeOfHeaders` from PE optional header).
pub fn erase_remote_pe_headers(
    process: HANDLE,
    remote_base: u64,
    header_size: u32,
) -> Result<(), InjectionError> {
    let zeroes = vec![0u8; header_size as usize];

    memory::write_remote_protected(process, remote_base, &zeroes).map_err(|e| {
        InjectionError::CloakingFailed {
            reason: format!(
                "failed to erase PE headers at 0x{remote_base:016X} ({header_size} bytes): {e}"
            ),
        }
    })?;

    Ok(())
}
