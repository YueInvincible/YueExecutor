**A. Module Validation & Loader Policy**
MyApp dùng `LdrRegisterDllNotification` để phát hiện DLL vừa được map, sau đó kiểm tra đường dẫn chuẩn hóa, chữ ký số, hash và danh sách module được phép. API này chỉ dùng để phát hiện; việc chặn phải dựa thêm vào Windows mitigation policy và loader policy.

**B. Section Hashing – chống patch code**
MyApp định kỳ hash các section thực thi như `.text` bằng SHA-256 và so sánh với manifest được ký của đúng phiên bản. Nếu code trong bộ nhớ bị sửa, verifier sẽ ghi log và khóa Luau runtime hoặc terminate.

**C. Memory Scan – phát hiện vùng mã lạ**
MyApp quét bộ nhớ để phát hiện vùng `MEM_PRIVATE` có quyền thực thi, vùng `RWX`, hoặc mã đang chạy nhưng không thuộc module hợp lệ. Mọi vùng executable hợp lệ phải có nguồn gốc được đăng ký trước.

**D. Thread Validation**
MyApp kiểm tra start address, instruction pointer và call stack của các thread. Thread bắt đầu hoặc đang chạy trong vùng executable ẩn danh, vùng `MEM_PRIVATE`, hoặc ngoài module hợp lệ sẽ bị đánh dấu nguy hiểm.

**E. Luau Runtime Validation**
Script hoặc bytecode chỉ được nạp qua API tin cậy, có chữ ký và quyền hạn hợp lệ. Không export trực tiếp VM pointer, `luau_load` hoặc API native-loading cho plugin và script bên ngoài.
