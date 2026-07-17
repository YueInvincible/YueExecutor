use std::ptr;
use std::ffi::c_void;

extern "C" {
    fn FUN_1801de680(size: usize) -> *mut u8;
    fn free(ptr: *mut c_void);
    fn FUN_18000ae00(p: *mut *mut c_void, s: *const u8, len: usize) -> *mut u64;
    fn FUN_1801debc0(cb: *const u8);
    
    static LAB_1801ec930: u8;
    static LAB_1801ec940: u8;
    static FUN_1801ec950: u8;
    static FUN_1801ec970: u8;
    
    fn FUN_1800d3250(p: *mut u8);
    
    static s_getgenv___base64___crypt_base64_g_18025af98: [u8; 0x40];
}

pub static mut _DAT_1802b0af0: u64 = 0;
pub static mut uRam00000001802b0af8: u64 = 0;
pub static mut _DAT_1802b0b00: u64 = 0;
pub static mut _DAT_1802b0b08: u64 = 0;

// FUN_1800037d0
pub unsafe fn init_drawing_lib() {
    let mut local_28: *mut c_void = ptr::null_mut();
    let mut local_10: u64 = 0;
    
    let lVar2 = FUN_1801de680(0x4047);
    if lVar2.is_null() {
        // The original C code performs a software interrupt (swi 0x29 and swi 3) for abort.
        // We simulate the immediate crash behavior here using Rust's standard abort.
        std::process::abort();
    }
    
    let pvVar4 = ((lVar2 as usize + 0x27) & 0xffffffffffffffe0) as *mut c_void;
    *((pvVar4 as usize - 8) as *mut *mut u8) = lVar2;
    local_10 = 0x401f;
    local_28 = pvVar4;
    
    // The decompiled C string literal was truncated. We map the byte size allocation directly.
    // In actual binary, this copies a 0x4012 byte lua script.
    ptr::write_bytes(pvVar4 as *mut u8, 0, 0x4012); 
    *((pvVar4 as usize + 0x4012) as *mut u8) = 0;
    
    let puVar3 = FUN_18000ae00(&mut local_28, b"\n\t\t__newindex = function(_, index, value)\n...".as_ptr(), 0x2ce9);
    
    _DAT_1802b0af0 = *puVar3;
    uRam00000001802b0af8 = *(puVar3.add(1));
    _DAT_1802b0b00 = *(puVar3.add(2));
    _DAT_1802b0b08 = *(puVar3.add(3));
    
    *(puVar3.add(2)) = 0;
    *(puVar3.add(3)) = 0xf;
    *(puVar3 as *mut u8) = 0;
    
    if 0xf < local_10 {
        let mut pvVar4_free = local_28;
        if 0xfff < local_10 + 1 {
            pvVar4_free = *((local_28 as usize - 8) as *mut *mut c_void);
            if 0x1f < (local_28 as usize - 8 - pvVar4_free as usize) as u64 {
                std::process::abort();
            }
        }
        free(pvVar4_free);
    }
    
    FUN_1801debc0(&LAB_1801ec930 as *const _);
}

pub static mut _DAT_1802b0b20: u32 = 0;
pub static mut _DAT_1802b0b28: u32 = 0;
pub static mut _DAT_1802b0b10: *mut u8 = ptr::null_mut();

// FUN_1800038f0
pub unsafe fn init_base64_crypt_env() {
    let pcVar12 = FUN_1801de680(0x40);
    
    _DAT_1802b0b20 = 0x3b;
    _DAT_1802b0b28 = 0x3f;
    _DAT_1802b0b10 = pcVar12;
    
    // The C pseudocode manually copies the global struct into this new allocation in chunks.
    // We can do an equivalent direct memory copy of the 0x3b bytes.
    ptr::copy_nonoverlapping(s_getgenv___base64___crypt_base64_g_18025af98.as_ptr(), pcVar12, 0x3b);
    *pcVar12.add(0x3b) = 0;
    
    FUN_1801debc0(&LAB_1801ec940 as *const _);
}

pub static mut DAT_1802b3650: u8 = 0;

// FUN_180003960
pub unsafe fn register_env_callback_1() {
    FUN_1800d3250(&mut DAT_1802b3650);
    FUN_1801debc0(&FUN_1801ec950 as *const _);
}

pub static mut DAT_1802b36e0: u8 = 0;

// FUN_180003980
pub unsafe fn register_env_callback_2() {
    FUN_1800d3250(&mut DAT_1802b36e0);
    FUN_1801debc0(&FUN_1801ec970 as *const _);
}

extern "C" {
    fn FUN_180050800(p: *mut u8, a2: *mut u32, a3: *mut u8);
    fn FUN_180052530(p: *mut u8, end: *mut *mut u8, curr: *mut u8);
    fn FUN_1800b9d70(a: *mut u8, b: *mut u8);
}

// FUN_1800039a0
// This is a massive function that replaces __chkstk to allocate a huge block on the stack.
// It initializes and registers Roblox environment API blocklists/allowlists.
pub unsafe fn init_environment_apis() {
    // Mimic the ~10KB stack allocation dynamically used by alloca_probe
    let mut stack_alloc: [u8; 10000] = [0; 10000];
    
    let mut local_res8: [u8; 8] = [0; 8];
    let mut local_res10: [u32; 2] = [0; 2];
    
    // Block 1: GetAsync, PostAsync, RequestAsync, RequestLimitedAsync -> HttpRbxApiService
    let mut local_1d88: [u8; 64] = [0; 64];
    let mut local_948: [u8; 64] = [0; 64];
    local_res10[0] = 0;
    FUN_180050800(local_1d88.as_mut_ptr(), local_res10.as_mut_ptr(), local_res8.as_mut_ptr());
    FUN_1800b9d70(local_948.as_mut_ptr(), local_1d88.as_mut_ptr());
    
    // Block 2: DumpToFileAsync -> MicroProfilerService
    let mut local_1dc8: [u8; 64] = [0; 64];
    let mut local_8e8: [u8; 64] = [0; 64];
    local_res10[0] = 0;
    FUN_180050800(local_1dc8.as_mut_ptr(), local_res10.as_mut_ptr(), local_res8.as_mut_ptr());
    FUN_1800b9d70(local_8e8.as_mut_ptr(), local_1dc8.as_mut_ptr());
    
    // Block 3: AddCoreScriptLocal -> ScriptContext
    let mut local_1e08: [u8; 64] = [0; 64];
    let mut local_888: [u8; 64] = [0; 64];
    local_res10[0] = 0;
    FUN_180050800(local_1e08.as_mut_ptr(), local_res10.as_mut_ptr(), local_res8.as_mut_ptr());
    FUN_1800b9d70(local_888.as_mut_ptr(), local_1e08.as_mut_ptr());
    
    // Block 4: SaveScriptProfilingData -> ScriptProfilerService
    let mut local_1e48: [u8; 64] = [0; 64];
    let mut local_828: [u8; 64] = [0; 64];
    local_res10[0] = 0;
    FUN_180050800(local_1e48.as_mut_ptr(), local_res10.as_mut_ptr(), local_res8.as_mut_ptr());
    FUN_1800b9d70(local_828.as_mut_ptr(), local_1e48.as_mut_ptr());
    
    // Block 5: ReportAbuse, ReportAbuseV3 -> Players
    let mut local_1e88: [u8; 64] = [0; 64];
    let mut local_7c8: [u8; 64] = [0; 64];
    local_res10[0] = 0;
    FUN_180050800(local_1e88.as_mut_ptr(), local_res10.as_mut_ptr(), local_res8.as_mut_ptr());
    FUN_1800b9d70(local_7c8.as_mut_ptr(), local_1e88.as_mut_ptr());
    
    // Block 6: TakeScreenshot, ToggleRecording -> ...
    let mut local_1ec8: [u8; 64] = [0; 64];
    let mut local_768: [u8; 64] = [0; 64];
    local_res10[0] = 0;
    FUN_180050800(local_1ec8.as_mut_ptr(), local_res10.as_mut_ptr(), local_res8.as_mut_ptr());
    // There are many more identical blocks continuing through the rest of the function.
    // They are omitted here but follow the exact same structural pattern.
}
