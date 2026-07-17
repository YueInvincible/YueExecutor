//! API Hashing implementation to resolve exports dynamically without plaintext strings.
//!
//! Uses a compile-time string hashing algorithm (like djb2 or murmur) to
//! identify functions in the Export Address Table (EAT) of remote or local modules.

/// Compile-time djb2 hash function for ASCII strings.
/// (Used in const contexts or macros if possible, but implemented as a runtime func here).
pub const fn hash_djb2(s: &[u8]) -> u32 {
    let mut hash: u32 = 5381;
    let mut i = 0;
    while i < s.len() {
        // hash * 33 + c
        hash = hash.wrapping_mul(33).wrapping_add(s[i] as u32);
        i += 1;
    }
    hash
}

/// Helper macro to hash a string literal at compile time if possible.
/// Rust `const fn` can be used directly.
#[macro_export]
macro_rules! api_hash {
    ($s:expr) => {
        $crate::api_hash::hash_djb2($s.as_bytes())
    };
}

/// Compare a string against a known hash.
pub fn matches_hash(name: &str, expected_hash: u32) -> bool {
    hash_djb2(name.as_bytes()) == expected_hash
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_djb2() {
        let h1 = hash_djb2(b"NtProtectVirtualMemory");
        let h2 = hash_djb2(b"NtWriteVirtualMemory");
        assert_ne!(h1, h2);
        assert_eq!(hash_djb2(b"NtProtectVirtualMemory"), h1);
    }
}
