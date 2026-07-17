use std::ptr;

pub static mut _DAT_1802a5498: *const u8 = ptr::null();
pub static mut _DAT_1802a54c0: *const u8 = ptr::null();
pub static mut _DAT_1802a55e0: *const u8 = ptr::null();
pub static mut DAT_1802a5a88: [u8; 0x1d8] = [0; 0x1d8];

extern "C" {
    fn cpuid_Version_info(leaf: u32) -> *const u8;
    static LAB_180081220: u8;
    static LAB_180084590: u8;
    static LAB_1800813c0: u8;
    static LAB_180084550: u8;
    static FUN_180082430: u8;
    static LAB_1800845d0: u8;
}

// FUN_1800033f0
pub unsafe fn init_cpu_features() {
    let mut info_ptr = cpuid_Version_info(1);
    _DAT_1802a5498 = &LAB_180081220;
    if (*(info_ptr.add(0xc) as *const u32) >> 0x13) & 1 != 0 {
        _DAT_1802a5498 = &LAB_180084590;
    }
    
    info_ptr = cpuid_Version_info(1);
    _DAT_1802a54c0 = &LAB_1800813c0;
    if (*(info_ptr.add(0xc) as *const u32) >> 0x13) & 1 != 0 {
        _DAT_1802a54c0 = &LAB_180084550;
    }
    
    info_ptr = cpuid_Version_info(1);
    _DAT_1802a55e0 = &FUN_180082430;
    if (*(info_ptr.add(0xc) as *const u32) >> 0x13) & 1 != 0 {
        _DAT_1802a55e0 = &LAB_1800845d0;
    }
    
    ptr::write_bytes(DAT_1802a5a88.as_mut_ptr(), 0, 0x1d8);
}
