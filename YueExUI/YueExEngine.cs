using System;
using System.Runtime.InteropServices;
using System.Text;

namespace YueExUI
{
    public enum YueExError : int
    {
        Success = 0,
        InjectionFailed = 1,
        IpcInitFailed = 2,
        IpcSendFailed = 3,
        IpcTimeout = 4,
        InvalidUtf8 = 5,
        TargetNotFound = 6,
        InternalError = 7,
    }

    public static class YueExEngine
    {
        private const string DllName = "yueex_engine.dll";

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        public static extern YueExError YueEx_Inject(string dllPath);

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern YueExError YueEx_InitializeIpc();

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void YueEx_ShutdownIpc();

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl)]
        public static extern void YueEx_FreeString(IntPtr ptr);

        [DllImport(DllName, CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private static extern YueExError YueEx_ExecuteLuau(
            string source,
            uint timeoutMs,
            out byte outSuccess,
            out IntPtr outOutput,
            out IntPtr outError,
            out ulong outElapsedUs);

        public class ExecutionResult
        {
            public bool Success { get; set; }
            public string Output { get; set; } = string.Empty;
            public string Error { get; set; } = string.Empty;
            public ulong ElapsedUs { get; set; }
        }

        public static ExecutionResult ExecuteLuau(string source, uint timeoutMs = 10000)
        {
            YueExError err = YueEx_ExecuteLuau(
                source, 
                timeoutMs, 
                out byte success, 
                out IntPtr outOutput, 
                out IntPtr outError, 
                out ulong outElapsedUs);

            if (err != YueExError.Success)
            {
                throw new Exception($"YueEx_ExecuteLuau failed: {err}");
            }

            var result = new ExecutionResult
            {
                Success = success != 0,
                ElapsedUs = outElapsedUs
            };

            if (outOutput != IntPtr.Zero)
            {
                result.Output = Marshal.PtrToStringAnsi(outOutput) ?? string.Empty;
                YueEx_FreeString(outOutput);
            }

            if (outError != IntPtr.Zero)
            {
                result.Error = Marshal.PtrToStringAnsi(outError) ?? string.Empty;
                YueEx_FreeString(outError);
            }

            return result;
        }
    }
}
