use crate::allocator::custom_dealloc;

/// Represents an MSVC std::string (32 bytes / 0x20 size)
#[repr(C)]
pub struct MsvcString {
    pub data: MsvcStringData, // 0x00 - 0x0F
    pub size: usize,          // 0x10 - 0x17
    pub capacity: usize,      // 0x18 - 0x1F
}

#[repr(C)]
pub union MsvcStringData {
    pub heap_ptr: *mut u8,
    pub inline_buf: [u8; 16],
}

impl MsvcString {
    /// Translated from `FUN_14000fb30`
    pub unsafe fn destroy(&mut self) {
        if self.capacity > 15 {
            let alloc_length = self.capacity + 1; // +1 for null terminator
            custom_dealloc(self.data.heap_ptr, alloc_length);
        }
        self.size = 0;
        self.capacity = 15;
        self.data.inline_buf[0] = 0;
    }
}

/// Represents an MSVC std::vector embedded inside a wrapper class (starting at offset 0x08).
/// Recovered from `FUN_140001ff0`.
#[repr(C)]
pub struct VectorWrapper {
    pub vtable_or_pad: u64, // 0x00 - 0x07
    pub first: *mut u8,     // 0x08 - 0x0F
    pub last: *mut u8,      // 0x10 - 0x17
    pub end: *mut u8,       // 0x18 - 0x1F
}

impl VectorWrapper {
    /// Translated from `FUN_140001ff0`
    pub unsafe fn destroy(&mut self) {
        if !self.first.is_null() {
            let alloc_size = (self.end as usize).wrapping_sub(self.first as usize);
            custom_dealloc(self.first, alloc_size);
            
            self.first = std::ptr::null_mut();
            self.last = std::ptr::null_mut();
            self.end = std::ptr::null_mut();
        }
    }
}

/// Recovered from `FUN_140001c30`. 
/// A structure containing 10 consecutive `std::vector` wrappers spaced exactly 32 (0x20) bytes apart.
#[repr(C)]
pub struct TenVectorStruct {
    pub pad: [u8; 0x40],     // 0x00 - 0x3F
    pub vec0: VectorWrapper, // 0x40 - 0x5F
    pub vec1: VectorWrapper, // 0x60 - 0x7F
    pub vec2: VectorWrapper, // 0x80 - 0x9F
    pub vec3: VectorWrapper, // 0xA0 - 0xBF
    pub vec4: VectorWrapper, // 0xC0 - 0xDF
    pub vec5: VectorWrapper, // 0xE0 - 0xFF
    pub vec6: VectorWrapper, // 0x100 - 0x11F
    pub vec7: VectorWrapper, // 0x120 - 0x13F
    pub vec8: VectorWrapper, // 0x140 - 0x15F
    pub vec9: VectorWrapper, // 0x160 - 0x17F
    pub ptr_178: *mut u8,    // 0x178
}

impl TenVectorStruct {
    /// Translated from `FUN_140001c30`
    pub unsafe fn destroy(&mut self) {
        // Destroyed in reverse order of initialization
        self.vec9.destroy();
        self.vec8.destroy();
        self.vec7.destroy();
        self.vec6.destroy();
        self.vec5.destroy();
        
        // Manual nulling observed in decompilation for vec4
        self.vec4.destroy();
        *((&mut self.vec4 as *mut _ as *mut u8).add(0x08) as *mut *mut u8) = std::ptr::null_mut();
        
        self.vec3.destroy();
        self.vec2.destroy();
        self.vec1.destroy();
        self.vec0.destroy();

        self.ptr_178 = (self as *mut _ as *mut u8).add(0x158);
        *((self as *mut _ as *mut u8).add(0x187)) = 1; // State flag update
    }
}