//! Dynamic Memory Cloaking via Vectored Exception Handling (VEH)
//!
//! Concept:
//! Anti-cheats scan executable memory (PAGE_EXECUTE_READ / PAGE_EXECUTE_READWRITE)
//! for signatures. If we keep our injected DLL's memory as `PAGE_NOACCESS` or 
//! `PAGE_GUARD` most of the time, memory scanners will either crash (if they
//! poorly handle guard pages) or skip the region, effectively hiding our code.
//!
//! When a thread in our DLL needs to execute, it will hit an exception.
//! Our custom VEH catches this, temporarily unlocks the page (`PAGE_EXECUTE_READ`),
//! sets the hardware Trap Flag (`TF` in `EFLAGS`) to cause a Single-Step exception
//! immediately after the instruction executes, and resumes execution.
//!
//! The next instruction triggers the Single-Step exception, and the VEH catches
//! it again to lock the page back to `PAGE_NOACCESS`.
//!
//! **Warning:** This causes extreme overhead (two exceptions per instruction)
//! and should only be applied to very specific, small initialization routines.

use std::sync::atomic::{AtomicBool, Ordering};

use windows::Win32::System::Diagnostics::Debug::{
    AddVectoredExceptionHandler, RemoveVectoredExceptionHandler,
    EXCEPTION_POINTERS,
};

static VEH_REGISTERED: AtomicBool = AtomicBool::new(false);
static mut VEH_HANDLE: *mut std::ffi::c_void = std::ptr::null_mut();

/// The custom Vectored Exception Handler.
///
/// Must return `EXCEPTION_CONTINUE_EXECUTION` if we handled the fault,
/// or `EXCEPTION_CONTINUE_SEARCH` to pass it to the next handler.
#[allow(dead_code)]
unsafe extern "system" fn memory_cloak_veh(
    exception_info: *mut EXCEPTION_POINTERS,
) -> i32 {
    let _info = &*exception_info;
    let _record = &*(*exception_info).ExceptionRecord;
    let _context = &mut *(*exception_info).ContextRecord;

    // Implementation notes:
    // 1. Check if `_record.ExceptionCode` is `EXCEPTION_ACCESS_VIOLATION` or `EXCEPTION_GUARD_PAGE`.
    // 2. If it occurred within our cloaked memory range:
    //    a. VirtualProtect the page to PAGE_EXECUTE_READ.
    //    b. Set `_context.EFlags |= 0x100` (Trap Flag) to trigger a single step.
    //    c. Return EXCEPTION_CONTINUE_EXECUTION.
    // 3. If `_record.ExceptionCode` is `EXCEPTION_SINGLE_STEP`:
    //    a. Check if we just unlocked a page for this thread.
    //    b. VirtualProtect the page back to PAGE_NOACCESS / PAGE_GUARD.
    //    c. Clear the Trap Flag (usually cleared automatically).
    //    d. Return EXCEPTION_CONTINUE_EXECUTION.

    // 0 = EXCEPTION_CONTINUE_SEARCH
    0
}

/// Install the VEH for memory cloaking.
pub fn install_veh() -> bool {
    if VEH_REGISTERED.swap(true, Ordering::SeqCst) {
        return true; // Already registered
    }

    unsafe {
        // 1 = Call first
        let handle = AddVectoredExceptionHandler(1, Some(memory_cloak_veh));
        if handle.is_null() {
            VEH_REGISTERED.store(false, Ordering::SeqCst);
            return false;
        }
        VEH_HANDLE = handle;
    }
    true
}

/// Remove the VEH.
pub fn remove_veh() {
    if !VEH_REGISTERED.swap(false, Ordering::SeqCst) {
        return;
    }

    unsafe {
        if !VEH_HANDLE.is_null() {
            let _ = RemoveVectoredExceptionHandler(VEH_HANDLE);
            VEH_HANDLE = std::ptr::null_mut();
        }
    }
}
