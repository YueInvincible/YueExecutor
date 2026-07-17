use std::ptr;

// Assuming globals are declared somewhere, e.g. proxying them as static mut for now.
pub static mut DAT_1802b34a0: *mut u8 = ptr::null_mut();
pub static mut DAT_1802a4cb8: u32 = 0;

extern "system" {
    fn GetModuleHandleA(lpModuleName: *const i8) -> *mut u8;
}

// FUN_180002990
pub unsafe fn init_module_handle() {
    DAT_1802b34a0 = GetModuleHandleA(ptr::null());
}

// FUN_180001050
// Looks like a function that registers a callback or init function.
extern "C" {
    fn FUN_1801debc0(cb: *const u8);
    static FUN_1801ec3f0: u8; // function/callback pointer
}
pub unsafe fn register_init_callback_1() {
    FUN_1801debc0(&FUN_1801ec3f0 as *const _);
}

pub static mut DAT_1802a4c58: u8 = 0; // Guessing type, assuming array or struct later
pub static mut DAT_1802a4c88: u8 = 0;

extern "C" {
    fn FUN_180023840(ptr: *mut u8);
    static LAB_1801ec490: u8;
}

// FUN_180001060
pub unsafe fn register_init_callback_2() {
    FUN_180023840(&mut DAT_1802a4c58);
    FUN_180023840(&mut DAT_1802a4c88);
    DAT_1802a4cb8 = 1;
    FUN_1801debc0(&LAB_1801ec490 as *const _);
}

pub static mut DAT_1802a4cd8: *mut u64 = ptr::null_mut();
pub static mut DAT_1802a4cd0: usize = 0;

extern "C" {
    fn FUN_1800139c0() -> *mut u64;
    static LAB_1801ec4f0: u8;
}

// FUN_1800010b0
pub unsafe fn alloc_and_init_array() {
    DAT_1802a4cd8 = FUN_1800139c0();
    if DAT_1802a4cd0 != 0 {
        *DAT_1802a4cd8 = 1;
        if DAT_1802a4cd0 - 1 != 0 {
            ptr::write_bytes(DAT_1802a4cd8.add(1), 0, DAT_1802a4cd0 - 1);
        }
    }
    FUN_1801debc0(&LAB_1801ec4f0 as *const _);
}

pub static mut _DAT_1802b3538: *mut *mut u64 = ptr::null_mut();
pub static mut DAT_1802b3560: *mut *mut u64 = ptr::null_mut();
pub static mut _DAT_1802b3510: *mut *mut u64 = ptr::null_mut();

extern "C" {
    fn FUN_1801de680(size: usize) -> *mut u64;
    static LAB_1801ec770: u8;
    static LAB_1801ec780: u8;
    static LAB_1801ec790: u8;
}

// FUN_180003090
pub unsafe fn init_struct_1() {
    _DAT_1802b3538 = FUN_1801de680(0x10) as *mut *mut u64;
    *(_DAT_1802b3538 as *mut u64).add(1) = 0;
    *_DAT_1802b3538 = &_DAT_1802b3538 as *const _ as *mut u64;
    FUN_1801debc0(&LAB_1801ec770 as *const _);
}

// FUN_1800030d0
pub unsafe fn init_struct_2() {
    DAT_1802b3560 = FUN_1801de680(0x10) as *mut *mut u64;
    *(DAT_1802b3560 as *mut u64).add(1) = 0;
    *DAT_1802b3560 = &DAT_1802b3560 as *const _ as *mut u64;
    FUN_1801debc0(&LAB_1801ec780 as *const _);
}

// FUN_180003110
pub unsafe fn init_struct_3() {
    _DAT_1802b3510 = FUN_1801de680(0x10) as *mut *mut u64;
    *(_DAT_1802b3510 as *mut u64).add(1) = 0;
    *_DAT_1802b3510 = &_DAT_1802b3510 as *const _ as *mut u64;
    FUN_1801debc0(&LAB_1801ec790 as *const _);
}

pub static mut DAT_1802a6668: u64 = 0;
pub static mut _DAT_1802a6678: u64 = 0;
pub static mut _DAT_1802a6680: u64 = 0;
pub static mut uRam00000001802a6688: u64 = 0;
pub static mut _DAT_1802a6690: u64 = 0;
pub static mut _DAT_1802a6698: u64 = 0;
pub static mut _DAT_1802a6660: u32 = 0;

extern "C" {
    fn FUN_180051c50(p1: *mut u64, a2: u64, a3: u64);
    static FUN_1801ec860: u8;
}

// FUN_180003160
pub unsafe fn init_struct_4() {
    let ptr = FUN_1801de680(0x40);
    DAT_1802a6668 = ptr as u64;
    *(ptr as *mut u64) = DAT_1802a6668;
    *(ptr.add(1) as *mut u64) = DAT_1802a6668;
    _DAT_1802a6678 = 0;
    _DAT_1802a6680 = 0;
    uRam00000001802a6688 = 0;
    _DAT_1802a6690 = 7;
    _DAT_1802a6698 = 8;
    _DAT_1802a6660 = 0x3f800000; // 1.0f
    FUN_180051c50(&mut _DAT_1802a6678, 0x10, DAT_1802a6668);
    FUN_1801debc0(&FUN_1801ec860 as *const _);
}
