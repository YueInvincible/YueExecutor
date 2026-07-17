use std::env;
use std::fs;
use yueex_injector::{manual_map, process};
use yueex_abi::config::TARGET_PROCESS_NAME;

fn main() {
    // ── Diagnostics Logger ──
    let file_appender = tracing_appender::rolling::never(".", "yueex_injector.log");
    let (non_blocking, _guard) = tracing_appender::non_blocking(file_appender);
    
    tracing_subscriber::fmt()
        .with_writer(non_blocking)
        .with_thread_ids(true)
        .with_target(false)
        .with_ansi(false)
        .init();

    println!("[Info] CLI Injector started. Detailed logs written to yueex_injector.log");
    tracing::info!("CLI Injector started");

    // Check args or use defaults
    let args: Vec<String> = env::args().collect();
    let target_name = if args.len() > 1 {
        &args[1]
    } else {
        TARGET_PROCESS_NAME
    };
    
    let dll_path = if args.len() > 2 {
        &args[2]
    } else {
        "yueex_dll.dll" // Or path to your build output
    };

    // Read DLL
    let mut dll_bytes = match fs::read(dll_path) {
        Ok(bytes) => bytes,
        Err(e) => {
            eprintln!("[Error] Failed to read DLL at {}: {}", dll_path, e);
            return;
        }
    };

    // XOR decrypt
    let key: [u8; 8] = [0x7e, 0xca, 0x28, 0x7c, 0x21, 0xbd, 0x62, 0xc7];
    for (i, byte) in dll_bytes.iter_mut().enumerate() {
        *byte ^= key[i % key.len()];
    }

    println!("[Info] Target Process: {}", target_name);
    println!("[Info] DLL Path: {}", dll_path);

    // 1. Find process
    let targets = match process::find_processes_by_name(target_name) {
        Ok(t) => t,
        Err(e) => {
            eprintln!("[Error] Failed to enumerate processes: {:?}", e);
            return;
        }
    };

    if targets.is_empty() {
        eprintln!("[Error] Process {} not found! Please run the target app first.", target_name);
        return;
    }

    let target = &targets[0];
    println!("[Info] Found process PID: {}", target.pid);

    // 2. Open handle
    let handle = match process::open_process_handle(target.pid) {
        Ok(h) => h,
        Err(e) => {
            eprintln!("[Error] Failed to open handle for PID {}: {:?}", target.pid, e);
            return;
        }
    };

    // 2.5 Fetch Offsets
    // In a real app we'd parse the target PE to extract version string.
    // For now we assume "version-unknown" or provide it via a dummy logic.
    let version = "unknown";
    let cache_path = format!("yueex_offset_cache_version-{}.json", version);

    if !std::path::Path::new(&cache_path).exists() {
        println!("[Info] Offset cache not found. Fetching from endpoint...");
        match reqwest::blocking::get("https://dumper.jonah.cool/offsets.json") {
            Ok(resp) => {
                if resp.status().is_success() {
                    if let Ok(text) = resp.text() {
                        if let Err(e) = fs::write(&cache_path, text) {
                            eprintln!("[Warning] Failed to write offset cache: {}", e);
                        } else {
                            println!("[Info] Downloaded offsets to {}", cache_path);
                        }
                    }
                } else {
                    eprintln!("[Warning] Endpoint returned status: {}", resp.status());
                }
            }
            Err(e) => eprintln!("[Warning] Failed to fetch offsets: {}", e),
        }
    } else {
        println!("[Info] Offset cache found: {}", cache_path);
    }

    // 3. Inject
    let config = manual_map::InjectionConfig::default();
    
    println!("[Info] Initiating injection pipeline into PID {}...", target.pid);
    
    let callback: yueex_injector::manual_map::ProgressCallback = Box::new(|stage, msg| {
        println!("[{}] {}", stage, msg);
    });

    let result = manual_map::inject(
        handle.raw(),
        target.pid,
        &dll_bytes,
        &config,
        &cache_path,
        Some(&callback),
    );

    match result {
        yueex_abi::types::MapResult::Success { remote_base, image_size, module_overloaded } => {
            println!("\n[Success] Injection completed successfully!");
            println!("  -> Remote Base : 0x{:016X}", remote_base);
            println!("  -> Image Size  : 0x{:X}", image_size);
            println!("  -> Overloaded  : {}", module_overloaded);
        }
        yueex_abi::types::MapResult::Failed { stage, error } => {
            eprintln!("\n[Error] Stage [{}] failed: {}", stage, error);
        }
    }
}
