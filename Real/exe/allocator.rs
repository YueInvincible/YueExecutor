use std::ffi::c_void;

extern "C" {
    pub fn thunk_FUN_1400340c0(ptr: i64, size: u64);
    pub fn invalidInstructionException() -> extern "C" fn() -> !;
}

/// Helper to replicate the custom deallocation logic seen repeatedly in the binary.
/// Replaces the manual `if (0xfff < size) { read ptr - 8 ... }` checks.
pub unsafe fn custom_dealloc(buf_ptr: *mut u8, length: usize) {
    if buf_ptr.is_null() {
        return;
    }
    
    let mut true_ptr = buf_ptr as i64;
    let mut alloc_size = length as u64;

    if length > 0xFFF {
        // Read the true base pointer stored 8 bytes before the current buffer
        let base_ptr_addr = buf_ptr.sub(8) as *mut i64;
        true_ptr = *base_ptr_addr;
        
        // Debug/Guard validation check: ensure offset isn't corrupted
        let diff = (buf_ptr.sub(8) as usize).wrapping_sub(true_ptr as usize);
        if diff > 0x1F {
            invalidInstructionException()();
        }
        alloc_size += 0x27; // Overhead adjustment
    }
    
    thunk_FUN_1400340c0(true_ptr, alloc_size);
}