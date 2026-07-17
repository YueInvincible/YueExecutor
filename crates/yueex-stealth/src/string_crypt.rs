//! Compile-time string encryption via XOR-based obfuscation.
//!
//! Prevents sensitive strings (API names, IPC names, DLL names) from
//! appearing as plaintext in the binary's `.rdata` section, which would
//! allow static analysis tools to fingerprint the injector.
//!
//! ## Usage
//! ```rust
//! use yueex_stealth::string_crypt::{xor_encrypt, xor_decrypt};
//!
//! // At compile time (or pre-build):
//! let encrypted = xor_encrypt(b"NtProtectVirtualMemory", 0xAB);
//!
//! // At runtime:
//! let decrypted = xor_decrypt(&encrypted, 0xAB);
//! assert_eq!(decrypted, b"NtProtectVirtualMemory");
//! ```

/// XOR-encrypt a byte slice with a single-byte key.
/// Suitable for basic string obfuscation — not cryptographically secure,
/// but sufficient to defeat static string scanning.
pub fn xor_encrypt(data: &[u8], key: u8) -> Vec<u8> {
    data.iter().map(|b| b ^ key).collect()
}

/// XOR-decrypt a byte slice (symmetric — same operation as encrypt).
pub fn xor_decrypt(data: &[u8], key: u8) -> Vec<u8> {
    xor_encrypt(data, key) // XOR is its own inverse.
}

/// XOR-encrypt with a multi-byte key for slightly better obfuscation.
pub fn xor_encrypt_multi(data: &[u8], key: &[u8]) -> Vec<u8> {
    if key.is_empty() {
        return data.to_vec();
    }
    data.iter()
        .enumerate()
        .map(|(i, b)| b ^ key[i % key.len()])
        .collect()
}

/// XOR-decrypt with a multi-byte key.
pub fn xor_decrypt_multi(data: &[u8], key: &[u8]) -> Vec<u8> {
    xor_encrypt_multi(data, key)
}

/// Decrypt an XOR-encrypted byte slice into a UTF-8 String.
/// Returns empty string on invalid UTF-8.
pub fn decrypt_to_string(data: &[u8], key: u8) -> String {
    let bytes = xor_decrypt(data, key);
    String::from_utf8(bytes).unwrap_or_default()
}

/// Macro-style helper: encrypt a string literal at init time.
/// Returns a `(Vec<u8>, u8)` tuple of (encrypted_bytes, key).
///
/// This is a runtime helper — for true compile-time encryption,
/// use a proc-macro or build script.
pub fn obfuscate(s: &str) -> (Vec<u8>, u8) {
    // Use a deterministic key derived from the string length.
    // In production, use a random key generated at build time.
    let key = ((s.len() as u8).wrapping_mul(0x9B)).wrapping_add(0x37);
    let encrypted = xor_encrypt(s.as_bytes(), key);
    (encrypted, key)
}

/// Deobfuscate a string that was encrypted with `obfuscate()`.
pub fn deobfuscate(data: &[u8], key: u8) -> String {
    decrypt_to_string(data, key)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn roundtrip_single_key() {
        let original = b"NtProtectVirtualMemory";
        let key = 0xAB;
        let encrypted = xor_encrypt(original, key);
        assert_ne!(&encrypted, original);
        let decrypted = xor_decrypt(&encrypted, key);
        assert_eq!(decrypted, original);
    }

    #[test]
    fn roundtrip_multi_key() {
        let original = b"kernel32.dll";
        let key = b"YueEx";
        let encrypted = xor_encrypt_multi(original, key);
        let decrypted = xor_decrypt_multi(&encrypted, key);
        assert_eq!(decrypted, original);
    }

    #[test]
    fn obfuscate_roundtrip() {
        let s = "VirtualProtectEx";
        let (enc, key) = obfuscate(s);
        assert_eq!(deobfuscate(&enc, key), s);
    }
}
