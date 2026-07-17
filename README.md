# YueEx — (Bypass EDR/Anti-Cheat)
**YueEx** là một công cụ phát triển và kiểm thử nội bộ dành cho ứng dụng **Roblox**, được thiết kế để nạp mã nguồn Luau trực tiếp vào tiến trình runtime của Roblox mà không thông qua loader chuẩn của hệ thống. Dự án kết hợp hiệu năng vượt trội và tính năng can thiệp cấp hệ thống của **Rust** với giao diện trực quan của **C# WPF**.

Dự án này sử dụng các kỹ thuật bypass nâng cao cấp độ Ring 3 (User-mode) nhằm vượt qua các cơ chế kiểm tra bộ nhớ, luồng và tải mô-đun của các hệ thống EDR / Anti-Cheat hiện đại (ví dụ: Hyperion).

---

## 📌 Kiến Trúc Hệ Thống (System Architecture)

Dự án bao gồm hai thành phần chính:
1. **`YueEx.exe` (Out-of-process - Bộ điều khiển & Giao diện)**:
   - Được viết bằng **C# WPF** kết hợp với engine lõi bằng **Rust** (`yueex_engine.dll`).
   - Nhiệm vụ: Tìm kiếm/lựa chọn tiến trình `RobloxPlayerBeta.exe`, thực hiện Manual Mapping `YueEx.dll`, cung cấp trình soạn thảo script Luau và nhận telemetry/kết quả thực thi trả về.
2. **`YueEx.dll` (In-process - Trình chạy nội bộ)**:
   - Được phát triển hoàn toàn bằng **Rust** (`yueex-dll`).
   - Nhiệm vụ: Chạy ngầm trong không gian bộ nhớ của `RobloxPlayerBeta.exe`, giao tiếp qua kênh IPC ẩn, liên kết với Task Scheduler của Luau VM và thực thi script an toàn.

```text
YueEx.Dashboard.Gui (WPF UI) / cli-injector
   │
   ├─► Cầu nối C-ABI (yueex_engine.dll) / CLI
   │     │
   │     ├─► Manual Mapping (Module Overloading để đạt MEM_IMAGE)
   │     │     │
   │     │     └─► Nạp YueEx.dll vào RobloxPlayerBeta.exe
   │     │
   │     └─► Thiết lập IPC ẩn danh (Shared Memory + Named Events)
   │           ▲
   ▼           │ (Gửi Script & Nhận kết quả)
YueEx.dll (Trong tiến trình RobloxPlayerBeta)
   │
   ├─► Cloaking & Stealth (Xóa PE Headers, Spoof Call Stack, Indirect Syscalls)
   │
   ├─► Shadow VTable Activation (Hook `__namecall` vĩnh viễn)
   │
   ├─► Luau Execution Queue (Thực thi script qua r_spawn)
   │
   └─► Network Interception (Hook WinHTTP chặn/chuyển hướng telemetry)
```

---

## 🛠️ Công Nghệ & Kỹ Thuật Lõi (Core Technologies)

### 1. Kỹ Thuật Nạp Bộ Nhớ & Tránh Phát Hiện (Injection & Memory Strategy)
Để tránh bị phát hiện bởi cơ chế kiểm soát của `LdrRegisterDllNotification` và hệ thống giám sát bộ nhớ:
- **Manual Mapping (`yueex-injector`)**: Tự động parse cấu trúc PE (Portable Executable) của DLL từ byte array trong bộ nhớ. Tự ánh xạ các section, giải quyết bảng nhập khẩu (Import Address Table - IAT), và áp dụng base relocation thủ công. Yêu cầu DLL được mã hóa XOR trước khi inject để tránh detect tĩnh.
- **Module Overloading**: Thay vì cấp phát vùng nhớ riêng tư (`MEM_PRIVATE`), YueEx sẽ tải một DLL hệ thống hợp lệ và đã được ký của Windows, sau đó ghi đè mã nguồn của `YueEx.dll` lên đó. Điều này giúp bộ nhớ của YueEx đạt trạng thái `MEM_IMAGE`.
- **Shadow VTable Activation**: Thay thế Thread Hijacking (dễ bị phát hiện) bằng cơ chế hook VTable của Lua Metatable. Injector dùng AOB scan để tìm Luau API hoặc fallback qua TaskScheduler, tạo Shadow VTable và đổi vptr. `YueEx.dll` tự động kích hoạt lần đầu khi ứng dụng gọi `__namecall`.

### 2. Bộ Công Cụ Stealth Tối Thượng (`yueex-stealth`)
Triển khai các kỹ thuật ẩn mình nâng cao trong chế độ User-mode:
- **Indirect Syscalls**: Thực hiện các lời gọi hệ thống NT syscall trực tiếp bằng cách nhảy đến các opcode `syscall` sạch nằm trong `ntdll.dll`, bỏ qua các hook EDR đặt ở đầu các hàm API.
- **Stack Spoofing**: Giả mạo Call Stack của luồng thực thi để nó trông như được gọi từ các mô-đun hệ thống có chữ ký số của Microsoft.
- **Memory Cloaking**: Che giấu vùng nhớ thực thi bằng cách sử dụng cơ chế Vectored Exception Handling (VEH) kết hợp với các trang nhớ `PAGE_GUARD` thực thi một bước.
- **API Hashing**: Toàn bộ API hệ thống được phân giải động qua mã băm (hash value) tại thời điểm runtime.
- **Thread Pool Hijacking**: Đăng ký các công việc thực thi vào Thread Pool Worker có sẵn của Windows thay vì tạo các luồng độc lập.
- **Network Interception**: Hook inline `WinHttpOpenRequest` trong `winhttp.dll` để chặn các domain telemetry hoặc chuyển hướng (`roblox.com` -> `roproxy.com`).

### 3. Giao Tiếp Liên Tiến Trình Siêu Ẩn (Stealthy IPC Channel)
- Kênh giao tiếp IPC sử dụng kết hợp giữa **Bộ nhớ dùng chung (Shared Memory)** và **Sự kiện có tên (Named Events)**.
- **Dynamic Names**: Để tránh bị phát hiện thông qua việc liệt kê (enumeration) các đối tượng kernel có tên cố định, các tên của Shared Memory và Events được tính toán động dựa trên mã tiến trình (PID).
- Tốc độ truyền tải cực cao với độ trễ tối thiểu, cho phép truyền script Luau và lấy dữ liệu stdout/stderr tức thời.

### 4. Tích Hợp Luau VM & Execution (`yueex-engine` / `yueex-dll`)
- **Pattern Scanning & AOB**: Quét chữ ký nhị phân trong bộ nhớ của RobloxPlayerBeta để tìm vị trí của cấu trúc dữ liệu `lua_State`, `TaskScheduler`, và các hàm API như `luau_load`, `lua_spawn`.
- **Permanent `__namecall` Hook**: Duy trì một hook vĩnh viễn trên metatable. Khi IPC nhận được script, nó sẽ được đưa vào hàng đợi (`SCRIPT_QUEUE`). Ngay khi game gọi `__namecall`, script pending sẽ được biên dịch vào `fake_L` (qua `lua_newthread`) và thực thi an toàn thông qua `lua_spawn`.

### 5. Giao Diện Người Dùng WPF & CLI (`YueEx.Dashboard.Gui` / `cli-injector`)
- Cung cấp hai phương thức nạp:
  - **CLI Injector**: Tiện ích dòng lệnh gọn nhẹ phục vụ test nhanh, tự động bypass và tải offset cache từ cloud.
  - **Dashboard GUI**: Giao diện WPF hiện đại tương tác qua C-ABI, chứa trình soạn thảo mã chuyên dụng và panel nhận telemetry/kết quả thực thi.

---

## 📂 Cấu Trúc Thư Mục Dự Án (Project Structure)

```text
├── .cargo/               # Cấu hình compiler Rust
├── crates/               # Các crate cấu thành nên engine Rust
│   ├── yueex-abi/        # Định nghĩa các cấu trúc dữ liệu dùng chung và IPC protocol
│   ├── yueex-pe/         # Thư viện parse định dạng Portable Executable (PE)
│   ├── yueex-injector/   # Lõi Manual Mapper & VTable Activation
│   ├── yueex-ipc/        # Kênh IPC Shared Memory & Named Events
│   ├── yueex-stealth/    # Bộ công cụ ẩn mình (Syscalls, Stack Spoofing, VEH, ThreadPool)
│   ├── yueex-engine/     # Cầu nối C-ABI cung cấp API cho UI C#
│   ├── yueex-dll/        # In-process runtime (Bootstrap, Execution Queue, Net Hook)
│   ├── cli-injector/     # Tool CLI phục vụ việc test injection nhanh
│   └── mock-host/        # Tiến trình giả lập RobloxPlayerBeta để debug phát triển
├── frontend/             # Dự án giao diện C# WPF hiện tại (YueEx.Dashboard)
├── YueExUI/              # Dự án giao diện C# WPF (.NET) cũ
├── docs/                 # Tài liệu phân tích và thiết kế chi tiết
│   ├── RobloxPlayerBeta-verifier.md # Cơ chế bảo mật và phát hiện của RobloxPlayerBeta
│   └── project-scope.md  # Phạm vi và kiến trúc giải pháp
├── YueEx.sln             # Solution của Visual Studio
└── Cargo.toml            # Quản lý workspace dependencies của Rust
```

---

## ⚡ Hướng Dẫn Build Nhanh (Build Guide)

Dự án yêu cầu cài đặt **Rust toolchain** (mục tiêu `x86_64-pc-windows-msvc`) và **.NET SDK** mới nhất.

1. **Biên dịch toàn bộ workspace Rust**:
   ```powershell
   cargo build --workspace --release
   ```
   Điều này sẽ tạo ra:
   - `cli-injector.exe` (Injector dạng CLI)
   - `yueex_engine.dll` (Engine ABI Bridge)
   - `yueex_dll.dll` (DLL Runtime để inject)

2. **Chạy thử nghiệm với CLI**:
   - Khởi chạy tiến trình giả lập: `target\release\mock_host.exe`
   - Chạy CLI Injector: `target\release\cli-injector.exe "mock_host.exe" "target\release\yueex_dll.dll"`

3. **Biên dịch và chạy Giao diện Dashboard (WPF)**:
   - Vào thư mục `frontend/YueEx.Dashboard.Gui`
   - `dotnet build` và chạy ứng dụng Dashboard UI.  
`toi yeu claudecode + codex + cursor + antigravity + deepseek + chatgpt + gemini + copilot + claude + GLM + QWen`
---

## ⚠️ Khước Từ Trách Nhiệm (Disclaimer)
Dự án này được phát triển phục vụ cho mục đích nghiên cứu học thuật, kiểm thử bảo mật nội bộ và phát triển công cụ hỗ trợ phát triển sản phẩm chính thức. Việc sử dụng công cụ này chống lại các ứng dụng thương mại mà không có sự cho phép của chủ sở hữu là hoàn toàn bị cấm. Tác giả không chịu trách nhiệm cho bất kỳ thiệt hại hoặc vi phạm nào gây ra bởi dự án này."# YueExecutor" 
