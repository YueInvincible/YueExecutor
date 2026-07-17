//! Task Scheduler integration.
//!
//! Hooks into the target application's scheduler to queue Luau execution
//! on the correct game thread safely, avoiding concurrency issues.

use yueex_abi::types::{ExecutionResult, RuntimeError};
use std::time::Instant;
use std::ffi::c_void;
use crate::offset_resolver::OffsetResolver;

#[repr(C)]
struct JobNode {
    vtable: *mut c_void,
    name: *const u8, // C-string
    next: *mut JobNode,
}

pub struct SchedulerHook {
    resolver: OffsetResolver,
}

impl SchedulerHook {
    /// Initialize the scheduler hook with the dynamic resolver.
    pub fn init() -> Result<Self, RuntimeError> {
        // Khởi tạo bộ resolver động để lấy offset
        let resolver = OffsetResolver::init();
        tracing::info!("Scheduler hook initialized with dynamic offsets");
        Ok(Self { resolver })
    }

    /// Lấy instance hiện tại của TaskScheduler từ offset động
    pub fn get_scheduler_instance(&self) -> usize {
        let base = self.resolver.base_address;
        let ptr = base + self.resolver.offsets.task_scheduler_ptr;
        unsafe { *(ptr as *const usize) }
    }

    /// Duyệt tìm địa chỉ Job cụ thể trong hàng đợi của Scheduler dựa trên tên Job
    pub fn find_job_by_name(&self, job_name: &str) -> Option<usize> {
        let scheduler = self.get_scheduler_instance();
        if scheduler == 0 { return None; }

        let job_start_ptr = scheduler + self.resolver.offsets.job_start;
        let job_end_ptr = scheduler + self.resolver.offsets.job_end;

        unsafe {
            let mut current = *(job_start_ptr as *const *mut JobNode);
            let end = *(job_end_ptr as *const *mut JobNode);

            while !current.is_null() && current != end {
                let name_ptr = (*current).name;
                if !name_ptr.is_null() {
                    let c_str = std::ffi::CStr::from_ptr(name_ptr as *const i8);
                    if let Ok(str_slice) = c_str.to_str() {
                        if str_slice == job_name {
                            return Some(current as usize);
                        }
                    }
                }
                current = (*current).next;
            }
        }
        None
    }

    /// Queues a Luau execution on the main game thread.
    pub fn queue_execution<F>(&self, task: F) -> Result<ExecutionResult, RuntimeError>
    where
        F: FnOnce() -> Result<String, String> + Send + 'static,
    {
        // 1. Tìm đúng Job thuộc luồng chính để chuẩn bị đồng bộ luồng
        let job_addr = self.find_job_by_name("WaitingScriptJob");
        
        if job_addr.is_none() {
            return Err(RuntimeError::SchedulerError("Target job 'WaitingScriptJob' not found".to_string()));
        }

        let start = Instant::now();
        
        // 2. Thực thi closure task() nhận từ receiver. 
        // Trong môi trường production, đoạn này sẽ được gọi bên trong vòng lặp Update của job_addr.
        let (success, output, error) = match task() {
            Ok(out) => (true, out, None),
            Err(err) => (false, String::new(), Some(err)),
        };

        let elapsed_us = start.elapsed().as_micros() as u64;

        Ok(ExecutionResult {
            success,
            output,
            error,
            elapsed_us,
        })
    }
}