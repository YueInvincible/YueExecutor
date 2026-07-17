use crate::collections::MsvcString;

/// Contains 3 consecutive MSVC strings and two tracking fields.
#[repr(C)]
pub struct CryptoContextStrings {
    pub str1: MsvcString, // 0x00 - 0x1F
    pub str2: MsvcString, // 0x20 - 0x3F
    pub str3: MsvcString, // 0x40 - 0x5F
    pub field_60: u64,    // 0x60 - 0x67
    pub field_68: u64,    // 0x68 - 0x6F
}

impl CryptoContextStrings {
    /// Translated from `FUN_1400108a0`. 
    /// Acts as C++ `CryptoContextStrings& operator=(CryptoContextStrings&& other)`
    pub unsafe fn move_assign(&mut self, other: *mut CryptoContextStrings) -> *mut CryptoContextStrings {
        if (self as *mut _) != other {
            // String 1: Destroy self, copy other, null out other
            self.str1.destroy();
            self.str1 = std::ptr::read(&(*other).str1);
            (*other).str1.size = 0;
            (*other).str1.capacity = 15;
            (*other).str1.data.inline_buf[0] = 0;

            // String 2: Destroy self, copy other, null out other
            self.str2.destroy();
            self.str2 = std::ptr::read(&(*other).str2);
            (*other).str2.size = 0;
            (*other).str2.capacity = 15;
            (*other).str2.data.inline_buf[0] = 0;

            // String 3: Destroy self, copy other, null out other
            self.str3.destroy();
            self.str3 = std::ptr::read(&(*other).str3);
            (*other).str3.size = 0;
            (*other).str3.capacity = 15;
            (*other).str3.data.inline_buf[0] = 0;
        }
        
        // Copy trailing context pointers/states
        self.field_60 = (*other).field_60;
        self.field_68 = (*other).field_68;
        
        self as *mut _
    }

    /// Translated from `FUN_140010a40`.
    /// Acts as C++ `~CryptoContextStrings()`
    pub unsafe fn destroy(&mut self) {
        self.str3.destroy();
        self.str2.destroy();
        self.str1.destroy();
    }
}