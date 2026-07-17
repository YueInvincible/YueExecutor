use std::ptr;

pub static mut DAT_1802b31b0: u8 = 0;
pub static mut _DAT_1802b0a38: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b0a48: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b0a50: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b0a58: *mut u64 = ptr::null_mut();
pub static mut _DAT_1802b0a60: u64 = 0;

extern "C" {
    fn FUN_1800235b0();
    fn FUN_18000c340() -> *mut u64;
    fn FUN_1801debc0(cb: *const u8);
    static CryptoPP_Integer_vftable: u8;
    static _DAT_18026e5f0: *mut u8;
    static _UNK_18026e5f8: *mut u8;
    static LAB_1801ec540: u8;
}

// FUN_180001200
pub unsafe fn init_crypto_integer_0() {
    if DAT_1802b31b0 == 0 {
        FUN_1800235b0();
        DAT_1802b31b0 = 1;
    }
    _DAT_1802b0a38 = &CryptoPP_Integer_vftable as *const _ as *mut u8;
    DAT_1802b0a48 = _DAT_18026e5f0;
    DAT_1802b0a50 = _UNK_18026e5f8;
    DAT_1802b0a58 = FUN_18000c340();
    _DAT_1802b0a60 = 0;
    
    if !DAT_1802b0a58.is_null() {
        *DAT_1802b0a58 = 0;
        *(DAT_1802b0a58.add(1)) = 0;
    }
    
    FUN_1801debc0(&LAB_1801ec540 as *const _);
}

pub static mut _DAT_1802b09d8: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b09e8: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b09f0: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b09f8: *mut u64 = ptr::null_mut();
pub static mut _DAT_1802b0a00: u64 = 0;

extern "C" {
    static LAB_1801ec590: u8;
}

// FUN_180001270
pub unsafe fn init_crypto_integer_1() {
    if DAT_1802b31b0 == 0 {
        FUN_1800235b0();
        DAT_1802b31b0 = 1;
    }
    _DAT_1802b09d8 = &CryptoPP_Integer_vftable as *const _ as *mut u8;
    DAT_1802b09e8 = _DAT_18026e5f0;
    DAT_1802b09f0 = _UNK_18026e5f8;
    DAT_1802b09f8 = FUN_18000c340();
    _DAT_1802b0a00 = 0;
    
    if !DAT_1802b09f8.is_null() {
        *DAT_1802b09f8 = 1;
        *(DAT_1802b09f8.add(1)) = 0;
    }
    
    FUN_1801debc0(&LAB_1801ec590 as *const _);
}

pub static mut _DAT_1802b0a08: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b0a18: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b0a20: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b0a28: *mut u64 = ptr::null_mut();
pub static mut _DAT_1802b0a30: u64 = 0;

extern "C" {
    static LAB_1801ec5e0: u8;
}

// FUN_1800012f0
pub unsafe fn init_crypto_integer_2() {
    if DAT_1802b31b0 == 0 {
        FUN_1800235b0();
        DAT_1802b31b0 = 1;
    }
    _DAT_1802b0a08 = &CryptoPP_Integer_vftable as *const _ as *mut u8;
    DAT_1802b0a18 = _DAT_18026e5f0;
    DAT_1802b0a20 = _UNK_18026e5f8;
    DAT_1802b0a28 = FUN_18000c340();
    _DAT_1802b0a30 = 0;
    
    if !DAT_1802b0a28.is_null() {
        *DAT_1802b0a28 = 2;
        *(DAT_1802b0a28.add(1)) = 0;
    }
    
    FUN_1801debc0(&LAB_1801ec5e0 as *const _);
}

extern "C" {
    static CryptoPP_BaseN_Encoder_vftable: u8;
    static CryptoPP_SourceTemplate_StringStore_vftable: u8;
    fn free(ptr: *mut std::ffi::c_void);
}

// FUN_1800086a0
pub unsafe fn init_base_n_encoder(param_1: *mut u64, param_2: u64) -> *mut u64 {
    *param_1.add(3) = 0;
    *param_1.add(4) = 0;
    *(param_1.add(5) as *mut u32) = 0;
    *param_1 = &CryptoPP_BaseN_Encoder_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_BaseN_Encoder_vftable as *const _ as u64;
    *param_1.add(6) = 0;
    *param_1.add(7) = 0;
    *param_1.add(8) = 0;
    *(param_1.add(9) as *mut u32) = 0;
    *param_1.add(0xb) = 0xffffffffffffffff;
    *param_1.add(0xc) = 0;
    *param_1.add(0xd) = 0;
    
    let puVar1 = *param_1.add(3) as *mut u64;
    if !puVar1.is_null() {
        let vtable = *puVar1 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(puVar1, 1);
    }
    
    *param_1.add(3) = param_2;
    param_1
}

// FUN_180008610
pub unsafe fn init_source_template_string_store(param_1: *mut u64, param_2: u32) -> *mut u64 {
    *param_1 = &CryptoPP_SourceTemplate_StringStore_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_SourceTemplate_StringStore_vftable as *const _ as u64;
    let puVar1 = *param_1.add(3) as *mut u64;
    if !puVar1.is_null() {
        let vtable = *puVar1 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(puVar1, 1);
    }
    if param_2 & 1 != 0 {
        free(param_1 as *mut _);
    }
    param_1
}

// FUN_180008720
pub unsafe fn secure_clear_memory(param_1: *mut u8, param_2: u32) -> *mut u8 {
    let memory = *(param_1.add(0x68) as *mut *mut u8);
    if !memory.is_null() {
        let mut uVar3 = *(param_1.add(0x60) as *mut u64);
        let uVar_58 = *(param_1.add(0x58) as *mut u64);
        if uVar_58 < uVar3 {
            uVar3 = uVar_58;
        }
        
        let mut lVar1 = memory.add(uVar3 as usize);
        while uVar3 != 0 {
            *lVar1.sub(1) = 0;
            lVar1 = lVar1.sub(1);
            uVar3 -= 1;
        }
        free(memory as *mut _);
    }
    
    let puVar2 = *(param_1.add(0x18) as *mut *mut u64);
    if !puVar2.is_null() {
        let vtable = *puVar2 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(puVar2, 1);
    }
    
    if param_2 & 1 != 0 {
        free(param_1 as *mut _);
    }
    
    param_1
}

extern "C" {
    fn FUN_180009ec0(p1: *mut u64, p2: u64);
    static CryptoPP_StringSource_vftable: u8;
    static _DAT_18026e5e0: u64;
    static _UNK_18026e5e8: u64;
    static CryptoPP_AlgorithmParameters_vftable: u8;
    static CryptoPP_NameValuePairs_vftable: u8;
    fn FUN_18000aba0(p1: *mut *const u8, name: *const u8, p3: *mut u8, p4: u32) -> u64;
    fn FUN_1801de680(size: usize) -> *mut u8;
}

// FUN_1800084c0
pub unsafe fn init_string_source(param_1: *mut u64, param_2: u64, param_3: u64, param_4: u64, param_5: u64) -> *mut u64 {
    FUN_180009ec0(param_1, param_5);
    *param_1 = &CryptoPP_StringSource_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_StringSource_vftable as *const _ as u64;
    
    let _local_38 = _DAT_18026e5e0;
    let _ustack_30 = _UNK_18026e5e8;
    let _local_28 = 0;
    
    let mut local_58: [u8; 8] = [0; 8];
    let mut local_70 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    let local_68: *mut u64 = ptr::null_mut();
    let _local_60: u8 = 1;
    let _local_50 = param_2;
    let _local_48 = param_3;
    
    let l_var1 = FUN_18000aba0(&mut local_70, b"InputBuffer\0".as_ptr(), local_58.as_mut_ptr(), 1);
    let _local_78 = *(l_var1 as *const u8).add(0x10);
    let local_80 = *(l_var1 as *const *mut u64).add(1); // offset 8
    *(l_var1 as *mut u64).add(1) = 0;
    
    let mut local_88 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    
    if !local_68.is_null() {
        let vtable = *local_68 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_68, 1);
    }
    
    local_70 = &CryptoPP_NameValuePairs_vftable as *const _ as *const u8;
    
    let vtable_40 = *(*param_1 as *const *const extern "C" fn(*mut u64, *mut *const u8)).add(8); // offset 0x40
    vtable_40(param_1, &mut local_88);
    
    let vtable_400 = *(*param_1 as *const *const extern "C" fn(*mut u64, u32)).add(50); // offset 400
    vtable_400(param_1, 1);
    
    if !local_80.is_null() {
        let vtable = *local_80 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_80, 1);
    }
    
    param_1
}

extern "C" {
    static CryptoPP_BaseN_Decoder_vftable: u8;
    static CryptoPP_AlgorithmParametersTemplate_int_const_ptr64_vftable: u8;
    fn FUN_18000ac80(p1: *mut *const u8, name: *const u8, p3: *mut u32, p4: u32) -> u64;
    fn FUN_18000ea80(p1: *mut u64, p2: u64);
}

// FUN_1800087a0
pub unsafe fn init_base_n_decoder(param_1: *mut u64, param_2: u64, param_3: u32, param_4: u64) -> *mut u64 {
    *param_1.add(3) = 0;
    *param_1.add(4) = 0;
    *(param_1.add(5) as *mut u32) = 0;
    *param_1 = &CryptoPP_BaseN_Decoder_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_BaseN_Decoder_vftable as *const _ as u64;
    *param_1.add(6) = 0;
    *param_1.add(7) = 0;
    *param_1.add(8) = 0;
    *param_1.add(10) = 0xffffffffffffffff;
    *param_1.add(11) = 0;
    *param_1.add(12) = 0;
    
    let pu_var1 = *param_1.add(3) as *mut u64;
    
    let mut local_res18: [u32; 2] = [0; 2];
    local_res18[0] = param_3;
    
    if !pu_var1.is_null() {
        let vtable = *pu_var1 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(pu_var1, 1);
    }
    
    *param_1.add(3) = param_4;
    
    let local_40 = FUN_1801de680(0x28) as *mut u64;
    *local_40.add(1) = b"DecodingLookupArray\0".as_ptr() as u64;
    *(local_40.add(2) as *mut u16) = 1;
    *local_40 = &CryptoPP_AlgorithmParametersTemplate_int_const_ptr64_vftable as *const _ as u64;
    *local_40.add(4) = param_2;
    *local_40.add(3) = 0;
    
    let mut local_48 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    
    let u_var2 = FUN_18000ac80(&mut local_48, b"Log2Base\0".as_ptr(), local_res18.as_mut_ptr(), 1);
    FUN_18000ea80(param_1, u_var2);
    
    if !local_40.is_null() {
        let vtable = *local_40 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_40, 1);
    }
    
    param_1
}

// FUN_180008920
pub unsafe fn secure_clear_memory_2(param_1: u64) {
    let memory = *(param_1 as *const *mut u8).add(0xc); // offset 0x60
    if !memory.is_null() {
        let mut u_var3 = *((param_1 + 0x58) as *const u64);
        let u_var_50 = *((param_1 + 0x50) as *const u64);
        
        if u_var_50 < u_var3 {
            u_var3 = u_var_50;
        }
        
        let mut l_var1 = memory.add(u_var3 as usize);
        while u_var3 != 0 {
            *l_var1.sub(1) = 0;
            l_var1 = l_var1.sub(1);
            u_var3 -= 1;
        }
        free(memory as *mut _);
    }
    
    let pu_var2 = *(param_1 as *const *mut u64).add(3); // offset 0x18
    if !pu_var2.is_null() {
        let vtable = *pu_var2 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(pu_var2, 1);
    }
}

// FUN_1800088e0
pub unsafe fn clear_memory_and_free(param_1: *mut u8, param_2: u64) -> *mut u8 {
    secure_clear_memory_2(param_1 as u64);
    if param_2 & 1 != 0 {
        free(param_1 as *mut _);
    }
    param_1
}

extern "C" {
    static CryptoPP_Grouper_vftable: u8;
}

// FUN_180008990
pub unsafe fn init_grouper(param_1: *mut u64) -> *mut u64 {
    *param_1.add(3) = 0;
    *param_1.add(4) = 0;
    *(param_1.add(5) as *mut u32) = 0;
    
    *param_1 = &CryptoPP_Grouper_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_Grouper_vftable as *const _ as u64;
    
    *param_1.add(7) = 0xffffffffffffffff;
    *param_1.add(8) = 0;
    *param_1.add(9) = 0;
    *param_1.add(0xb) = 0xffffffffffffffff;
    *param_1.add(0xc) = 0;
    *param_1.add(0xd) = 0;
    *param_1.add(0xe) = 0;
    *param_1.add(0xf) = 0;
    
    let pu_var1 = *param_1.add(3) as *mut u64;
    if !pu_var1.is_null() {
        let vtable = *pu_var1 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(pu_var1, 1);
    }
    
    *param_1.add(3) = 0;
    param_1
}
extern "C" {
    static CryptoPP_Base64Encoder_vftable: u8;
    fn FUN_180017080(p1: *mut u64, p2: *mut u64);
    fn FUN_18000ad40(p1: *mut *const u8, name: *const u8, p3: *mut u8, p4: u32, p5: u64) -> u64;
    fn FUN_18000e090(p1: *mut u64, p2: u64);
}

// FUN_180008ad0
pub unsafe fn init_base64_encoder(param_1: *mut u64, param_2: u64) -> *mut u64 {
    let mut local_60: [u32; 2] = [0; 2];
    local_60[0] = 0x48;
    let mut local_68: [u8; 8] = [0; 8];
    
    let mut u_var1 = FUN_1801de680(0x70) as *mut u64;
    let local_58 = FUN_1801de680(0x80) as *mut u64;
    let u_var2 = init_grouper(local_58);
    u_var1 = init_base_n_encoder(u_var1, u_var2 as u64);
    
    FUN_180017080(param_1, u_var1);
    
    *param_1 = &CryptoPP_Base64Encoder_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_Base64Encoder_vftable as *const _ as u64;
    
    let mut local_38 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    let local_30: *mut u64 = ptr::null_mut();
    let _local_28: u8 = 1;
    
    let l_var3 = FUN_18000ad40(&mut local_38, b"InsertLineBreaks\0".as_ptr(), local_68.as_mut_ptr(), 1, param_2);
    let local_40 = *(l_var3 as *const u8).add(0x10);
    let local_48 = *(l_var3 as *const *mut u64).add(1);
    *(l_var3 as *mut u64).add(1) = 0;
    
    let mut local_50 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    
    if !local_30.is_null() {
        let vtable = *local_30 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_30, 1);
    }
    
    local_38 = &CryptoPP_NameValuePairs_vftable as *const _ as *const u8;
    
    let u_var1_out = FUN_18000ac80(&mut local_50, b"MaxLineLength\0".as_ptr(), local_60.as_mut_ptr(), local_40 as u32);
    FUN_18000e090(param_1, u_var1_out);
    
    if !local_48.is_null() {
        let vtable = *local_48 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_48, 1);
    }
    
    param_1
}

extern "C" {
    static CryptoPP_HexEncoder_vftable: u8;
    static CryptoPP_CombinedNameValuePairs_vftable: u8;
}

// FUN_180008c40
pub unsafe fn init_hex_encoder(
    param_1: *mut u64, 
    param_2: u64, 
    param_3: u8, 
    _param_4: u64, 
    param_5: *mut *mut u64, 
    param_6: *mut *mut u64
) -> *mut u64 {
    let mut local_res18: [u32; 2] = [0; 2];
    local_res18[0] = param_3 as u32;
    let mut local_res20: u32 = 0;
    
    let mut local_130: [u32; 2] = [0; 2];
    let mut local_138: [u8; 8] = [0; 8];
    
    let mut u_var3 = FUN_1801de680(0x70) as *mut u64;
    let local_c8 = FUN_1801de680(0x80) as *mut u64;
    let u_var4 = init_grouper(local_c8);
    u_var3 = init_base_n_encoder(u_var3, u_var4 as u64);
    FUN_180017080(param_1, u_var3);
    
    *param_1 = &CryptoPP_HexEncoder_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_HexEncoder_vftable as *const _ as u64;
    
    let mut local_128 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    let local_120: *mut u64 = ptr::null_mut();
    
    let l_var5 = FUN_18000ad40(&mut local_128, b"Uppercase\0".as_ptr(), local_138.as_mut_ptr(), 1, param_2);
    let local_100 = *(l_var5 as *const u8).add(0x10);
    let local_108 = *(l_var5 as *const *mut u64).add(1);
    *(l_var5 as *mut u64).add(1) = 0;
    
    let mut local_110 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    local_res20 = 1;
    
    if !local_120.is_null() {
        let vtable = *local_120 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_120, 1);
    }
    
    let l_var5_2 = FUN_18000ac80(&mut local_110, b"GroupSize\0".as_ptr(), local_130.as_mut_ptr(), local_100 as u32);
    
    let mut p_param_5 = param_5;
    if *p_param_5.add(3) as u64 > 0xf {
        p_param_5 = *p_param_5 as *mut *mut u64;
    }
    
    let mut local_c0: [u8; 8] = [0; 8];
    let l_var5_3 = FUN_18000aba0(l_var5_2 as *mut *const u8, b"Separator\0".as_ptr(), local_c0.as_mut_ptr(), *(l_var5_2 as *const u8).add(0x10) as u32);
    
    let mut p_param_6 = param_6;
    if *p_param_6.add(3) as u64 > 0xf {
        p_param_6 = *p_param_6 as *mut *mut u64;
    }
    
    let mut local_88: [u8; 8] = [0; 8];
    let pl_var6 = FUN_18000aba0(l_var5_3 as *mut *const u8, b"Terminator\0".as_ptr(), local_88.as_mut_ptr(), *(l_var5_3 as *const u8).add(0x10) as u32) as *mut u64;
    
    let c_var7 = if local_res18[0] != 0 { 1 } else { 0 };
    
    let pl_var1 = *param_1.add(0x12) as *mut u64;
    let l_var5_4 = *pl_var1;
    
    let pc_var8 = if c_var7 == 0 { b"0123456789abcdef\0".as_ptr() } else { b"0123456789ABCDEF\0".as_ptr() };
    
    let local_f0 = FUN_1801de680(0x28) as *mut u64;
    *local_f0.add(1) = b"EncodingLookupArray\0".as_ptr() as u64;
    *(local_f0.add(2) as *mut u16) = 0;
    *local_f0 = &CryptoPP_AlgorithmParametersTemplate_int_const_ptr64_vftable as *const _ as u64;
    *local_f0.add(4) = pc_var8 as u64;
    *local_f0.add(3) = 0;
    
    let mut local_f8 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    local_res20 = 3;
    local_res18[0] = 4;
    
    let _local_118 = FUN_18000ac80(&mut local_f8, b"Log2Base\0".as_ptr(), local_res18.as_mut_ptr(), 1);
    
    let mut local_128_comb = &CryptoPP_CombinedNameValuePairs_vftable as *const _ as *const u8;
    let vtable_58 = *(*pl_var1 as *const *const extern "C" fn(*mut u64, *mut *const u8, u32)).add(11); // offset 0x58
    vtable_58(pl_var1, &mut local_128_comb, 0xffffffff);
    
    if !local_f0.is_null() {
        let vtable = *local_f0 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_f0, 1);
    }
    if !local_108.is_null() {
        let vtable = *local_108 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_108, 1);
    }
    
    param_1
}

extern "C" {
    static CryptoPP_StringSinkTemplate_vftable: u8;
}

// FUN_180008f70
pub unsafe fn base64_encode_string(
    param_1: *mut u64,
    param_2: u64,
    param_3: u64,
    param_4: u64
) -> *mut u64 {
    *param_1 = 0;
    *param_1.add(1) = 0;
    *param_1.add(2) = 0;
    *param_1.add(3) = 0xf;
    *(param_1 as *mut u8) = 0;
    
    let mut u_var1 = FUN_1801de680(0x98) as *mut u64;
    let pu_var2 = FUN_1801de680(0x20) as *mut u64;
    
    *pu_var2 = &CryptoPP_StringSinkTemplate_vftable as *const _ as u64;
    *pu_var2.add(1) = &CryptoPP_StringSinkTemplate_vftable as *const _ as u64;
    *pu_var2.add(3) = param_1 as u64;
    
    u_var1 = init_base64_encoder(u_var1, pu_var2 as u64);
    
    let mut local_88: *mut u64 = ptr::null_mut();
    let local_70: *mut u64 = ptr::null_mut();
    
    init_string_source(&mut local_88 as *mut _ as *mut u64, param_2, param_3, param_4, u_var1 as u64);
    
    // Simulate vtable overrides
    let local_88_val = &CryptoPP_SourceTemplate_StringStore_vftable as *const _ as u64;
    local_88 = local_88_val as *mut u64;
    let _local_80 = local_88_val;
    
    if !local_70.is_null() {
        let vtable = *local_70 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_70, 1);
    }
    
    param_1
}

extern "C" {
    static CryptoPP_Base64Decoder_vftable: u8;
    static DAT_18022a490: u64;
}

// FUN_180009060
pub unsafe fn base64_decode_string(
    param_1: *mut u64,
    param_2: u64,
    param_3: u64
) -> *mut u64 {
    *param_1 = 0;
    *param_1.add(1) = 0;
    *param_1.add(2) = 0;
    *param_1.add(3) = 0xf;
    *(param_1 as *mut u8) = 0;
    
    let pu_var1 = FUN_1801de680(0x68) as *mut u64;
    let pu_var2 = FUN_1801de680(0x20) as *mut u64;
    
    *pu_var2 = &CryptoPP_StringSinkTemplate_vftable as *const _ as u64;
    *pu_var2.add(1) = &CryptoPP_StringSinkTemplate_vftable as *const _ as u64;
    *pu_var2.add(3) = param_1 as u64;
    
    init_base_n_decoder(pu_var1, &DAT_18022a490 as *const _ as u64, 6, pu_var2 as u64);
    
    *pu_var1 = &CryptoPP_Base64Decoder_vftable as *const _ as u64;
    *pu_var1.add(1) = &CryptoPP_Base64Decoder_vftable as *const _ as u64;
    
    let mut local_88: *mut u64 = ptr::null_mut();
    let local_70: *mut u64 = ptr::null_mut();
    
    init_string_source(&mut local_88 as *mut _ as *mut u64, param_2, param_3, 0, pu_var1 as u64);
    
    let local_88_val = &CryptoPP_SourceTemplate_StringStore_vftable as *const _ as u64;
    local_88 = local_88_val as *mut u64;
    let _local_80 = local_88_val;
    
    if !local_70.is_null() {
        let vtable = *local_70 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_70, 1);
    }
    
    param_1
}
extern "C" {
    static CryptoPP_SHA384_vftable: u8;
    static CryptoPP_SHA256_vftable: u8;
    fn FUN_180018070(p1: *mut u64, p2: *mut u64, p3: *mut u64);
}

// FUN_1800096e0
pub unsafe fn init_sha384(param_1: *mut u64) -> *mut u64 {
    *param_1.add(1) = 0;
    *param_1.add(2) = 0;
    *param_1.add(0x14) = 0x1fffffffffffffff;
    *(param_1 as *mut u8).add(0x99) = 1;
    *param_1.add(0x16) = param_1.add(3) as u64;
    *param_1.add(0x15) = 0x10;
    *param_1.add(0x28) = 0x1fffffffffffffff;
    *(param_1 as *mut u8).add(0x139) = 1;
    *param_1.add(0x29) = 0x10;
    *param_1.add(0x2a) = param_1.add(0x17) as u64;
    
    // SHA384 Initial Hash Values (64-bit constants)
    *param_1.add(0x17) = 0xcbbb9d5dc1059ed8;
    *param_1.add(0x18) = 0x629a292a367cd507;
    *param_1.add(0x19) = 0x9159015a3070dd17;
    *param_1.add(0x1a) = 0x152fecd8f70e5939;
    *param_1.add(0x1b) = 0x67332667ffc00b31;
    *param_1.add(0x1c) = 0x8eb44a8768581511;
    *param_1.add(0x1d) = 0xdb0c2e0d64f98fa7;
    *param_1.add(0x1e) = 0x47b5481dbefa4fa4;
    
    *param_1 = &CryptoPP_SHA384_vftable as *const _ as u64;
    param_1
}

// FUN_180009c50
pub unsafe fn init_sha256_state(param_1: u64) {
    let pu_var1 = *(param_1 as *const *mut u64).add(25); // offset 200 is 0xC8 -> index 25
    
    // SHA256 Initial Hash Values (packed into 64-bit ints from 32-bit constants)
    *pu_var1 = 0xbb67ae856a09e667;
    *pu_var1.add(1) = 0xa54ff53a3c6ef372;
    *pu_var1.add(2) = 0x9b05688c510e527f;
    *pu_var1.add(3) = 0x5be0cd191f83d9ab;
}

// FUN_1800094c0
pub unsafe fn sha384_hex_hash_string(
    param_1: *mut u64,
    param_2: u64,
    param_3: u64
) -> *mut u64 {
    *param_1 = 0;
    *param_1.add(1) = 0;
    *param_1.add(2) = 0;
    *param_1.add(3) = 0xf;
    *(param_1 as *mut u8) = 0;
    
    let mut local_188: [u64; 44] = [0; 44];
    init_sha384(local_188.as_mut_ptr());
    
    let u_var1 = FUN_1801de680(0xb0) as *mut u64;
    let mut u_var2 = FUN_1801de680(0x98) as *mut u64;
    let pu_var3 = FUN_1801de680(0x20) as *mut u64;
    
    *pu_var3 = &CryptoPP_StringSinkTemplate_vftable as *const _ as u64;
    *pu_var3.add(1) = &CryptoPP_StringSinkTemplate_vftable as *const _ as u64;
    *pu_var3.add(3) = param_1 as u64;
    
    u_var2 = init_hex_encoder(u_var2, pu_var3 as u64, 0, 0, ptr::null_mut(), ptr::null_mut());
    
    FUN_180018070(u_var1, local_188.as_mut_ptr(), u_var2);
    
    let mut local_1f8: *mut u64 = ptr::null_mut();
    let local_1e0: *mut u64 = ptr::null_mut();
    
    init_string_source(&mut local_1f8 as *mut _ as *mut u64, param_2, param_3, 0, u_var1 as u64);
    
    let local_1f8_val = &CryptoPP_SourceTemplate_StringStore_vftable as *const _ as u64;
    local_1f8 = local_1f8_val as *mut u64;
    
    if !local_1e0.is_null() {
        let vtable = *local_1e0 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_1e0, 1);
    }
    
    param_1
}

// FUN_180009170
pub unsafe fn sha256_hex_hash_string(
    param_1: *mut u64,
    param_2: u64,
    param_3: u64
) -> *mut u64 {
    *param_1 = 0;
    *param_1.add(1) = 0;
    *param_1.add(2) = 0;
    *param_1.add(3) = 0xf;
    *(param_1 as *mut u8) = 0;
    
    let mut local_170 = &CryptoPP_SHA256_vftable as *const _ as u64;
    
    let u_var2 = FUN_1801de680(0xb0) as *mut u64;
    let mut u_var3 = FUN_1801de680(0x98) as *mut u64;
    let pu_var4 = FUN_1801de680(0x20) as *mut u64;
    
    *pu_var4 = &CryptoPP_StringSinkTemplate_vftable as *const _ as u64;
    *pu_var4.add(1) = &CryptoPP_StringSinkTemplate_vftable as *const _ as u64;
    *pu_var4.add(3) = param_1 as u64;
    
    u_var3 = init_hex_encoder(u_var3, pu_var4 as u64, 0, 0, ptr::null_mut(), ptr::null_mut());
    
    FUN_180018070(u_var2, &mut local_170 as *mut u64, u_var3);
    
    let mut local_98: *mut u64 = ptr::null_mut();
    let local_80: *mut u64 = ptr::null_mut();
    
    init_string_source(&mut local_98 as *mut _ as *mut u64, param_2, param_3, 0, u_var2 as u64);
    
    let local_98_val = &CryptoPP_SourceTemplate_StringStore_vftable as *const _ as u64;
    local_98 = local_98_val as *mut u64;
    
    if !local_80.is_null() {
        let vtable = *local_80 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_80, 1);
    }
    
    param_1
}
extern "C" {
    static CryptoPP_StringStore_vftable: u8;
    fn FUN_180018380(p1: *mut u64, p2: *mut *const u8);
}

// FUN_180009ec0
pub unsafe fn init_string_store(param_1: *mut u64, param_2: u64) -> *mut u64 {
    *param_1.add(4) = 0;
    *(param_1.add(5) as *mut u32) = 0;
    *param_1.add(3) = param_2;
    *param_1 = &CryptoPP_SourceTemplate_StringStore_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_SourceTemplate_StringStore_vftable as *const _ as u64;
    *(param_1.add(9) as *mut u32) = 0xffffffff;
    *(param_1.add(10) as *mut u8) = 0;
    
    *param_1.add(6) = &CryptoPP_StringStore_vftable as *const _ as u64;
    *param_1.add(7) = &CryptoPP_StringStore_vftable as *const _ as u64;
    
    let _local_38 = _DAT_18026e5e0;
    let _u_stack_30 = _UNK_18026e5e8;
    let _local_28 = 0;
    let _local_50 = 0;
    let _local_48 = 0;
    
    let mut local_58: [u8; 8] = [0; 8];
    let mut local_70 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    let local_68: *mut u64 = ptr::null_mut();
    let _local_60: u8 = 1;
    
    let l_var1 = FUN_18000aba0(&mut local_70, b"InputBuffer\0".as_ptr(), local_58.as_mut_ptr(), 1);
    let _local_78 = *(l_var1 as *const u8).add(0x10);
    let local_80 = *(l_var1 as *const *mut u64).add(1);
    *(l_var1 as *mut u64).add(1) = 0;
    
    let mut local_88 = &CryptoPP_AlgorithmParameters_vftable as *const _ as *const u8;
    
    if !local_68.is_null() {
        let vtable = *local_68 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_68, 1);
    }
    
    let _local_70_nvp = &CryptoPP_NameValuePairs_vftable as *const _ as *const u8;
    
    FUN_180018380(param_1.add(6), &mut local_88);
    
    if !local_80.is_null() {
        let vtable = *local_80 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_80, 1);
    }
    
    param_1
}

extern "C" {
    fn FUN_18000b330(p1: u64, p2: u64);
    fn FUN_18000b5b0(p1: *mut u64, p2: u64, p3: u64, p4: u64);
}

// FUN_18000a030
pub unsafe fn string_store_append(param_1: u64, param_2: u64, param_3: u64) -> u64 {
    if param_3 != 0 {
        let pl_var1 = (param_1 + 0x18) as *mut u64;
        let l_var2 = *pl_var1;
        let u_var3 = *(l_var2 as *const u64).add(2); // offset 0x10 is index 2 for u64
        
        if param_3 < u_var3 && (*(l_var2 as *const u64).add(3) < u_var3 + param_3) { // offset 0x18 is index 3
            FUN_18000b330(l_var2, u_var3 * 2);
        }
        
        let pl_var4 = *pl_var1 as *mut u64;
        let mut pl_var5 = pl_var4;
        
        if *pl_var4.add(3) < 0x10 {
            pl_var5 = pl_var1;
        }
        
        let mut pl_var6 = pl_var4;
        if *pl_var4.add(3) < 0x10 {
            pl_var6 = pl_var1;
        }
        
        FUN_18000b5b0(pl_var4, *pl_var4.add(2) + *pl_var5 - *pl_var6, param_2, param_3);
    }
    0
}
extern "C" {
    static DAT_18022bc40: [u32; 256];
    fn FUN_1800108f0(p1: u64, p2: u64);
}

// FUN_18000f8c0
pub unsafe fn crc32_update(param_1: u64, mut param_2: *const u8, mut param_3: u64) {
    let mut u_var2 = *(param_1 as *const u32).add(2); // offset 8 is index 2 for u32
    
    // Process unaligned head
    while (param_2 as u64 & 3) != 0 && param_3 != 0 {
        param_3 -= 1;
        let u_var1 = *param_2 as u32;
        param_2 = param_2.add(1);
        u_var2 = (u_var2 >> 8) ^ DAT_18022bc40[((u_var2 & 0xff) ^ u_var1) as usize];
    }
    
    // Process aligned 4-byte chunks
    let mut param_2_u32 = param_2 as *const u32;
    while param_3 > 3 {
        param_3 -= 4;
        let mut u_var1 = *param_2_u32;
        param_2_u32 = param_2_u32.add(1);
        
        // Loop unrolling for 4 bytes
        u_var2 = (u_var2 ^ u_var1) >> 8 ^ DAT_18022bc40[((u_var2 ^ u_var1) & 0xff) as usize];
        u_var2 = (u_var2 >> 8) ^ DAT_18022bc40[(u_var2 & 0xff) as usize];
        u_var2 = (u_var2 >> 8) ^ DAT_18022bc40[(u_var2 & 0xff) as usize];
        u_var2 = (u_var2 >> 8) ^ DAT_18022bc40[(u_var2 & 0xff) as usize];
    }
    
    // Process unaligned tail
    param_2 = param_2_u32 as *const u8;
    while param_3 != 0 {
        param_3 -= 1;
        let u_var1 = *param_2 as u32;
        param_2 = param_2.add(1);
        u_var2 = (u_var2 >> 8) ^ DAT_18022bc40[((u_var2 & 0xff) ^ u_var1) as usize];
    }
    
    *(param_1 as *mut u32).add(2) = u_var2;
}

// FUN_18000f970
pub unsafe fn crc32_truncated_final(param_1: u64, param_2: u64, param_3: u64) {
    FUN_1800108f0(param_1, param_3);
    
    // Finalize CRC32 (bitwise NOT)
    let p_crc = (param_1 as *mut u32).add(2);
    *p_crc = !(*p_crc);
    
    // Write out the hash
    if param_3 != 0 {
        for u_var1 in 0..param_3 {
            let src = (param_1 as *const u8).add(8 + u_var1 as usize);
            let dst = (param_2 as *mut u8).add(u_var1 as usize);
            *dst = *src;
        }
    }
    
    // Reset CRC32 state
    *p_crc = 0xffffffff;
}

extern "C" {
    static CryptoPP_BlockCipherFinal_1_CryptoPP_Rijndael_Dec_vftable: u8;
    static CryptoPP_BlockCipherFinal_0_CryptoPP_Rijndael_Enc_vftable: u8;
    static CryptoPP_HMAC_CryptoPP_SHA256_vftable: u8;
    static CryptoPP_HMAC_CryptoPP_SHA1_vftable: u8;
    static CryptoPP_HMAC_CryptoPP_SHA512_vftable: u8;
    static CryptoPP_HMAC_CryptoPP_SHA384_vftable: u8;
    static CryptoPP_HMAC_CryptoPP_SHA224_vftable: u8;
    static CryptoPP_SHA512_vftable: u8;
    
    fn FUN_180012230(p1: *mut u64, p2: u64);
    fn FUN_180009c90(p1: *mut u64);
    fn FUN_180012020(p1: *mut u64);
    fn FUN_180009ac0(p1: *mut u64);
}

// FUN_180011df0
pub unsafe fn init_rijndael_dec_final(param_1: u64) {
    let pu_var1 = FUN_1801de680(0x60) as *mut u64;
    FUN_180012230(pu_var1, param_1 - 8);
    *pu_var1 = &CryptoPP_BlockCipherFinal_1_CryptoPP_Rijndael_Dec_vftable as *const _ as u64;
    *pu_var1.add(1) = &CryptoPP_BlockCipherFinal_1_CryptoPP_Rijndael_Dec_vftable as *const _ as u64;
}

// FUN_180011e40
pub unsafe fn init_rijndael_enc_final(param_1: u64) {
    let pu_var1 = FUN_1801de680(0x60) as *mut u64;
    FUN_180012230(pu_var1, param_1 - 8);
    *pu_var1 = &CryptoPP_BlockCipherFinal_0_CryptoPP_Rijndael_Enc_vftable as *const _ as u64;
    *pu_var1.add(1) = &CryptoPP_BlockCipherFinal_0_CryptoPP_Rijndael_Enc_vftable as *const _ as u64;
}

// FUN_180011fd0
pub unsafe fn init_sha1_state(param_1: u64) {
    let p_state = *(param_1 as *const *mut u32).add(25); // offset 200 is index 25 for u64 array -> pointer to u32 array
    *p_state.add(0) = 0x67452301;
    *p_state.add(1) = 0xefcdab89;
    *p_state.add(2) = 0x98badcfe;
    *p_state.add(3) = 0x10325476;
    *p_state.add(4) = 0xc3d2e1f0;
}

// FUN_1800126c0
pub unsafe fn init_hmac_sha256(param_1: *mut u64) {
    *param_1 = &CryptoPP_HMAC_CryptoPP_SHA256_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_HMAC_CryptoPP_SHA256_vftable as *const _ as u64;
    FUN_180009c90(param_1.add(7)); // offset 0x38 = 7 * 8
    
    let memory = *param_1.add(5) as *mut u8; // offset 0x28
    if !memory.is_null() {
        let mut u_var2 = *param_1.add(4); // offset 0x20
        let u_var3 = *param_1.add(3); // offset 0x18
        if u_var3 < u_var2 {
            u_var2 = u_var3;
        }
        
        let mut l_var1 = memory.add(u_var2 as usize);
        while u_var2 != 0 {
            *l_var1.sub(1) = 0;
            l_var1 = l_var1.sub(1);
            u_var2 -= 1;
        }
        free(memory as *mut _);
    }
}

// FUN_180012740
pub unsafe fn init_hmac_sha1(param_1: *mut u64) {
    *param_1 = &CryptoPP_HMAC_CryptoPP_SHA1_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_HMAC_CryptoPP_SHA1_vftable as *const _ as u64;
    FUN_180012020(param_1.add(7)); // offset 0x38 = 7 * 8
    
    let memory = *param_1.add(5) as *mut u8; // offset 0x28
    if !memory.is_null() {
        let mut u_var2 = *param_1.add(4); // offset 0x20
        let u_var3 = *param_1.add(3); // offset 0x18
        if u_var3 < u_var2 {
            u_var2 = u_var3;
        }
        
        let mut l_var1 = memory.add(u_var2 as usize);
        while u_var2 != 0 {
            *l_var1.sub(1) = 0;
            l_var1 = l_var1.sub(1);
            u_var2 -= 1;
        }
        free(memory as *mut _);
    }
}

// FUN_180013710
pub unsafe fn init_hmac_sha512(param_1: *mut u64) {
    *param_1 = &CryptoPP_HMAC_CryptoPP_SHA512_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_HMAC_CryptoPP_SHA512_vftable as *const _ as u64;
    FUN_180009ac0(param_1.add(7)); // offset 0x38 = 7 * 8
    
    let memory = *param_1.add(5) as *mut u8; // offset 0x28
    if !memory.is_null() {
        let mut u_var2 = *param_1.add(4); // offset 0x20
        let u_var3 = *param_1.add(3); // offset 0x18
        if u_var3 < u_var2 {
            u_var2 = u_var3;
        }
        
        let mut l_var1 = memory.add(u_var2 as usize);
        while u_var2 != 0 {
            *l_var1.sub(1) = 0;
            l_var1 = l_var1.sub(1);
            u_var2 -= 1;
        }
        free(memory as *mut _);
    }
}

// FUN_180013790
pub unsafe fn init_hmac_sha384(param_1: *mut u64) {
    *param_1 = &CryptoPP_HMAC_CryptoPP_SHA384_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_HMAC_CryptoPP_SHA384_vftable as *const _ as u64;
    FUN_180009ac0(param_1.add(7)); // offset 0x38 = 7 * 8
    
    let memory = *param_1.add(5) as *mut u8; // offset 0x28
    if !memory.is_null() {
        let mut u_var2 = *param_1.add(4); // offset 0x20
        let u_var3 = *param_1.add(3); // offset 0x18
        if u_var3 < u_var2 {
            u_var2 = u_var3;
        }
        
        let mut l_var1 = memory.add(u_var2 as usize);
        while u_var2 != 0 {
            *l_var1.sub(1) = 0;
            l_var1 = l_var1.sub(1);
            u_var2 -= 1;
        }
        free(memory as *mut _);
    }
}

// FUN_180013810
pub unsafe fn init_hmac_sha224(param_1: *mut u64) {
    *param_1 = &CryptoPP_HMAC_CryptoPP_SHA224_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_HMAC_CryptoPP_SHA224_vftable as *const _ as u64;
    FUN_180009c90(param_1.add(7)); // offset 0x38 = 7 * 8
    
    let memory = *param_1.add(5) as *mut u8; // offset 0x28
    if !memory.is_null() {
        let mut u_var2 = *param_1.add(4); // offset 0x20
        let u_var3 = *param_1.add(3); // offset 0x18
        if u_var3 < u_var2 {
            u_var2 = u_var3;
        }
        
        let mut l_var1 = memory.add(u_var2 as usize);
        while u_var2 != 0 {
            *l_var1.sub(1) = 0;
            l_var1 = l_var1.sub(1);
            u_var2 -= 1;
        }
        free(memory as *mut _);
    }
}

// FUN_180013fa0
pub unsafe fn init_sha512(param_1: *mut u64) -> *mut u64 {
    *param_1.add(1) = 0;
    *param_1.add(2) = 0;
    *param_1.add(0x14) = 0x1fffffffffffffff;
    *(param_1 as *mut u8).add(0x99) = 1;
    *param_1.add(0x16) = param_1.add(3) as u64;
    *param_1.add(0x15) = 0x10;
    *param_1.add(0x28) = 0x1fffffffffffffff;
    *(param_1 as *mut u8).add(0x139) = 1;
    *param_1.add(0x29) = 0x10;
    *param_1.add(0x2a) = param_1.add(0x17) as u64;
    *param_1.add(0x17) = 0x6a09e667f3bcc908;
    *param_1.add(0x18) = 0xbb67ae8584caa73b;
    *param_1.add(0x19) = 0x3c6ef372fe94f82b;
    *param_1.add(0x1a) = 0xa54ff53a5f1d36f1;
    *param_1.add(0x1b) = 0x510e527fade682d1;
    *param_1.add(0x1c) = 0x9b05688c2b3e6c1f;
    *param_1.add(0x1d) = 0x1f83d9abfb41bd6b;
    *param_1.add(0x1e) = 0x5be0cd19137e2179;
    *param_1 = &CryptoPP_SHA512_vftable as *const _ as u64;
    param_1
}

// FUN_180014130
pub unsafe fn init_sha512_state(param_1: u64) {
    let pu_var1 = *(param_1 as *const *mut u64).add(0x2a); // offset 0x150 is index 42 for u64 array
    *pu_var1 = 0x6a09e667f3bcc908;
    *pu_var1.add(1) = 0xbb67ae8584caa73b;
    *pu_var1.add(2) = 0x3c6ef372fe94f82b;
    *pu_var1.add(3) = 0xa54ff53a5f1d36f1;
    *pu_var1.add(4) = 0x510e527fade682d1;
    *pu_var1.add(5) = 0x9b05688c2b3e6c1f;
    *pu_var1.add(6) = 0x1f83d9abfb41bd6b;
    *pu_var1.add(7) = 0x5be0cd19137e2179;
}

extern "C" {
    static CryptoPP_FilterPutSpaceHelper_vftable: u8;
    static CryptoPP_StreamTransformationFilter_vftable: u8;
    static CryptoPP_HashFilter_vftable: u8;
    static CryptoPP_OutputProxy_vftable: u8;
    static CryptoPP_FilterWithBufferedInput_vftable: u8;
    static CryptoPP_ProxyFilter_vftable: u8;
    fn FUN_180008190(p1: *mut u64);
    fn FUN_18000b2c0(p1: *mut u64);
    
    fn __RTDynamicCast(
        p1: u64, 
        p2: u32, 
        p3: *const u8, 
        p4: *const u8, 
        p5: u32
    ) -> u64;
    static CryptoPP_StreamTransformation_RTTI_Type_Descriptor: u8;
    static CryptoPP_AuthenticatedSymmetricCipher_RTTI_Type_Descriptor: u8;
    static CryptoPP_AlgorithmParametersTemplate_CryptoPP_BlockPaddingSchemeDef_BlockPaddingScheme_vftable: u8;
}

// FUN_180015cd0
pub unsafe fn init_filter_put_space_helper(param_1: *mut u64, param_2: u32) -> *mut u64 {
    *param_1 = &CryptoPP_FilterPutSpaceHelper_vftable as *const _ as u64;
    let memory = *param_1.add(4) as *mut u8;
    if !memory.is_null() {
        let mut u_var2 = *param_1.add(3);
        let u_var3 = *param_1.add(2);
        if u_var3 < u_var2 {
            u_var2 = u_var3;
        }
        let mut l_var1 = memory.add(u_var2 as usize);
        while u_var2 != 0 {
            *l_var1.sub(1) = 0;
            l_var1 = l_var1.sub(1);
            u_var2 -= 1;
        }
        free(memory as *mut _);
    }
    if param_2 & 1 != 0 {
        free(param_1 as *mut _);
    }
    param_1
}

// FUN_180015d80
pub unsafe fn init_stream_transformation_filter(param_1: *mut u64) {
    *param_1 = &CryptoPP_StreamTransformationFilter_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_StreamTransformationFilter_vftable as *const _ as u64;
    *param_1.add(0x12) = &CryptoPP_FilterPutSpaceHelper_vftable as *const _ as u64;
    
    let memory = *param_1.add(0x16) as *mut u8;
    if !memory.is_null() {
        let mut u_var2 = *param_1.add(0x15);
        let u_var3 = *param_1.add(0x14);
        if u_var3 < u_var2 {
            u_var2 = u_var3;
        }
        let mut l_var1 = memory.add(u_var2 as usize);
        while u_var2 != 0 {
            *l_var1.sub(1) = 0;
            l_var1 = l_var1.sub(1);
            u_var2 -= 1;
        }
        free(memory as *mut _);
    }
    FUN_180008190(param_1);
}

// FUN_180015e70
pub unsafe fn init_hash_filter(param_1: *mut u64) {
    *param_1 = &CryptoPP_HashFilter_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_HashFilter_vftable as *const _ as u64;
    *param_1.add(6) = &CryptoPP_HashFilter_vftable as *const _ as u64;
    
    FUN_18000b2c0(param_1.add(0x12));
    FUN_18000b2c0(param_1.add(0xe));
    
    *param_1.add(6) = &CryptoPP_FilterPutSpaceHelper_vftable as *const _ as u64;
    
    let memory = *param_1.add(10) as *mut u8;
    if !memory.is_null() {
        let mut u_var3 = *param_1.add(9);
        let u_var4 = *param_1.add(8);
        if u_var4 < u_var3 {
            u_var3 = u_var4;
        }
        let mut l_var1 = memory.add(u_var3 as usize);
        while u_var3 != 0 {
            *l_var1.sub(1) = 0;
            l_var1 = l_var1.sub(1);
            u_var3 -= 1;
        }
        free(memory as *mut _);
    }
    
    let pu_var2 = *param_1.add(3) as *mut u64;
    if !pu_var2.is_null() {
        let vtable = *pu_var2 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(pu_var2, 1);
    }
}

// FUN_180016380
pub unsafe fn init_output_proxy(param_1: *mut u64, param_2: u64) -> *mut u64 {
    *param_1 = &CryptoPP_OutputProxy_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_OutputProxy_vftable as *const _ as u64;
    if param_2 & 1 != 0 {
        free(param_1 as *mut _);
    }
    param_1
}

// FUN_180017080
pub unsafe fn init_filter_with_buffered_input(
    param_1: *mut u64,
    param_2: *mut u64,
    param_3: u64,
    param_4: u64,
    param_5: u64
) -> *mut u64 {
    *param_1.add(3) = param_5;
    *param_1.add(4) = 0;
    *(param_1.add(5) as *mut u32) = 0;
    
    *param_1 = &CryptoPP_FilterWithBufferedInput_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_FilterWithBufferedInput_vftable as *const _ as u64;
    
    *param_1.add(6) = 0;
    *param_1.add(7) = 1;
    *param_1.add(8) = 0;
    *(param_1.add(9) as *mut u8) = 0;
    *param_1.add(0xb) = 0xffffffffffffffff;
    *param_1.add(0xc) = 0;
    *param_1.add(0xd) = 0;
    
    let l_var1 = *param_1.add(6);
    if l_var1 != 0xffffffffffffffff && *param_1.add(7) != 0 {
        *param_1.add(0xe) = 1;
        *param_1.add(0xf) = l_var1;
        *param_1.add(0x10) = 0;
        *param_1.add(0x11) = *param_1.add(0xd);
        
        *param_1 = &CryptoPP_ProxyFilter_vftable as *const _ as u64;
        *param_1.add(1) = &CryptoPP_ProxyFilter_vftable as *const _ as u64;
        *param_1.add(0x12) = param_2 as u64;
        
        if !param_2.is_null() {
            let l_var1_2 = *param_2;
            let pu_var2 = FUN_1801de680(0x28) as *mut u64;
            *pu_var2 = &CryptoPP_OutputProxy_vftable as *const _ as u64;
            *pu_var2.add(1) = &CryptoPP_OutputProxy_vftable as *const _ as u64;
            *pu_var2.add(3) = param_1 as u64;
            *(pu_var2.add(4) as *mut u8) = 0;
            
            let vtable_160 = *(l_var1_2 as *const *const extern "C" fn(*mut u64, *mut u64)).add(0x2c); // offset 0x160 is index 44
            vtable_160(param_2, pu_var2);
        }
        return param_1;
    }
    param_1
}

// FUN_1800173b0
pub unsafe fn init_stream_transformation_filter_full(
    param_1: *mut u64,
    param_2: u64,
    param_3: u64
) -> *mut u64 {
    *param_1.add(3) = param_3;
    *param_1.add(4) = 0;
    *(param_1.add(5) as *mut u32) = 0;
    *param_1.add(6) = 0xffffffffffffffff;
    *param_1.add(7) = 0;
    *param_1.add(8) = 0xffffffffffffffff;
    *(param_1.add(9) as *mut u8) = 0;
    *param_1.add(0xb) = 0xffffffffffffffff;
    *param_1.add(0xc) = 0;
    *param_1.add(0xd) = 0;
    *param_1.add(0x14) = 0xffffffffffffffff;
    *param_1.add(0x15) = 0;
    *param_1.add(0x16) = 0;
    
    *param_1 = &CryptoPP_StreamTransformationFilter_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_StreamTransformationFilter_vftable as *const _ as u64;
    *param_1.add(0x12) = &CryptoPP_StreamTransformationFilter_vftable as *const _ as u64;
    *param_1.add(0x18) = param_2;
    *(param_1.add(0x19) as *mut u32) = 5;
    
    let l_var5 = __RTDynamicCast(
        param_2,
        0,
        &CryptoPP_StreamTransformation_RTTI_Type_Descriptor as *const _ as *const u8,
        &CryptoPP_AuthenticatedSymmetricCipher_RTTI_Type_Descriptor as *const _ as *const u8,
        0
    );
    
    if l_var5 != 0 {
        // Exception throwing omitted
    }
    
    let l_var18 = *(*param_1.add(0x18) as *const *mut u64);
    let vtable_20 = *(l_var18.add(4) as *const extern "C" fn() -> u32);
    let u_var4_1 = vtable_20();
    let p_cc = (param_1 as *mut u8).add(0xcc) as *mut u32;
    *p_cc = u_var4_1;
    
    let vtable_28 = *(l_var18.add(5) as *const extern "C" fn() -> u32);
    let u_var4_2 = vtable_28();
    *(param_1.add(0x1a) as *mut u32) = u_var4_2;
    
    let vtable_58 = *(l_var18.add(11) as *const extern "C" fn() -> u8);
    let c_var2 = vtable_58();
    
    let u_var3 = if c_var2 == 0 || *p_cc < 2 { 0 } else { 1 };
    *(param_1 as *mut u8).add(0x1b) = u_var3; // offset 0x1b
    
    let mut u_var6 = *p_cc * 2;
    let p_1a = param_1.add(0x1a) as *mut u32;
    if u_var6 < *p_1a {
        u_var6 = *p_1a;
    }
    let p_d4 = (param_1 as *mut u8).add(0xd4) as *mut u32;
    *p_d4 = u_var6;
    
    let local_90 = FUN_1801de680(0x28) as *mut u64;
    *local_90.add(1) = b"BlockPaddingScheme\0".as_ptr() as u64;
    *(local_90.add(2) as *mut u16) = 1;
    *local_90 = &CryptoPP_AlgorithmParametersTemplate_CryptoPP_BlockPaddingSchemeDef_BlockPaddingScheme_vftable as *const _ as u64;
    *(local_90.add(4) as *mut u32) = 5;
    *local_90.add(3) = 0;
    
    if !local_90.is_null() {
        let vtable = *local_90 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(local_90, 1);
    }
    param_1
}

extern "C" {
    fn FUN_18000a650(p1: *mut u64, p2: *const u8);
    static DAT_1802a4bd8: u8;
}

// FUN_180018070
pub unsafe fn init_hash_filter_full(
    param_1: *mut u64,
    param_2: u64,
    param_3: u64
) -> *mut u64 {
    *param_1.add(3) = 0;
    *param_1.add(4) = 0;
    *(param_1.add(5) as *mut u32) = 0;
    *param_1.add(8) = 0xffffffffffffffff;
    *param_1.add(9) = 0;
    *param_1.add(10) = 0;
    
    *param_1 = &CryptoPP_HashFilter_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_HashFilter_vftable as *const _ as u64;
    *param_1.add(6) = &CryptoPP_HashFilter_vftable as *const _ as u64;
    
    *param_1.add(0xb) = param_2; // offset 0x58 = index 11
    *(param_1 as *mut u8).add(0x60) = 0; // offset 0x60
    
    let p_64 = (param_1 as *mut u8).add(0x64) as *mut u32; // offset 0x64
    *p_64 = 0;
    
    *param_1.add(0xd) = 0; // offset 0x68
    
    // offset 0xe = 14 * 8 = 112 = 0x70
    FUN_18000a650(param_1.add(0xe), &DAT_1802a4bd8 as *const u8);
    // offset 0x12 = 18 * 8 = 144 = 0x90
    FUN_18000a650(param_1.add(0x12), &DAT_1802a4bd8 as *const u8);
    
    let l_var_b = *param_1.add(0xb);
    let vtable_40 = *(l_var_b as *const *const extern "C" fn() -> u32).add(8); // offset 0x40
    let u_var2 = vtable_40();
    
    *p_64 = u_var2;
    
    let pu_var1 = *param_1.add(3) as *mut u64;
    if !pu_var1.is_null() {
        let vtable = *pu_var1 as *const extern "C" fn(*mut u64, u32);
        (*vtable)(pu_var1, 1);
    }
    
    *param_1.add(3) = param_3;
    param_1
}

extern "C" {
    static CryptoPP_MessageQueue_vftable: u8;
    static CryptoPP_ByteQueue_vftable: u8;
    fn FUN_180028c00();
}

// FUN_180019540
pub unsafe fn destroy_message_queue(param_1: *mut u64) {
    *param_1 = &CryptoPP_MessageQueue_vftable as *const _ as u64;
    *param_1.add(1) = &CryptoPP_MessageQueue_vftable as *const _ as u64;
    
    destroy_sec_byte_block(param_1.add(0x12));
    let pv_var1 = *param_1.add(0x12) as *mut u8;
    *param_1.add(0x12) = 0;
    free(pv_var1 as *mut _);
    
    destroy_sec_byte_block(param_1.add(0xd));
    let pv_var2 = *param_1.add(0xd) as *mut u8;
    *param_1.add(0xd) = 0;
    free(pv_var2 as *mut _);
    
    *param_1.add(4) = &CryptoPP_ByteQueue_vftable as *const _ as u64;
    *param_1.add(5) = &CryptoPP_ByteQueue_vftable as *const _ as u64;
    
    FUN_180028c00();
}

// FUN_180019c10
pub unsafe fn destroy_sec_byte_block(param_1: *mut u64) {
    let mut l_var3 = *param_1.add(4); // 0x20 offset
    if l_var3 != 0 {
        loop {
            l_var3 -= 1;
            *param_1.add(4) = l_var3;
            if l_var3 == 0 { break; }
        }
        *param_1.add(3) = 0; // 0x18 offset
    }
    
    if *param_1.add(1) != 0 {
        let mut l_var3_2 = *param_1.add(2); // 0x10 offset
        while l_var3_2 > 0 {
            let l_var5 = l_var3_2 - 1;
            let memory = *(*param_1.add(1) as *mut *mut u8).add(l_var3_2 as usize - 1);
            l_var3_2 = l_var5;
            if !memory.is_null() {
                free(memory as *mut _);
            }
        }
        let memory_00 = *param_1.add(1) as *mut u8;
        // In real C++ this checks size for swi(0x29) aligned free, we just free
        free(memory_00 as *mut _);
        *param_1.add(1) = 0;
        *param_1.add(2) = 0;
    }
}
