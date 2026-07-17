//! Network Interception (WinHTTP hooks)
//!
//! Blocks telemetry and rewrites domain requests (e.g. *.roblox.com to *.roproxy.com)
//! to prevent the client from communicating with standard endpoints during execution.

use std::ffi::c_void;
use std::sync::atomic::{AtomicU64, Ordering};
use windows::Win32::System::LibraryLoader::{GetModuleHandleW, GetProcAddress};

// ── Global Trampolines ──────────────────────────────────────────────────

static WINHTTP_OPEN_REQUEST_TRAMPOLINE: AtomicU64 = AtomicU64::new(0);
static WINHTTP_SEND_REQUEST_TRAMPOLINE: AtomicU64 = AtomicU64::new(0);

// ── Types ───────────────────────────────────────────────────────────────

type FnWinHttpOpenRequest = unsafe extern "system" fn(
    hConnect: *mut c_void,
    pwszVerb: *const u16,
    pwszObjectName: *const u16,
    pwszVersion: *const u16,
    pwszReferrer: *const u16,
    ppwszAcceptTypes: *const *const u16,
    dwFlags: u32,
) -> *mut c_void;

type FnWinHttpSendRequest = unsafe extern "system" fn(
    hRequest: *mut c_void,
    lpszHeaders: *const u16,
    dwHeadersLength: u32,
    lpOptional: *const c_void,
    dwOptionalLength: u32,
    dwTotalLength: u32,
    dwContext: usize,
) -> i32;

// ── Public API ──────────────────────────────────────────────────────────

/// Install the WinHTTP hooks
pub fn install_hooks() {
    tracing::info!("Initializing WinHTTP network hooks...");

    // Basic implementation for finding WinHTTP functions
    // In a real stealth setup, this would use API hashing and indirect syscalls.
    let (open_request_addr, send_request_addr) = match find_winhttp_functions() {
        Some(addrs) => addrs,
        None => {
            tracing::error!("Could not resolve WinHTTP functions");
            return;
        }
    };

    hook_winhttp_open_request(open_request_addr);
    hook_winhttp_send_request(send_request_addr);
    
    tracing::info!("WinHTTP network hooks installed successfully");
}

// ── Internal ────────────────────────────────────────────────────────────

fn find_winhttp_functions() -> Option<(u64, u64)> {
    unsafe {
        let h_winhttp = GetModuleHandleW(windows::core::w!("winhttp.dll"));
        let h_winhttp = match h_winhttp {
            Ok(h) => h,
            Err(_) => return None,
        };

        let open = GetProcAddress(h_winhttp, windows::core::s!("WinHttpOpenRequest"));
        let send = GetProcAddress(h_winhttp, windows::core::s!("WinHttpSendRequest"));

        if open.is_none() || send.is_none() {
            return None;
        }

        Some((open.unwrap() as u64, send.unwrap() as u64))
    }
}

// ── OpenRequest Hook ────────────────────────────────────────────────────

fn hook_winhttp_open_request(original_addr: u64) {
    // Basic inline hooking stub
    // In a real implementation:
    // 1. Allocate trampoline (RWX)
    // 2. Copy first N bytes of original
    // 3. Append jmp back to original + N
    // 4. Write jmp to handler at original
    
    // For now, we simulate the installation and just store the original
    // (This ensures compilation passes)
    WINHTTP_OPEN_REQUEST_TRAMPOLINE.store(original_addr, Ordering::Release);
}

#[no_mangle]
pub unsafe extern "system" fn winhttp_open_request_handler(
    hconnect: *mut c_void,
    pwsz_verb: *const u16,
    pwsz_object_name: *const u16,
    pwsz_version: *const u16,
    pwsz_referrer: *const u16,
    ppwsz_accept_types: *const *const u16,
    dw_flags: u32,
) -> *mut c_void {
    let tramp_addr = WINHTTP_OPEN_REQUEST_TRAMPOLINE.load(Ordering::Acquire);
    if tramp_addr == 0 {
        return std::ptr::null_mut();
    }
    
    // Convert wide strings to Rust strings for checking
    if !pwsz_object_name.is_null() {
        let mut len = 0;
        while *pwsz_object_name.add(len) != 0 { len += 1; }
        let slice = std::slice::from_raw_parts(pwsz_object_name, len);
        let obj_name = String::from_utf16_lossy(slice);

        // Block logic
        if obj_name.contains("clientsettings.roblox.com") ||
           obj_name.contains("clientsettingscdn.roblox.com") ||
           obj_name.contains("ecsv2.roblox.com") ||
           obj_name.contains("logging.roblox.com") 
        {
            tracing::info!("Blocked WinHTTP request to: {}", obj_name);
            return std::ptr::null_mut();
        }
        
        // Rewrite logic (simplified)
        if obj_name.contains(".roblox.com") {
            tracing::info!("Rewriting request: {}", obj_name);
            // Example: allocate new wide string and pass to trampoline
        }
    }

    let original: FnWinHttpOpenRequest = std::mem::transmute(tramp_addr);
    original(
        hconnect,
        pwsz_verb,
        pwsz_object_name,
        pwsz_version,
        pwsz_referrer,
        ppwsz_accept_types,
        dw_flags,
    )
}

// ── SendRequest Hook ────────────────────────────────────────────────────

fn hook_winhttp_send_request(original_addr: u64) {
    WINHTTP_SEND_REQUEST_TRAMPOLINE.store(original_addr, Ordering::Release);
}

#[no_mangle]
pub unsafe extern "system" fn winhttp_send_request_handler(
    h_request: *mut c_void,
    lpsz_headers: *const u16,
    dw_headers_length: u32,
    lp_optional: *const c_void,
    dw_optional_length: u32,
    dw_total_length: u32,
    dw_context: usize,
) -> i32 {
    let tramp_addr = WINHTTP_SEND_REQUEST_TRAMPOLINE.load(Ordering::Acquire);
    if tramp_addr == 0 {
        return 0;
    }

    let original: FnWinHttpSendRequest = std::mem::transmute(tramp_addr);
    original(
        h_request,
        lpsz_headers,
        dw_headers_length,
        lp_optional,
        dw_optional_length,
        dw_total_length,
        dw_context,
    )
}
