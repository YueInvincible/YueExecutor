use std::ffi::c_void;
use std::ptr;
use serde_json::Value;

#[repr(C)]
struct JobNode {
    vtable: *mut c_void,
    name: *const u8,
    next: *mut JobNode,
}

pub fn run_scheduler_test() {
    // 1. Read mock JSON file (simulating dynamic offsets config or test data)
    let json_data = r#"{
        "job_name": "WaitingScriptJob",
        "dummy_offset": 0
    }"#;
    let parsed: Value = serde_json::from_str(json_data).unwrap();
    let target_name = parsed["job_name"].as_str().unwrap();

    // 2. Mocking the Scheduler static structure (Linked List of JobNodes)
    // End Node
    let mut node3 = JobNode {
        vtable: ptr::null_mut(),
        name: b"RenderJob\0".as_ptr(),
        next: ptr::null_mut(),
    };

    // Target Node
    let mut node2 = JobNode {
        vtable: ptr::null_mut(),
        name: b"WaitingScriptJob\0".as_ptr(),
        next: &mut node3 as *mut JobNode,
    };

    // Start Node
    let mut node1 = JobNode {
        vtable: ptr::null_mut(),
        name: b"InputJob\0".as_ptr(),
        next: &mut node2 as *mut JobNode,
    };

    let start_ptr = &mut node1 as *mut JobNode;
    let end_ptr = ptr::null_mut::<JobNode>(); // Null-terminated list

    // 3. Execute the algorithm to find the Job name
    let mut current = start_ptr;
    let mut found_ptr = ptr::null_mut::<JobNode>();

    while !current.is_null() && current != end_ptr {
        unsafe {
            let name_ptr = (*current).name;
            if !name_ptr.is_null() {
                let c_str = std::ffi::CStr::from_ptr(name_ptr as *const i8);
                if let Ok(str_slice) = c_str.to_str() {
                    if str_slice == target_name {
                        found_ptr = current;
                        break;
                    }
                }
            }
            current = (*current).next;
        }
    }

    // 4. Verify the search logic correctly found the node
    assert!(!found_ptr.is_null(), "Failed to find the target job");
    unsafe {
        let found_name = std::ffi::CStr::from_ptr((*found_ptr).name as *const i8).to_str().unwrap();
        assert_eq!(found_name, target_name);
        println!("Test succeeded: Found job '{}' at address {:?}", found_name, found_ptr);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_find_job_by_name() {
        run_scheduler_test();
    }
}
