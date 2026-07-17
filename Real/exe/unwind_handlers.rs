use std::ffi::c_void;

extern "C" {
    fn FUN_14000fb30(ptr: *mut c_void); // String destructor
    fn FUN_14001f1e0(ptr: *mut c_void); // Vector destructor
    fn FUN_140001270(ptr: *mut c_void); // ofstream teardown
    fn FUN_140034060() -> !;            // std::terminate
    fn DAT_1400396a0(ptr: *mut c_void);
}

/// Represents the MSVC Exception Unwind Dispatcher
pub struct UnwindDispatcher;

impl UnwindDispatcher {
    /// Translates Catch_All_14000ea40 through Catch_All_14000f190
    pub unsafe fn catch_all(id: u32) -> *const c_void {
        match id {
            0x14000ea40 => 0x1400037de as *const c_void, // LAB_1400037de
            0x14000ea90 => 0x140002dd1 as *const c_void, // LAB_140002dd1
            0x14000f190 => 0x140003a47 as *const c_void, // LAB_140003a47
            _ => std::ptr::null(),
        }
    }

    /// Consolidates Unwind_14000eae0 through Unwind_14000fac0
    /// Maps the exact byte offsets from the base pointer `param_2` to the correct destructor.
    pub unsafe fn unwind_offset(base_ptr: *mut u8, offset: isize, dtor_type: DestructorType) {
        let target_ptr = base_ptr.offset(offset) as *mut c_void;
        match dtor_type {
            DestructorType::String => FUN_14000fb30(target_ptr),
            DestructorType::Vector => FUN_14001f1e0(target_ptr),
            DestructorType::Ofstream => FUN_140001270(target_ptr),
            DestructorType::Terminate => FUN_140034060(),
        }
    }

    /// Replicates the manual teardown seen in Unwind_140001c30
    /// This cleans up a massive array of 10 std::vectors
    pub unsafe fn unwind_10_vectors(base_ptr: *mut u8) {
        let offsets = [
            0x160, 0x140, 0x120, 0x100, 0xe0, 0xc0, 0xa0, 0x80, 0x60, 0x40
        ];

        for &offset in offsets.iter() {
            let vec_ptr = base_ptr.offset(offset) as *mut *mut u8;
            let first = *vec_ptr;
            if !first.is_null() {
                let end = *vec_ptr.add(2); // offset 0x10 from vec base
                let mut alloc_size = (end as usize).wrapping_sub(first as usize);
                let mut free_target = first;

                if alloc_size > 0xFFF {
                    free_target = *(first.sub(8) as *mut *mut u8);
                    alloc_size += 0x27;
                }
                crate::allocator::thunk_FUN_1400340c0(free_target as i64, alloc_size as u64);
                
                // Zero out the vector fields
                *vec_ptr = std::ptr::null_mut();
                *vec_ptr.add(1) = std::ptr::null_mut();
                *vec_ptr.add(2) = std::ptr::null_mut();
            }
        }
        
        // Final state flag updates from Unwind_140001c30
        *(base_ptr.offset(0x178) as *mut *mut u8) = base_ptr.offset(0x158);
        *base_ptr.offset(0x187) = 1;
    }
}

pub enum DestructorType {
    String,
    Vector,
    Ofstream,
    Terminate,
}