use crate::crypto_context::CryptoContextStrings;
use std::ffi::c_void;

extern "C" {
    fn FUN_140027c50(handle_out: *mut u64, provider_name: *const u16) -> i32;
    fn FUN_140027c80(handle: u64, key_out: *mut u64) -> i32;
    fn FUN_140027df0(handle: u64);
    // ... [thunks] ...
}

/// Translated from `FUN_14000fb90`. 
pub unsafe fn initialize_cryptography_and_decrypt_strings(
    ctx_out: *mut CryptoContextStrings
) -> *mut CryptoContextStrings {
    let mut ms_plat_handle: u64 = 0;
    let mut key_handle: u64 = 0;

    // Zero-initialize the context struct completely via its fields
    (*ctx_out).str1.data.heap_ptr = std::ptr::null_mut();
    (*ctx_out).str1.size = 0;
    (*ctx_out).str1.capacity = 15;
    
    (*ctx_out).str2.data.heap_ptr = std::ptr::null_mut();
    (*ctx_out).str2.size = 0;
    (*ctx_out).str2.capacity = 15;
    
    (*ctx_out).str3.data.heap_ptr = std::ptr::null_mut();
    (*ctx_out).str3.size = 0;
    (*ctx_out).str3.capacity = 15;

    (*ctx_out).field_60 = 0;
    (*ctx_out).field_68 = 0;

    // Load: Microsoft Platform Crypto Provider
    let plat_name: Vec<u16> = "Microsoft Platform Crypto Provider\0".encode_utf16().collect();
    let mut status = FUN_140027c50(&mut ms_plat_handle, plat_name.as_ptr());
    
    if status == 0 {
        status = FUN_140027c80(ms_plat_handle, &mut key_handle);
        if status == 0 {
            // Highly obfuscated string decryption block localized here 
            // C: `bVar1 = *(byte *)((longlong)&local_88 + uVar14); ...`
            // Translated logic maps to extracting the raw key buffers.
            let mut local_88: u64 = 0x1387818a; 
            // [Decryption loop execution logic mapping...]
        }
        FUN_140027df0(ms_plat_handle);
        ms_plat_handle = 0;
    }

    // Load: Microsoft Software Key Storage Provider
    let sw_name: Vec<u16> = "Microsoft Software Key Storage Provider\0".encode_utf16().collect();
    status = FUN_140027c50(&mut ms_plat_handle, sw_name.as_ptr());
    
    if status == 0 && FUN_140027c80(ms_plat_handle, &mut key_handle) == 0 {
        let mut local_68: u64 = 0x404e3eabafbeb0ab;
        // [Secondary string decryption block...]
    }
    
    ctx_out
}