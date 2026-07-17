use crate::collections::{MsvcString, TenVectorStruct};
use std::ffi::c_void;

extern "C" {
    fn FUN_140031690() -> *mut u64;
    fn FUN_1400316a0() -> *mut u64;
    fn FUN_140034260(p: *const c_void) -> u64;
    fn FUN_1400329d0(size: u64) -> u64;
    fn thunk_FUN_1400340c0(ptr: i64, size: u64);
    fn FUN_140020740() -> !;
}

/// Translated from FUN_140010b40 and FUN_140028b50.
/// Centralizes the state-machine execution of the decrypted payload loader.
pub unsafe fn ollvm_payload_dispatcher(
    param_1: *mut *mut *mut *mut *mut *mut *mut i64,
    param_2: *mut *mut *mut *mut *mut *mut *mut i64,
    param_3: *mut *mut *mut *mut *mut *mut *mut i64,
    param_4: *mut u64,
    param_5: *mut u64,
    param_6: *mut u64,
) -> *mut *mut *mut *mut *mut *mut *mut i64 {
    let mut local_e8: [u8; 128] = [0; 128]; // Mapped from local_e8 in C
    let mut local_f8: [u8; 128] = [0; 128]; // Mapped from local_f8 in C
    
    // Initialize VM state variables
    let mut u_var49: u64 = *FUN_140031690();
    let mut u_var26: u64 = *FUN_1400316a0();
    let mut u_var18: u64 = 0;
    
    // Core O-LLVM Deobfuscation Loop
    'vm_loop: loop {
        if u_var18 >= u_var49 {
            break 'vm_loop;
        }
        
        let b_var60 = local_e8[u_var18 as usize];
        let mut u_var42 = b_var60 as u64;
        let u_var19 = u_var26 + 1;
        let c_var53 = u_var18 as i8;
        
        if u_var49 < u_var19 {
            if u_var18 < u_var26 {
                break 'vm_loop; // Corresponds to stack0x014f6a24 jump
            }
            
            let u_var43 = u_var19;
            if u_var49 + u_var26 <= u_var18 {
                let u_var44 = u_var26 + 5;
                if u_var44 < u_var49 {
                    let c_var58 = c_var53.wrapping_add(b_var60 as i8)
                        .wrapping_add(((b_var60 as i8) & c_var53.wrapping_sub(0x1b)) * -2)
                        .wrapping_sub(0x5e);
                    // Inline byte arithmetic execution
                    local_e8[u_var18 as usize] = c_var58 as u8;
                } else {
                    if u_var49 < 8 {
                        if u_var49 == u_var19 {
                            u_var18 = u_var18 + u_var26 + u_var42;
                            continue 'vm_loop;
                        }
                        if u_var49 == u_var26 + 2 {
                            let b_var52 = (b_var60 as i8).wrapping_add(c_var53)
                                .wrapping_add((c_var53 + 3 & (b_var60 as i8)) * -2)
                                .wrapping_sub(0x12);
                            local_e8[u_var18 as usize] = b_var52 as u8;
                            
                            let mut l_var27 = (!u_var26).wrapping_add(u_var18).wrapping_sub(b_var52 as u64);
                            local_e8[l_var27 as usize] = (l_var27 as i8).wrapping_add(b_var60 as i8)
                                .wrapping_add(((l_var27 as i8).wrapping_sub(0x34) & (b_var60 as i8)) * -2)
                                .wrapping_add(0x38) as u8;
                                
                            l_var27 = l_var27.wrapping_sub(u_var49);
                            u_var49 += 1;
                            u_var42 = local_f8[(l_var27 + 0xe) as usize] as u64;
                            u_var18 = l_var27 - 2;
                            u_var26 = u_var19;
                            continue 'vm_loop;
                        }
                    }
                    let b_var52 = c_var53.wrapping_add(b_var60 as i8)
                        .wrapping_add(((b_var60 as i8) & c_var53.wrapping_add(0x51)) * -2)
                        .wrapping_add(0x1a);
                    u_var18 = u_var18.wrapping_add(!(b_var52 as u64));
                }
            } else if u_var49 == u_var26 + 8 {
                local_e8[u_var18 as usize] = c_var53.wrapping_add(b_var60 as i8)
                    .wrapping_add(((b_var60 as i8) & c_var53.wrapping_sub(0x21)) * -2)
                    .wrapping_sub(0x3a) as u8;
            } else {
                if u_var49 == u_var19 {
                    let b_var52 = c_var53.wrapping_add(b_var60 as i8)
                        .wrapping_add(((b_var60 as i8) & c_var53.wrapping_add(0x14)) * -2)
                        .wrapping_add(0x88) as u8;
                    u_var49 += u_var26;
                    u_var18 = u_var18.wrapping_add(!(b_var52 as u64));
                    continue 'vm_loop;
                }
            }
            u_var26 = u_var43;
            u_var18 -= 1;
        } else {
            // Execution shifts to memory decoding
            if u_var49 != u_var19 {
                if u_var49 == u_var26 + 2 {
                    let b_var52 = c_var53.wrapping_add(b_var60 as i8)
                        .wrapping_add(((b_var60 as i8) & c_var53.wrapping_add(0xa3)) * -2)
                        .wrapping_add(0x2e);
                    u_var49 += u_var26;
                    u_var18 = u_var18.wrapping_add(!(b_var52 as u64));
                    continue 'vm_loop;
                }
            }
            u_var18 = u_var18 + u_var26 + u_var42;
        }
        u_var18 += 1;
    }
    
    // Post-decryption memory validation
    let u_var49 = FUN_140034260(param_3 as *const c_void);
    let ppppppl_var22 = *param_2.add(7) as u64;
    
    if (ppppppl_var22 ^ 0x7fffffffffffffff) < u_var49 {
        FUN_140020740(); // Trigger process termination
    }
    
    param_1
}