/// Translates FUN_1400283a0 and similar byte-manipulation inline decryptors.
/// These functions accept a target buffer and an encoded constant byte array,
/// applying a rolling XOR and ADD arithmetic pass.
pub unsafe fn decrypt_stack_string(target_buffer: *mut u8, encoded_bytes: *const u8, len: usize) {
    if len < 24 { return; }
    
    *target_buffer.add(0) = (*encoded_bytes.add(0)).wrapping_add(0x66) ^ 0xea;
    *target_buffer.add(1) = (*encoded_bytes.add(1)).wrapping_add(0x66) ^ 0xeb;
    *target_buffer.add(2) = (*encoded_bytes.add(2)).wrapping_add(0x66) ^ 0xec;
    *target_buffer.add(3) = (*encoded_bytes.add(3)).wrapping_add(0x66) ^ 0xed;
    *target_buffer.add(4) = (*encoded_bytes.add(4)).wrapping_add(0x66) ^ 0xee;
    *target_buffer.add(5) = (*encoded_bytes.add(5)).wrapping_add(0x66) ^ 0xef;
    *target_buffer.add(6) = (*encoded_bytes.add(6)).wrapping_add(0x66) ^ 0xf0;
    *target_buffer.add(7) = (*encoded_bytes.add(7)).wrapping_add(0x66) ^ 0xf1;
    *target_buffer.add(8) = (*encoded_bytes.add(8)).wrapping_add(0x66) ^ 0xf2;
    *target_buffer.add(9) = (*encoded_bytes.add(9)).wrapping_add(0x66) ^ 0xf3;
    *target_buffer.add(10) = (*encoded_bytes.add(10)).wrapping_add(0x66) ^ 0xf4;
    *target_buffer.add(11) = (*encoded_bytes.add(11)).wrapping_add(0x66) ^ 0xf5;
    *target_buffer.add(12) = (*encoded_bytes.add(12)).wrapping_add(0x66) ^ 0xf6;
    *target_buffer.add(13) = (*encoded_bytes.add(13)).wrapping_add(0x66) ^ 0xf7;
    *target_buffer.add(14) = (*encoded_bytes.add(14)).wrapping_add(0x66) ^ 0xf8;
    *target_buffer.add(15) = (*encoded_bytes.add(15)).wrapping_add(0x66) ^ 0xf9;
    *target_buffer.add(16) = (*encoded_bytes.add(16)).wrapping_add(0x66) ^ 0xfa;
    *target_buffer.add(17) = (*encoded_bytes.add(17)).wrapping_add(0x66) ^ 0xfb;
    *target_buffer.add(18) = (*encoded_bytes.add(18)).wrapping_add(0x66) ^ 0xfc;
    *target_buffer.add(19) = (*encoded_bytes.add(19)).wrapping_add(0x66) ^ 0xfd;
    *target_buffer.add(20) = (*encoded_bytes.add(20)).wrapping_add(0x66) ^ 0xfe;
    *target_buffer.add(21) = 0x99u8.wrapping_sub(*encoded_bytes.add(21));
    *target_buffer.add(22) = (*encoded_bytes.add(22)).wrapping_add(0x66);
    *target_buffer.add(23) = (*encoded_bytes.add(23) ^ 1).wrapping_add(0x66);

    // Dynamic unrolling for the rest of the buffer based on decompiled offsets
    for i in 24..len {
        let xor_key = (i as u8).wrapping_sub(22);
        *target_buffer.add(i) = (*encoded_bytes.add(i)).wrapping_add(0x66) ^ xor_key;
    }
}