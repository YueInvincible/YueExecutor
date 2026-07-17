//! Indirect Syscalls for EDR / Anti-Cheat Evasion
//!
//! Direct API calls to `ntdll.dll` can be hooked in-memory by anti-cheats.
//! Instead of calling `NtProtectVirtualMemory` directly, we:
//! 1. Read the clean `ntdll.dll` from disk (`C:\Windows\System32\ntdll.dll`).
//! 2. Parse its export table to find the System Service Number (SSN).
//! 3. Find a clean `syscall; ret` instruction in memory.
//! 4. Execute the syscall manually, spoofing the return address so it appears
//!    to originate from a legitimate Windows module (bypassing Instrumentation
//!    Callbacks).

use std::collections::HashMap;
use std::fs;
use std::path::Path;

use windows::Win32::System::LibraryLoader::{GetModuleHandleW, GetProcAddress};

use yueex_pe::{read_u32, PeImage};

/// A resolved system call.
#[derive(Debug, Clone, Copy)]
pub struct SyscallInfo {
    /// The System Service Number (SSN) passed in EAX.
    pub ssn: u32,
    /// The address of a `syscall; ret` instruction in memory.
    pub syscall_addr: u64,
}

/// Dynamically resolves a syscall by name by parsing ntdll.dll from disk.
pub fn resolve_syscall(api_name: &str) -> Option<SyscallInfo> {
    // 1. Read clean ntdll.dll from disk to bypass in-memory hooks.
    let ntdll_path = Path::new("C:\\Windows\\System32\\ntdll.dll");
    let ntdll_bytes = fs::read(ntdll_path).ok()?;
    let pe = PeImage::parse(&ntdll_bytes).ok()?;

    // 2. Find the API export to get the SSN.
    let export_dir = pe.exports().ok().flatten()?;
    let export = export_dir.exports.iter().find(|e| e.name == api_name)?;

    // The function implementation in ntdll for syscalls usually looks like:
    // mov r10, rcx
    // mov eax, <SSN>
    // test byte ptr [SharedUserData+0x308], 1
    // jne ...
    // syscall
    // ret
    
    // We read the SSN directly from the `mov eax, <SSN>` instruction.
    // RVA -> File Offset
    let file_offset = pe.rva_to_offset(export.function_rva).ok()?;
    
    // The instruction is `B8 <SSN 32-bit>` which is 1 byte opcode + 4 bytes SSN.
    // We scan the first 32 bytes of the function for `B8`.
    let func_code = &ntdll_bytes[file_offset..file_offset + 32];
    
    let mut ssn = None;
    for i in 0..func_code.len() - 4 {
        if func_code[i] == 0xB8 { // mov eax, imm32
            ssn = Some(read_u32(func_code, i + 1));
            break;
        }
    }
    
    let ssn = ssn?;

    // 3. Find a clean `syscall; ret` gadget in the loaded in-memory ntdll.
    // We use the in-memory ntdll because we need an executable address to jump to.
    let h_ntdll = unsafe { GetModuleHandleW(windows::core::w!("ntdll.dll")) }.ok()?;
    
    // We can just use the address of the API itself and scan forward for `0x0F 0x05 0xC3`.
    let api_name_cstr = std::ffi::CString::new(api_name).unwrap();
    let api_addr = unsafe { GetProcAddress(h_ntdll, windows::core::PCSTR(api_name_cstr.as_ptr() as *const u8)) };
    
    if api_addr.is_none() {
        return None;
    }
    
    let api_addr = api_addr.unwrap() as u64;
    
    // Scan up to 64 bytes forward for `syscall (0F 05); ret (C3)`
    let mut syscall_addr = None;
    for i in 0..64 {
        let addr = api_addr + i;
        unsafe {
            let b1 = *(addr as *const u8);
            let b2 = *((addr + 1) as *const u8);
            let b3 = *((addr + 2) as *const u8);
            
            if b1 == 0x0F && b2 == 0x05 && b3 == 0xC3 {
                syscall_addr = Some(addr);
                break;
            }
        }
    }
    
    let syscall_addr = syscall_addr?;

    Some(SyscallInfo { ssn, syscall_addr })
}

// ── Syscall Invocation ────────────────────────────────────────────────

// To invoke the syscall in Rust, we need inline assembly or global assembly.
// Since we want to spoof the return address, it requires a custom assembly stub.
// A full implementation requires `global_asm!` which sets up the stack, pushes
// a spoofed return address, jumps to `syscall_addr`, and then restores.

std::arch::global_asm!(
    r#"
    .global invoke_indirect_syscall
    invoke_indirect_syscall:
        // System V AMD64 ABI -> Windows x64 ABI translation is NOT needed here 
        // since we compile for windows-msvc.
        // Windows x64 calling convention: RCX, RDX, R8, R9, Stack (right to left)
        
        // This is a placeholder for the actual spoofing logic.
        // A real implementation would:
        // 1. Move arguments to correct registers
        // 2. Set EAX to SSN
        // 3. Set R10 to RCX
        // 4. Push a spoofed return address (e.g. inside kernel32)
        // 5. jmp to `syscall_addr`
        // 6. Fix stack on return
        
        // Minimal non-spoofed implementation for structural demonstration:
        mov r10, rcx
        // EAX is already set by the caller (passed in via a wrapper)
        // We assume syscall_addr is passed in a volatile register like R11
        jmp r11
    "#
);

extern "C" {
    /// Execute an indirect syscall.
    /// Needs a Rust wrapper to set EAX and R11 correctly.
    fn invoke_indirect_syscall();
}
