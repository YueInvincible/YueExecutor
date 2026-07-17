use std::ffi::c_void;

extern "C" {
    fn DAT_1400399c0(handle: u64) -> i32;
    fn DAT_1400399f8(p1: i32, p2: u64) -> i32;
    fn FUN_1400205f0(ptr: *mut *mut i8, size: i32);
}

/// Translated from FUN_14001fb00
/// Manages execution/parsing context once the VM has mapped the shellcode/payload into memory.
pub unsafe fn execute_decrypted_payload(param_1: *mut u8) -> u32 {
    let mut local_48: u64 = 0xfffffffffffffffe;
    let mut local_49: u8 = 0;
    let mut local_80: i64 = 0;
    let mut local_88: *mut u8 = std::ptr::null_mut();
    
    // Check if the payload buffer is mapped and ready
    let payload_ptr_addr = param_1.add(0x38) as *mut *mut u64;
    if !(*payload_ptr_addr).is_null() {
        let size_addr = param_1.add(0x50) as *mut *mut i32;
        let size = **size_addr;
        
        if size > 0 {
            **size_addr = size - 1;
            let current_ptr = **payload_ptr_addr as *mut u8;
            **payload_ptr_addr = current_ptr.add(1) as u64;
            return *current_ptr as u32;
        }
    }
    
    let handle_val = *(param_1.add(0x80) as *mut u64);
    if handle_val == 0 {
        return 0xffffffff;
    }
    
    // Check execution bounds
    let bounds_addr = param_1.add(0x18) as *mut *mut u64;
    let l_var3: i64;
    
    if **bounds_addr as *mut u8 == param_1.add(0x70) {
        let size = *(param_1.add(0x90) as *mut i32);
        l_var3 = *(param_1.add(0x88) as *mut i64);
        
        **bounds_addr = l_var3 as u64;
        **payload_ptr_addr = l_var3 as u64;
        **(param_1.add(0x50) as *mut *mut i32) = size - (l_var3 as i32);
    } else {
        l_var3 = *(param_1.add(0x68) as *mut i64);
    }
    
    if l_var3 == 0 {
        let u_var6 = DAT_1400399c0(handle_val);
        if u_var6 == -1 {
            return 0xffffffff;
        }
        return (u_var6 as u32) & 0xff;
    }
    
    // Fallback to advanced parsing (State setup)
    let mut local_78: *mut *mut i8 = std::ptr::null_mut();
    let mut local_68: u64 = 0;
    let local_60: u64 = 15;
    
    let i_var5 = DAT_1400399c0(handle_val);
    if i_var5 != -1 {
        // Appending to std::string equivalent
        if local_68 < local_60 {
            let mut string_base = &mut local_78 as *mut *mut *mut i8;
            if local_60 > 15 {
                string_base = local_78 as *mut *mut *mut i8;
            }
            let char_ptr = (string_base as u64 + local_68) as *mut i8;
            local_68 += 1;
            *char_ptr = i_var5 as i8;
            *((string_base as u64 + local_68) as *mut i8) = 0;
        } else {
            FUN_1400205f0(&mut local_78, 1);
        }
        
        // Dynamic execution handler invocation
        let func_ptr_addr = **(param_1.add(0x68) as *mut *mut u64) + 0x30;
        let func: extern "C" fn(u64, *mut u8, *mut *mut i8, *mut i8, *mut i64, *mut u8, *mut u64, *mut *mut u8) -> u32 = std::mem::transmute(func_ptr_addr);
        
        let mut base_str = local_78;
        let u_var6 = func(*(param_1.add(0x68) as *mut u64), param_1.add(0x74), &mut base_str, (base_str as u64 + local_68) as *mut i8, &mut local_80, &mut local_49, &mut local_48, &mut local_88);
        
        if u_var6 < 2 {
            if local_88 == &mut local_49 {
                return u_var6;
            }
            let base_str2 = local_78;
            let mut pc_var11 = (base_str2 as u64 + (local_68 - local_80 as u64)) as *mut i8;
            
            if (pc_var11 as i64) > 0 {
                pc_var11 = pc_var11.add(1);
                loop {
                    DAT_1400399f8(*pc_var11.sub(2) as i32, handle_val);
                    local_80 -= 1;
                    if local_80 == 0 { break; }
                    pc_var11 = pc_var11.add(1);
                }
            }
        }
    }
    0xffffffff
}