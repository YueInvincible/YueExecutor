//! Thread Pool Hijacking — Real TpAllocWork/TpPostWork Implementation
//!
//! Using `CreateThread` or `std::thread::spawn` creates a new thread in the
//! target process. EDRs and anti-cheats monitor thread creation callbacks
//! (`PsSetCreateThreadNotifyRoutine`) and will instantly flag new threads
//! that start execution from unbacked/unsigned memory (our manually mapped DLL).
//!
//! To evade this, we do not create new threads. Instead, we submit work items
//! to the existing Windows Thread Pool via `TpAllocWork` + `TpPostWork`,
//! which reuses existing worker threads without triggering creation callbacks.

use std::ffi::c_void;
use std::sync::atomic::{AtomicU64, Ordering};

use windows::Win32::Foundation::HANDLE;
use windows::Win32::System::Threading::{
    OpenThread, QueueUserAPC, THREAD_SET_CONTEXT,
};

// ── Tp* function types (from ntdll.dll) ──────────────────────────────

/// Callback signature for Thread Pool work items.
/// Matches `PTP_WORK_CALLBACK`:
///   void CALLBACK WorkCallback(PTP_CALLBACK_INSTANCE, PVOID Context, PTP_WORK);
pub type TpWorkCallback = unsafe extern "system" fn(
    instance: *mut c_void,
    context: *mut c_void,
    work: *mut c_void,
);

/// `TpAllocWork(PTP_WORK* WorkReturn, PTP_WORK_CALLBACK Callback, PVOID Context, PTP_CALLBACK_ENVIRON Env)`
type FnTpAllocWork = unsafe extern "system" fn(
    work_return: *mut *mut c_void,
    callback: TpWorkCallback,
    context: *mut c_void,
    callback_environ: *mut c_void,
) -> i32; // NTSTATUS

/// `TpPostWork(PTP_WORK Work)`
type FnTpPostWork = unsafe extern "system" fn(work: *mut c_void);

/// `TpReleaseWork(PTP_WORK Work)`
type FnTpReleaseWork = unsafe extern "system" fn(work: *mut c_void);

// ── Cached function pointers ─────────────────────────────────────────

static TP_ALLOC_WORK: AtomicU64 = AtomicU64::new(0);
static TP_POST_WORK: AtomicU64 = AtomicU64::new(0);
static TP_RELEASE_WORK: AtomicU64 = AtomicU64::new(0);

/// Resolve Tp* functions from ntdll.dll using GetProcAddress.
/// In a full stealth implementation, this would use API hashing +
/// manual EAT walking. For now we resolve via standard means and
/// cache the addresses atomically.
fn ensure_tp_resolved() -> bool {
    if TP_ALLOC_WORK.load(Ordering::Relaxed) != 0 {
        return true;
    }

    unsafe {
        let h_ntdll = windows::Win32::System::LibraryLoader::GetModuleHandleW(
            windows::core::w!("ntdll.dll"),
        );
        let h_ntdll = match h_ntdll {
            Ok(h) => h,
            Err(_) => return false,
        };

        let alloc = windows::Win32::System::LibraryLoader::GetProcAddress(
            h_ntdll,
            windows::core::s!("TpAllocWork"),
        );
        let post = windows::Win32::System::LibraryLoader::GetProcAddress(
            h_ntdll,
            windows::core::s!("TpPostWork"),
        );
        let release = windows::Win32::System::LibraryLoader::GetProcAddress(
            h_ntdll,
            windows::core::s!("TpReleaseWork"),
        );

        if alloc.is_none() || post.is_none() || release.is_none() {
            return false;
        }

        TP_ALLOC_WORK.store(alloc.unwrap() as u64, Ordering::Release);
        TP_POST_WORK.store(post.unwrap() as u64, Ordering::Release);
        TP_RELEASE_WORK.store(release.unwrap() as u64, Ordering::Release);
    }

    true
}

// ── Public API ───────────────────────────────────────────────────────

/// Queue an APC (Asynchronous Procedure Call) to an existing thread.
///
/// The thread must enter an "alertable wait" state (e.g., via `SleepEx`, 
/// `WaitForSingleObjectEx`, or `NtDelayExecution` with `Alertable = TRUE`)
/// for the APC to fire. 
///
/// GUI threads often enter alertable states during message processing.
/// Some worker threads do as well.
pub fn queue_apc(
    thread_id: u32,
    callback: unsafe extern "system" fn(usize),
    parameter: usize,
) -> bool {
    let handle = unsafe {
        OpenThread(THREAD_SET_CONTEXT, false, thread_id)
    };
    
    let handle = match handle {
        Ok(h) => h,
        Err(_) => return false,
    };

    // Note: QueueUserAPC uses `PAPCFUNC` which expects a `usize` parameter.
    // Safety: we assume `callback` matches the `PAPCFUNC` signature.
    let result = unsafe {
        let func: Option<unsafe extern "system" fn(usize)> = Some(
            std::mem::transmute::<unsafe extern "system" fn(usize), unsafe extern "system" fn(usize)>(callback)
        );
        QueueUserAPC(std::mem::transmute(func), handle, parameter)
    };

    unsafe {
        let _ = windows::Win32::Foundation::CloseHandle(handle);
    }

    result != 0
}

/// Submit a work item to the Windows Thread Pool via TpAllocWork + TpPostWork.
///
/// This reuses existing worker threads from the default thread pool,
/// avoiding `CreateThread` which triggers `PsSetCreateThreadNotifyRoutine`.
///
/// # Arguments
/// * `callback` — The work callback function (PTP_WORK_CALLBACK signature).
/// * `context` — User-defined context pointer passed to the callback.
///
/// # Returns
/// `true` if the work was successfully allocated and posted.
pub fn submit_threadpool_work(
    callback: TpWorkCallback,
    context: *mut c_void,
) -> bool {
    if !ensure_tp_resolved() {
        tracing::error!("Failed to resolve Tp* functions from ntdll.dll");
        return false;
    }

    unsafe {
        let tp_alloc: FnTpAllocWork =
            std::mem::transmute(TP_ALLOC_WORK.load(Ordering::Acquire));
        let tp_post: FnTpPostWork =
            std::mem::transmute(TP_POST_WORK.load(Ordering::Acquire));

        let mut work: *mut c_void = std::ptr::null_mut();

        // TpAllocWork returns NTSTATUS (0 = success)
        let status = tp_alloc(
            &mut work,
            callback,
            context,
            std::ptr::null_mut(), // Use default callback environment
        );

        if status != 0 || work.is_null() {
            tracing::error!("TpAllocWork failed with NTSTATUS: 0x{:08X}", status);
            return false;
        }

        // Post the work item — it will be picked up by an existing worker thread.
        tp_post(work);

        // Note: We do NOT call TpReleaseWork here because the work item
        // must remain valid until the callback completes. The callback
        // or a separate cleanup path should call release_threadpool_work().

        tracing::info!("Thread pool work item submitted successfully");
        true
    }
}

/// Release a thread pool work item after the callback has completed.
///
/// # Safety
/// `work` must be a valid PTP_WORK handle obtained from TpAllocWork,
/// and the callback must have already completed.
pub unsafe fn release_threadpool_work(work: *mut c_void) {
    if work.is_null() {
        return;
    }

    if TP_RELEASE_WORK.load(Ordering::Acquire) == 0 {
        return;
    }

    let tp_release: FnTpReleaseWork =
        std::mem::transmute(TP_RELEASE_WORK.load(Ordering::Acquire));
    tp_release(work);
}
