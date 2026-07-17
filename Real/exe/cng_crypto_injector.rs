use std::ffi::c_void;

extern "C" {
    fn FUN_140027e60(buffer: *mut u8, name: *const u16);
    fn FUN_1400280d0(buffer: *mut u8) -> u64;
    fn FUN_140033fb0(p1: u64, p2: *mut u64, key_val: u64, p4: u32, p5: u32) -> i32;
    fn FUN_1400283a0(buffer: *mut u8, name: *const u16);
    fn FUN_140028600(buffer: *mut u8) -> u64;
    fn FUN_140033f60(p1: u64, p2: *mut u64, algo: *const u16, key_val: u64, p5: u32, p6: u32) -> i32;
    fn FUN_140033fd0(key_handle: u64, property: *const u16, data: *mut u32, size: u32, flags: u32);
    fn FUN_140033f80(key_handle: u64, flags: u32) -> u64;
    
    static DAT_1400395d8: *mut code; // Function pointer for crypto loop
}

/// Translated from FUN_140027c80
/// Authenticates the Injector using MS CNG (Cryptographic Next Generation)
pub unsafe fn authenticate_injector_key(provider_handle: u64, key_handle_out: *mut u64) -> u64 {
    let mut local_f8 = [0u8; 64];
    let mut local_b8 = [0u8; 64];
    let mut local_78 = [0u32; 16];

    let auth_key_name: Vec<u16> = "RealInjectorAuthKey_v2\0".encode_utf16().collect();
    
    // Deobfuscate/prepare the key string buffer
    FUN_140027e60(local_b8.as_mut_ptr(), auth_key_name.as_ptr());
    let mut uvar3 = FUN_1400280d0(local_b8.as_mut_ptr());
    
    // Attempt to open the existing key
    let mut status = FUN_140033fb0(provider_handle, key_handle_out, uvar3, 0, 0x40);
    uvar3 = 0;
    
    if status != 0 {
        // Key not found/failed, attempt to generate/import ECDSA P256 Key
        FUN_1400283a0(local_f8.as_mut_ptr(), auth_key_name.as_ptr());
        uvar3 = FUN_140028600(local_f8.as_mut_ptr());
        
        let algo_name: Vec<u16> = "ECDSA_P256\0".encode_utf16().collect();
        status = FUN_140033f60(provider_handle, key_handle_out, algo_name.as_ptr(), uvar3, 0, 0x40);
        
        if status == 0 {
            uvar3 = *key_handle_out;
            local_78[0] = 2; // Allow export policy
            
            let policy_name: Vec<u16> = "Export Policy\0".encode_utf16().collect();
            FUN_140033fd0(uvar3, policy_name.as_ptr(), local_78.as_mut_ptr(), 4, 0x80000040);
            
            // Finalize Key (NCryptFinalizeKey equivalent)
            uvar3 = FUN_140033f80(uvar3, 0x40);
        } else {
            // Decryption failure fallback loop mapped from decompilation
            let mut i = 0x14;
            let func_ptr: extern "C" fn() = std::mem::transmute(DAT_1400395d8);
            loop {
                func_ptr();
                i -= 1;
                if i == 0 { break; }
            }
        }
    }
    
    uvar3
}

/// Translated from FUN_1400283a0
/// The exact byte-mangling logic used to decrypt "RealInjectorAuthKey_v2" in memory.
pub unsafe fn decrypt_auth_key_string(buffer: *mut u8, encoded_name: *const u8) {
    *buffer.add(0) = *encoded_name.add(0).wrapping_add(0x66) ^ 0xea;
    *buffer.add(1) = *encoded_name.add(1).wrapping_add(0x66) ^ 0xeb;
    *buffer.add(2) = *encoded_name.add(2).wrapping_add(0x66) ^ 0xec;
    *buffer.add(3) = *encoded_name.add(3).wrapping_add(0x66) ^ 0xed;
    *buffer.add(4) = *encoded_name.add(4).wrapping_add(0x66) ^ 0xee;
    *buffer.add(5) = *encoded_name.add(5).wrapping_add(0x66) ^ 0xef;
    *buffer.add(6) = *encoded_name.add(6).wrapping_add(0x66) ^ 0xf0;
    *buffer.add(7) = *encoded_name.add(7).wrapping_add(0x66) ^ 0xf1;
    *buffer.add(8) = *encoded_name.add(8).wrapping_add(0x66) ^ 0xf2;
    *buffer.add(9) = *encoded_name.add(9).wrapping_add(0x66) ^ 0xf3;
    *buffer.add(10) = *encoded_name.add(10).wrapping_add(0x66) ^ 0xf4;
    *buffer.add(11) = *encoded_name.add(11).wrapping_add(0x66) ^ 0xf5;
    *buffer.add(12) = *encoded_name.add(12).wrapping_add(0x66) ^ 0xf6;
    *buffer.add(13) = *encoded_name.add(13).wrapping_add(0x66) ^ 0xf7;
    *buffer.add(14) = *encoded_name.add(14).wrapping_add(0x66) ^ 0xf8;
    *buffer.add(15) = *encoded_name.add(15).wrapping_add(0x66) ^ 0xf9;
    *buffer.add(16) = *encoded_name.add(16).wrapping_add(0x66) ^ 0xfa;
    *buffer.add(17) = *encoded_name.add(17).wrapping_add(0x66) ^ 0xfb;
    *buffer.add(18) = *encoded_name.add(18).wrapping_add(0x66) ^ 0xfc;
    *buffer.add(19) = *encoded_name.add(19).wrapping_add(0x66) ^ 0xfd;
    *buffer.add(20) = *encoded_name.add(20).wrapping_add(0x66) ^ 0xfe;
    
    *buffer.add(21) = 0x99 - *encoded_name.add(21);
    *buffer.add(22) = *encoded_name.add(22).wrapping_add(0x66);
    *buffer.add(23) = (*encoded_name.add(23) ^ 1).wrapping_add(0x66);
    
    // ... loop unrolling continues exactly as the C code specifies ...
    for i in 24..0x26 {
        *buffer.add(i) = *encoded_name.add(i).wrapping_add(0x66) ^ ((i as u8) - 22);
    }
}