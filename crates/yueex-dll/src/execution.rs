//! Script Execution Queue — bytecode staging and deferred execution.
//!
//! This module implements a thread-safe queue that holds compiled Luau
//! bytecode. Scripts are enqueued by the IPC receiver and dequeued +
//! executed from the permanent `__namecall` hook.
//!
//! ## Architecture (matching Real)
//!
//! ```text
//! UI → IPC → ipc_receiver → execution::enqueue_script(bytecode)
//!                                      ↓
//! Game calls __namecall → bootstrap_namecall hook
//!                          ↓
//!               execution::try_execute_pending(lua_state)
//!                          ↓
//!               lua_newthread(L) → fake_L
//!               luau_load(fake_L, bytecode)
//!               r_spawn(fake_L)
//! ```
//!
//! The key insight is that `lua_state` comes from the game's own
//! `__namecall` call — we never need to find or cache a lua_State
//! ourselves.

use std::collections::VecDeque;
use std::ffi::c_void;
use std::sync::Mutex;

/// A compiled script waiting to be executed.
struct PendingScript {
    /// Luau bytecode (output of `luau_compile`).
    bytecode: Vec<u8>,
    /// Human-readable source name for error messages (e.g., "=YueEx").
    source_name: String,
}

/// Thread-safe queue of scripts pending execution.
///
/// Enqueued from the IPC thread, dequeued from the game thread
/// (inside the `__namecall` hook).
static SCRIPT_QUEUE: Mutex<VecDeque<PendingScript>> = Mutex::new(VecDeque::new());

// ── Luau API function signatures ─────────────────────────────────────

/// `lua_State* lua_newthread(lua_State* L)`
type FnLuaNewThread = unsafe extern "C" fn(L: *mut c_void) -> *mut c_void;

/// `int luau_load(lua_State* L, const char* chunkname, const char* data, size_t size, int env)`
type FnLuauLoad = unsafe extern "C" fn(
    L: *mut c_void,
    chunkname: *const u8,
    data: *const u8,
    size: usize,
    env: i32,
) -> i32;

/// `int r_spawn(lua_State* L)` — schedules the closure at top-of-stack
/// for deferred execution on the task scheduler.
type FnRSpawn = unsafe extern "C" fn(L: *mut c_void) -> i32;

/// `void lua_pop(lua_State* L, int n)` — pops n values from the stack.
/// Internally this is `lua_settop(L, -(n)-1)`.
type FnLuaSetTop = unsafe extern "C" fn(L: *mut c_void, idx: i32);

// ── Public API ───────────────────────────────────────────────────────

/// Enqueue a compiled script for execution on the next `__namecall` trigger.
///
/// Called from the IPC receiver thread when an `ExecuteLuau` command arrives.
/// The bytecode should already be compiled via `luau_compile` or equivalent.
///
/// # Thread Safety
/// This function acquires the `SCRIPT_QUEUE` mutex. It is safe to call
/// from any thread.
pub fn enqueue_script(bytecode: Vec<u8>, source_name: String) {
    match SCRIPT_QUEUE.lock() {
        Ok(mut queue) => {
            tracing::info!(
                "Enqueued script '{}' ({} bytes bytecode)",
                source_name,
                bytecode.len()
            );
            queue.push_back(PendingScript {
                bytecode,
                source_name,
            });
        }
        Err(e) => {
            tracing::error!("Failed to lock SCRIPT_QUEUE for enqueue: {}", e);
        }
    }
}

/// Check the script queue and execute any pending scripts.
///
/// Called from `bootstrap_namecall` on **every** `__namecall` trigger.
/// Runs on the game thread, using the game-provided `lua_state`.
///
/// # Execution flow (matching Real)
///
/// 1. `try_lock` the queue — if contended (IPC thread enqueueing), skip.
/// 2. Drain all pending scripts.
/// 3. For each script:
///    a. `lua_newthread(L)` → create an isolated thread (`fake_L`).
///    b. `luau_load(fake_L, bytecode)` → load the compiled bytecode.
///    c. `r_spawn(fake_L)` → schedule execution on the task scheduler.
///    d. `lua_settop(L, -(1)-1)` → pop `fake_L` from the parent stack.
///
/// # Safety
/// * `lua_state` must be a valid `lua_State*` from the game.
/// * The resolved function pointers in `CACHED_OFFSETS` must be valid.
pub fn try_execute_pending(lua_state: *mut c_void) {
    // Fast path: try_lock to avoid blocking the game thread.
    let scripts: Vec<PendingScript> = {
        let Ok(mut queue) = SCRIPT_QUEUE.try_lock() else {
            return; // Queue is contended — skip this tick.
        };
        if queue.is_empty() {
            return;
        }
        queue.drain(..).collect()
    };

    // Resolve function pointers from cached offsets.
    let Some(fns) = get_luau_functions() else {
        // Offsets not resolved yet — re-enqueue scripts for next tick.
        tracing::warn!(
            "Luau functions not resolved yet, re-enqueueing {} scripts",
            scripts.len()
        );
        if let Ok(mut queue) = SCRIPT_QUEUE.lock() {
            for script in scripts {
                queue.push_back(script);
            }
        }
        return;
    };

    tracing::info!("Executing {} pending script(s)", scripts.len());

    for script in scripts {
        unsafe {
            // 1. Create an isolated thread (fake_L) from the game's lua_State.
            let fake_l = (fns.lua_newthread)(lua_state);
            if fake_l.is_null() {
                tracing::error!(
                    "lua_newthread returned NULL for script '{}'",
                    script.source_name
                );
                continue;
            }

            // 2. Load the compiled bytecode into fake_L.
            // chunkname must be null-terminated.
            let chunkname = format!("={}\0", script.source_name);
            let result = (fns.luau_load)(
                fake_l,
                chunkname.as_ptr(),
                script.bytecode.as_ptr(),
                script.bytecode.len(),
                0, // env = 0 (use default environment)
            );

            if result != 0 {
                tracing::error!(
                    "luau_load failed for '{}' with code {}",
                    script.source_name,
                    result
                );
                // Pop the error message + fake_L from the stack.
                (fns.lua_settop)(lua_state, -2);
                continue;
            }

            // 3. Spawn the loaded closure for deferred execution.
            (fns.r_spawn)(fake_l);

            // 4. Pop fake_L from the parent stack.
            (fns.lua_settop)(lua_state, -2);

            tracing::info!("Script '{}' spawned successfully", script.source_name);
        }
    }
}

/// Returns the number of scripts currently in the queue.
#[allow(dead_code)]
pub fn queue_len() -> usize {
    SCRIPT_QUEUE.try_lock().map(|q| q.len()).unwrap_or(0)
}

// ── Internal: Resolved Luau function pointers ────────────────────────

/// Resolved and transmuted Luau API function pointers.
struct LuauFunctions {
    lua_newthread: FnLuaNewThread,
    luau_load: FnLuauLoad,
    r_spawn: FnRSpawn,
    lua_settop: FnLuaSetTop,
}

/// Get resolved Luau function pointers from the offset resolver cache.
///
/// Returns `None` if the offsets haven't been resolved yet (i.e.,
/// `deferred_init` hasn't completed its pattern scan).
fn get_luau_functions() -> Option<LuauFunctions> {
    let offsets = crate::offset_resolver::get_cached_offsets()?;

    // All function pointers must be non-zero.
    if offsets.lua_newthread == 0
        || offsets.luau_load == 0
        || offsets.lua_spawn == 0
        || offsets.lua_settop == 0
    {
        return None;
    }

    Some(LuauFunctions {
        lua_newthread: unsafe { std::mem::transmute(offsets.lua_newthread) },
        luau_load: unsafe { std::mem::transmute(offsets.luau_load) },
        r_spawn: unsafe { std::mem::transmute(offsets.lua_spawn) },
        lua_settop: unsafe { std::mem::transmute(offsets.lua_settop) },
    })
}
