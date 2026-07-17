//! FFI Types and Error Codes for C ABI

#[repr(C)]
pub enum YueExError {
    Success = 0,
    InjectionFailed = 1,
    IpcInitFailed = 2,
    IpcSendFailed = 3,
    IpcTimeout = 4,
    InvalidUtf8 = 5,
    TargetNotFound = 6,
    InternalError = 7,
}

impl From<yueex_abi::types::InjectionError> for YueExError {
    fn from(e: yueex_abi::types::InjectionError) -> Self {
        match e {
            yueex_abi::types::InjectionError::ProcessNotFound { name: _ } => Self::TargetNotFound,
            _ => Self::InjectionFailed,
        }
    }
}

impl From<yueex_ipc::channel::ChannelError> for YueExError {
    fn from(e: yueex_ipc::channel::ChannelError) -> Self {
        match e {
            yueex_ipc::channel::ChannelError::Timeout => Self::IpcTimeout,
            _ => Self::IpcSendFailed,
        }
    }
}
