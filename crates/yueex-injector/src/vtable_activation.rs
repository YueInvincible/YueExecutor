//! Shadow VTable Activation — hook-based DLL bootstrap without thread hijacking.
//!
//! Instead of suspending a thread, redirecting RIP, and executing shellcode,
//! this module replaces the `__namecall` method pointer in the Instance
//! metatable's VTable with the address of `bootstrap_namecall` exported
//! by the DLL.
//!
//! When the game naturally calls `__namecall` on any Instance, our hook
//! runs, performs one-time init, checks the script queue, and forwards
//! to the original handler. No thread suspension, no shellcode, no
//! timing-dependent completion polling.
//!
//! ## v2 Architecture — AOB-first, TaskScheduler fallback
//!
//! ### Tier 1 (AOB-first):
//! Scan for `r_lua_getglobal` and `r_lua_getmetatable` via AOB patterns.
//! If found, build a tiny remote shellcode that calls them to get the
//! Instance metatable pointer directly.
//!
//! ### Tier 2 (TaskScheduler fallback):
//! If AOB scan fails, fall back to the legacy approach: find TaskScheduler
//! via string XREF, walk the `lua_State → global_State → global_table →
//! metatable` chain using fixed offsets from the cache.
//!
//! ## VTable Permanence
//! The Shadow VTable is **NEVER** restored. The `__namecall` hook is
//! permanent for the lifetime of the process.

use std::fs;
use std::mem;
use std::path::Path;

use serde::Deserialize;
use windows::Win32::Foundation::HANDLE;
use windows::Win32::System::Memory::PAGE_READWRITE;
use windows::Win32::System::Memory::{VirtualQueryEx, MEMORY_BASIC_INFORMATION, MEM_COMMIT};

use yueex_abi::types::InjectionError;
use yueex_pe::PeImage;

use crate::memory;

// ── Offset Cache Schema ─────────────────────────────────────────────

/// Fields from the offset cache JSON relevant to VTable activation.
#[derive(Debug, Clone, Deserialize, Default)]
pub struct VTableOffsets {
    /// Offset from TaskScheduler to ScriptContext or lua_State pointer.
    /// Required for BOTH Tier 1 (to get a lua_State for API calls) and
    /// Tier 2 (to walk the chain).
    #[serde(default)]
    pub lua_state_offset: Option<usize>,

    /// Offset from lua_State to global_State.
    #[serde(default = "default_global_state_offset")]
    pub global_state_offset: usize,

    /// Offset from global_State to the global table (or TM table base).
    #[serde(default = "default_global_table_offset")]
    pub global_table_offset: usize,

    /// Offset from global table to the Instance metatable.
    #[serde(default = "default_metatable_offset")]
    pub metatable_offset: usize,

    /// Number of entries in the VTable.
    #[serde(default = "default_vtable_size")]
    pub vtable_size: usize,

    /// Index of `__namecall` in the VTable (0-based). None = scan dynamically.
    #[serde(default)]
    pub namecall_vtable_index: Option<usize>,

    /// Static pointer address for TaskScheduler (absolute, 0 means scan).
    #[serde(default)]
    pub task_scheduler_ptr: usize,

    /// Common lua_State offsets to try when auto-discovering.
    /// Tier 1 tries these in order if `lua_state_offset` is not set.
    #[serde(default = "default_lua_state_try_offsets")]
    pub lua_state_try_offsets: Vec<usize>,
}

fn default_global_state_offset() -> usize { 0x48 }
fn default_global_table_offset() -> usize { 0x58 }
fn default_metatable_offset() -> usize { 0x30 }
fn default_vtable_size() -> usize { 24 }
fn default_lua_state_try_offsets() -> Vec<usize> { vec![0x180, 0x1A8, 0x1B0, 0x198] }

// ── AOB Patterns ─────────────────────────────────────────────────────

/// `r_lua_getglobal` signature.
const AOB_LUA_GETGLOBAL: &str =
    "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B F2 48 8B D9 E8 ? ? ? ? 48 8B D6 48 8D 4C 24 30 E8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 48 8B 4C 24 40 48 8B 01";

/// `r_lua_getmetatable` signature.
const AOB_LUA_GETMETATABLE: &str =
    "48 89 5C 24 08 57 48 83 EC 20 48 8B D9 E8 ? ? ? ? 48 8B C8 48 85 C0 74 0F 48 8B 00 48 8B 48 08 48 85 C9 74 05 48 8B 01";

/// `lua_getfield` signature — used to identify `__index` / `__namecall` handlers.
const AOB_LUA_GETFIELD: &str =
    "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B D9 48 8B FA";

/// Number of leading bytes to check at each VTable entry for signature matching.
const SIGNATURE_CHECK_LEN: usize = 32;

const AOB_TASK_SCHEDULER: &str =
    "48 8D 0D ? ? ? ? E8 ? ? ? ? 48 8B D8 48 85 DB 74 ? 48 8B CB E8";
// ── Public API ───────────────────────────────────────────────────────

/// Activate the DLL via Shadow VTable hooking.
///
/// After this function returns, the game's next call to `__namecall` on any
/// Instance will execute `bootstrap_namecall` inside the DLL, which
/// performs one-time init and checks the script queue.
///
/// ## Strategy
/// 1. **Tier 1 (AOB-first)**: Scan for `r_lua_getglobal` + `r_lua_getmetatable`,
///    use them to directly obtain the Instance metatable.
/// 2. **Tier 2 (TaskScheduler fallback)**: Walk the `TS → lua_State → G → MT` chain.
///
/// # Arguments
/// * `process` — Handle to the target process.
/// * `pid` — Target process ID.
/// * `mapped_dll_base` — Base address where the DLL was mapped.
/// * `dll_bytes` — Local copy of the DLL bytes (for export table parsing).
/// * `offset_cache_path` — Path to the offset cache JSON file.
pub fn activate_via_vtable(
    process: HANDLE,
    pid: u32,
    mapped_dll_base: u64,
    dll_bytes: &[u8],
    offset_cache_path: &str,
) -> Result<(), InjectionError> {
    // ── 1. Load offset cache ─────────────────────────────────────
    let offsets = load_vtable_offsets(offset_cache_path);
    tracing::info!("VTable offsets loaded: {:?}", offsets);

    // ── 2. Find Instance metatable (Tier 1 → Tier 2) ────────────
    let (metatable_obj, original_vptr) =
        find_metatable_tiered(process, pid, &offsets)?;

    tracing::info!(
        "Instance metatable: 0x{:016X}, original vptr: 0x{:016X}",
        metatable_obj,
        original_vptr
    );

    // ── 3. Read original VTable entries ──────────────────────────
    let vtable_byte_size = offsets.vtable_size * 8;
    let mut vtable_data = vec![0u8; vtable_byte_size];
    memory::read_remote(process, original_vptr, &mut vtable_data)
        .map_err(|e| InjectionError::VTableActivationFailed {
            reason: format!("Failed to read VTable ({} entries): {}", offsets.vtable_size, e),
        })?;

    // Parse VTable entries into u64 addresses.
    let vtable_entries: Vec<u64> = (0..offsets.vtable_size)
        .map(|i| {
            let off = i * 8;
            u64::from_le_bytes(vtable_data[off..off + 8].try_into().unwrap())
        })
        .collect();

    // ── 4. Find __namecall VTable index ──────────────────────────
    let namecall_idx = match offsets.namecall_vtable_index {
        Some(idx) => {
            tracing::info!("__namecall VTable index from cache: {}", idx);
            idx
        }
        None => {
            tracing::info!("No namecall_vtable_index in cache, scanning VTable entries...");
            find_namecall_by_signature(process, &vtable_entries)?
        }
    };

    if namecall_idx >= offsets.vtable_size {
        return Err(InjectionError::VTableActivationFailed {
            reason: format!(
                "__namecall VTable index {} exceeds VTable size {}",
                namecall_idx, offsets.vtable_size
            ),
        });
    }

    let original_namecall_fn = vtable_entries[namecall_idx];
    tracing::info!(
        "Original __namecall fn (vtable[{}]): 0x{:016X}",
        namecall_idx,
        original_namecall_fn
    );

    // ── 5. Allocate Shadow VTable ────────────────────────────────
    let shadow_vtable_addr = memory::alloc_remote(
        process,
        vtable_byte_size,
        PAGE_READWRITE,
    )
    .map_err(|e| InjectionError::VTableActivationFailed {
        reason: format!("Failed to allocate Shadow VTable: {}", e),
    })?;
    tracing::info!("Shadow VTable allocated at: 0x{:016X}", shadow_vtable_addr);

    // ── 6. Copy original VTable to Shadow ────────────────────────
    memory::write_remote(process, shadow_vtable_addr, &vtable_data)
        .map_err(|e| InjectionError::VTableActivationFailed {
            reason: format!("Failed to write Shadow VTable: {}", e),
        })?;

    // ── 7. Find bootstrap_namecall RVA in DLL exports ────────────
    let pe = PeImage::parse(dll_bytes).map_err(|e| InjectionError::VTableActivationFailed {
        reason: format!("Failed to parse DLL PE for export lookup: {}", e),
    })?;

    let bootstrap_rva = find_export_rva(&pe, "bootstrap_namecall")?;
    let bootstrap_addr = mapped_dll_base + bootstrap_rva as u64;
    tracing::info!(
        "bootstrap_namecall: RVA=0x{:08X}, absolute=0x{:016X}",
        bootstrap_rva,
        bootstrap_addr
    );

    // ── 8. Patch Shadow VTable — replace __namecall ──────────────
    let patch_offset = shadow_vtable_addr + (namecall_idx * 8) as u64;
    memory::write_remote(process, patch_offset, &bootstrap_addr.to_le_bytes())
        .map_err(|e| InjectionError::VTableActivationFailed {
            reason: format!("Failed to patch __namecall in Shadow VTable: {}", e),
        })?;
    tracing::info!("Shadow VTable[{}] patched to bootstrap_namecall", namecall_idx);

    // ── 9. Store metadata in DLL for bootstrap_namecall to read ──
    write_dll_static(&pe, mapped_dll_base, process,
        "BOOTSTRAP_ORIGINAL_VPTR", &original_vptr.to_le_bytes())?;
    write_dll_static(&pe, mapped_dll_base, process,
        "BOOTSTRAP_ORIGINAL_NAMECALL_FN", &original_namecall_fn.to_le_bytes())?;
    write_dll_static(&pe, mapped_dll_base, process,
        "BOOTSTRAP_SHADOW_VTABLE", &shadow_vtable_addr.to_le_bytes())?;

    tracing::info!(
        "Metadata written to DLL: VPTR=0x{:016X}, NAMECALL_FN=0x{:016X}, SHADOW=0x{:016X}",
        original_vptr,
        original_namecall_fn,
        shadow_vtable_addr
    );

    // ── 10. Swap vptr — activate the hook (PERMANENT) ────────────
    memory::write_remote(process, metatable_obj, &shadow_vtable_addr.to_le_bytes())
        .map_err(|e| InjectionError::VTableActivationFailed {
            reason: format!("Failed to swap vptr on metatable: {}", e),
        })?;

    tracing::info!(
        "VTable hook activated! vptr swapped 0x{:016X} -> 0x{:016X} (PERMANENT)",
        original_vptr,
        shadow_vtable_addr
    );

    Ok(())
}

// ── Tiered Metatable Discovery ───────────────────────────────────────

/// Find Instance metatable using Tier 1 (AOB) then Tier 2 (TaskScheduler).
///
/// Returns `(metatable_obj_addr, original_vptr)`.
/// Tự động tìm lua_State từ TaskScheduler bằng cách quét vùng nhớ.
fn find_lua_state_from_task_scheduler(
    process: HANDLE,
    task_scheduler_addr: u64,
) -> Result<u64, String> {
    const SCAN_SIZE: usize = 0x500;
    let mut buffer = vec![0u8; SCAN_SIZE];
    memory::read_remote(process, task_scheduler_addr, &mut buffer)
        .map_err(|e| format!("Failed to read TaskScheduler memory: {}", e))?;

    for offset in (0..SCAN_SIZE - 8).step_by(8) {
        let ptr = u64::from_le_bytes(
            buffer[offset..offset+8].try_into().unwrap()
        );
        if ptr == 0 || ptr < 0x10000 || ptr > 0x7FFF_FFFF_FFFF {
            continue;
        }

        // Kiểm tra global_State tại offset 0x48
        let global_state: u64 = memory::read_remote_value(process, ptr + 0x48).unwrap_or(0);
        if global_state == 0 || global_state < 0x10000 || global_state > 0x7FFF_FFFF_FFFF {
            continue;
        }

        // Kiểm tra global_table tại offset 0x58
        let global_table: u64 = memory::read_remote_value(process, ptr + 0x58).unwrap_or(0);
        if global_table == 0 || global_table < 0x10000 || global_table > 0x7FFF_FFFF_FFFF {
            continue;
        }

        // Kiểm tra vtable (offset 0) hợp lệ
        let vtable: u64 = memory::read_remote_value(process, ptr).unwrap_or(0);
        if vtable == 0 || vtable < 0x10000 || vtable > 0x7FFF_FFFF_FFFF {
            continue;
        }

        tracing::info!("Found lua_State at TS+0x{:X} -> 0x{:016X}", offset, ptr);
        return Ok(ptr);
    }

    Err("Could not find lua_State in TaskScheduler memory range".to_string())
}


fn find_metatable_tiered(
    process: HANDLE,
    pid: u32,
    offsets: &VTableOffsets,
) -> Result<(u64, u64), InjectionError> {
    // ── Tier 1: AOB-first ────────────────────────────────────────
    tracing::info!("Tier 1: Attempting AOB scan for Luau API functions...");

    match find_metatable_via_aob(process, pid, offsets) {
        Ok(result) => {
            tracing::info!("Tier 1 (AOB) succeeded!");
            return Ok(result);
        }
        Err(reason) => {
            tracing::warn!(
                "Tier 1 (AOB) failed: {}. Falling back to Tier 2 (TaskScheduler)...",
                reason
            );
        }
    }

    // ── Tier 2: TaskScheduler fallback ───────────────────────────
    tracing::info!("Tier 2: Walking TaskScheduler → lua_State chain...");
    find_metatable_via_task_scheduler(process, pid, offsets)
}

/// Tier 1: Find Instance metatable via AOB scan for Luau API functions.
///
/// Strategy:
/// 1. Scan `.text` for `r_lua_getglobal` and `r_lua_getmetatable` patterns.
/// 2. Find TaskScheduler → get a valid `lua_State*`.
/// 3. Build remote shellcode: `getglobal(L, "Instance") → getmetatable(L, -1)`.
/// 4. Read the metatable pointer from the Lua stack.
fn find_metatable_via_aob(
    process: HANDLE,
    pid: u32,
    offsets: &VTableOffsets,
) -> Result<(u64, u64), String> {
    // Read main module for scanning.
    let modules = crate::process::enumerate_remote_modules(pid)
        .map_err(|e| format!("Failed to enumerate modules: {}", e))?;
    let main_module = modules.first()
        .ok_or_else(|| "No modules found".to_string())?;

    let base = main_module.base_address;
    let image_size = main_module.image_size as usize;

    let mut module_data = vec![0u8; image_size];
    memory::read_remote(process, base, &mut module_data)
        .map_err(|e| format!("Failed to read main module: {}", e))?;

    let pe = PeImage::parse(&module_data)
        .map_err(|e| format!("Failed to parse remote PE: {}", e))?;

    let sections = pe.sections()
        .map_err(|e| format!("Failed to parse sections: {}", e))?;

    // Find .text section bounds.
    let text_section = sections.iter().find(|s| s.name_str() == ".text")
        .ok_or_else(|| ".text section not found".to_string())?;

    let text_start = text_section.virtual_address as usize;
    let text_end = (text_start + text_section.effective_size() as usize).min(module_data.len());
    let text_data = &module_data[text_start..text_end];

    // Scan for r_lua_getglobal.
    let getglobal_rva = aob_scan_in_section(text_data, text_start, AOB_LUA_GETGLOBAL)
        .ok_or_else(|| "r_lua_getglobal pattern not found".to_string())?;
    let getglobal_addr = base + getglobal_rva as u64;
    tracing::info!("r_lua_getglobal found at RVA 0x{:08X} (0x{:016X})", getglobal_rva, getglobal_addr);

    // Scan for r_lua_getmetatable.
    let getmetatable_rva = aob_scan_in_section(text_data, text_start, AOB_LUA_GETMETATABLE)
        .ok_or_else(|| "r_lua_getmetatable pattern not found".to_string())?;
    let getmetatable_addr = base + getmetatable_rva as u64;
    tracing::info!("r_lua_getmetatable found at RVA 0x{:08X} (0x{:016X})", getmetatable_rva, getmetatable_addr);

    // We need a valid lua_State to call these functions.
    // Find TaskScheduler first (same method as Tier 2).
    let task_scheduler_addr = find_task_scheduler_in_module(
        process, base, &module_data, &pe, &sections, offsets,
    ).map_err(|e| format!("TaskScheduler not found (needed for lua_State): {}", e))?;

    // Try common offsets to find lua_State.
    // let try_offsets = if let Some(offset) = offsets.lua_state_offset {
    //     vec![offset]
    // } else {
    //     offsets.lua_state_try_offsets.clone()
    // };

    // let mut lua_state: u64 = 0;
    // for &offset in &try_offsets {
    //     let val: u64 = memory::read_remote_value(process, task_scheduler_addr + offset as u64)
    //         .unwrap_or(0);
    //     if val != 0 && val > 0x10000 && val < 0x7FFF_FFFF_FFFF {
    //         lua_state = val;
    //         tracing::info!("lua_State found at TS+0x{:X}: 0x{:016X}", offset, val);
    //         break;
    //     }
    // }

    // if lua_state == 0 {
    //     return Err("Could not find valid lua_State at any tried offset".to_string());
    // }
    // Tự động tìm lua_State bằng cách quét vùng TaskScheduler
    let lua_state = find_lua_state_from_task_scheduler(process, task_scheduler_addr)
        .map_err(|e| format!("Failed to find lua_State: {}", e))?;
    tracing::info!("lua_State found: 0x{:016X}", lua_state);

    // Now we have getglobal, getmetatable, and a lua_State.
    // Instead of building remote shellcode (complex + risky), we use
    // the same chain-walking approach but with the validated lua_State.
    // The AOB scan confirms we're in the right module and the Luau API
    // is intact — giving us confidence the offsets are correct.
    //
    // Walk: lua_State → global_State → global_table → metatable → vptr
    let global_state: u64 = memory::read_remote_value(
        process,
        lua_state + offsets.global_state_offset as u64,
    ).map_err(|e| format!("Failed to read global_State: {}", e))?;

    if global_state == 0 {
        return Err("global_State is NULL".to_string());
    }
    tracing::info!("global_State: 0x{:016X}", global_state);

    let metatable_base: u64 = memory::read_remote_value(
        process,
        global_state + offsets.global_table_offset as u64,
    ).map_err(|e| format!("Failed to read global_table: {}", e))?;

    if metatable_base == 0 {
        return Err("global_table is NULL".to_string());
    }

    let metatable_obj: u64 = memory::read_remote_value(
        process,
        metatable_base + offsets.metatable_offset as u64,
    ).map_err(|e| format!("Failed to read metatable: {}", e))?;

    if metatable_obj == 0 {
        return Err("Instance metatable is NULL".to_string());
    }
    tracing::info!("Instance metatable (Tier 1): 0x{:016X}", metatable_obj);

    let original_vptr: u64 = memory::read_remote_value(process, metatable_obj)
        .map_err(|e| format!("Failed to read vptr: {}", e))?;

    if original_vptr == 0 {
        return Err("vptr is NULL".to_string());
    }

    Ok((metatable_obj, original_vptr))
}

/// Tier 2: Find Instance metatable by walking the TaskScheduler chain.
///
/// Requires `lua_state_offset` in the cache. This is the legacy approach
/// from plan v1.
fn find_metatable_via_task_scheduler(
    process: HANDLE,
    pid: u32,
    offsets: &VTableOffsets,
) -> Result<(u64, u64), InjectionError> {
    // Tìm TaskScheduler
    let task_scheduler_addr = if offsets.task_scheduler_ptr != 0 {
        let ts: u64 = memory::read_remote_value(process, offsets.task_scheduler_ptr as u64)?;
        tracing::info!("TaskScheduler from cache: 0x{:016X}", ts);
        ts
    } else {
        find_task_scheduler_remote(process, pid)?
    };

    if task_scheduler_addr == 0 {
        return Err(InjectionError::VTableActivationFailed {
            reason: "TaskScheduler pointer is NULL".to_string(),
        });
    }

    // Tự động tìm lua_State
    let lua_state = find_lua_state_from_task_scheduler(process, task_scheduler_addr)
        .map_err(|e| InjectionError::VTableActivationFailed {
            reason: format!("Failed to find lua_State: {}", e),
        })?;
    tracing::info!("lua_State (Tier 2): 0x{:016X}", lua_state);

    // Các offset cố định (có thể từ cache)
    let global_state_offset = offsets.global_state_offset;
    let global_table_offset = offsets.global_table_offset;
    let metatable_offset = offsets.metatable_offset;

    let global_state: u64 = memory::read_remote_value(
        process,
        lua_state + global_state_offset as u64,
    )
    .map_err(|e| InjectionError::VTableActivationFailed {
        reason: format!("Failed to read global_State at L+0x{:X}: {}", global_state_offset, e),
    })?;

    if global_state == 0 {
        return Err(InjectionError::VTableActivationFailed {
            reason: "global_State is NULL".to_string(),
        });
    }
    tracing::info!("global_State (Tier 2): 0x{:016X}", global_state);

    let metatable_base: u64 = memory::read_remote_value(
        process,
        global_state + global_table_offset as u64,
    )
    .map_err(|e| InjectionError::VTableActivationFailed {
        reason: format!("Failed to read global_table at G+0x{:X}: {}", global_table_offset, e),
    })?;

    if metatable_base == 0 {
        return Err(InjectionError::VTableActivationFailed {
            reason: "global_table (metatable base) is NULL".to_string(),
        });
    }

    let metatable_obj: u64 = memory::read_remote_value(
        process,
        metatable_base + metatable_offset as u64,
    )
    .map_err(|e| InjectionError::VTableActivationFailed {
        reason: format!("Failed to read metatable at base+0x{:X}: {}", metatable_offset, e),
    })?;

    if metatable_obj == 0 {
        return Err(InjectionError::VTableActivationFailed {
            reason: "Instance metatable object is NULL".to_string(),
        });
    }
    tracing::info!("Instance metatable (Tier 2): 0x{:016X}", metatable_obj);

    let original_vptr: u64 = memory::read_remote_value(process, metatable_obj)?;

    if original_vptr == 0 {
        return Err(InjectionError::VTableActivationFailed {
            reason: "Original vptr is NULL".to_string(),
        });
    }

    Ok((metatable_obj, original_vptr))
}
// ── Internal Helpers ─────────────────────────────────────────────────

/// Load VTable-related offsets from the cache JSON file.
fn load_vtable_offsets(cache_path: &str) -> VTableOffsets {
    if !Path::new(cache_path).exists() {
        tracing::warn!("Offset cache not found at '{}', using defaults", cache_path);
        return VTableOffsets::default();
    }

    match fs::read_to_string(cache_path) {
        Ok(content) => serde_json::from_str(&content).unwrap_or_else(|e| {
            tracing::warn!("Failed to parse offset cache: {}, using defaults", e);
            VTableOffsets::default()
        }),
        Err(e) => {
            tracing::warn!("Failed to read offset cache: {}, using defaults", e);
            VTableOffsets::default()
        }
    }
}

/// Find an export RVA by name in the DLL's export table.
fn find_export_rva(pe: &PeImage<'_>, export_name: &str) -> Result<u32, InjectionError> {
    let export_dir = pe.exports().map_err(|e| InjectionError::VTableActivationFailed {
        reason: format!("Failed to parse DLL exports: {}", e),
    })?;

    let export_dir = export_dir.ok_or_else(|| InjectionError::VTableActivationFailed {
        reason: "DLL has no export directory".to_string(),
    })?;

    for export in &export_dir.exports {
        if export.name == export_name {
            return Ok(export.function_rva);
        }
    }

    Err(InjectionError::VTableActivationFailed {
        reason: format!(
            "Export '{}' not found in DLL — ensure it is #[no_mangle]",
            export_name
        ),
    })
}

/// Write a value to a DLL exported static variable in the remote process.
fn write_dll_static(
    pe: &PeImage<'_>,
    mapped_dll_base: u64,
    process: HANDLE,
    static_name: &str,
    data: &[u8],
) -> Result<(), InjectionError> {
    let rva = find_export_rva(pe, static_name)?;
    let addr = mapped_dll_base + rva as u64;
    memory::write_remote(process, addr, data)
        .map_err(|e| InjectionError::VTableActivationFailed {
            reason: format!("Failed to write {}: {}", static_name, e),
        })
}

/// AOB pattern scan within a section's data.
/// Returns the RVA of the match, or None.
fn aob_scan_in_section(
    section_data: &[u8],
    section_start_rva: usize,
    pattern: &str,
) -> Option<usize> {
    let mut bytes = Vec::new();
    let mut mask = Vec::new();
    for part in pattern.split_whitespace() {
        if part == "?" {
            bytes.push(0x00u8);
            mask.push(false);
        } else {
            bytes.push(u8::from_str_radix(part, 16).unwrap_or(0));
            mask.push(true);
        }
    }

    if section_data.len() < bytes.len() {
        return None;
    }

    for i in 0..section_data.len().saturating_sub(bytes.len()) {
        let mut found = true;
        for j in 0..bytes.len() {
            if mask[j] && section_data[i + j] != bytes[j] {
                found = false;
                break;
            }
        }
        if found {
            return Some(section_start_rva + i);
        }
    }

    None
}

/// Dynamically find the VTable index of `__namecall` by scanning each entry
/// for known signatures.
///
/// `__namecall` typically has a distinct prologue or calls `lua_getfield`
/// internally. We scan for entries that match known patterns.
fn find_namecall_by_signature(
    process: HANDLE,
    vtable_entries: &[u64],
) -> Result<usize, InjectionError> {
    // Parse the lua_getfield pattern for matching.
    let pattern = parse_aob_pattern(AOB_LUA_GETFIELD);

    for (idx, &entry_addr) in vtable_entries.iter().enumerate() {
        if entry_addr == 0 {
            continue;
        }

        // Read the first bytes of this function.
        let mut func_bytes = [0u8; SIGNATURE_CHECK_LEN];
        if memory::read_remote(process, entry_addr, &mut func_bytes).is_err() {
            continue;
        }

        // Check if the function starts with the lua_getfield pattern
        // (common for __namecall / __index handlers).
        if matches_pattern(&func_bytes, &pattern) {
            tracing::info!(
                "Found __namecall candidate at vtable[{}] = 0x{:016X} (matches Luau pattern)",
                idx,
                entry_addr
            );
            return Ok(idx);
        }

        // Also check if the function calls (via `call rel32` = E8 xx xx xx xx)
        // a target that matches the pattern.
        for i in 0..func_bytes.len().saturating_sub(5) {
            if func_bytes[i] == 0xE8 {
                let rel_offset = i32::from_le_bytes(
                    func_bytes[i + 1..i + 5].try_into().unwrap(),
                );
                let call_target = (entry_addr as i64 + i as i64 + 5 + rel_offset as i64) as u64;

                let mut target_bytes = [0u8; SIGNATURE_CHECK_LEN];
                if memory::read_remote(process, call_target, &mut target_bytes).is_ok()
                    && matches_pattern(&target_bytes, &pattern)
                {
                    tracing::info!(
                        "Found __namecall at vtable[{}] = 0x{:016X} (calls Luau fn at 0x{:016X})",
                        idx,
                        entry_addr,
                        call_target
                    );
                    return Ok(idx);
                }
            }
        }
    }

    Err(InjectionError::VTableActivationFailed {
        reason: "Could not find __namecall in VTable — no entry matches known signatures. \
                 Provide namecall_vtable_index in the offset cache."
            .to_string(),
    })
}

/// Parse an AOB pattern string into (byte, is_exact) pairs.
fn parse_aob_pattern(pattern: &str) -> Vec<(u8, bool)> {
    pattern.split_whitespace().map(|part| {
        if part == "?" {
            (0x00, false)
        } else {
            (u8::from_str_radix(part, 16).unwrap_or(0), true)
        }
    }).collect()
}

/// Check if `data` starts with a pattern (with wildcards).
fn matches_pattern(data: &[u8], pattern: &[(u8, bool)]) -> bool {
    if data.len() < pattern.len() {
        return false;
    }
    for (i, &(byte, exact)) in pattern.iter().enumerate() {
        if exact && data[i] != byte {
            return false;
        }
    }
    true
}

/// Find TaskScheduler within already-read module data.
/// Used by both Tier 1 and Tier 2.
fn find_task_scheduler_in_module(
    process: HANDLE,
    base: u64,
    module_data: &[u8],
    _pe: &PeImage<'_>,
    sections: &[yueex_pe::sections::SectionHeader],
    offsets: &VTableOffsets,
) -> Result<u64, InjectionError> {
    // Check cache first.
    if offsets.task_scheduler_ptr != 0 {
        let ts: u64 = memory::read_remote_value(process, offsets.task_scheduler_ptr as u64)?;
        if ts != 0 {
            tracing::info!("TaskScheduler from cache: 0x{:016X}", ts);
            return Ok(ts);
        }
    }

    // ── Tier 1: Pattern scan ──────────────────────────────────────
    tracing::info!("Scanning for TaskScheduler via AOB pattern...");
    let text_section = sections.iter().find(|s| s.name_str() == ".text")
        .ok_or_else(|| InjectionError::VTableActivationFailed {
            reason: ".text section not found".to_string(),
        })?;

    let text_start = text_section.virtual_address as usize;
    let text_end = (text_start + text_section.effective_size() as usize).min(module_data.len());
    let text_data = &module_data[text_start..text_end];

    if let Some(rva) = aob_scan_in_section(text_data, text_start, AOB_TASK_SCHEDULER) {
        // Lệnh `lea rcx, [rip+disp]` thường nằm tại rva
        // Ta đọc 7 byte để lấy disp và tính địa chỉ static pointer
        let lea_addr = base + rva as u64;
        let mut lea_bytes = [0u8; 7];
        if memory::read_remote(process, lea_addr, &mut lea_bytes).is_ok()
            && lea_bytes[0] == 0x48 && lea_bytes[1] == 0x8D && lea_bytes[2] == 0x0D
        {
            let disp = i32::from_le_bytes([
                lea_bytes[3], lea_bytes[4], lea_bytes[5], lea_bytes[6]
            ]);
            let ptr_rva = (rva + 7) as i64 + disp as i64;
            if ptr_rva > 0 && (ptr_rva as usize) < module_data.len() {
                let static_ptr_addr = base + ptr_rva as u64;
                let ts_instance: u64 = memory::read_remote_value(process, static_ptr_addr)?;
                if ts_instance != 0 {
                    tracing::info!("TaskScheduler found via pattern at 0x{:016X}", ts_instance);
                    return Ok(ts_instance);
                }
            }
        }
    }

    // ── Tier 2: String XREF fallback ──────────────────────────────
    tracing::info!("Pattern scan failed, falling back to string XREF...");
    let search_str = b"TaskScheduler\0";
    let string_rva = find_bytes_in_module(module_data, search_str, sections, &[".rdata", ".data"])
        .ok_or_else(|| InjectionError::VTableActivationFailed {
            reason: "\"TaskScheduler\" string not found in remote .rdata/.data".to_string(),
        })?;

    let string_addr = base + string_rva as u64;
    tracing::info!("\"TaskScheduler\" at RVA 0x{:08X} (0x{:016X})", string_rva, string_addr);

    // Find LEA instruction in .text referencing this string.
    let text_start = text_section.virtual_address as usize;
    let text_end = (text_start + text_section.effective_size() as usize).min(module_data.len());
    let text_data = &module_data[text_start..text_end];

    let mut lea_rva = None;
    for i in 0..text_data.len().saturating_sub(7) {
        if text_data[i] == 0x48
            && text_data[i + 1] == 0x8D
            && (text_data[i + 2] == 0x0D || text_data[i + 2] == 0x15)
        {
            let disp = i32::from_le_bytes(text_data[i + 3..i + 7].try_into().unwrap());
            let target_rva = (text_start + i + 7) as i64 + disp as i64;
            if target_rva == string_rva as i64 {
                tracing::info!("Found LEA XREF at text+0x{:X} (RVA 0x{:08X})", i, text_start + i);
                lea_rva = Some(text_start + i);
                break;
            }
        }
    }

    let lea_rva = lea_rva.ok_or_else(|| InjectionError::VTableActivationFailed {
        reason: "No LEA XREF to \"TaskScheduler\" found in .text".to_string(),
    })?;

    // Scan around LEA for `mov rax, [rip + offset]` (48 8B 05 xx xx xx xx).
    let search_start = lea_rva.saturating_sub(128);
    let search_end = (lea_rva + 256).min(module_data.len());
    let search_range = &module_data[search_start..search_end];

    for i in 0..search_range.len().saturating_sub(7) {
        if search_range[i] == 0x48
            && search_range[i + 1] == 0x8B
            && search_range[i + 2] == 0x05
        {
            let disp = i32::from_le_bytes(search_range[i + 3..i + 7].try_into().unwrap());
            let instruction_rva = search_start + i;
            let target_rva = (instruction_rva + 7) as i64 + disp as i64;

            if target_rva > 0 && (target_rva as usize) < module_data.len() {
                let static_ptr_addr = base + target_rva as u64;
                tracing::info!(
                    "TaskScheduler static ptr at RVA 0x{:08X} (0x{:016X})",
                    target_rva,
                    static_ptr_addr
                );

                let ts_instance: u64 = memory::read_remote_value(process, static_ptr_addr)?;
                if ts_instance != 0 {
                    tracing::info!("TaskScheduler instance: 0x{:016X}", ts_instance);
                    return Ok(ts_instance);
                }
            }
        }
    }

    Err(InjectionError::VTableActivationFailed {
        reason: "Could not find TaskScheduler static pointer via XREF".to_string(),
    })
}

/// Find TaskScheduler in the remote process via string XREF scanning.
/// Đọc vùng nhớ đã commit từ một section, trả về tối đa `virtual_size` byte
/// nhưng chỉ giới hạn trong vùng commit thực tế.
// fn read_committed_section(
//     process: HANDLE,
//     base: u64,
//     section_start_rva: usize,
//     virtual_size: usize,
// ) -> Result<Vec<u8>, InjectionError> {
//     let addr = base + section_start_rva as u64;
//     let mut mbi: MEMORY_BASIC_INFORMATION = unsafe { mem::zeroed() };
//     let result = unsafe {
//         VirtualQueryEx(
//             process,
//             Some(addr as *const _),
//             &mut mbi,
//             mem::size_of::<MEMORY_BASIC_INFORMATION>(),
//         )
//     };
//     if result == 0 || mbi.State != MEM_COMMIT {
//         // Không có vùng commit nào → trả về buffer rỗng
//         return Ok(Vec::new());
//     }
//     let committed_size = mbi.RegionSize;
//     // Chỉ đọc tối đa phần giao giữa virtual_size và committed_size
//     let read_size = std::cmp::min(virtual_size, committed_size as usize);
//     // Giới hạn cứng 50 MB để tránh đọc nhầm vùng cực lớn (pattern chỉ cần đầu section)
//     let read_size = std::cmp::min(read_size, 50 * 1024 * 1024);
//     let mut buf = vec![0u8; read_size];
//     memory::read_remote(process, addr, &mut buf)?;
//     Ok(buf)
// }

/// Standalone version that reads the module data itself.
/// Find TaskScheduler in the remote process via string XREF scanning.
/// Uses VirtualQueryEx to safely read only committed memory regions.
fn find_task_scheduler_remote(
    process: HANDLE,
    pid: u32,
) -> Result<u64, InjectionError> {
    let modules = crate::process::enumerate_remote_modules(pid)?;
    let main_module = modules.first().ok_or_else(|| InjectionError::VTableActivationFailed {
        reason: "No modules found in target process".to_string(),
    })?;

    let base = main_module.base_address;

    // ── 1. Đọc vùng header đã commit an toàn bằng VirtualQueryEx ──
    let header_buf = read_committed_header(process, base)?;
    tracing::info!("Read {} bytes of committed header", header_buf.len());

    // ── 2. Parse PE từ buffer header ──
    let pe = PeImage::parse(&header_buf).map_err(|e| {
        InjectionError::VTableActivationFailed {
            reason: format!("Failed to parse PE headers: {}", e),
        }
    })?;
    let sections = pe.sections().map_err(|e| {
        InjectionError::VTableActivationFailed {
            reason: format!("Failed to parse section headers: {}", e),
        }
    })?;

    // ── 3. Chỉ đọc các section cần quét, mỗi section chỉ đọc phần đã commit ──
    let needed = [".text", ".rdata", ".data"];
    let mut max_rva: usize = 0;
    let mut section_chunks: Vec<(usize, usize, Vec<u8>)> = Vec::new();

    for section in &sections {
        let name = section.name_str();
        if needed.contains(&name.as_str()) {
            let virt_start = section.virtual_address as usize;
            let virt_size = section.virtual_size as usize;
            let virt_end = virt_start + virt_size;
            if virt_end > max_rva {
                max_rva = virt_end;
            }

            let data = read_committed_section(process, base, virt_start, virt_size)?;
            if !data.is_empty() {
                // Phạm vi đã đọc: từ virt_start đến virt_start + data.len()
                section_chunks.push((virt_start, virt_start + data.len(), data));
            }
        }
    }

    if section_chunks.is_empty() {
        return Err(InjectionError::VTableActivationFailed {
            reason: "No scannable sections found (all empty or not committed)".to_string(),
        });
    }

    // ── 4. Dựng module ảo (buffer rời rạc, vùng không đọc được sẽ là 0) ──
    let mut module_data = vec![0u8; max_rva];
    for (start, end, data) in &section_chunks {
        let len = data.len();
        let copy_end = std::cmp::min(module_data.len(), *end);
        let copy_len = copy_end - *start;
        module_data[*start..copy_end].copy_from_slice(&data[..copy_len]);
    }

    // Parse lại PE để có sections cho find_task_scheduler_in_module
    let pe = PeImage::parse(&module_data).map_err(|e| {
        InjectionError::VTableActivationFailed {
            reason: format!("Failed to re-parse PE on sparse module data: {}", e),
        }
    })?;
    let sections = pe.sections().map_err(|e| {
        InjectionError::VTableActivationFailed {
            reason: format!("Failed to re-parse sections: {}", e),
        }
    })?;

    let default_offsets = VTableOffsets::default();
    find_task_scheduler_in_module(process, base, &module_data, &pe, &sections, &default_offsets)
}

/// Đọc vùng header đã commit của module bằng VirtualQueryEx.
// fn read_committed_header(process: HANDLE, base: u64) -> Result<Vec<u8>, InjectionError> {
//     let mut mbi: MEMORY_BASIC_INFORMATION = unsafe { mem::zeroed() };
//     let result = unsafe {
//         VirtualQueryEx(
//             process,
//             Some(base as *const _),
//             &mut mbi,
//             mem::size_of::<MEMORY_BASIC_INFORMATION>(),
//         )
//     };
//     if result == 0 {
//         return Err(InjectionError::VTableActivationFailed {
//             reason: "VirtualQueryEx failed for module base".to_string(),
//         });
//     }

//     if mbi.State != MEM_COMMIT {
//         return Err(InjectionError::VTableActivationFailed {
//             reason: "Module base is not in MEM_COMMIT state".to_string(),
//         });
//     }

//     let region_size = mbi.RegionSize;
//     let read_size = std::cmp::min(region_size, 0x100000) as usize; // tối đa 1MB
//     let mut buf = vec![0u8; read_size];
//     memory::read_remote(process, base, &mut buf)?;

//     Ok(buf)
// }

/// Đọc vùng header đã commit của module bằng VirtualQueryEx.
/// Trả về buffer chứa toàn bộ dữ liệu đã commit từ base đến hết vùng đầu tiên.
fn read_committed_header(process: HANDLE, base: u64) -> Result<Vec<u8>, InjectionError> {
    let mut mbi: MEMORY_BASIC_INFORMATION = unsafe { mem::zeroed() };
    let result = unsafe {
        VirtualQueryEx(
            process,
            Some(base as *const _),
            &mut mbi,
            mem::size_of::<MEMORY_BASIC_INFORMATION>(),
        )
    };
    if result == 0 {
        return Err(InjectionError::VTableActivationFailed {
            reason: "VirtualQueryEx failed for module base".to_string(),
        });
    }

    if mbi.State != MEM_COMMIT {
        return Err(InjectionError::VTableActivationFailed {
            reason: "Module base is not in MEM_COMMIT state".to_string(),
        });
    }

    let region_size = mbi.RegionSize;
    // Giới hạn tối đa đọc để tránh region quá lớn (thường header < 0x1000)
    let read_size = std::cmp::min(region_size, 0x100000) as usize; // tối đa 1MB
    let mut buf = vec![0u8; read_size];
    memory::read_remote(process, base, &mut buf)?;

    Ok(buf)
}
/// Đọc vùng nhớ đã commit từ một section, trả về tối đa `virtual_size` byte
/// nhưng chỉ giới hạn trong vùng commit thực tế.
fn read_committed_section(
    process: HANDLE,
    base: u64,
    section_start_rva: usize,
    virtual_size: usize,
) -> Result<Vec<u8>, InjectionError> {
    let addr = base + section_start_rva as u64;
    let mut mbi: MEMORY_BASIC_INFORMATION = unsafe { mem::zeroed() };
    let result = unsafe {
        VirtualQueryEx(
            process,
            Some(addr as *const _),
            &mut mbi,
            mem::size_of::<MEMORY_BASIC_INFORMATION>(),
        )
    };
    if result == 0 || mbi.State != MEM_COMMIT {
        // Không có vùng commit nào → trả về buffer rỗng
        return Ok(Vec::new());
    }
    let committed_size = mbi.RegionSize;
    // Chỉ đọc tối đa phần giao giữa virtual_size và committed_size
    let read_size = std::cmp::min(virtual_size, committed_size as usize);
    // Giới hạn cứng 50 MB để tránh đọc nhầm vùng cực lớn (pattern chỉ cần đầu section)
    let read_size = std::cmp::min(read_size, 50 * 1024 * 1024);
    let mut buf = vec![0u8; read_size];
    memory::read_remote(process, addr, &mut buf)?;
    Ok(buf)
}

/// Parse `SizeOfHeaders` từ buffer 4096 byte đầu tiên của PE image.
fn parse_size_of_headers(first_page: &[u8]) -> Result<usize, String> {
    const MAX_SAFE_SIZE_OF_HEADERS: usize = 0x100000; // 1 MB – các file hợp lệ thường ≤ 0x1000

    // 1. Kiểm tra kích thước tối thiểu và chữ ký MZ
    if first_page.len() < 0x40 {
        return Err("Buffer too small for MZ header".to_string());
    }
    if &first_page[0..2] != b"MZ" {
        return Err("MZ signature not found".to_string());
    }

    // 2. Lấy e_lfanew (offset tới PE signature)
    let e_lfanew = u32::from_le_bytes([
        first_page[0x3C],
        first_page[0x3D],
        first_page[0x3E],
        first_page[0x3F],
    ]) as usize;

    // Phải nằm trong first_page và chừa đủ chỗ cho "PE\0\0"
    if e_lfanew + 4 > first_page.len() {
        return Err("e_lfanew points outside buffer".to_string());
    }

    // 3. Kiểm tra PE signature
    if &first_page[e_lfanew..e_lfanew + 4] != b"PE\0\0" {
        return Err("PE signature not found".to_string());
    }

    // 4. Đọc COFF File Header (20 byte bắt đầu sau PE signature)
    let file_header_offset = e_lfanew + 4;
    if file_header_offset + 20 > first_page.len() {
        return Err("File header exceeds buffer".to_string());
    }

    let size_of_optional_header = u16::from_le_bytes([
        first_page[file_header_offset + 16],
        first_page[file_header_offset + 17],
    ]) as usize;

    let optional_header_start = file_header_offset + 20;

    // 5. Đọc Magic từ Optional Header để xác định PE32/PE32+
    if optional_header_start + 2 > first_page.len() {
        return Err("Optional header magic out of buffer".to_string());
    }
    let magic = u16::from_le_bytes([
        first_page[optional_header_start],
        first_page[optional_header_start + 1],
    ]);

    // 6. Xác định offset của SizeOfHeaders trong Optional Header
    //    Theo đặc tả: PE32 (0x10B) offset 60, PE32+ (0x20B) offset 64
    let (required_opt_header_size, size_of_headers_offset) = match magic {
        0x10B => (60 + 4, 60), // cần ít nhất 64 byte Optional Header
        0x20B => (64 + 4, 64), // cần ít nhất 68 byte
        _ => return Err(format!("Unknown PE magic: 0x{:X}", magic)),
    };

    // 7. Kiểm tra SizeOfOptionalHeader có đủ lớn không
    if size_of_optional_header < required_opt_header_size {
        return Err(format!(
            "SizeOfOptionalHeader too small ({}) to contain SizeOfHeaders (need at least {})",
            size_of_optional_header, required_opt_header_size
        ));
    }

    // 8. Đảm bảo trường SizeOfHeaders nằm trọn trong buffer
    let field_end = optional_header_start + size_of_headers_offset + 4;
    if field_end > first_page.len() {
        return Err("SizeOfHeaders field extends beyond buffer".to_string());
    }

    // 9. Đọc SizeOfHeaders (4 byte, unsigned)
    let size_of_headers = u32::from_le_bytes([
        first_page[optional_header_start + size_of_headers_offset],
        first_page[optional_header_start + size_of_headers_offset + 1],
        first_page[optional_header_start + size_of_headers_offset + 2],
        first_page[optional_header_start + size_of_headers_offset + 3],
    ]) as usize;

    // 10. Kiểm tra tính hợp lệ của giá trị
    if size_of_headers == 0 {
        return Err("SizeOfHeaders is zero".to_string());
    }
    if size_of_headers > MAX_SAFE_SIZE_OF_HEADERS {
        return Err(format!(
            "SizeOfHeaders {:#X} exceeds maximum allowed {:#X}",
            size_of_headers, MAX_SAFE_SIZE_OF_HEADERS
        ));
    }

    Ok(size_of_headers)
}

/// Find a byte pattern within specific named sections of a module.
fn find_bytes_in_module(
    module_data: &[u8],
    pattern: &[u8],
    sections: &[yueex_pe::sections::SectionHeader],
    section_names: &[&str],
) -> Option<usize> {
    for section in sections {
        let name = section.name_str();
        if !section_names.iter().any(|&s| s == name) {
            continue;
        }

        let start = section.virtual_address as usize;
        let end = (start + section.effective_size() as usize).min(module_data.len());
        if start >= module_data.len() {
            continue;
        }

        let data = &module_data[start..end];
        for i in 0..data.len().saturating_sub(pattern.len()) {
            if &data[i..i + pattern.len()] == pattern {
                return Some(start + i);
            }
        }
    }
    None
}
