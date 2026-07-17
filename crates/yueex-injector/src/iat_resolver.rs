//! Import Address Table resolution for remote process modules.
//!
//! Instead of calling `GetProcAddress` (which may be hooked by EDR/Anticheat),
//! this module manually walks the export tables of modules already loaded in
//! the target process by reading their PE headers via `ReadProcessMemory`.
//!
//! ## v2 Improvements
//! - **Forwarded export resolution**: handles exports like
//!   `kernel32!HeapAlloc` → `ntdll!RtlAllocateHeap`.
//! - Recursive resolution with depth limit to prevent infinite loops.

use windows::Win32::Foundation::HANDLE;

use yueex_abi::types::InjectionError;
use yueex_pe::imports::ImportDescriptor;
use yueex_pe::{read_u16, read_u32, PeImage};

use crate::memory;
use crate::process::{enumerate_remote_modules, RemoteModuleInfo};

/// Maximum forwarding chain depth to prevent infinite recursion.
const MAX_FORWARD_DEPTH: u32 = 8;

// ── Public API ───────────────────────────────────────────────────────

/// Resolve all imports for a PE image and write the resolved addresses
/// into the IAT slots in the remote process.
pub fn resolve_imports(
    process: HANDLE,
    remote_base: u64,
    imports: &[ImportDescriptor],
    is_64bit: bool,
    pid: u32,
) -> Result<u32, InjectionError> {
    if imports.is_empty() {
        return Ok(0);
    }

    // Get all modules in the target process.
    let remote_modules = enumerate_remote_modules(pid)?;

    let thunk_size: usize = if is_64bit { 8 } else { 4 };
    let mut total_resolved = 0u32;

    for import_desc in imports {
        // Find the matching module in the remote process.
        let remote_module = find_module_by_name(&remote_modules, &import_desc.dll_name)
            .ok_or_else(|| InjectionError::ImportResolveFailed {
                dll_name: import_desc.dll_name.clone(),
                func_name: "*".to_string(),
                reason: "module not found in target process".to_string(),
            })?;

        // Read the remote module's PE headers to access its export table.
        let exports = read_remote_exports(process, remote_module)?;

        // Resolve each imported function.
        for entry in &import_desc.entries {
            let resolved_addr = if entry.is_ordinal {
                resolve_export_addr(
                    process,
                    &remote_modules,
                    remote_module,
                    &exports,
                    ExportLookup::Ordinal(entry.ordinal),
                    0,
                )?
            } else {
                resolve_export_addr(
                    process,
                    &remote_modules,
                    remote_module,
                    &exports,
                    ExportLookup::Name(&entry.name),
                    0,
                )?
            };

            let addr = resolved_addr.ok_or_else(|| {
                let func_id = if entry.is_ordinal {
                    format!("#{}", entry.ordinal)
                } else {
                    entry.name.clone()
                };
                InjectionError::ImportResolveFailed {
                    dll_name: import_desc.dll_name.clone(),
                    func_name: func_id,
                    reason: "export not found in remote module".to_string(),
                }
            })?;

            // Write the resolved address into the IAT slot.
            let iat_slot_addr =
                remote_base + import_desc.first_thunk_rva as u64 + (entry.thunk_index * thunk_size) as u64;

            if is_64bit {
                memory::write_remote(process, iat_slot_addr, &addr.to_le_bytes())?;
            } else {
                memory::write_remote(process, iat_slot_addr, &(addr as u32).to_le_bytes())?;
            }

            total_resolved += 1;
        }
    }

    Ok(total_resolved)
}

// ── Export Lookup Strategy ───────────────────────────────────────────

enum ExportLookup<'a> {
    Name(&'a str),
    Ordinal(u16),
}

/// Resolve an export address, following forwarded exports recursively.
///
/// A forwarded export has its RVA pointing *within* the export directory
/// range. Instead of being a code address, it contains a string like
/// "NTDLL.RtlAllocateHeap" which must be resolved from the target module.
fn resolve_export_addr(
    process: HANDLE,
    all_modules: &[RemoteModuleInfo],
    current_module: &RemoteModuleInfo,
    exports: &RemoteExportTable,
    lookup: ExportLookup<'_>,
    depth: u32,
) -> Result<Option<u64>, InjectionError> {
    if depth > MAX_FORWARD_DEPTH {
        return Ok(None); // Prevent infinite forwarding loops.
    }

    let export_entry = match lookup {
        ExportLookup::Name(name) => exports.exports.iter().find(|e| e.name == name),
        ExportLookup::Ordinal(ord) => exports.exports.iter().find(|e| e.ordinal == ord as u32),
    };

    let entry = match export_entry {
        Some(e) => e,
        None => return Ok(None),
    };

    // Check if this is a forwarded export.
    // A forwarded export's RVA falls within the export directory's RVA range.
    if entry.is_forwarded {
        // The forwarder string is "MODULE.FunctionName" or "MODULE.#Ordinal".
        return resolve_forwarded_export(
            process,
            all_modules,
            current_module,
            entry.function_rva,
            depth,
        );
    }

    // Direct export — return the absolute address.
    Ok(Some(current_module.base_address + entry.function_rva as u64))
}

/// Parse and resolve a forwarded export string.
///
/// Format: "DLLNAME.FunctionName" or "DLLNAME.#123" (ordinal).
fn resolve_forwarded_export(
    process: HANDLE,
    all_modules: &[RemoteModuleInfo],
    current_module: &RemoteModuleInfo,
    forwarder_rva: u32,
    depth: u32,
) -> Result<Option<u64>, InjectionError> {
    // Read the forwarding string from the remote module.
    let forwarder_addr = current_module.base_address + forwarder_rva as u64;
    let mut buf = [0u8; 256];
    memory::read_remote(process, forwarder_addr, &mut buf)?;

    let nul = buf.iter().position(|&b| b == 0).unwrap_or(256);
    let forwarder_str = String::from_utf8_lossy(&buf[..nul]);

    // Parse "DLLNAME.FunctionName" or "DLLNAME.#123".
    let dot_pos = match forwarder_str.find('.') {
        Some(p) => p,
        None => return Ok(None), // Malformed forwarder.
    };

    let target_dll = &forwarder_str[..dot_pos];
    let target_func = &forwarder_str[dot_pos + 1..];

    // Find the target DLL — try with and without ".dll" extension.
    let target_dll_name = if target_dll.contains('.') {
        target_dll.to_string()
    } else {
        format!("{}.dll", target_dll)
    };

    let target_module = match find_module_by_name(all_modules, &target_dll_name) {
        Some(m) => m,
        None => return Ok(None),
    };

    // Read target module's export table.
    let target_exports = read_remote_exports(process, target_module)?;

    // Determine if it's an ordinal or name lookup.
    let lookup = if target_func.starts_with('#') {
        let ordinal: u16 = target_func[1..].parse().unwrap_or(0);
        ExportLookup::Ordinal(ordinal)
    } else {
        ExportLookup::Name(target_func)
    };

    // Recurse to handle chained forwarding.
    resolve_export_addr(
        process,
        all_modules,
        target_module,
        &target_exports,
        lookup,
        depth + 1,
    )
}

// ── Remote Export Table Reading ───────────────────────────────────────

/// Represents a parsed export from a remote module.
struct RemoteExport {
    ordinal: u32,
    function_rva: u32,
    name: String,
    /// If true, function_rva points to a forwarder string, not code.
    is_forwarded: bool,
}

/// Cached remote export data.
struct RemoteExportTable {
    exports: Vec<RemoteExport>,
}

/// Read and parse the export table from a module loaded in the remote process.
fn read_remote_exports(
    process: HANDLE,
    module: &RemoteModuleInfo,
) -> Result<RemoteExportTable, InjectionError> {
    let header_size = 4096usize.min(module.image_size as usize);
    let mut header_buf = vec![0u8; header_size];
    memory::read_remote(process, module.base_address, &mut header_buf)?;

    let pe = PeImage::parse(&header_buf).map_err(|e| InjectionError::ImportResolveFailed {
        dll_name: module.name.clone(),
        func_name: "*".to_string(),
        reason: format!("failed to parse remote PE headers: {e}"),
    })?;

    let export_dir = &pe.nt_headers().optional.data_directories
        [yueex_pe::headers::DATA_DIR_EXPORT];

    if export_dir.virtual_address == 0 || export_dir.size == 0 {
        return Ok(RemoteExportTable {
            exports: Vec::new(),
        });
    }

    // Export directory RVA range — used to detect forwarded exports.
    let export_dir_rva_start = export_dir.virtual_address;
    let export_dir_rva_end = export_dir.virtual_address + export_dir.size;

    let export_dir_addr = module.base_address + export_dir.virtual_address as u64;
    let mut export_buf = vec![0u8; export_dir.size as usize];
    memory::read_remote(process, export_dir_addr, &mut export_buf)?;

    if export_buf.len() < 40 {
        return Ok(RemoteExportTable {
            exports: Vec::new(),
        });
    }

    let ordinal_base = read_u32(&export_buf, 16);
    let num_functions = read_u32(&export_buf, 20);
    let num_names = read_u32(&export_buf, 24);
    let addr_of_functions_rva = read_u32(&export_buf, 28);
    let addr_of_names_rva = read_u32(&export_buf, 32);
    let addr_of_name_ordinals_rva = read_u32(&export_buf, 36);

    // Read the Export Address Table (EAT).
    let eat_addr = module.base_address + addr_of_functions_rva as u64;
    let eat_size = (num_functions * 4) as usize;
    let mut eat_buf = vec![0u8; eat_size];
    memory::read_remote(process, eat_addr, &mut eat_buf)?;

    // Build ordinal → name mapping.
    let mut ordinal_to_name: std::collections::HashMap<u16, String> =
        std::collections::HashMap::new();

    if num_names > 0 {
        let enpt_addr = module.base_address + addr_of_names_rva as u64;
        let enpt_size = (num_names * 4) as usize;
        let mut enpt_buf = vec![0u8; enpt_size];
        memory::read_remote(process, enpt_addr, &mut enpt_buf)?;

        let eot_addr = module.base_address + addr_of_name_ordinals_rva as u64;
        let eot_size = (num_names * 2) as usize;
        let mut eot_buf = vec![0u8; eot_size];
        memory::read_remote(process, eot_addr, &mut eot_buf)?;

        for i in 0..num_names as usize {
            let name_rva = read_u32(&enpt_buf, i * 4);
            let ordinal_index = read_u16(&eot_buf, i * 2);

            let name_addr = module.base_address + name_rva as u64;
            let mut name_buf = [0u8; 256];
            if memory::read_remote(process, name_addr, &mut name_buf).is_ok() {
                let nul = name_buf.iter().position(|&b| b == 0).unwrap_or(256);
                let name = String::from_utf8_lossy(&name_buf[..nul]).into_owned();
                ordinal_to_name.insert(ordinal_index, name);
            }
        }
    }

    // Build export entries.
    let mut exports = Vec::with_capacity(num_functions as usize);
    for i in 0..num_functions as usize {
        let function_rva = read_u32(&eat_buf, i * 4);
        if function_rva == 0 {
            continue;
        }

        let ordinal = ordinal_base + i as u32;
        let name = ordinal_to_name
            .get(&(i as u16))
            .cloned()
            .unwrap_or_default();

        // Detect forwarded exports: if the RVA falls within the export
        // directory range, it's a forwarder string, not a code address.
        let is_forwarded = function_rva >= export_dir_rva_start
            && function_rva < export_dir_rva_end;

        exports.push(RemoteExport {
            ordinal,
            function_rva,
            name,
            is_forwarded,
        });
    }

    Ok(RemoteExportTable { exports })
}

// ── Lookup Helpers ───────────────────────────────────────────────────

fn find_module_by_name<'a>(
    modules: &'a [RemoteModuleInfo],
    name: &str,
) -> Option<&'a RemoteModuleInfo> {
    // 1. Direct case-insensitive match.
    if let Some(m) = modules.iter().find(|m| m.name.eq_ignore_ascii_case(name)) {
        return Some(m);
    }

    // 2. API-Set and Extension-Set redirect (bypass Roblox CRT barriers).
    let is_api_set = name.starts_with("api-ms-win-");
    let is_ext_set = name.starts_with("ext-ms-win-");

    if is_api_set || is_ext_set {
        let mut fallbacks = vec!["kernelbase.dll", "kernel32.dll", "ntdll.dll"];

        // CRT API sets must try ucrtbase.dll first.
        if name.contains("-crt-") {
            fallbacks.insert(0, "ucrtbase.dll");
            fallbacks.insert(1, "vcruntime140.dll");
        }

        for fallback in fallbacks {
            if let Some(m) = modules.iter().find(|m| m.name.eq_ignore_ascii_case(fallback)) {
                return Some(m);
            }
        }
    }

    None
}
