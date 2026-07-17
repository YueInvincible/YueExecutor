$ErrorActionPreference = "Stop"

$DumperDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$RootDir = Split-Path -Parent $DumperDir
$DumperExe = Join-Path $DumperDir "roblox-dumper.exe"
$PlaceId = "6923982205"
$PlaceWebUrl = "https://www.roblox.com/games/$PlaceId/Dumper-v2"
$PlaceDeepLink = "roblox://experiences/start?placeId=$PlaceId"
$Lang = if ($env:YUEEX_LANG -eq "vi") { "vi" } else { "en" }

function Write-Step($message) {
    Write-Host ""
    Write-Host "== $message"
}

function Text($en, $vi) {
    if ($Lang -eq "vi") { return $vi }
    return $en
}

function Get-RobloxProcessInfo {
    $processes = Get-CimInstance Win32_Process |
        Where-Object { $_.Name -eq "RobloxPlayerBeta.exe" -or $_.Name -eq "Windows10Universal.exe" } |
        Where-Object { $_.ExecutablePath }

    if (-not $processes) {
        throw "Roblox is not running. Start Roblox first, then run this script again."
    }

    $proc = @($processes)[0]
    $path = $proc.ExecutablePath
    $channel = if ($path -match "RobloxPCVNG") { "RobloxPCVNG" } else { "Roblox" }
    $version = if ($path -match "(version-[^\\]+)") { $Matches[1] } else { "unknown-version" }
    $hash = (Get-FileHash -Algorithm SHA256 -LiteralPath $path).Hash.ToLowerInvariant()

    [pscustomobject]@{
        ProcessId = $proc.ProcessId
        Name = $proc.Name
        Path = $path
        Channel = $channel
        Version = $version
        Hash = $hash
    }
}

function Ensure-Cloudflared {
    $cmd = Get-Command cloudflared -ErrorAction SilentlyContinue
    if ($cmd) {
        return $cmd.Source
    }

    Write-Step "Installing cloudflared"
    $installDir = Join-Path $env:LOCALAPPDATA "cloudflared"
    New-Item -ItemType Directory -Force -Path $installDir | Out-Null
    $target = Join-Path $installDir "cloudflared.exe"
    $url = "https://github.com/cloudflare/cloudflared/releases/latest/download/cloudflared-windows-amd64.exe"

    Write-Host "Downloading cloudflared..."
    curl.exe -L $url -o $target
    if ($LASTEXITCODE -ne 0 -or -not (Test-Path -LiteralPath $target)) {
        throw "Failed to download cloudflared."
    }

    $env:PATH = "$installDir;$env:PATH"
    return $target
}

function Start-TunnelAndGetUrl($cloudflaredPath) {
    Write-Step "Starting Cloudflare tunnel"
    $tmp = Join-Path $env:TEMP ("yueex_tunnel_" + [guid]::NewGuid().ToString("N"))
    New-Item -ItemType Directory -Force -Path $tmp | Out-Null
    $stdout = Join-Path $tmp "stdout.log"
    $stderr = Join-Path $tmp "stderr.log"

    $process = Start-Process -FilePath $cloudflaredPath `
        -ArgumentList @("tunnel", "--url", "http://localhost:8080") `
        -RedirectStandardOutput $stdout `
        -RedirectStandardError $stderr `
        -PassThru `
        -WindowStyle Hidden

    $deadline = (Get-Date).AddSeconds(45)
    $tunnelUrl = $null
    while ((Get-Date) -lt $deadline -and -not $tunnelUrl) {
        Start-Sleep -Milliseconds 500
        $text = ""
        if (Test-Path -LiteralPath $stdout) { $text += Get-Content -Raw -LiteralPath $stdout }
        if (Test-Path -LiteralPath $stderr) { $text += "`n" + (Get-Content -Raw -LiteralPath $stderr) }

        $match = [regex]::Match($text, "https://[a-zA-Z0-9.-]+\.trycloudflare\.com")
        if ($match.Success) {
            $tunnelUrl = $match.Value
        }
    }

    if (-not $tunnelUrl) {
        if (-not $process.HasExited) { Stop-Process -Id $process.Id -Force }
        throw "Could not detect Cloudflare tunnel URL."
    }

    Write-Host "Tunnel URL: $tunnelUrl"
    [pscustomobject]@{
        Process = $process
        Url = $tunnelUrl
        TempDir = $tmp
    }
}

function Run-Dumper($tunnelUrl) {
    if (-not (Test-Path -LiteralPath $DumperExe)) {
        throw "roblox-dumper.exe not found: $DumperExe"
    }

    Write-Step "Running roblox-dumper"

    $backupDir = Join-Path $env:TEMP ("yueex_offsets_backup_" + [guid]::NewGuid().ToString("N"))
    New-Item -ItemType Directory -Force -Path $backupDir | Out-Null
    foreach ($name in @("offsets.json", "offsets.h", "offsets.py", "offsets.cs")) {
        $path = Join-Path $RootDir $name
        if (Test-Path -LiteralPath $path) {
            Move-Item -LiteralPath $path -Destination (Join-Path $backupDir $name) -Force
        }
    }

    $psi = [System.Diagnostics.ProcessStartInfo]::new()
    $psi.FileName = $DumperExe
    $psi.WorkingDirectory = $RootDir
    $psi.UseShellExecute = $false
    $psi.RedirectStandardInput = $true
    $psi.RedirectStandardOutput = $true
    $psi.RedirectStandardError = $true
    $psi.CreateNoWindow = $false

    $proc = [System.Diagnostics.Process]::Start($psi)
    $proc.StandardInput.WriteLine($tunnelUrl)
    $proc.StandardInput.Flush()

    $outTask = $proc.StandardOutput.ReadToEndAsync()
    $errTask = $proc.StandardError.ReadToEndAsync()

    if (-not $proc.WaitForExit(180000)) {
        try { $proc.Kill() } catch {}
        throw "roblox-dumper timed out."
    }

    $output = $outTask.Result + "`n" + $errTask.Result
    Write-Host $output

    $json = Join-Path $RootDir "offsets.json"
    if (-not (Test-Path -LiteralPath $json)) {
        foreach ($name in @("offsets.json", "offsets.h", "offsets.py", "offsets.cs")) {
            $backup = Join-Path $backupDir $name
            if (Test-Path -LiteralPath $backup) {
                Move-Item -LiteralPath $backup -Destination (Join-Path $RootDir $name) -Force
            }
        }
        throw "Dumper did not produce offsets.json."
    }

    $parsed = Get-Content -Raw -LiteralPath $json | ConvertFrom-Json
    if (-not $parsed.offsets) {
        foreach ($name in @("offsets.json", "offsets.h", "offsets.py", "offsets.cs")) {
            $backup = Join-Path $backupDir $name
            if (Test-Path -LiteralPath $backup) {
                Move-Item -LiteralPath $backup -Destination (Join-Path $RootDir $name) -Force
            }
        }
        throw "Generated offsets.json is invalid."
    }
}

function Test-CriticalVngGlobals {
    $json = Join-Path $RootDir "offsets.json"
    if (-not (Test-Path -LiteralPath $json)) {
        return $false
    }

    $parsed = Get-Content -Raw -LiteralPath $json | ConvertFrom-Json
    return $parsed.offsets `
        -and $parsed.offsets.FakeDataModel `
        -and $null -ne $parsed.offsets.FakeDataModel.Pointer `
        -and $null -ne $parsed.offsets.FakeDataModel.RealDataModel `
        -and $parsed.offsets.VisualEngine `
        -and $null -ne $parsed.offsets.VisualEngine.Pointer `
        -and $null -ne $parsed.offsets.VisualEngine.FakeDataModel
}

function Save-Cache($info) {
    $cacheDir = Join-Path $RootDir ("offset-cache\{0}\{1}\{2}" -f $info.Channel, $info.Version, $info.Hash)
    New-Item -ItemType Directory -Force -Path $cacheDir | Out-Null

    foreach ($name in @("offsets.json", "offsets.h", "offsets.py", "offsets.cs")) {
        $source = Join-Path $RootDir $name
        if (Test-Path -LiteralPath $source) {
            Copy-Item -LiteralPath $source -Destination (Join-Path $cacheDir $name) -Force
        }
    }

    $manifest = [pscustomobject]@{
        channel = $info.Channel
        version = $info.Version
        exe_sha256 = $info.Hash
        exe_path = $info.Path
        cached_at = (Get-Date).ToString("o")
    }
    $manifest | ConvertTo-Json -Depth 4 | Set-Content -LiteralPath (Join-Path $cacheDir "manifest.json") -Encoding UTF8

    Write-Host "Cached offsets in: $cacheDir"
}

Write-Step "Roblox offset dump helper"
$info = Get-RobloxProcessInfo
Write-Host "Process: $($info.Name) PID=$($info.ProcessId)"
Write-Host "Path:    $($info.Path)"
Write-Host "Channel: $($info.Channel)"
Write-Host "Version: $($info.Version)"
Write-Host "SHA256:  $($info.Hash)"

$cacheDir = Join-Path $RootDir ("offset-cache\{0}\{1}\{2}" -f $info.Channel, $info.Version, $info.Hash)
$cachedJson = Join-Path $cacheDir "offsets.json"
if (Test-Path -LiteralPath $cachedJson) {
    Write-Step (Text "Cached offsets already exist" "Da co offset trong cache")
    Write-Host "Cache: $cacheDir"
    $answer = Read-Host (Text "Use cached offsets and copy them to project root? [Y/n]" "Dung offset da cache va copy ve thu muc project? [Y/n]")
    if ($answer -notmatch "^(n|N)") {
        foreach ($name in @("offsets.json", "offsets.h", "offsets.py", "offsets.cs")) {
            $source = Join-Path $cacheDir $name
            if (Test-Path -LiteralPath $source) {
                Copy-Item -LiteralPath $source -Destination (Join-Path $RootDir $name) -Force
            }
        }
        Write-Host (Text "Copied cached offsets to project root." "Da copy offset cache ve thu muc project.")
        exit 0
    }
}

Write-Step (Text "User action required" "Can thao tac tu nguoi dung")
if ($info.Channel -eq "RobloxPCVNG") {
    Write-Host (Text "RobloxPCVNG mode uses hybrid offsets." "Che do RobloxPCVNG dung offset hybrid.")
    Write-Host (Text "You do not need to open the Dumper v2 place." "Ban khong can mo Dumper v2 place.")
    Write-Host (Text "Join any RobloxPCVNG game and wait until it fully loads." "Hay vao bat ky game RobloxPCVNG nao va doi den khi load xong.")
    Write-Host (Text "When the game is loaded, type exactly: done" "Khi game da load xong, go dung chu: done")
    while ($true) {
        $ready = Read-Host (Text "Type done after any RobloxPCVNG game is loaded" "Go done sau khi game RobloxPCVNG da load xong")
        if ($ready -eq "done") { break }
        Write-Host (Text "Not continuing yet. Type exactly: done" "Chua tiep tuc. Hay go dung chu: done")
    }
} else {
    Write-Host (Text "This will open the Roblox Dumper v2 place." "Tool se mo Roblox Dumper v2 place.")
    Write-Host (Text "First, leave any Roblox game you are currently playing and return to the Roblox home/main screen." "Truoc tien, hay thoat khoi game Roblox dang choi va quay ve man hinh chinh Roblox.")
    Write-Host (Text "The roblox:// place link may not switch games correctly while you are still inside another game." "Link roblox:// co the khong chuyen game dung neu ban van dang o trong mot game khac.")
    Write-Host (Text "When you are back at the Roblox home/main screen, type exactly: done" "Khi da ve man hinh chinh Roblox, go dung chu: done")
    while ($true) {
        $leftGame = Read-Host (Text "Type done after leaving the current game" "Go done sau khi da thoat game hien tai")
        if ($leftGame -eq "done") { break }
        Write-Host (Text "Not continuing yet. Type exactly: done" "Chua tiep tuc. Hay go dung chu: done")
    }

    Write-Host ""
    Write-Host (Text "Next, the script will try to open the Dumper v2 place." "Tiep theo, tool se thu mo Dumper v2 place.")
    Write-Host (Text "Join the place in Roblox and wait until it fully loads." "Hay vao place trong Roblox va doi den khi load xong.")
    Write-Host (Text "Do not type anything here until you are inside the Dumper v2 place and the game has fully loaded." "Dung go gi o day cho den khi ban da vao Dumper v2 va game load xong.")
    Write-Host (Text "When the Dumper v2 place is loaded, type exactly: done" "Khi Dumper v2 da load xong, go dung chu: done")
    Write-Host ""
    Write-Host (Text "The script will try the Roblox app deep link:" "Tool se thu mo bang deep link cua Roblox:")
    Write-Host $PlaceDeepLink
    Write-Host (Text "If that does not open Roblox, the script will open the web page fallback." "Neu link khong mo Roblox, tool se mo fallback bang trang web.")
    Write-Host "PlaceId: $PlaceId"

    try {
        Set-Clipboard -Value $PlaceDeepLink
        Write-Host (Text "Copied deep link to clipboard." "Da copy deep link vao clipboard.")
    } catch {
        Write-Host (Text "Could not copy deep link to clipboard." "Khong copy duoc deep link vao clipboard.")
    }

    try {
        Start-Process $PlaceDeepLink
    } catch {
        Start-Process $PlaceWebUrl
    }

    while ($true) {
        $ready = Read-Host (Text "Type done after Dumper v2 is loaded in Roblox" "Go done sau khi Dumper v2 da load xong trong Roblox")
        if ($ready -eq "done") { break }
        Write-Host (Text "Not continuing yet. Type exactly: done" "Chua tiep tuc. Hay go dung chu: done")
    }
}

$cloudflared = Ensure-Cloudflared
$tunnel = $null
try {
    $tunnel = Start-TunnelAndGetUrl $cloudflared
    Run-Dumper $tunnel.Url
    if ($info.Channel -eq "RobloxPCVNG" -and -not (Test-CriticalVngGlobals)) {
        throw "VNG dump did not produce the required global offsets."
    }
    Save-Cache $info
} finally {
    if ($tunnel -and $tunnel.Process -and -not $tunnel.Process.HasExited) {
        Stop-Process -Id $tunnel.Process.Id -Force
    }
}
