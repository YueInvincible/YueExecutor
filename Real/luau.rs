use std::ffi::CStr;
use std::os::raw::c_char;
use std::ptr;

pub static mut DAT_1802b30f0: *mut u8 = ptr::null_mut();
pub static mut DAT_1802b30e8: *mut u8 = ptr::null_mut();

// FUN_1800020b0
// Iterates through linked lists and updates fields for "LuauExportValueSyntax"
pub unsafe fn mark_luau_export_value_syntax() {
    let mut curr_node1 = DAT_1802b30f0;
    let mut curr_node2 = DAT_1802b30e8;

    while !curr_node1.is_null() {
        let str_ptr = *(curr_node1.add(8) as *const *const c_char);
        if !str_ptr.is_null() {
            let c_str = CStr::from_ptr(str_ptr);
            if c_str.to_bytes() == b"LuauExportValueSyntax" {
                *(curr_node1.add(0x18) as *mut u32) = 3;
            }
        }
        curr_node1 = *(curr_node1.add(0x10) as *const *mut u8);
    }

    while !curr_node2.is_null() {
        let str_ptr = *(curr_node2.add(8) as *const *const c_char);
        if !str_ptr.is_null() {
            let c_str = CStr::from_ptr(str_ptr);
            if c_str.to_bytes() == b"LuauExportValueSyntax" {
                *(curr_node2.add(0x18) as *mut u32) = 3;
            }
        }
        curr_node2 = *(curr_node2.add(0x10) as *const *mut u8);
    }
}

pub static mut DAT_1802b0a70: u64 = 0;
pub static mut DAT_1802b0ab0: u64 = 0;

extern "C" {
    fn FUN_180050800(p: *mut u64, a2: *mut u32, a3: *mut u8);
    fn FUN_180052530(p: *mut u64, end: *mut u8, curr: *mut u64);
    fn FUN_1801dec00(p: *mut u64, size: usize, count: usize, thunk: *const u8);
    fn FUN_1801debc0(cb: *const u8);
    
    static thunk_FUN_18000b2c0: u8;
    static FUN_1801ec6b0: u8;
    static FUN_1801ec6d0: u8;
}

// FUN_180002280
pub unsafe fn register_luau_math_metamethods() {
    let mut local_res8: [u8; 8] = [0; 8];
    let mut local_res10: [u32; 2] = [0; 2];
    
    // In original C, it constructs a 16-element array of strings/structs on stack,
    // where each is 0x20 bytes (total 0x200 bytes). We approximate it here.
    let mut array_buf: [u64; 64] = [0; 64]; 
    let start_ptr = array_buf.as_mut_ptr();
    let end_ptr = start_ptr.add(64);

    // Initializing strings internally is complex in C pseudocode. 
    // We will just invoke the initialization functions with the layout.
    local_res10[0] = 0;
    FUN_180050800(&mut DAT_1802b0a70, local_res10.as_mut_ptr(), local_res8.as_mut_ptr());
    
    let mut curr_ptr = start_ptr;
    while curr_ptr != end_ptr {
        FUN_180052530(&mut DAT_1802b0a70, end_ptr as *mut u8, curr_ptr);
        curr_ptr = curr_ptr.add(4); // 0x20 bytes increment
    }
    
    FUN_1801dec00(start_ptr, 0x20, 0x10, &thunk_FUN_18000b2c0 as *const _);
    FUN_1801debc0(&FUN_1801ec6b0 as *const _);
}

// FUN_180002620
pub unsafe fn register_luau_core_metamethods() {
    let mut local_res8: [u8; 8] = [0; 8];
    let mut local_res10: [u32; 2] = [0; 2];
    
    // 5 elements of 0x20 bytes
    let mut array_buf: [u64; 20] = [0; 20]; 
    let start_ptr = array_buf.as_mut_ptr();
    let end_ptr = start_ptr.add(20);

    local_res10[0] = 0;
    FUN_180050800(&mut DAT_1802b0ab0, local_res10.as_mut_ptr(), local_res8.as_mut_ptr());
    
    let mut curr_ptr = start_ptr;
    while curr_ptr != end_ptr {
        FUN_180052530(&mut DAT_1802b0ab0, end_ptr as *mut u8, curr_ptr);
        curr_ptr = curr_ptr.add(4); // 0x20 bytes increment
    }
    
    FUN_1801dec00(start_ptr, 0x20, 5, &thunk_FUN_18000b2c0 as *const _);
    FUN_1801debc0(&FUN_1801ec6d0 as *const _);
}

// FUN_180003670
pub unsafe fn mark_luau_direct_field_get() {
    let mut curr_node1 = DAT_1802b30f0;
    let mut curr_node2 = DAT_1802b30e8;

    while !curr_node1.is_null() {
        let str_ptr = *(curr_node1.add(8) as *const *const c_char);
        if !str_ptr.is_null() {
            let c_str = CStr::from_ptr(str_ptr);
            if c_str.to_bytes() == b"LuauDirectFieldGet" {
                *(curr_node1.add(0x18) as *mut u32) = 3;
            }
        }
        curr_node1 = *(curr_node1.add(0x10) as *const *mut u8);
    }

    while !curr_node2.is_null() {
        let str_ptr = *(curr_node2.add(8) as *const *const c_char);
        if !str_ptr.is_null() {
            let c_str = CStr::from_ptr(str_ptr);
            if c_str.to_bytes() == b"LuauDirectFieldGet" {
                *(curr_node2.add(0x18) as *mut u32) = 3;
            }
        }
        curr_node2 = *(curr_node2.add(0x10) as *const *mut u8);
    }
}

extern "C" {
    static RealVM_ParseError_vftable: u8;
    static std_exception_vftable: u8;
    fn __std_exception_destroy(p: *mut u64);
    fn __std_exception_copy(p: *mut u64);
    fn _CxxThrowException(p: *mut u64, info: *const u8);
    static DAT_18029efe0: u8; // ThrowInfo
    fn FUN_18000da80(p: *mut u64);
    fn FUN_18004f250(p: *mut u64);
    fn FUN_18004f510(p: *mut u64);
    fn FUN_18004f570(p: *mut u64);
    fn FUN_18004f600(p: *mut u64);
    fn FUN_18004f680(p: *mut u64);
    fn FUN_18004f700(p: *mut u64);
    fn FUN_18004f7c0(p: *mut u64);
    fn FUN_18004f840(p: *mut u64);
    fn FUN_18004f8a0(p: *mut u64);
    fn FUN_180050ba0(p: *mut u64);
    fn FUN_18004fc80(p: *mut u64);
    fn FUN_18004fd00(p: *mut u64);
    fn free(p: *mut std::ffi::c_void);
}

// FUN_180036b00
pub unsafe fn init_parse_error(
    param_1: *mut u64,
    param_2: *mut u64,
    param_3: *mut u32
) -> *mut u64 {
    *param_1.add(1) = 0;
    *param_1.add(2) = 0;
    *param_1 = &RealVM_ParseError_vftable as *const _ as u64;
    
    let u_var4 = *param_2.add(1);
    *param_1.add(3) = *param_2;
    *param_1.add(4) = u_var4;
    *param_1.add(5) = 0;
    *param_1.add(6) = 0;
    *param_1.add(7) = 0;
    *param_1.add(8) = 0;
    
    let u_var1 = *param_3.add(1);
    let u_var2 = *param_3.add(2);
    let u_var3 = *param_3.add(3);
    
    let p_u32 = param_1 as *mut u32;
    *p_u32.add(10) = *param_3;
    *p_u32.add(11) = u_var1;
    *p_u32.add(12) = u_var2;
    *p_u32.add(13) = u_var3;
    
    let u_var1_2 = *param_3.add(5);
    let u_var2_2 = *param_3.add(6);
    let u_var3_2 = *param_3.add(7);
    
    *p_u32.add(14) = *param_3.add(4);
    *p_u32.add(15) = u_var1_2;
    *p_u32.add(16) = u_var2_2;
    *p_u32.add(17) = u_var3_2;
    
    *(param_3 as *mut u8) = 0;
    *(param_3 as *mut u64).add(2) = 0;
    *(param_3 as *mut u64).add(3) = 0xf;
    // We assume FUN_18000b2c0 is string destruction or similar
    // FUN_18000b2c0(param_3 as *mut u64);
    
    param_1
}

// FUN_180036b70
pub unsafe fn destroy_parse_error(param_1: *mut u64, param_2: u64) -> *mut u64 {
    // FUN_18000b2c0(param_1.add(5));
    *param_1 = &std_exception_vftable as *const _ as u64;
    __std_exception_destroy(param_1.add(1));
    if (param_2 & 1) != 0 {
        free(param_1 as *mut _);
    }
    param_1
}

// FUN_180036c60
pub unsafe fn copy_parse_error(param_1: *mut u64, param_2: *mut u64) -> *mut u64 {
    *param_1 = &std_exception_vftable as *const _ as u64;
    *param_1.add(1) = 0;
    *param_1.add(2) = 0;
    __std_exception_copy(param_2.add(1)); // param_2 + 8
    
    *param_1 = &RealVM_ParseError_vftable as *const _ as u64;
    
    let p1_u32 = param_1 as *mut u32;
    let p2_u32 = param_2 as *mut u32;
    
    let u_var1 = *p2_u32.add(7); // 0x1c
    let u_var2 = *p2_u32.add(8); // 0x20
    let u_var3 = *p2_u32.add(9); // 0x24
    
    *p1_u32.add(6) = *p2_u32.add(6); // 0x18
    *p1_u32.add(7) = u_var1; // 0x1c
    *p1_u32.add(8) = u_var2; // 0x20
    *p1_u32.add(9) = u_var3; // 0x24
    
    // FUN_18000a650(param_1.add(5), param_2.add(5));
    param_1
}

// FUN_180036f00
pub unsafe fn destroy_parser(param_1: *mut u64) {
    if !(*(param_1.add(0x4a8 / 8) as *mut *mut u8)).is_null() {
        free(*(param_1.add(0x4a8 / 8) as *mut *mut u8) as *mut _);
        *param_1.add(0x4a8 / 8) = 0;
        *param_1.add(0x4b0 / 8) = 0;
    }
    // Omitted massive list of array destructors (FUN_18004f250 etc) to match Ghidra output
    FUN_18004f250(param_1.add(0x470 / 8));
    FUN_18004f250(param_1.add(0x458 / 8));
    FUN_18004f250(param_1.add(0x440 / 8));
    FUN_18004f510(param_1.add(0x428 / 8));
    FUN_18004f250(param_1.add(0x410 / 8));
    FUN_18004f250(param_1.add(0x3f8 / 8));
    FUN_18004f570(param_1.add(0x3e0 / 8));
    FUN_18004f600(param_1.add(0x3c8 / 8));
    FUN_18004f680(param_1.add(0x3b0 / 8));
    FUN_18004f700(param_1.add(0x398 / 8));
    FUN_18004f7c0(param_1.add(0x380 / 8));
    FUN_18004f840(param_1.add(0x368 / 8));
    FUN_18004f250(param_1.add(0x350 / 8));
    FUN_18004f7c0(param_1.add(0x338 / 8));
    FUN_18004f7c0(param_1.add(800 / 8));
    FUN_18004f250(param_1.add(0x308 / 8));
    FUN_18004f8a0(param_1.add(0x2f0 / 8));
    FUN_18004f250(param_1.add(0x2d8 / 8));
    FUN_18004f250(param_1.add(0x2c0 / 8));
    FUN_18004f250(param_1.add(0x2a8 / 8));
    FUN_18004f250(param_1.add(0x290 / 8));
    FUN_18004f840(param_1.add(0x278 / 8));
    FUN_18004f840(param_1.add(0x260 / 8));
    FUN_18004f250(param_1.add(0x248 / 8));
    FUN_18004f250(param_1.add(0x230 / 8));
    
    if !(*(param_1.add(0x200 / 8) as *mut *mut u8)).is_null() {
        free(*(param_1.add(0x200 / 8) as *mut *mut u8) as *mut _);
        *param_1.add(0x200 / 8) = 0;
        *param_1.add(0x208 / 8) = 0;
    }
    FUN_18000da80(param_1.add(0x1e8 / 8));
    FUN_180050ba0(param_1.add(0x1d0 / 8));
    if !(*(param_1.add(0x1a8 / 8) as *mut *mut u8)).is_null() {
        free(*(param_1.add(0x1a8 / 8) as *mut *mut u8) as *mut _);
        *param_1.add(0x1a8 / 8) = 0;
        *param_1.add(0x1b0 / 8) = 0;
    }
    FUN_18004f250(param_1.add(400 / 8));
    if !(*(param_1.add(0x168 / 8) as *mut *mut u8)).is_null() {
        free(*(param_1.add(0x168 / 8) as *mut *mut u8) as *mut _);
        *param_1.add(0x168 / 8) = 0;
        *param_1.add(0x170 / 8) = 0;
    }
    FUN_18004f250(param_1.add(0x148 / 8));
    FUN_18004fd00(param_1.add(0xf8 / 8));
    FUN_18004fc80(param_1.add(0xe0 / 8));
    FUN_18000da80(param_1.add(0xc0 / 8));
    
    if *(param_1 as *const u8).add(0x50) != 0 {
        FUN_18004f250(param_1.add(0x30 / 8));
        if !(*(param_1.add(8 / 8) as *mut *mut u8)).is_null() {
            free(*(param_1.add(8 / 8) as *mut *mut u8) as *mut _);
            *param_1.add(8 / 8) = 0;
            *param_1.add(0x10 / 8) = 0;
        }
    }
}

// FUN_180037150
pub unsafe fn destroy_ast_allocator_sub(param_1: *mut u64) {
    if !(*(param_1.add(0x58 / 8) as *mut *mut u8)).is_null() {
        free(*(param_1.add(0x58 / 8) as *mut *mut u8) as *mut _);
        *param_1.add(0x58 / 8) = 0;
        *param_1.add(0x60 / 8) = 0;
    }
    FUN_18004fc80(param_1.add(0x40 / 8));
    FUN_180050ba0(param_1.add(0x28 / 8));
    FUN_18004fd00(param_1.add(0x10 / 8));
}

extern "C" {
    static RealVM_AstStatBlock_vftable: u8;
    static DAT_1802b32a0: u32;
    fn FUN_1801de680(size: usize) -> *mut u64;
    fn FUN_18004ebc0(p1: *mut u64, p2: *mut u64, p3: u64, p4: u64);
}

// FUN_180037d20
pub unsafe fn copy_ast_struct_state(param_1: *mut u8, param_2: *const u8) -> *mut u8 {
    *param_1 = *param_2;
    *param_1.add(1) = *param_2.add(1);
    *param_1.add(0x50) = 0;
    if *param_2.add(0x50) != 0 {
        // FUN_180053f70(param_1 + 8, param_2 + 8)
        *param_1.add(0x50) = 1;
    }
    *param_1.add(0x58) = *param_2.add(0x58);
    *param_1.add(0x59) = *param_2.add(0x59);
    param_1
}

// FUN_180037d90
pub unsafe fn ast_parse_block_wrapper(param_1: *mut u64) -> *mut u64 {
    let l_var1 = *param_1.add(0x198 / 8);
    let l_var2 = *param_1.add(400 / 8);
    let u_var3 = parse_ast_stat_block(param_1);
    // FUN_18004da30(param_1, ((l_var1 - l_var2) >> 3) & 0xffffffff);
    u_var3
}

// FUN_180037de0
pub unsafe fn parse_ast_stat_block(param_1: *mut u64) -> *mut u64 {
    let pl_var2 = param_1.add(0x248 / 8);
    let mut l_var10 = (*param_1.add(0x250 / 8) - *pl_var2) >> 3;
    let local_58 = 0;
    let u_var4 = *param_1.add(0xa8 / 8);
    
    // (While loop that parses statements would go here, updating local_58 and l_var10)
    
    let u_var6 = *param_1.add(0x84 / 8);
    let pl_var5 = *param_1.add(0xd8 / 8) as *mut *mut u64;
    
    let mut l_var8 = 0;
    if local_58 != 0 {
        l_var8 = *pl_var2 + l_var10 * 8;
    }
    
    let mut local_78: u64 = 0;
    FUN_18004ebc0(param_1, &mut local_78 as *mut u64, l_var8, local_58);
    
    l_var8 = *pl_var5 as u64;
    let mut pl_var9: *mut u64;
    
    if l_var8 == 0 || (((*pl_var5).add(1) as u64 + 0xf + l_var8) & 0xfffffffffffffff8) + 0x2008 < (pl_var5 as u64 + 8) {
        pl_var9 = FUN_1801de680(0x2008);
        *pl_var9 = *pl_var5 as u64;
        *pl_var5 = pl_var9;
        pl_var9 = pl_var9.add(1);
        l_var8 = 0x40;
    } else {
        pl_var9 = (((*pl_var5).add(1) as u64 + 0xf + l_var8) & 0xfffffffffffffff8) as *mut u64;
        l_var8 = (pl_var9 as u64) + (0x40 - (l_var8 + 8));
    }
    
    *pl_var5.add(1) = l_var8;
    *(pl_var9 as *mut u32).add(2) = DAT_1802b32a0; // plVar9 + 1
    *pl_var9.add(1) = (*(pl_var9 as *mut u32).add(2) as u64) | ((u_var4 << 32) as u64); // mock layout
    *(pl_var9 as *mut u8).add(0xc) = (u_var4 & 0xff) as u8;
    *(pl_var9 as *mut u8).add(0x14) = (u_var6 & 0xff) as u8;
    *(pl_var9 as *mut u8).add(0x20) = 0; // plVar9 + 4
    
    *pl_var9 = &RealVM_AstStatBlock_vftable as *const _ as u64;
    *pl_var9.add(5) = local_78;
    *pl_var9.add(6) = 0; // lStack_70
    *(pl_var9 as *mut u8).add(0x38) = 1; // plVar9 + 7
    
    l_var10 = *pl_var2 + l_var10 * 8;
    if l_var10 != *param_1.add(0x250 / 8) {
        *param_1.add(0x250 / 8) = l_var10;
    }
    
    pl_var9
}

extern "C" {
    static RealVM_AstStatWhile_vftable: u8;
    static RealVM_AstStatFunction_vftable: u8;
    static RealVM_AstStatIf_vftable: u8;
    
    static DAT_1802b31c4: u32;
    static DAT_1802b3270: u32;
    static DAT_1802b32cc: u32;
    static DAT_1802b3200: u32;
    
    fn FUN_18004e680(p1: *mut u64);
    fn FUN_18004e680_arg(p1: *mut u64, a2: u32);
    fn FUN_180047340(p1: *mut u64, a2: u32) -> u64;
    fn FUN_18004db00(p1: *mut u64, a2: u32, s: *const u8) -> u8;
    fn FUN_18004dec0(p1: *mut u64, a2: u32, p3: *mut i32) -> u8;
    fn FUN_18004fe90(p1: *mut u64, p2: *mut *mut u64) -> *mut *mut u64;
}

// FUN_180037ff0 - Switch case 0x125 (While)
pub unsafe fn parse_ast_stat_while(param_1: *mut u64) -> *mut u64 {
    let uStack_64 = *(param_1 as *mut u32).add(0x84 / 4);
    let uStack_60 = *(param_1 as *mut u32).add(0x88 / 4);
    let local_78 = *param_1.add(0x84 / 8);
    let uStack_5c = *(param_1 as *mut u32).add(0x8c / 4);
    let uStack_58 = *(param_1 as *mut u32).add(0x90 / 4);
    let uStack_70 = *param_1.add(0x8c / 8);
    
    FUN_18004e680_arg(param_1, uStack_64);
    let u_var2 = *param_1.add(0x84 / 8);
    let pl_var12 = ast_parse_block_wrapper(param_1);
    *pl_var12.add(0xc / 8) = local_78; // offset 0xc
    
    let mut local_88_0_8_ = *param_1.add(0x84 / 8);
    let mut local_88_8_8_ = *param_1.add(0x8c / 8);
    let mut local_98 = 0x125;
    let c_var6 = FUN_18004dec0(param_1, 0x128, &mut local_98);
    
    *(pl_var12 as *mut u8).add(7) = c_var6;
    if c_var6 != 0 {
        *pl_var12.add(0x14 / 8) = local_88_8_8_; // offset 0x14
    }
    
    if *(param_1 as *mut u8).add(0x58) != 0 {
        let pl_var10 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
        let mut u_var18 = local_88_0_8_;
        if c_var6 == 0 {
            u_var18 = 0xffffffffffffffff;
        }
        
        let mut l_var14 = *pl_var10 as u64;
        let mut pl_var17: *mut u64;
        if l_var14 == 0 || (((*pl_var10).add(1) as u64 + 0xf + l_var14) & 0xfffffffffffffff8) + 0x2008 < (pl_var10 as u64 + 0x14) {
            let pl_var11 = FUN_1801de680(0x2008);
            *pl_var11 = *pl_var10 as u64;
            pl_var17 = pl_var11.add(1);
            *pl_var10 = pl_var11 as *mut u64;
            l_var14 = 0x14;
        } else {
            pl_var17 = (((*pl_var10).add(1) as u64 + 0xf + l_var14) & 0xfffffffffffffff8) as *mut u64;
            l_var14 = (pl_var17 as u64) + (0x14 - (l_var14 + 8));
        }
        
        *pl_var10.add(1) = l_var14;
        *(pl_var17 as *mut u32) = DAT_1802b32d0;
        *pl_var17.add(4 / 8) = u_var2;
        *pl_var17.add(0xc / 8) = u_var18;
        
        let mut local_res8 = pl_var12;
        let pu_var9 = FUN_18004fe90(param_1.add(0x4a8 / 8), &mut local_res8);
        *pu_var9 = pl_var17;
    }
    
    pl_var12
}

// FUN_180037ff0 - Switch case 299 (Function)
pub unsafe fn parse_ast_stat_function(param_1: *mut u64) -> *mut u64 {
    // Highly abridged mapping to show structure
    FUN_18004e680(param_1);
    
    let mut local_res8: u64 = 0;
    let mut local_res10: u64 = 0;
    // let l_var14 = FUN_180039d20(param_1, &mut local_res8, &mut local_res10);
    // ...
    // let l_var13 = ...
    let l_var13: u64 = 0;
    let l_var14: u64 = 0;
    
    let pl_var10 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var8 = *pl_var10 as u64;
    let mut pl_var12: *mut u64;
    
    if l_var8 == 0 || (((*pl_var10).add(1) as u64 + 0xf + l_var8) & 0xfffffffffffffff8) + 0x2008 < (pl_var10 as u64 + 0x38) {
        let pl_var17 = FUN_1801de680(0x2008);
        *pl_var17 = *pl_var10 as u64;
        pl_var12 = pl_var17.add(1);
        *pl_var10 = pl_var17 as *mut u64;
        l_var8 = 0x38;
    } else {
        pl_var12 = (((*pl_var10).add(1) as u64 + 0xf + l_var8) & 0xfffffffffffffff8) as *mut u64;
        l_var8 = (pl_var12 as u64) + (0x38 - (l_var8 + 8));
    }
    
    *pl_var10.add(1) = l_var8;
    *(pl_var12 as *mut u32).add(1) = DAT_1802b3270;
    *pl_var12.add(6) = l_var13;
    
    *pl_var12 = &RealVM_AstStatFunction_vftable as *const _ as u64;
    *(pl_var12 as *mut u8).add(4) = 0;
    *pl_var12.add(5) = l_var14;
    
    // (If closure generation skipped)
    
    pl_var12
}

// FUN_180038cb0
pub unsafe fn parse_ast_stat_if(param_1: *mut u64) -> *mut u64 {
    FUN_18004e680(param_1);
    let l_var8 = FUN_180047340(param_1, 0);
    // ... skipping inner branching
    let l_var10: u64 = 0;
    
    let pl_var3 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var12 = *pl_var3 as u64;
    let mut pl_var13: *mut u64;
    
    if l_var12 == 0 || (((*pl_var3).add(1) as u64 + 0xf + l_var12) & 0xfffffffffffffff8) + 0x2008 < (pl_var3 as u64 + 0x68) {
        let pl_var11 = FUN_1801de680(0x2008);
        *pl_var11 = *pl_var3 as u64;
        pl_var13 = pl_var11.add(1);
        *pl_var3 = pl_var11 as *mut u64;
        l_var12 = 0x68;
    } else {
        pl_var13 = (((*pl_var3).add(1) as u64 + 0xf + l_var12) & 0xfffffffffffffff8) as *mut u64;
        l_var12 = (pl_var13 as u64) + (0x68 - (l_var12 + 8));
    }
    
    *pl_var3.add(1) = l_var12;
    *(pl_var13 as *mut u32).add(1) = DAT_1802b3200;
    *pl_var13 = &RealVM_AstStatIf_vftable as *const _ as u64;
    *pl_var13.add(5) = l_var8;
    *pl_var13.add(7) = l_var10;
    
    pl_var13
}

extern "C" {
    static RealVM_AstStatRepeat_vftable: u8;
    static DAT_1802b3254: u32;
    static DAT_1802b3324: u32;
}

// FUN_180038fc0
pub unsafe fn parse_ast_stat_repeat(param_1: *mut u64) -> *mut u64 {
    let local_58 = *(param_1 as *mut u32).add(0x84 / 4);
    let uStack_54 = *(param_1 as *mut u32).add(0x88 / 4);
    let uStack_50 = *(param_1 as *mut u32).add(0x8c / 4);
    let uStack_4c = *(param_1 as *mut u32).add(0x90 / 4);
    let u_var2 = *(param_1 as *mut u32).add(0x80 / 4);
    
    FUN_18004e680(param_1);
    let l_var10 = *param_1.add(0x198 / 8);
    let l_var3 = *param_1.add(400 / 8);
    
    let p_iVar1 = (*param_1.add(0x150 / 8) - 4) as *mut i32;
    *p_iVar1 = *p_iVar1 + 1;
    let l_var6 = ast_parse_block_wrapper(param_1);
    *p_iVar1 = *p_iVar1 - 1;
    
    let mut local_68 = u_var2;
    let c_var5 = FUN_18004dec0(param_1, 0x136, &mut local_68 as *mut u32 as *mut i32);
    *(l_var6 as *mut u8).add(0x38) = c_var5;
    
    let mut u_var12 = 0;
    if c_var5 == 0 {
        u_var12 = 0xffffffffffffffff;
    } else {
        u_var12 = *param_1.add(0xa0 / 8);
    }
    
    let l_var7 = FUN_180047340(param_1, 0);
    // FUN_18004da30(param_1, ((l_var10 - l_var3) >> 3) & 0xffffffff);
    
    let pl_var4 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var10_alloc = *pl_var4 as u64;
    let mut pl_var11: *mut u64;
    
    if l_var10_alloc == 0 || (((*pl_var4).add(1) as u64 + 0xf + l_var10_alloc) & 0xfffffffffffffff8) + 0x2008 < (pl_var4 as u64 + 0x40) {
        let pl_var13 = FUN_1801de680(0x2008);
        *pl_var13 = *pl_var4 as u64;
        pl_var11 = pl_var13.add(1);
        *pl_var4 = pl_var13 as *mut u64;
        l_var10_alloc = 0x40;
    } else {
        pl_var11 = (((*pl_var4).add(1) as u64 + 0xf + l_var10_alloc) & 0xfffffffffffffff8) as *mut u64;
        l_var10_alloc = (pl_var11 as u64) + (0x40 - (l_var10_alloc + 8));
    }
    
    *pl_var4.add(1) = l_var10_alloc;
    *(pl_var11 as *mut u32).add(1) = DAT_1802b3254;
    *pl_var11.add(6) = l_var6 as u64;
    *(pl_var11 as *mut u8).add(7) = c_var5;
    
    *(pl_var11 as *mut u32).add(3) = local_58;
    *(pl_var11 as *mut u32).add(2) = uStack_54;
    *(pl_var11 as *mut u32).add(5) = (*(l_var7 as *const u32).add(5));
    *(pl_var11 as *mut u32).add(4) = (*(l_var7 as *const u32).add(4));
    
    *pl_var11 = &RealVM_AstStatRepeat_vftable as *const _ as u64;
    *(pl_var11 as *mut u8).add(4) = 0;
    *pl_var11.add(5) = l_var7;
    
    if *(param_1 as *mut u8).add(0x58) != 0 {
        let mut pl_var10_alloc = *pl_var4 as u64;
        let mut pl_var13: *mut u64;
        if pl_var10_alloc == 0 || (((*pl_var4).add(1) as u64 + 0xf + pl_var10_alloc) & 0xfffffffffffffff8) + 0x2008 < (pl_var4 as u64 + 0xc) {
            let pl_var8 = FUN_1801de680(0x2008);
            *pl_var8 = *pl_var4 as u64;
            pl_var13 = pl_var8.add(1);
            *pl_var4 = pl_var8 as *mut u64;
            pl_var10_alloc = 0xc;
        } else {
            pl_var13 = (((*pl_var4).add(1) as u64 + 0xf + pl_var10_alloc) & 0xfffffffffffffff8) as *mut u64;
            pl_var10_alloc = (pl_var13 as u64) + (0xc - (pl_var10_alloc + 8));
        }
        *pl_var4.add(1) = pl_var10_alloc;
        *(pl_var13 as *mut u32) = DAT_1802b3324;
        *pl_var13.add(4 / 8) = u_var12;
        
        let mut local_res8 = pl_var11;
        let pu_var9 = FUN_18004fe90(param_1.add(0x4a8 / 8), &mut local_res8);
        *pu_var9 = pl_var13;
    }
    
    pl_var11
}

extern "C" {
    static RealVM_AstStatFor_vftable: u8;
    static RealVM_AstStatForIn_vftable: u8;
    static RealVM_AstExprIndexName_vftable: u8;
    static DAT_1802b32a4: u32;
    static DAT_1802b3288: u32;
    static DAT_1802b3344: u32;
    static DAT_1802b3330: u32;
    static DAT_1802b3204: u32;
    
    fn FUN_1800477e0(p1: *mut u64, s: *const u8) -> *mut u64;
    fn FUN_18004e220(p1: *mut u64, s: *const u8);
}

// FUN_1800391e0 logic snippet for AstStatFor
pub unsafe fn parse_ast_stat_for(param_1: *mut u64, l_var9: u64, l_var10: u64, l_var11: u64, local_res10: u64, local_res20: *mut u64) -> *mut u64 {
    let pl_var2 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var16 = *pl_var2 as u64;
    let mut pl_var20: *mut u64;
    
    if l_var16 == 0 || (((*pl_var2).add(1) as u64 + 0xf + l_var16) & 0xfffffffffffffff8) + 0x2008 < (pl_var2 as u64 + 0x68) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var2 as u64;
        *pl_var2 = pl_var_new as *mut u64;
        pl_var20 = pl_var_new.add(1);
        l_var16 = 0x68;
    } else {
        pl_var20 = (((*pl_var2).add(1) as u64 + 0xf + l_var16) & 0xfffffffffffffff8) as *mut u64;
        l_var16 = (pl_var20 as u64) + (0x68 - (l_var16 + 8));
    }
    
    *pl_var2.add(1) = l_var16;
    *(pl_var20 as *mut u32).add(1) = DAT_1802b32a4;
    *pl_var20 = &RealVM_AstStatFor_vftable as *const _ as u64;
    pl_var20.add(5).write(local_res20 as u64);
    pl_var20.add(6).write(l_var9);
    pl_var20.add(7).write(l_var10);
    pl_var20.add(8).write(l_var11);
    pl_var20.add(9).write(local_res10);
    
    pl_var20
}

// FUN_180039d20
pub unsafe fn parse_ast_expr_index_name(param_1: *mut u64, param_2: *mut u8, param_3: *mut u64) -> *mut u64 {
    if *(param_1 as *mut u32).add(0x80 / 4) == 0x119 {
        *param_3 = *param_1.add(0x98 / 8);
    }
    let mut pl_var5 = FUN_1800477e0(param_1, b"function name\0".as_ptr());
    let mut i_var1 = *(param_1 as *mut u32).add(0x80 / 4);
    let mut u_var13 = *(param_1 as *mut u32).add(0x114 / 4);
    
    loop {
        if i_var1 != 0x2e {
            *(param_1 as *mut u32).add(0x114 / 4) = u_var13;
            if i_var1 == 0x3a {
                // Method call
                FUN_18004e680(param_1);
                // ... setup uVar12..15
                let l_var10 = *param_1.add(0x128 / 8);
                *param_3 = l_var10;
                
                let pl_var8 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
                let mut l_var7 = *pl_var8 as u64;
                let mut pl_var9: *mut u64;
                
                if l_var7 == 0 || (((*pl_var8).add(1) as u64 + 0xf + l_var7) & 0xfffffffffffffff8) + 0x2008 < (pl_var8 as u64 + 0x50) {
                    let pl_var6 = FUN_1801de680(0x2008);
                    *pl_var6 = *pl_var8 as u64;
                    pl_var9 = pl_var6.add(1);
                    *pl_var8 = pl_var6 as *mut u64;
                    l_var7 = 0x50;
                } else {
                    pl_var9 = (((*pl_var8).add(1) as u64 + 0xf + l_var7) & 0xfffffffffffffff8) as *mut u64;
                    l_var7 = (pl_var9 as u64) + (0x50 - (l_var7 + 8));
                }
                
                *pl_var8.add(1) = l_var7;
                *(pl_var9 as *mut u32).add(1) = DAT_1802b3204;
                *pl_var9 = &RealVM_AstExprIndexName_vftable as *const _ as u64;
                *pl_var9.add(4) = pl_var5 as u64;
                *pl_var9.add(5) = l_var10;
                *param_2 = 1;
                *(pl_var9 as *mut u8).add(9) = 0x3a;
                return pl_var9;
            }
            return pl_var5; // Not . or :
        }
        
        let l_var2 = *param_1.add(0x84 / 8);
        FUN_18004e680(param_1);
        let l_var10 = *param_1.add(0x128 / 8);
        *param_3 = l_var10;
        
        let pl_var9 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
        let mut l_var7 = *pl_var9 as u64;
        let mut pl_var8: *mut u64;
        
        if l_var7 == 0 || (((*pl_var9).add(1) as u64 + 0xf + l_var7) & 0xfffffffffffffff8) + 0x2008 < (pl_var9 as u64 + 0x50) {
            let pl_var6 = FUN_1801de680(0x2008);
            *pl_var6 = *pl_var9 as u64;
            pl_var8 = pl_var6.add(1);
            *pl_var9 = pl_var6 as *mut u64;
            l_var7 = 0x50;
        } else {
            pl_var8 = (((*pl_var9).add(1) as u64 + 0xf + l_var7) & 0xfffffffffffffff8) as *mut u64;
            l_var7 = (pl_var8 as u64) + (0x50 - (l_var7 + 8));
        }
        
        *pl_var9.add(1) = l_var7;
        *(pl_var8 as *mut u32).add(1) = DAT_1802b3204;
        *pl_var8 = &RealVM_AstExprIndexName_vftable as *const _ as u64;
        *pl_var8.add(8) = l_var2;
        *pl_var8.add(4) = pl_var5 as u64;
        *pl_var8.add(5) = l_var10;
        *(pl_var8 as *mut u8).add(9) = 0x2e;
        
        pl_var5 = pl_var8;
        i_var1 = *(param_1 as *mut u32).add(0x80 / 4);
    }
}

extern "C" {
    static RealVM_AstAttr_vftable: u8;
    static DAT_1802b3234: u32;
    static DAT_1802b32f8: u32;
}

// FUN_18003a340 logic snippet for AstAttr
pub unsafe fn parse_ast_attr(param_1: *mut u64) -> *mut u64 {
    // Simplified AstAttr allocation mapping
    let pl_var1 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var12 = *pl_var1 as u64;
    let mut pl_var14: *mut u64;
    
    if l_var12 == 0 || (((*pl_var1).add(1) as u64 + 0xf + l_var12) & 0xfffffffffffffff8) + 0x2008 < (pl_var1 as u64 + 0x40) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var1 as u64;
        *pl_var1 = pl_var_new as *mut u64;
        pl_var14 = pl_var_new.add(1);
        l_var12 = 0x40;
    } else {
        pl_var14 = (((*pl_var1).add(1) as u64 + 0xf + l_var12) & 0xfffffffffffffff8) as *mut u64;
        l_var12 = (pl_var14 as u64) + (0x40 - (l_var12 + 8));
    }
    
    *pl_var1.add(1) = l_var12;
    *(pl_var14 as *mut u32).add(1) = DAT_1802b3234;
    // other layout offsets...
    *pl_var14 = &RealVM_AstAttr_vftable as *const _ as u64;
    *(pl_var14 as *mut u32).add(4) = 4; // Type or flag
    
    if *(param_1 as *mut u8).add(0x58) != 0 {
        let mut pl_var17: *mut u64;
        let mut l_var12_inner = *pl_var1 as u64;
        if l_var12_inner == 0 || (((*pl_var1).add(1) as u64 + 0xf + l_var12_inner) & 0xfffffffffffffff8) + 0x2008 < (pl_var1 as u64 + 8) {
            let pl_var_new = FUN_1801de680(0x2008);
            *pl_var_new = *pl_var1 as u64;
            *pl_var1 = pl_var_new as *mut u64;
            pl_var17 = pl_var_new.add(1);
            l_var12_inner = 8;
        } else {
            pl_var17 = (((*pl_var1).add(1) as u64 + 0xf + l_var12_inner) & 0xfffffffffffffff8) as *mut u64;
            l_var12_inner = (pl_var17 as u64) + (8 - (l_var12_inner + 8));
        }
        *pl_var1.add(1) = l_var12_inner;
        *(pl_var17 as *mut u32) = DAT_1802b32f8;
        *(pl_var17 as *mut u8).add(4) = 0;
        
        let mut local_res20 = pl_var14;
        let pu_var8 = FUN_18004fe90(param_1.add(0x4a8 / 8), &mut local_res20);
        *pu_var8 = pl_var17;
    }
    
    pl_var14
}

extern "C" {
    static RealVM_AstStatLocalFunction_vftable: u8;
    static RealVM_AstStatLocal_vftable: u8;
    static DAT_1802b320c: u32;
    static DAT_1802b31e4: u32;
    static DAT_1802b3340: u32;
    static DAT_1802b3300: u32;
}

// FUN_18003bf80 logic snippet for AstStatLocal and AstStatLocalFunction
pub unsafe fn parse_ast_stat_local_func_and_vars(param_1: *mut u64) -> *mut u64 {
    let pi_var1 = *(param_1 as *mut u32).add(0x80 / 4);
    
    let pl_var5 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var15 = *pl_var5 as u64;
    let mut pl_var22: *mut u64;
    
    // Simplification: if local function:
    if pi_var1 == 299 { // function
        if l_var15 == 0 || (((*pl_var5).add(1) as u64 + 0xf + l_var15) & 0xfffffffffffffff8) + 0x2008 < (pl_var5 as u64 + 0x48) {
            let pl_var_new = FUN_1801de680(0x2008);
            *pl_var_new = *pl_var5 as u64;
            *pl_var5 = pl_var_new as *mut u64;
            pl_var22 = pl_var_new.add(1);
            l_var15 = 0x48;
        } else {
            pl_var22 = (((*pl_var5).add(1) as u64 + 0xf + l_var15) & 0xfffffffffffffff8) as *mut u64;
            l_var15 = (pl_var22 as u64) + (0x48 - (l_var15 + 8));
        }
        
        *pl_var5.add(1) = l_var15;
        *(pl_var22 as *mut u32).add(1) = DAT_1802b320c;
        *pl_var22 = &RealVM_AstStatLocalFunction_vftable as *const _ as u64;
        
        // Populate node offsets based on C pseudo-code
        // plVar22[5] = uStack_110;
        // plVar22[6] = local_128;
        // *(char *)(plVar22 + 7) = param_5;
        // ...
        
    } else { // local vars
        if l_var15 == 0 || (((*pl_var5).add(1) as u64 + 0xf + l_var15) & 0xfffffffffffffff8) + 0x2008 < (pl_var5 as u64 + 0x78) {
            let pl_var_new = FUN_1801de680(0x2008);
            *pl_var_new = *pl_var5 as u64;
            *pl_var5 = pl_var_new as *mut u64;
            pl_var22 = pl_var_new.add(1);
            l_var15 = 0x78;
        } else {
            pl_var22 = (((*pl_var5).add(1) as u64 + 0xf + l_var15) & 0xfffffffffffffff8) as *mut u64;
            l_var15 = (pl_var22 as u64) + (0x78 - (l_var15 + 8));
        }
        
        *pl_var5.add(1) = l_var15;
        *(pl_var22 as *mut u32).add(1) = DAT_1802b31e4;
        *pl_var22 = &RealVM_AstStatLocal_vftable as *const _ as u64;
        
        // Populate node offsets
        // plVar22[5] = (longlong)pplVar14;
        // plVar22[6] = (longlong)pplVar21;
        // *(undefined4 *)(plVar22 + 7) = local_58;
        // ...
    }
    
    pl_var22
}

extern "C" {
    static RealVM_AstStatReturn_vftable: u8;
    static DAT_1802b322c: u32;
    static DAT_1802b332c: u32;
    
    static RealVM_AstStatTypeAlias_vftable: u8;
    static DAT_1802b324c: u32;
    static DAT_1802b3308: u32;
}

// FUN_18003cad0 logic snippet for AstStatReturn
pub unsafe fn parse_ast_stat_return(param_1: *mut u64) -> *mut u64 {
    let pl_var1 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var10 = *pl_var1 as u64;
    let mut pl_var11: *mut u64;
    
    if l_var10 == 0 || (((*pl_var1).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) + 0x2008 < (pl_var1 as u64 + 0x38) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var1 as u64;
        *pl_var1 = pl_var_new as *mut u64;
        pl_var11 = pl_var_new.add(1);
        l_var10 = 0x38;
    } else {
        pl_var11 = (((*pl_var1).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) as *mut u64;
        l_var10 = (pl_var11 as u64) + (0x38 - (l_var10 + 8));
    }
    
    *pl_var1.add(1) = l_var10;
    *(pl_var11 as *mut u32).add(1) = DAT_1802b322c;
    *pl_var11 = &RealVM_AstStatReturn_vftable as *const _ as u64;
    
    // ... Layout logic for Return statement parameters
    
    if *(param_1 as *mut u8).add(0x58) != 0 {
        // Attribute layout mapping ...
        let mut pl_var9: *mut u64;
        let mut l_var10_inner = *pl_var1 as u64;
        if l_var10_inner == 0 || (((*pl_var1).add(1) as u64 + 0xf + l_var10_inner) & 0xfffffffffffffff8) + 0x2008 < (pl_var1 as u64 + 0x18) {
            let pl_var_new = FUN_1801de680(0x2008);
            *pl_var_new = *pl_var1 as u64;
            *pl_var1 = pl_var_new as *mut u64;
            pl_var9 = pl_var_new.add(1);
            l_var10_inner = 0x18;
        } else {
            pl_var9 = (((*pl_var1).add(1) as u64 + 0xf + l_var10_inner) & 0xfffffffffffffff8) as *mut u64;
            l_var10_inner = (pl_var9 as u64) + (0x18 - (l_var10_inner + 8));
        }
        
        *pl_var1.add(1) = l_var10_inner;
        *(pl_var9 as *mut u32) = DAT_1802b332c;
    }
    
    pl_var11
}

// FUN_18003cf50 logic snippet for AstStatTypeAlias
pub unsafe fn parse_ast_stat_type_alias(param_1: *mut u64) -> *mut u64 {
    let pl_var3 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var6 = *pl_var3 as u64;
    let mut pl_var9: *mut u64;
    
    if l_var6 == 0 || (((*pl_var3).add(1) as u64 + 0xf + l_var6) & 0xfffffffffffffff8) + 0x2008 < (pl_var3 as u64 + 0x70) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var3 as u64;
        *pl_var3 = pl_var_new as *mut u64;
        pl_var9 = pl_var_new.add(1);
        l_var6 = 0x70;
    } else {
        pl_var9 = (((*pl_var3).add(1) as u64 + 0xf + l_var6) & 0xfffffffffffffff8) as *mut u64;
        l_var6 = (pl_var9 as u64) + (0x70 - (l_var6 + 8));
    }
    
    *pl_var3.add(1) = l_var6;
    *(pl_var9 as *mut u32).add(1) = DAT_1802b324c;
    *pl_var9 = &RealVM_AstStatTypeAlias_vftable as *const _ as u64;
    
    // ... Layout logic for Type Alias
    
    pl_var9
}

extern "C" {
    static RealVM_AstStatClass_vftable: u8;
    static RealVM_AstTypeFunction_vftable: u8;
    static DAT_1802b3210: u32;
    static DAT_1802b31d8: u32;
    static DAT_1802b32bc: u32;
}

// FUN_18003d290 logic snippet for AstStatClass
pub unsafe fn parse_ast_stat_class(param_1: *mut u64) -> *mut u64 {
    let pl_var3 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var19 = *pl_var3 as u64;
    let mut pl_var25: *mut u64;
    
    if l_var19 == 0 || (((*pl_var3).add(1) as u64 + 0xf + l_var19) & 0xfffffffffffffff8) + 0x2008 < (pl_var3 as u64 + 0x48) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var3 as u64;
        *pl_var3 = pl_var_new as *mut u64;
        pl_var25 = pl_var_new.add(1);
        l_var19 = 0x48;
    } else {
        pl_var25 = (((*pl_var3).add(1) as u64 + 0xf + l_var19) & 0xfffffffffffffff8) as *mut u64;
        l_var19 = (pl_var25 as u64) + (0x48 - (l_var19 + 8));
    }
    
    *pl_var3.add(1) = l_var19;
    *(pl_var25 as *mut u32).add(1) = DAT_1802b3210;
    *pl_var25 = &RealVM_AstStatClass_vftable as *const _ as u64;
    *(pl_var25 as *mut u8).add(4) = 0;
    
    // pl_var25[5] = local_res20;
    // pl_var25[6] = lVar12;
    // pl_var25[7] = uVar27;
    // ...
    
    pl_var25
}

// FUN_18003dd90 logic snippet for AstTypeFunction
pub unsafe fn parse_ast_type_function(param_1: *mut u64) -> *mut u64 {
    let pl_var4 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var8 = *pl_var4 as u64;
    let mut pl_var10: *mut u64;
    
    if l_var8 == 0 || (((*pl_var4).add(1) as u64 + 0xf + l_var8) & 0xfffffffffffffff8) + 0x2008 < (pl_var4 as u64 + 0x50) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var4 as u64;
        *pl_var4 = pl_var_new as *mut u64;
        pl_var10 = pl_var_new.add(1);
        l_var8 = 0x50;
    } else {
        pl_var10 = (((*pl_var4).add(1) as u64 + 0xf + l_var8) & 0xfffffffffffffff8) as *mut u64;
        l_var8 = (pl_var10 as u64) + (0x50 - (l_var8 + 8));
    }
    
    *pl_var4.add(1) = l_var8;
    *(pl_var10 as *mut u32).add(1) = DAT_1802b31d8;
    *pl_var10 = &RealVM_AstTypeFunction_vftable as *const _ as u64;
    
    // ... Layout logic for Type Function
    
    if *(param_1 as *mut u8).add(0x58) != 0 {
        let mut pl_var11: *mut u64;
        let mut l_var9 = *pl_var4 as u64;
        if l_var9 == 0 || (((*pl_var4).add(1) as u64 + 0xf + l_var9) & 0xfffffffffffffff8) + 0x2008 < (pl_var4 as u64 + 0x14) {
            let pl_var_new = FUN_1801de680(0x2008);
            *pl_var_new = *pl_var4 as u64;
            *pl_var4 = pl_var_new as *mut u64;
            pl_var11 = pl_var_new.add(1);
            l_var9 = 0x14;
        } else {
            pl_var11 = (((*pl_var4).add(1) as u64 + 0xf + l_var9) & 0xfffffffffffffff8) as *mut u64;
            l_var9 = (pl_var11 as u64) + (0x14 - (l_var9 + 8));
        }
        *pl_var4.add(1) = l_var9;
        *(pl_var11 as *mut u32) = DAT_1802b32bc;
    }
    
    pl_var10
}

extern "C" {
    static RealVM_AstStatDeclareExternType_vftable: u8;
    static RealVM_AstStatDeclareGlobal_vftable: u8;
    static RealVM_AstStatDeclareFunction_vftable: u8;
    static DAT_1802b31c8: u32;
    static DAT_1802b3238: u32;
    static DAT_1802b31f8: u32;
}

// FUN_18003e820 logic snippet for AstStatDeclareExternType
pub unsafe fn parse_ast_stat_declare_extern_type(param_1: *mut u64) -> *mut u64 {
    let pl_var30 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var21 = *pl_var30 as u64;
    let mut pl_var13: *mut u64;
    
    if l_var21 == 0 || (((*pl_var30).add(1) as u64 + 0xf + l_var21) & 0xfffffffffffffff8) + 0x2008 < (pl_var30 as u64 + 0x58) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var30 as u64;
        *pl_var30 = pl_var_new as *mut u64;
        pl_var13 = pl_var_new.add(1);
        l_var21 = 0x58;
    } else {
        pl_var13 = (((*pl_var30).add(1) as u64 + 0xf + l_var21) & 0xfffffffffffffff8) as *mut u64;
        l_var21 = (pl_var13 as u64) + (0x58 - (l_var21 + 8));
    }
    
    *pl_var30.add(1) = l_var21;
    *(pl_var13 as *mut u32).add(1) = DAT_1802b31c8;
    *pl_var13 = &RealVM_AstStatDeclareExternType_vftable as *const _ as u64;
    *(pl_var13 as *mut u8).add(4) = 0;
    
    pl_var13
}

// FUN_18003e820 logic snippet for AstStatDeclareGlobal
pub unsafe fn parse_ast_stat_declare_global(param_1: *mut u64) -> *mut u64 {
    let pl_var12 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var26 = *pl_var12 as u64;
    let mut pl_var14: *mut u64;
    
    if l_var26 == 0 || (((*pl_var12).add(1) as u64 + 0xf + l_var26) & 0xfffffffffffffff8) + 0x2008 < (pl_var12 as u64 + 0x48) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var12 as u64;
        *pl_var12 = pl_var_new as *mut u64;
        pl_var14 = pl_var_new.add(1);
        l_var26 = 0x48;
    } else {
        pl_var14 = (((*pl_var12).add(1) as u64 + 0xf + l_var26) & 0xfffffffffffffff8) as *mut u64;
        l_var26 = (pl_var14 as u64) + (0x48 - (l_var26 + 8));
    }
    
    *pl_var12.add(1) = l_var26;
    *(pl_var14 as *mut u32).add(1) = DAT_1802b3238;
    *pl_var14 = &RealVM_AstStatDeclareGlobal_vftable as *const _ as u64;
    *(pl_var14 as *mut u8).add(4) = 0;
    
    pl_var14
}

// FUN_18003e820 logic snippet for AstStatDeclareFunction
pub unsafe fn parse_ast_stat_declare_function(param_1: *mut u64) -> *mut u64 {
    let pl_var22 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var21 = *pl_var22 as u64;
    let mut pl_var14: *mut u64;
    
    if l_var21 == 0 || (((*pl_var22).add(1) as u64 + 0xf + l_var21) & 0xfffffffffffffff8) + 0x2008 < (pl_var22 as u64 + 0xb8) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var22 as u64;
        *pl_var22 = pl_var_new as *mut u64;
        pl_var14 = pl_var_new.add(1);
        l_var21 = 0xb8;
    } else {
        pl_var14 = (((*pl_var22).add(1) as u64 + 0xf + l_var21) & 0xfffffffffffffff8) as *mut u64;
        l_var21 = (pl_var14 as u64) + (0xb8 - (l_var21 + 8));
    }
    
    *pl_var22.add(1) = l_var21;
    *(pl_var14 as *mut u32).add(1) = DAT_1802b31f8;
    *pl_var14 = &RealVM_AstStatDeclareFunction_vftable as *const _ as u64;
    *(pl_var14 as *mut u8).add(4) = 0;
    
    pl_var14
}

extern "C" {
    static RealVM_AstStatAssign_vftable: u8;
    static DAT_1802b321c: u32;
    static DAT_1802b32d4: u32;
}

// FUN_18003fca0 logic snippet for AstStatAssign
pub unsafe fn parse_ast_stat_assign(param_1: *mut u64) -> *mut u64 {
    let pl_var6 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var16 = *pl_var6 as u64;
    let mut pl_var11: *mut u64;
    
    if l_var16 == 0 || (((*pl_var6).add(1) as u64 + 0xf + l_var16) & 0xfffffffffffffff8) + 0x2008 < (pl_var6 as u64 + 0x48) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var6 as u64;
        *pl_var6 = pl_var_new as *mut u64;
        pl_var11 = pl_var_new.add(1);
        l_var16 = 0x48;
    } else {
        pl_var11 = (((*pl_var6).add(1) as u64 + 0xf + l_var16) & 0xfffffffffffffff8) as *mut u64;
        l_var16 = (pl_var11 as u64) + (0x48 - (l_var16 + 8));
    }
    
    *pl_var6.add(1) = l_var16;
    *(pl_var11 as *mut u32).add(1) = DAT_1802b321c;
    *pl_var11 = &RealVM_AstStatAssign_vftable as *const _ as u64;
    *(pl_var11 as *mut u8).add(4) = 0;
    
    // Attribute assignments...
    if *(param_1 as *mut u8).add(0x58) != 0 {
        let mut pl_var13: *mut u64;
        let mut l_var16_inner = *pl_var6 as u64;
        if l_var16_inner == 0 || (((*pl_var6).add(1) as u64 + 0xf + l_var16_inner) & 0xfffffffffffffff8) + 0x2008 < (pl_var6 as u64 + 0x30) {
            let pl_var_new = FUN_1801de680(0x2008);
            *pl_var_new = *pl_var6 as u64;
            *pl_var6 = pl_var_new as *mut u64;
            pl_var13 = pl_var_new.add(1);
            l_var16_inner = 0x30;
        } else {
            pl_var13 = (((*pl_var6).add(1) as u64 + 0xf + l_var16_inner) & 0xfffffffffffffff8) as *mut u64;
            l_var16_inner = (pl_var13 as u64) + (0x30 - (l_var16_inner + 8));
        }
        *pl_var6.add(1) = l_var16_inner;
        *(pl_var13 as *mut u32) = DAT_1802b32d4;
    }
    
    pl_var11
}

extern "C" {
    static RealVM_AstStatCompoundAssign_vftable: u8;
    static DAT_1802b3264: u32;
    static DAT_1802b3338: u32;
}

// FUN_180040ad0 logic snippet for AstStatCompoundAssign
pub unsafe fn parse_ast_stat_compound_assign(param_1: *mut u64) -> *mut u64 {
    let pl_var3 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var7 = *pl_var3 as u64;
    let mut pl_var8: *mut u64;
    
    if l_var7 == 0 || (((*pl_var3).add(1) as u64 + 0xf + l_var7) & 0xfffffffffffffff8) + 0x2008 < (pl_var3 as u64 + 0x40) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var3 as u64;
        *pl_var3 = pl_var_new as *mut u64;
        pl_var8 = pl_var_new.add(1);
        l_var7 = 0x40;
    } else {
        pl_var8 = (((*pl_var3).add(1) as u64 + 0xf + l_var7) & 0xfffffffffffffff8) as *mut u64;
        l_var7 = (pl_var8 as u64) + (0x40 - (l_var7 + 8));
    }
    
    *pl_var3.add(1) = l_var7;
    *(pl_var8 as *mut u32).add(1) = DAT_1802b3264;
    *pl_var8 = &RealVM_AstStatCompoundAssign_vftable as *const _ as u64;
    *(pl_var8 as *mut u8).add(4) = 0;
    
    // Attribute assignments...
    if *(param_1 as *mut u8).add(0x58) != 0 {
        let mut pl_var9: *mut u64;
        let mut l_var7_inner = *pl_var3 as u64;
        if l_var7_inner == 0 || (((*pl_var3).add(1) as u64 + 0xf + l_var7_inner) & 0xfffffffffffffff8) + 0x2008 < (pl_var3 as u64 + 0xc) {
            let pl_var_new = FUN_1801de680(0x2008);
            *pl_var_new = *pl_var3 as u64;
            *pl_var3 = pl_var_new as *mut u64;
            pl_var9 = pl_var_new.add(1);
            l_var7_inner = 0xc;
        } else {
            pl_var9 = (((*pl_var3).add(1) as u64 + 0xf + l_var7_inner) & 0xfffffffffffffff8) as *mut u64;
            l_var7_inner = (pl_var9 as u64) + (0xc - (l_var7_inner + 8));
        }
        *pl_var3.add(1) = l_var7_inner;
        *(pl_var9 as *mut u32) = DAT_1802b3338;
    }
    
    pl_var8
}

extern "C" {
    static RealVM_AstExprFunction_vftable: u8;
    static DAT_1802b327c: u32;
}

// FUN_180040e90 logic snippet for AstExprFunction
pub unsafe fn parse_ast_expr_function(param_1: *mut u64) -> *mut u64 {
    let pl_var18 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var17 = *pl_var18 as u64;
    let mut pl_var19: *mut u64;
    
    if l_var17 == 0 || (((*pl_var18).add(1) as u64 + 0xf + l_var17) & 0xfffffffffffffff8) + 0x2008 < (pl_var18 as u64 + 0xc0) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var18 as u64;
        *pl_var18 = pl_var_new as *mut u64;
        pl_var19 = pl_var_new.add(1);
        l_var17 = 0xc0;
    } else {
        pl_var19 = (((*pl_var18).add(1) as u64 + 0xf + l_var17) & 0xfffffffffffffff8) as *mut u64;
        l_var17 = (pl_var19 as u64) + (0xc0 - (l_var17 + 8));
    }
    
    *pl_var18.add(1) = l_var17;
    *(pl_var19 as *mut u32).add(1) = DAT_1802b327c;
    *pl_var19 = &RealVM_AstExprFunction_vftable as *const _ as u64;
    
    // Assigning the AST attributes to the AstExprFunction object layout
    // pl_var19[4] = *param_7;
    // ...
    
    pl_var19
}

extern "C" {
    static RealVM_AstTypePackExplicit_vftable: u8;
    static RealVM_AstTypeGroup_vftable: u8;
    static DAT_1802b3258: u32;
    static DAT_1802b3208: u32;
}

// FUN_180041d10 logic snippet for AstTypePackExplicit
pub unsafe fn parse_ast_type_pack_explicit(param_1: *mut u64) -> *mut u64 {
    let pl_var14 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var16 = *pl_var14 as u64;
    let mut pl_var18: *mut u64;
    
    if l_var16 == 0 || (((*pl_var14).add(1) as u64 + 0xf + l_var16) & 0xfffffffffffffff8) + 0x2008 < (pl_var14 as u64 + 0x38) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var14 as u64;
        *pl_var14 = pl_var_new as *mut u64;
        pl_var18 = pl_var_new.add(1);
        l_var16 = 0x38;
    } else {
        pl_var18 = (((*pl_var14).add(1) as u64 + 0xf + l_var16) & 0xfffffffffffffff8) as *mut u64;
        l_var16 = (pl_var18 as u64) + (0x38 - (l_var16 + 8));
    }
    
    *pl_var14.add(1) = l_var16;
    *(pl_var18 as *mut u32).add(1) = DAT_1802b3258;
    *pl_var18 = &RealVM_AstTypePackExplicit_vftable as *const _ as u64;
    
    pl_var18
}

// FUN_180041d10 logic snippet for AstTypeGroup
pub unsafe fn parse_ast_type_group(param_1: *mut u64) -> *mut u64 {
    let pl_var18 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var17 = *pl_var18 as u64;
    let mut pl_var22: *mut u64;
    
    if l_var17 == 0 || (((*pl_var18).add(1) as u64 + 0xf + l_var17) & 0xfffffffffffffff8) + 0x2008 < (pl_var18 as u64 + 0x28) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var18 as u64;
        *pl_var18 = pl_var_new as *mut u64;
        pl_var22 = pl_var_new.add(1);
        l_var17 = 0x28;
    } else {
        pl_var22 = (((*pl_var18).add(1) as u64 + 0xf + l_var17) & 0xfffffffffffffff8) as *mut u64;
        l_var17 = (pl_var22 as u64) + (0x28 - (l_var17 + 8));
    }
    
    *pl_var18.add(1) = l_var17;
    *(pl_var22 as *mut u32).add(1) = DAT_1802b3208;
    *pl_var22 = &RealVM_AstTypeGroup_vftable as *const _ as u64;
    
    pl_var22
}

extern "C" {
    static RealVM_AstTypeTable_vftable: u8;
    static DAT_1802b3268: u32;
    static DAT_1802b32fc: u32;
}

// FUN_180043050 logic snippet for AstTypeTable
pub unsafe fn parse_ast_type_table(param_1: *mut u64) -> *mut u64 {
    let pl_var29 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var27 = *pl_var29 as u64;
    let mut pl_var26: *mut u64;
    
    if l_var27 == 0 || (((*pl_var29).add(1) as u64 + 0xf + l_var27) & 0xfffffffffffffff8) + 0x2008 < (pl_var29 as u64 + 0x38) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var29 as u64;
        *pl_var29 = pl_var_new as *mut u64;
        pl_var26 = pl_var_new.add(1);
        l_var27 = 0x38;
    } else {
        pl_var26 = (((*pl_var29).add(1) as u64 + 0xf + l_var27) & 0xfffffffffffffff8) as *mut u64;
        l_var27 = (pl_var26 as u64) + (0x38 - (l_var27 + 8));
    }
    
    *pl_var29.add(1) = l_var27;
    *(pl_var26 as *mut u32).add(1) = DAT_1802b3268;
    *pl_var26 = &RealVM_AstTypeTable_vftable as *const _ as u64;
    
    // Assigning the AST attributes to the AstTypeTable object layout
    if *(param_1 as *mut u8).add(0x58) != 0 {
        let mut pl_var28: *mut u64;
        let mut l_var27_inner = *pl_var29 as u64;
        if l_var27_inner == 0 || (((*pl_var29).add(1) as u64 + 0xf + l_var27_inner) & 0xfffffffffffffff8) + 0x2008 < (pl_var29 as u64 + 0x20) {
            let pl_var_new = FUN_1801de680(0x2008);
            *pl_var_new = *pl_var29 as u64;
            *pl_var29 = pl_var_new as *mut u64;
            pl_var28 = pl_var_new.add(1);
            l_var27_inner = 0x20;
        } else {
            pl_var28 = (((*pl_var29).add(1) as u64 + 0xf + l_var27_inner) & 0xfffffffffffffff8) as *mut u64;
            l_var27_inner = (pl_var28 as u64) + (0x20 - (l_var27_inner + 8));
        }
            *pl_var29.add(1) = l_var27_inner;
        *(pl_var28 as *mut u32) = DAT_1802b32fc;
    }
    
    pl_var26
}

extern "C" {
    static RealVM_AstTypeOptional_vftable: u8;
    static RealVM_AstTypeUnion_vftable: u8;
    static DAT_1802b325c: u32;
    static DAT_1802b3298: u32;
}

// FUN_180045390 logic snippet for AstTypeOptional
pub unsafe fn parse_ast_type_optional(param_1: *mut u64) -> *mut u64 {
    let pl_var8 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var10 = *pl_var8 as u64;
    let mut pl_var11: *mut u64;
    
    if l_var10 == 0 || (((*pl_var8).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) + 0x2008 < (pl_var8 as u64 + 0x20) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var8 as u64;
        *pl_var8 = pl_var_new as *mut u64;
        pl_var11 = pl_var_new.add(1);
        l_var10 = 0x20;
    } else {
        pl_var11 = (((*pl_var8).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) as *mut u64;
        l_var10 = (pl_var11 as u64) + (0x20 - (l_var10 + 8));
    }
    
    *pl_var8.add(1) = l_var10;
    *(pl_var11 as *mut u32).add(1) = DAT_1802b325c;
    *pl_var11 = &RealVM_AstTypeOptional_vftable as *const _ as u64;
    
    pl_var11
}

// FUN_180045390 logic snippet for AstTypeUnion
pub unsafe fn parse_ast_type_union(param_1: *mut u64) -> *mut u64 {
    let pl_var8 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var10 = *pl_var8 as u64;
    let mut pl_var9: *mut u64;
    
    if l_var10 == 0 || (((*pl_var8).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) + 0x2008 < (pl_var8 as u64 + 0x30) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var8 as u64;
        *pl_var8 = pl_var_new as *mut u64;
        pl_var9 = pl_var_new.add(1);
        l_var10 = 0x30;
    } else {
        pl_var9 = (((*pl_var8).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) as *mut u64;
        l_var10 = (pl_var9 as u64) + (0x30 - (l_var10 + 8));
    }
    
    *pl_var8.add(1) = l_var10;
    *(pl_var9 as *mut u32).add(1) = DAT_1802b3298;
    *pl_var9 = &RealVM_AstTypeUnion_vftable as *const _ as u64;
    
    pl_var9
}

extern "C" {
    static RealVM_AstTypeIntersection_vftable: u8;
    static RealVM_AstTypeSingletonBool_vftable: u8;
    static RealVM_AstTypeSingletonString_vftable: u8;
    static DAT_1802b3284: u32;
    static DAT_1802b333c: u32;
    static DAT_1802b3310: u32;
    static DAT_1802b31e0: u32;
    static DAT_1802b31dc: u32;
}

// FUN_180045390 logic snippet for AstTypeIntersection
pub unsafe fn parse_ast_type_intersection(param_1: *mut u64) -> *mut u64 {
    let pl_var8 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var10 = *pl_var8 as u64;
    let mut pl_var9: *mut u64;
    
    if l_var10 == 0 || (((*pl_var8).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) + 0x2008 < (pl_var8 as u64 + 0x30) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var8 as u64;
        *pl_var8 = pl_var_new as *mut u64;
        pl_var9 = pl_var_new.add(1);
        l_var10 = 0x30;
    } else {
        pl_var9 = (((*pl_var8).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) as *mut u64;
        l_var10 = (pl_var9 as u64) + (0x30 - (l_var10 + 8));
    }
    
    *pl_var8.add(1) = l_var10;
    *(pl_var9 as *mut u32).add(1) = DAT_1802b3284;
    *pl_var9 = &RealVM_AstTypeIntersection_vftable as *const _ as u64;
    
    pl_var9
}

// FUN_180045d00 logic snippet for AstTypeSingletonBool
pub unsafe fn parse_ast_type_singleton_bool(param_1: *mut u64) -> *mut u64 {
    let pl_var5 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var14 = *pl_var5 as u64;
    let mut pl_var12: *mut u64;
    
    if l_var14 == 0 || (((*pl_var5).add(1) as u64 + 0xf + l_var14) & 0xfffffffffffffff8) + 0x2008 < (pl_var5 as u64 + 0x28) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var5 as u64;
        *pl_var5 = pl_var_new as *mut u64;
        pl_var12 = pl_var_new.add(1);
        l_var14 = 0x28;
    } else {
        pl_var12 = (((*pl_var5).add(1) as u64 + 0xf + l_var14) & 0xfffffffffffffff8) as *mut u64;
        l_var14 = (pl_var12 as u64) + (0x28 - (l_var14 + 8));
    }
    
    *pl_var5.add(1) = l_var14;
    *(pl_var12 as *mut u32).add(1) = DAT_1802b31e0;
    *pl_var12 = &RealVM_AstTypeSingletonBool_vftable as *const _ as u64;
    
    // pl_var12[4] -> Set depending on 'true' (1) or 'false' (0)
    
    pl_var12
}

// FUN_180045d00 logic snippet for AstTypeSingletonString
pub unsafe fn parse_ast_type_singleton_string(param_1: *mut u64) -> *mut u64 {
    let pl_var5 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var14 = *pl_var5 as u64;
    let mut pl_var12: *mut u64;
    
    if l_var14 == 0 || (((*pl_var5).add(1) as u64 + 0xf + l_var14) & 0xfffffffffffffff8) + 0x2008 < (pl_var5 as u64 + 0x30) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var5 as u64;
        *pl_var5 = pl_var_new as *mut u64;
        pl_var12 = pl_var_new.add(1);
        l_var14 = 0x30;
    } else {
        pl_var12 = (((*pl_var5).add(1) as u64 + 0xf + l_var14) & 0xfffffffffffffff8) as *mut u64;
        l_var14 = (pl_var12 as u64) + (0x30 - (l_var14 + 8));
    }
    
    *pl_var5.add(1) = l_var14;
    *(pl_var12 as *mut u32).add(1) = DAT_1802b31dc;
    *pl_var12 = &RealVM_AstTypeSingletonString_vftable as *const _ as u64;
    
    pl_var12
}

extern "C" {
    static RealVM_AstExprUnary_vftable: u8;
    static RealVM_AstExprBinary_vftable: u8;
    static RealVM_AstTypePackGeneric_vftable: u8;
    static RealVM_AstTypePackVariadic_vftable: u8;
    static DAT_1802b3274: u32;
    static DAT_1802b31ec: u32;
    static DAT_1802b3240: u32;
    static DAT_1802b31f4: u32;
}

// FUN_180047340 logic snippet for AstExprUnary
pub unsafe fn parse_ast_expr_unary(param_1: *mut u64) -> *mut u64 {
    let pl_var14 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var10 = *pl_var14 as u64;
    let mut pl_var15: *mut u64;
    
    if l_var10 == 0 || (((*pl_var14).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) + 0x2008 < (pl_var14 as u64 + 0x30) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var14 as u64;
        *pl_var14 = pl_var_new as *mut u64;
        pl_var15 = pl_var_new.add(1);
        l_var10 = 0x30;
    } else {
        pl_var15 = (((*pl_var14).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) as *mut u64;
        l_var10 = (pl_var15 as u64) + (0x30 - (l_var10 + 8));
    }
    
    *pl_var14.add(1) = l_var10;
    *(pl_var15 as *mut u32).add(1) = DAT_1802b3274;
    *pl_var15 = &RealVM_AstExprUnary_vftable as *const _ as u64;
    
    pl_var15
}

// FUN_180047340 logic snippet for AstExprBinary
pub unsafe fn parse_ast_expr_binary(param_1: *mut u64) -> *mut u64 {
    let pl_var14 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var10 = *pl_var14 as u64;
    let mut pl_var13: *mut u64;
    
    if l_var10 == 0 || (((*pl_var14).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) + 0x2008 < (pl_var14 as u64 + 0x38) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var14 as u64;
        *pl_var14 = pl_var_new as *mut u64;
        pl_var13 = pl_var_new.add(1);
        l_var10 = 0x38;
    } else {
        pl_var13 = (((*pl_var14).add(1) as u64 + 0xf + l_var10) & 0xfffffffffffffff8) as *mut u64;
        l_var10 = (pl_var13 as u64) + (0x38 - (l_var10 + 8));
    }
    
    *pl_var14.add(1) = l_var10;
    *(pl_var13 as *mut u32).add(1) = DAT_1802b31ec;
    *pl_var13 = &RealVM_AstExprBinary_vftable as *const _ as u64;
    
    pl_var13
}

// FUN_180046a10 logic snippet for AstTypePackGeneric
pub unsafe fn parse_ast_type_pack_generic(param_1: *mut u64) -> *mut u64 {
    let pl_var2 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var7 = *pl_var2 as u64;
    let mut pl_var10: *mut u64;
    
    if l_var7 == 0 || (((*pl_var2).add(1) as u64 + 0xf + l_var7) & 0xfffffffffffffff8) + 0x2008 < (pl_var2 as u64 + 0x28) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var2 as u64;
        *pl_var2 = pl_var_new as *mut u64;
        pl_var10 = pl_var_new.add(1);
        l_var7 = 0x28;
    } else {
        pl_var10 = (((*pl_var2).add(1) as u64 + 0xf + l_var7) & 0xfffffffffffffff8) as *mut u64;
        l_var7 = (pl_var10 as u64) + (0x28 - (l_var7 + 8));
    }
    
    *pl_var2.add(1) = l_var7;
    *(pl_var10 as *mut u32).add(1) = DAT_1802b3240;
    *pl_var10 = &RealVM_AstTypePackGeneric_vftable as *const _ as u64;
    
    pl_var10
}

// FUN_180046d30 logic snippet for AstTypePackVariadic
pub unsafe fn parse_ast_type_pack_variadic(param_1: *mut u64) -> *mut u64 {
    let pl_var1 = (*param_1.add(0xd8 / 8)) as *mut *mut u64;
    let mut l_var9 = *pl_var1 as u64;
    let mut pl_var11: *mut u64;
    
    if l_var9 == 0 || (((*pl_var1).add(1) as u64 + 0xf + l_var9) & 0xfffffffffffffff8) + 0x2008 < (pl_var1 as u64 + 0x28) {
        let pl_var_new = FUN_1801de680(0x2008);
        *pl_var_new = *pl_var1 as u64;
        *pl_var1 = pl_var_new as *mut u64;
        pl_var11 = pl_var_new.add(1);
        l_var9 = 0x28;
    } else {
        pl_var11 = (((*pl_var1).add(1) as u64 + 0xf + l_var9) & 0xfffffffffffffff8) as *mut u64;
        l_var9 = (pl_var11 as u64) + (0x28 - (l_var9 + 8));
    }
    
    *pl_var1.add(1) = l_var9;
    *(pl_var11 as *mut u32).add(1) = DAT_1802b31f4;
    *pl_var11 = &RealVM_AstTypePackVariadic_vftable as *const _ as u64;
    
    pl_var11
}

// FUN_180047040
pub unsafe fn parse_ast_expr_binary_op(param_1: *mut u32, param_2: *const i32) -> *mut u32 {
    let i_var1 = *param_2;
    match i_var1 {
        0x2b => { *param_1 = 0; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x2d => { *param_1 = 1; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x2a => { *param_1 = 2; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x2f => { *param_1 = 3; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x109 => { *param_1 = 4; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x25 => { *param_1 = 5; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x5e => { *param_1 = 6; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x105 => { *param_1 = 7; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x104 => { *param_1 = 8; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x101 => { *param_1 = 9; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x3c => { *param_1 = 10; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x102 => { *param_1 = 0xb; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x3e => { *param_1 = 0xc; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x103 => { *param_1 = 0xd; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x123 => { *param_1 = 0xe; *(param_1 as *mut u8).add(4) = 1; param_1 }
        0x131 => { *param_1 = 0xf; *(param_1 as *mut u8).add(4) = 1; param_1 }
        _ => { *(param_1 as *mut u8).add(4) = 0; param_1 }
    }
}

// FUN_180047190
pub unsafe fn check_c_style_binary_op_error(param_1: *mut u64, param_2: *mut u32, param_3: u64, param_4: u32) -> *mut u32 {
    let i_var1 = *(*param_1 as *mut u8).add(0x80) as i32;
    if i_var1 == 0x26 || i_var1 == 0x7c || i_var1 == 0x21 {
        // Detailed error logic omitted for brevity but preserves memory layout
        if i_var1 == 0x26 {
            *param_2 = 0xe;
            *(param_2 as *mut u8).add(4) = 1;
            return param_2;
        } else if i_var1 == 0x7c {
            *param_2 = 0xf;
            *(param_2 as *mut u8).add(4) = 1;
            return param_2;
        } else {
            *param_2 = 8;
            *(param_2 as *mut u8).add(4) = 1;
            return param_2;
        }
    }
    *(param_2 as *mut u8).add(4) = 0;
    param_2
}

// FUN_180047340
pub unsafe fn parse_ast_expr_binary_or_unary(param_1: *mut u64, param_2: u32) -> *mut u64 {
    // Incomplete body to signify translation in progress
    // Recursion check
    let u_var6 = *(*param_1 as *mut u8).add(0x114) as u32 + 1;
    *(*param_1 as *mut u8).add(0x114) as *mut u32 = u_var6;
    // Follows into binary and unary expressions based on token
    param_1 // Placeholder return
}

// FUN_1800477e0
pub unsafe fn parse_ast_expr_local_or_global(param_1: *mut u64) -> *mut u64 {
    // Check if identifier, otherwise AstExprError
    param_1 // Placeholder return
}

// FUN_180047aa0
pub unsafe fn parse_ast_expr_primary(param_1: *mut u64) -> *mut u64 {
    // Check if '(', then AstExprGroup, else local/global
    param_1 // Placeholder return
}

// FUN_180047cb0
pub unsafe fn parse_ast_expr_prefix(param_1: *mut u64, param_2: u8) -> *mut u64 {
    // Parses index names, calls, suffixes
    param_1 // Placeholder return
}

// FUN_180047f60
pub unsafe fn parse_ast_expr_index_expr(param_1: *mut u64, param_2: u64, param_3: u64) -> *mut u64 {
    // Parses array indexing like expr[index]
    param_1 // Placeholder return
}

// FUN_180048150
pub unsafe fn parse_ast_expr_method_call(param_1: *mut u64, param_2: u64, param_3: u64) -> *mut u64 {
    // Parses method calls like expr:method(args)
    // Creates AstExprIndexName and AstExprCall
    param_1 // Placeholder return
}

// FUN_1800485b0
pub unsafe fn parse_ast_expr_type_assertion(param_1: *mut u64) -> *mut u64 {
    // Parses expr :: Type
    // Creates AstExprTypeAssertion
    param_1 // Placeholder return
}

// FUN_1800487c0
pub unsafe fn parse_numeric_literal_to_double(param_1: *mut f64, param_2: *mut u8, param_3: i32) -> u8 {
    // Parses numeric literal using strtoull / checks double bounds
    0
}

// FUN_180048900
pub unsafe fn parse_ast_expr_function_literal(param_1: *mut u64, param_2: u64) -> u64 {
    // Parses anonymous function literals
    0
}

// FUN_180048a80
pub unsafe fn parse_ast_expr_terminal(param_1: *mut u64) -> *mut u64 {
    // Parses terminal nodes: nil, true, false, string, table, if-expr, varargs (...)
    param_1 // Placeholder return
}

// FUN_180048ea0
pub unsafe fn parse_ast_expr_list(param_1: *mut u64, param_2: *mut u64, param_3: *mut u64, param_4: *mut u64) -> *mut u64 {
    // Parses a comma-separated list of expressions or function arguments
    param_1 // Placeholder return
}

// FUN_180049240
pub unsafe fn parse_ast_expr_call(param_1: *mut u64, param_2: *mut u64, param_3: u8) -> *mut u64 {
    // Parses function calls: func(args), func{table}, func"string"
    // Returns AstExprCall
    param_1 // Placeholder return
}

// FUN_180049a90
pub unsafe fn parse_ast_expr_call_error(param_1: *mut u64, param_2: *mut u64, param_3: u8) -> u64 {
    // Handles syntax errors for function call arguments
    0 // Placeholder return
}

// FUN_180049b80
pub unsafe fn report_ambiguous_call_syntax(param_1: *mut u64) {
    // Reports ambiguous syntax for function calls without parenthesis
}

// FUN_180049ba0
pub unsafe fn parse_ast_expr_table(param_1: *mut u64) -> *mut u64 {
    // Parses table literals: { [expr] = expr, name = expr, expr }
    param_1 // Placeholder return
}

// FUN_18004b550
pub unsafe fn parse_ast_type_group(
    param_1: *mut u64,
    param_2: *mut u64,
    param_3: *mut u64,
    param_4: *mut u64,
    param_5: *mut u64,
) -> *mut u64 {
    // Parses type groups / type arguments (e.g., <T, U>)
    param_1 // Placeholder return
}

// FUN_18004bb00
pub unsafe fn parse_and_unescape_string(
    param_1: *mut u64,
    param_2: *mut u64,
    param_3: *mut u64,
) -> *mut u64 {
    // Handles string escape sequence parsing and unescaping
    param_2 // Placeholder return
}

// FUN_18004bd80
pub unsafe fn parse_ast_expr_constant_string(param_1: *mut u64) -> *mut u64 {
    // Parses constant string literals: "...", '...', [[...]]
    // Returns AstExprConstantString
    param_1 // Placeholder return
}

// FUN_18004c000
pub unsafe fn parse_ast_expr_interpolated_string(param_1: *mut u64) -> *mut u64 {
    // Parses interpolated strings: `hello {"world"}`
    param_1 // Placeholder return
}

// FUN_18004a540
pub unsafe fn parse_ast_expr_if_else(param_1: *mut u64) -> *mut u64 {
    // Parses if-then-else expressions: if expr then expr else expr
    // Returns AstExprIfElse
    param_1 // Placeholder return
}

// FUN_18004a830
pub unsafe fn parse_ast_generic_parameters(
    param_1: *mut u64,
    param_2: *mut u64,
    param_3: u8,
    param_4: *mut u64,
    param_5: *mut u64,
    param_6: *mut u64,
) -> *mut u64 {
    // Parses generic type parameters <T, U...>
    // Returns list of AstGenericType and AstGenericTypePack
    param_1 // Placeholder return
}

// FUN_18004cbb0
pub unsafe fn parse_ast_expr_instantiate(param_1: *mut u64, param_2: u64, param_3: *mut u64) -> *mut u64 {
    // Parses expression type instantiations: func<T, U>
    // Returns AstExprInstantiate
    param_3 // Placeholder return
}

// FUN_18004cf50
pub unsafe fn parse_ast_expr_number(param_1: *mut u64) -> *mut u64 {
    // Parses numeric literals (hex, binary, decimal), specifically checking for 'i' suffixes
    param_1 // Placeholder return
}

// FUN_18004d900
pub unsafe fn register_local(param_1: *mut u64, param_2: *mut u64) -> u64 {
    // Registers a local variable in the parser's active scope
    0 // Placeholder return
}

// FUN_18004da30
pub unsafe fn pop_local(param_1: *mut u64, param_2: u32) {
    // Pops local variables from the active scope
}

// FUN_18004db00
pub unsafe fn expect_and_consume(param_1: *mut u64, param_2: i32) -> u8 {
    // Asserts that the next token is of a specific type, consumes it
    0 // Placeholder return
}

// FUN_18004db50
pub unsafe fn report_expected_token_error(param_1: *mut u64, param_2: u32, param_3: u64) {
    // Emits "Expected %s, got %s"
}

// FUN_18004e680
pub unsafe fn lexer_next_token(param_1: *mut u64) {
    // Advances the lexer, processes whitespaces, newlines, and tokenizes
}

// FUN_18004e940
pub unsafe fn create_ast_stat_break(param_1: *mut u64, param_2: *mut u64) -> *mut u64 {
    // Creates AstStatBreak
    param_1 // Placeholder return
}

// FUN_18004e9f0
pub unsafe fn create_ast_stat_continue(param_1: *mut u64, param_2: *mut u64) -> *mut u64 {
    // Creates AstStatContinue
    param_1 // Placeholder return
}

// FUN_18004eaa0
pub unsafe fn copy_ast_array(param_1: u64, param_2: *mut u64, param_3: *mut u64) -> *mut u64 {
    // Copies and reallocates an array of AST nodes
    param_2 // Placeholder return
}

// FUN_18004ebc0
pub unsafe fn alloc_and_copy(param_1: u64, param_2: *mut u64, param_3: *mut std::ffi::c_void, param_4: u64) -> *mut u64 {
    // Allocates memory and copies bytes
    param_2 // Placeholder return
}

// FUN_18004ede0
pub unsafe fn create_ast_type_pack_explicit(param_1: *mut u64, param_2: *mut u64, param_3: *mut u64) -> *mut u64 {
    // Creates AstTypePackExplicit
    param_1 // Placeholder return
}

// FUN_18004eea0
pub unsafe fn create_ast_type_reference(
    param_1: *mut u64, param_2: *mut u64, param_3: u64, param_4: *mut u64, param_5: u64, param_6: *mut u64
) -> *mut u64 {
    // Creates AstTypeReference
    param_1 // Placeholder return
}

// FUN_18004f250
pub unsafe fn vector_free(param_1: *mut u64) {
    // Frees a vector
}

// FUN_18004f2c0
pub unsafe fn linked_list_free(param_1: *mut u64) {
    // Frees a linked list
}

// FUN_18004dc50
pub unsafe fn match_token(param_1: *mut u64, param_2: u8, param_3: u64, param_4: i8) -> u64 {
    // Checks if token matches, optionally consumes
    0 // Placeholder return
}

// FUN_18004dd10
pub unsafe fn report_match_error(param_1: *mut u64, param_2: u32, param_3: *mut u32, param_4: *mut u8) {
    // Emits "Expected %s (to close %s at line/col %d), got %s"
}

// FUN_18004dec0
pub unsafe fn expect_match_end(param_1: *mut u64, param_2: i32, param_3: *mut u64) -> u64 {
    // Checks token matching end tag, reports missing close error if fail
    0 // Placeholder return
}

// FUN_18004df20
pub unsafe fn report_missing_close_error(param_1: *mut u64, param_2: u64, param_3: u64) -> bool {
    // Emits "; did you forget to close %s at line %d?"
    false // Placeholder return
}

// FUN_18004e050
pub unsafe fn report_error_core(param_1: *mut u64, param_2: *mut i32, param_3: u64, param_4: u64) {
    // Core error reporter, handles "Reached error limit (%d)" exceptions
}

// FUN_18004e200
pub unsafe fn report_error() {
    // Wrapper for report_error_core
}

// FUN_18004e220
pub unsafe fn report_expected_identifier_error(param_1: *mut u64, param_2: u64) {
    // Emits "Expected identifier, got %s"
}

// FUN_18004e2b0
pub unsafe fn create_ast_stat_error(
    param_1: *mut u64, param_2: *mut u64, param_3: *mut u64, param_4: *mut u64, param_5: u64
) -> *mut u64 {
    // Creates AstStatError
    param_1 // Placeholder return
}

// FUN_18004e3b0
pub unsafe fn create_ast_expr_error(
    param_1: *mut u64, param_2: *mut u64, param_3: *mut u64, param_4: u64
) -> *mut u64 {
    // Creates AstExprError
    param_1 // Placeholder return
}

// FUN_18004e4a0
pub unsafe fn create_ast_type_error(
    param_1: *mut u64, param_2: *mut u64, param_3: *mut u64, param_4: u64
) -> *mut u64 {
    // Likely creates AstTypeError
    param_1 // Placeholder return
}
