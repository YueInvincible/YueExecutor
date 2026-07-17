@echo off
setlocal

set "SCRIPT_DIR=%~dp0"
echo Select language / Chon ngon ngu:
echo   1. English
echo   2. Tieng Viet
set /p "LANG_CHOICE=Enter 1 or 2 / Nhap 1 hoac 2: "
if "%LANG_CHOICE%"=="2" (
    set "YUEEX_LANG=vi"
) else (
    set "YUEEX_LANG=en"
)

powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%SCRIPT_DIR%auto_dump_offsets.ps1"
set "EXITCODE=%ERRORLEVEL%"

echo.
if not "%EXITCODE%"=="0" (
    echo Auto dump failed with exit code %EXITCODE%.
) else (
    echo Auto dump completed.
)
pause
exit /b %EXITCODE%
