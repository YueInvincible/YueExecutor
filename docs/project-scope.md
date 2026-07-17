YueEx Project Scope

Product Shape
YueEx is a first-party MyApp development/test tool with two deliverables:

YueEx.exe: the loader and operator UI.

YueEx.dll: the in-process Luau execution runtime.

YueEx.exe Responsibilities
YueEx.exe owns the out-of-process workflow:

Find or select the target MyApp development process.

Initiate loading YueEx.dll via advanced Manual Mapping. The loader must avoid standard Windows APIs (LoadLibrary/LdrLoadDll) by manually parsing the PE structure, allocating memory, and resolving imports in User-mode to evade EDR/Anticheat hooks.

Map the DLL to mimic a legitimate module (MEM_IMAGE emulation via Module Overloading/Hollowing or custom structures) to ensure compliance with MyApp's memory verifier.

Show clear load status and rejection reasons when MyApp's internal verifier blocks or detects the injection attempt.

Provide the primary place to enter Luau source.

Send Luau execution requests to the loaded YueEx.dll.

Display execution results, errors, and relevant runtime telemetry.

YueEx.dll Responsibilities
YueEx.dll owns the in-process runtime work:

Initialize only inside the intended MyApp development/test process.

After injection, it must erase PE headers or cloak its memory region immediately after DllMain execution to maintain a zero-footprint state.

Receive Luau source from YueEx.exe.

Run that Luau on the correct MyApp scheduler/thread and Luau context.

Return structured execution results.

Preserve stack/scheduler safety and avoid corrupting MyApp runtime state.

Expose diagnostics only as support for load/execute debugging.

MyApp Verifier Assumptions & Bypass Strategy
The project must actively analyze and bypass known MyApp verifier categories using internal executor techniques rather than relying on a hidden debug backdoor or undocumented system path.

Current target verifier categories and mitigation strategies:

Module load notification: Bypassed by avoiding LdrRegisterDllNotification triggers via Manual Mapping.

Memory checks (MEM_PRIVATE / RWX pages): Mitigated by implementing Module Overloading (overwriting a benign Windows DLL to secure a MEM_IMAGE status) and updating section permissions correctly (PAGE_EXECUTE_READ for code).

Thread validation (Start Address/Call Stack): Mitigated by hijacking an existing, legitimate thread (Thread Execution Hijacking) rather than calling CreateThread.

Luau runtime validation: Spoofing or hooking capability-gated paths to accept custom script loading.

YueEx should use concrete MyApp artifacts when available (executable, PDB/MAP, symbol manifest, verifier logs) to continuously refine the injection engine.


End-To-End Flow
YueEx.exe
  -> find/select MyApp development process
  -> execute Manual Mapping (Byte Array reflection + Module Overloading to get MEM_IMAGE)
  -> verify cloaked memory state and report initial telemetry
  -> user enters Luau
  -> send execution request to the hidden YueEx.dll runtime
  -> YueEx.dll schedules/runs Luau in MyApp
  -> YueEx.exe displays result and diagnostics