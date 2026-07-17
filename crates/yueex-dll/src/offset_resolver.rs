//! Dynamic offset resolution for the target process.
//!
//! Locates key function addresses (Luau API, TaskScheduler, etc.)
//! via pattern scanning.  Runs as part of *deferred init* — never
//! inside DllMain.
//!
//! # Changes from original
//! - Removed `Command::new("cmd")` — never spawn child processes
//!   from an injected DLL (instant detection by anti-cheat).
//! - Removed file I/O from the hot init path — cache is optional
//!   and best-effort.
//! - Uses Wide string (`Module32FirstW`) to avoid ANSI/Wide mismatch.
//!
//! # v2 Changes
//! - Added `lua_newthread`, `lua_settop`, `lua_getglobal`, `lua_getmetatable`,
//!   `lua_spawn` patterns for execution queue and AOB-first strategy.
//! - Added `get_cached_offsets()` static getter for use from `execution.rs`.

use std::fs;
use std::path::Path;
use std::sync::OnceLock;

use serde::{Deserialize, Serialize};
use windows::Win32::System::Diagnostics::Debug::{IMAGE_NT_HEADERS64, IMAGE_SECTION_HEADER};
use windows::Win32::System::Diagnostics::ToolHelp::{
    CreateToolhelp32Snapshot, Module32FirstW, MODULEENTRY32W, TH32CS_SNAPMODULE,
    TH32CS_SNAPMODULE32,
};
use windows::Win32::System::LibraryLoader::GetModuleHandleW;
use windows::Win32::System::SystemServices::IMAGE_DOS_HEADER;

// ── Global cache for cross-module access ─────────────────────────────

/// Cached offsets — set once by `OffsetResolver::init()`, read by
/// `execution.rs` and other modules.
static CACHED_OFFSETS: OnceLock<DynamicOffsets> = OnceLock::new();

/// Get the cached offsets. Returns `None` if `OffsetResolver::init()`
/// hasn't been called yet.
pub fn get_cached_offsets() -> Option<&'static DynamicOffsets> {
    CACHED_OFFSETS.get()
}

// ── Offset structure ─────────────────────────────────────────────────

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct DynamicOffsets {
    pub version: String,

    // ── TaskScheduler ────────────────────────────────────────────
    pub task_scheduler_ptr: usize,
    pub visual_engine_ptr: usize,
    pub job_start: usize,
    pub job_end: usize,

    // ── Core Luau API (existing) ─────────────────────────────────
    pub luau_load: usize,
    pub lua_pcall: usize,

    // ── Extended Luau API (v2 additions) ─────────────────────────
    /// `lua_getfield(L, idx, key)` — push field value onto stack.
    #[serde(default)]
    pub lua_getfield: usize,

    /// `lua_setfield(L, idx, key)` — set field from top of stack.
    #[serde(default)]
    pub lua_setfield: usize,

    /// `lua_pushvalue(L, idx)` — push a copy of the value at index.
    #[serde(default)]
    pub lua_pushvalue: usize,

    /// `lua_newthread(L)` — create a new coroutine thread.
    /// Used by `execution.rs` to create `fake_L`.
    #[serde(default)]
    pub lua_newthread: usize,

    /// `lua_settop(L, idx)` — set the stack top (used for lua_pop).
    #[serde(default)]
    pub lua_settop: usize,

    /// `r_spawn(L)` / `task_defer(L)` — schedule a closure for deferred execution.
    /// Used by `execution.rs` to launch scripts.
    #[serde(default)]
    pub lua_spawn: usize,

    /// `lua_getglobal(L, name)` — push a global value onto the stack.
    /// Used by AOB-first strategy in the injector.
    #[serde(default)]
    pub lua_getglobal: usize,

    /// `lua_getmetatable(L, idx)` — push the metatable of the value at index.
    /// Used by AOB-first strategy in the injector.
    #[serde(default)]
    pub lua_getmetatable: usize,

    /// Static pointer to the TaskScheduler singleton.
    #[serde(default)]
    pub task_scheduler_static_ptr: usize,
}

pub struct OffsetResolver {
    pub offsets: DynamicOffsets,
    pub base_address: usize,
}

impl OffsetResolver {
    /// Initialize the offset resolver.
    ///
    /// # Safety note
    /// Must NOT be called from DllMain — uses CreateToolhelp32Snapshot
    /// and file I/O which require being outside loader lock.
    pub fn init() -> Self {
        let base_address = unsafe { GetModuleHandleW(None).unwrap().0 as usize };
        let version = Self::extract_version_from_path();
        let cache_path = format!("yueex_offset_cache_{}.json", version);

        let offsets = if Path::new(&cache_path).exists() {
            // Try loading from cache — best-effort, fall back to scan.
            let data = fs::read_to_string(&cache_path).unwrap_or_default();
            serde_json::from_str(&data).unwrap_or_else(|_| {
                Self::resolve_via_pattern_scan(base_address, &version, &cache_path)
            })
        } else {
            Self::resolve_via_pattern_scan(base_address, &version, &cache_path)
        };

        // Store in the global cache for cross-module access.
        let _ = CACHED_OFFSETS.set(offsets.clone());

        Self {
            offsets,
            base_address,
        }
    }

    /// Pattern-scan for offsets and optionally save to cache.
    fn resolve_via_pattern_scan(
        base_address: usize,
        version: &str,
        cache_path: &str,
    ) -> DynamicOffsets {
        let mut resolved = Self::default_offsets(version);

        let (text_start, text_size) = Self::get_text_section_bounds(base_address);

        if text_start != 0 && text_size != 0 {
            // ── Core Luau API ────────────────────────────────────
            if resolved.luau_load == 0 {
                resolved.luau_load = Self::pattern_scan(
                    text_start,
                    text_size,
                    "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B DA 48 8B F9",
                );
            }
            if resolved.lua_pcall == 0 {
                resolved.lua_pcall = Self::pattern_scan(
                    text_start,
                    text_size,
                    "55 48 89 E5 41 57 41 56 41 55 41 54 53 48 83 EC ? 4C 8B 29",
                );
            }

            // ── Extended Luau API (v2) ───────────────────────────

            // lua_getfield / lua_setfield share a similar prologue
            if resolved.lua_getfield == 0 {
                resolved.lua_getfield = Self::pattern_scan(
                    text_start,
                    text_size,
                    "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B D9 48 8B FA",
                );
            }

            // lua_pushvalue
            if resolved.lua_pushvalue == 0 {
                resolved.lua_pushvalue = Self::pattern_scan(
                    text_start,
                    text_size,
                    "48 8B 01 48 8D 04 ? 48 83 C1 ? 48 3B C1",
                );
            }

            // lua_newthread — creates a new coroutine
            if resolved.lua_newthread == 0 {
                resolved.lua_newthread = Self::pattern_scan(
                    text_start,
                    text_size,
                    "48 89 5C 24 08 57 48 83 EC 20 48 8B F9 E8 ? ? ? ? 48 8B D8",
                );
            }

            // lua_settop — used for stack cleanup (lua_pop)
            if resolved.lua_settop == 0 {
                resolved.lua_settop = Self::pattern_scan(
                    text_start,
                    text_size,
                    "8B 41 ? 85 FF 78 ? 3B F8 7F ? 48 8B 49",
                );
            }

            // r_spawn / task_defer — schedule closure for deferred execution
            if resolved.lua_spawn == 0 {
                resolved.lua_spawn = Self::pattern_scan(
                    text_start,
                    text_size,
                    "48 89 5C 24 ? 48 89 74 24 ? 55 48 8D 3D ? ? ? ? 41 56 41 57",
                );
            }

            // lua_getglobal — push global value
            if resolved.lua_getglobal == 0 {
                resolved.lua_getglobal = Self::pattern_scan(
                    text_start,
                    text_size,
                    "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 20 48 8B F2 48 8B D9 E8 ? ? ? ? 48 8B D6 48 8D 4C 24 30 E8 ? ? ? ? 48 8B C8 E8 ? ? ? ? 48 8B 4C 24 40 48 8B 01",
                );
            }

            // lua_getmetatable — push metatable of value at index
            if resolved.lua_getmetatable == 0 {
                resolved.lua_getmetatable = Self::pattern_scan(
                    text_start,
                    text_size,
                    "48 89 5C 24 08 57 48 83 EC 20 48 8B D9 E8 ? ? ? ? 48 8B C8 48 85 C0 74 0F 48 8B 00 48 8B 48 08 48 85 C9 74 05 48 8B 01",
                );
            }
        }

        // Log resolution results.
        tracing::info!("Pattern scan results:");
        tracing::info!("  luau_load:          0x{:X}", resolved.luau_load);
        tracing::info!("  lua_pcall:          0x{:X}", resolved.lua_pcall);
        tracing::info!("  lua_getfield:       0x{:X}", resolved.lua_getfield);
        tracing::info!("  lua_pushvalue:      0x{:X}", resolved.lua_pushvalue);
        tracing::info!("  lua_newthread:      0x{:X}", resolved.lua_newthread);
        tracing::info!("  lua_settop:         0x{:X}", resolved.lua_settop);
        tracing::info!("  lua_spawn:          0x{:X}", resolved.lua_spawn);
        tracing::info!("  lua_getglobal:      0x{:X}", resolved.lua_getglobal);
        tracing::info!("  lua_getmetatable:   0x{:X}", resolved.lua_getmetatable);

        // Best-effort cache write — don't fail if it doesn't work.
        if let Ok(serialized) = serde_json::to_string_pretty(&resolved) {
            let _ = fs::write(cache_path, serialized);
        }

        resolved
    }

    fn default_offsets(version: &str) -> DynamicOffsets {
        DynamicOffsets {
            version: version.to_string(),
            task_scheduler_ptr: 0,
            visual_engine_ptr: 0,
            luau_load: 0,
            lua_pcall: 0,
            job_start: 0,
            job_end: 0,
            // v2 additions
            lua_getfield: 0,
            lua_setfield: 0,
            lua_pushvalue: 0,
            lua_newthread: 0,
            lua_settop: 0,
            lua_spawn: 0,
            lua_getglobal: 0,
            lua_getmetatable: 0,
            task_scheduler_static_ptr: 0,
        }
    }

    fn extract_version_from_path() -> String {
        unsafe {
            let snapshot = match CreateToolhelp32Snapshot(
                TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32,
                0,
            ) {
                Ok(s) => s,
                Err(_) => return "version-unknown".to_string(),
            };

            let mut me32 = MODULEENTRY32W {
                dwSize: std::mem::size_of::<MODULEENTRY32W>() as u32,
                ..Default::default()
            };

            if Module32FirstW(snapshot, &mut me32).is_ok() {
                // Convert wide path to string.
                let nul = me32
                    .szExePath
                    .iter()
                    .position(|&c| c == 0)
                    .unwrap_or(me32.szExePath.len());
                let path = String::from_utf16_lossy(&me32.szExePath[..nul]);

                if let Some(idx) = path.find("version-") {
                    return path[idx..]
                        .split('\\')
                        .next()
                        .unwrap_or("unknown")
                        .to_string();
                }
            }

            let _ = windows::Win32::Foundation::CloseHandle(snapshot);
            "version-unknown".to_string()
        }
    }

    // NOTE: `run_auto_dump_fallback` has been REMOVED.
    // Spawning cmd.exe from an injected DLL is an instant detection vector.
    // The Dumper tool should be run separately before injection if needed.

    fn get_text_section_bounds(base: usize) -> (usize, usize) {
        unsafe {
            let dos_header = &*(base as *const IMAGE_DOS_HEADER);
            let nt_headers =
                &*((base + dos_header.e_lfanew as usize) as *const IMAGE_NT_HEADERS64);
            let section_header = (base
                + dos_header.e_lfanew as usize
                + std::mem::size_of::<IMAGE_NT_HEADERS64>())
                as *const IMAGE_SECTION_HEADER;

            for i in 0..nt_headers.FileHeader.NumberOfSections {
                let section = &*section_header.add(i as usize);
                let name = &section.Name;
                if name[0] == b'.'
                    && name[1] == b't'
                    && name[2] == b'e'
                    && name[3] == b'x'
                    && name[4] == b't'
                {
                    return (
                        base + section.VirtualAddress as usize,
                        section.Misc.VirtualSize as usize,
                    );
                }
            }
        }
        (0, 0)
    }

    fn pattern_scan(start_addr: usize, size: usize, pattern: &str) -> usize {
        let mut bytes = Vec::new();
        let mut mask = String::new();
        for part in pattern.split_whitespace() {
            if part == "?" {
                bytes.push(0x00);
                mask.push('?');
            } else {
                bytes.push(u8::from_str_radix(part, 16).unwrap_or(0));
                mask.push('x');
            }
        }

        if size < bytes.len() || start_addr == 0 {
            return 0;
        }

        unsafe {
            let data = std::slice::from_raw_parts(start_addr as *const u8, size);
            let mask_bytes = mask.as_bytes();
            for i in 0..size.saturating_sub(bytes.len()) {
                let mut found = true;
                for j in 0..bytes.len() {
                    if mask_bytes[j] == b'x' && data[i + j] != bytes[j] {
                        found = false;
                        break;
                    }
                }
                if found {
                    return start_addr + i;
                }
            }
        }
        0
    }
}