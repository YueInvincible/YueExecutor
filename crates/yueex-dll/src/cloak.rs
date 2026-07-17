//! Local PE header cloaking.
//!
//! While the injector normally erases headers remotely, doing it locally
//! from within DllMain provides an extra layer of defense and handles
//! cases where the injector couldn't.

use std::ptr;

use windows::Win32::Foundation::HINSTANCE;
use windows::Win32::System::Memory::{VirtualProtect, PAGE_PROTECTION_FLAGS, PAGE_READWRITE};

use yueex_pe::PeImage;

/// Erase the PE headers of the current module.
///
/// # Safety
/// `hinstance` must be the valid base address of the injected module.
pub unsafe fn cloak_pe_headers(hinstance: HINSTANCE) {
    let base_addr = hinstance.0 as *mut u8;
    if base_addr.is_null() {
        return;
    }

    // Read the DOS header to find e_lfanew and parse the PE structure
    // just enough to get the SizeOfHeaders.
    // We assume the PE is valid since it was just mapped.
    
    // Create a temporary slice covering the first 4KB (usually enough for headers).
    let temp_slice = std::slice::from_raw_parts(base_addr, 4096);
    
    if let Ok(pe) = PeImage::parse(temp_slice) {
        let size_of_headers = pe.size_of_headers() as usize;

        // Change protection to PAGE_READWRITE
        let mut old_protect = PAGE_PROTECTION_FLAGS(0);
        let prot_result = VirtualProtect(
            base_addr as *const std::ffi::c_void,
            size_of_headers,
            PAGE_READWRITE,
            &mut old_protect,
        );

        if prot_result.is_ok() {
            // Zero out the headers
            ptr::write_bytes(base_addr, 0, size_of_headers);

            // Restore original protection
            let mut dummy = PAGE_PROTECTION_FLAGS(0);
            let _ = VirtualProtect(
                base_addr as *const std::ffi::c_void,
                size_of_headers,
                old_protect,
                &mut dummy,
            );
        }
    }
}
