//! IPC message protocol for Shared-Memory + Event channel.
//!
//! Messages are serialized as a simple TLV (Tag-Length-Value) binary format
//! to avoid pulling in `serde` and keep the in-process footprint minimal.
//!
//! Wire format:
//! ```text
//! [tag: u8][payload_len: u32 LE][payload: payload_len bytes]
//! ```

use crate::types::ExecutionResult;

// ── Message Tags ─────────────────────────────────────────────────────

/// Tag byte identifying the message type on the wire.
#[repr(u8)]
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum MessageTag {
    /// Ping / keep-alive (no payload).
    Ping = 0x01,
    /// Pong / keep-alive response (no payload).
    Pong = 0x02,
    /// Execute Luau source (payload = UTF-8 source code).
    ExecuteLuau = 0x10,
    /// Execution result (payload = serialized ExecutionResult).
    ExecResult = 0x11,
    /// Graceful shutdown request (no payload).
    Shutdown = 0xFE,
    /// Error report from DLL side (payload = UTF-8 error message).
    ErrorReport = 0xFF,
}

impl MessageTag {
    /// Convert a raw byte to a `MessageTag`, returning `None` for unknown tags.
    pub fn from_u8(value: u8) -> Option<Self> {
        match value {
            0x01 => Some(Self::Ping),
            0x02 => Some(Self::Pong),
            0x10 => Some(Self::ExecuteLuau),
            0x11 => Some(Self::ExecResult),
            0xFE => Some(Self::Shutdown),
            0xFF => Some(Self::ErrorReport),
            _ => None,
        }
    }
}

// ── High-Level Message Enum ──────────────────────────────────────────

/// Typed IPC message exchanged between engine and DLL.
#[derive(Debug, Clone)]
pub enum IpcMessage {
    /// Keep-alive probe.
    Ping,
    /// Keep-alive response.
    Pong,
    /// Request: execute the given Luau source code.
    ExecuteLuau { source: String },
    /// Response: result of a Luau execution.
    ExecResult(ExecutionResult),
    /// Request: gracefully shut down the in-process runtime.
    Shutdown,
    /// Unsolicited error report from the DLL.
    ErrorReport { message: String },
}

// ── Serialization ────────────────────────────────────────────────────

/// Error type for IPC serialization / deserialization.
#[derive(Debug, Clone, thiserror::Error)]
pub enum IpcSerError {
    #[error("Buffer too small: need {need} bytes, have {have}")]
    BufferTooSmall { need: usize, have: usize },

    #[error("Unknown message tag: 0x{tag:02X}")]
    UnknownTag { tag: u8 },

    #[error("Payload exceeds maximum size: {size} > {max}")]
    PayloadTooLarge { size: usize, max: usize },

    #[error("Invalid UTF-8 in payload")]
    InvalidUtf8,

    #[error("Malformed execution result payload")]
    MalformedExecResult,
}

impl IpcMessage {
    /// Serialize this message into a byte buffer.
    ///
    /// Returns the number of bytes written.
    /// Format: `[tag: 1][payload_len: 4 LE][payload: N]`
    pub fn serialize(&self, buf: &mut [u8]) -> Result<usize, IpcSerError> {
        let (tag, payload) = self.to_wire_parts();
        let total = 1 + 4 + payload.len();

        if buf.len() < total {
            return Err(IpcSerError::BufferTooSmall {
                need: total,
                have: buf.len(),
            });
        }

        buf[0] = tag as u8;
        buf[1..5].copy_from_slice(&(payload.len() as u32).to_le_bytes());
        buf[5..5 + payload.len()].copy_from_slice(&payload);

        Ok(total)
    }

    /// Deserialize a message from a byte buffer.
    ///
    /// Returns `(message, bytes_consumed)`.
    pub fn deserialize(buf: &[u8]) -> Result<(Self, usize), IpcSerError> {
        if buf.len() < 5 {
            return Err(IpcSerError::BufferTooSmall {
                need: 5,
                have: buf.len(),
            });
        }

        let tag = MessageTag::from_u8(buf[0]).ok_or(IpcSerError::UnknownTag { tag: buf[0] })?;

        let payload_len = u32::from_le_bytes([buf[1], buf[2], buf[3], buf[4]]) as usize;
        let total = 5 + payload_len;

        if buf.len() < total {
            return Err(IpcSerError::BufferTooSmall {
                need: total,
                have: buf.len(),
            });
        }

        let payload = &buf[5..total];
        let msg = Self::from_wire_parts(tag, payload)?;

        Ok((msg, total))
    }

    /// Break down a message into its tag and serialized payload bytes.
    fn to_wire_parts(&self) -> (MessageTag, Vec<u8>) {
        match self {
            Self::Ping => (MessageTag::Ping, Vec::new()),
            Self::Pong => (MessageTag::Pong, Vec::new()),
            Self::Shutdown => (MessageTag::Shutdown, Vec::new()),

            Self::ExecuteLuau { source } => {
                (MessageTag::ExecuteLuau, source.as_bytes().to_vec())
            }

            Self::ErrorReport { message } => {
                (MessageTag::ErrorReport, message.as_bytes().to_vec())
            }

            Self::ExecResult(result) => {
                let payload = Self::serialize_exec_result(result);
                (MessageTag::ExecResult, payload)
            }
        }
    }

    /// Reconstruct a message from its tag and raw payload bytes.
    fn from_wire_parts(tag: MessageTag, payload: &[u8]) -> Result<Self, IpcSerError> {
        match tag {
            MessageTag::Ping => Ok(Self::Ping),
            MessageTag::Pong => Ok(Self::Pong),
            MessageTag::Shutdown => Ok(Self::Shutdown),

            MessageTag::ExecuteLuau => {
                let source =
                    std::str::from_utf8(payload).map_err(|_| IpcSerError::InvalidUtf8)?;
                Ok(Self::ExecuteLuau {
                    source: source.to_owned(),
                })
            }

            MessageTag::ErrorReport => {
                let message =
                    std::str::from_utf8(payload).map_err(|_| IpcSerError::InvalidUtf8)?;
                Ok(Self::ErrorReport {
                    message: message.to_owned(),
                })
            }

            MessageTag::ExecResult => {
                let result = Self::deserialize_exec_result(payload)?;
                Ok(Self::ExecResult(result))
            }
        }
    }

    /// Serialize an [`ExecutionResult`] into a compact binary payload.
    ///
    /// Layout:
    /// ```text
    /// [success: u8]
    /// [elapsed_us: u64 LE]
    /// [output_len: u32 LE][output: UTF-8]
    /// [error_len: u32 LE][error: UTF-8]   // error_len=0 means None
    /// ```
    fn serialize_exec_result(result: &ExecutionResult) -> Vec<u8> {
        let output_bytes = result.output.as_bytes();
        let error_bytes = result.error.as_deref().unwrap_or("").as_bytes();

        let capacity = 1 + 8 + 4 + output_bytes.len() + 4 + error_bytes.len();
        let mut buf = Vec::with_capacity(capacity);

        buf.push(if result.success { 1 } else { 0 });
        buf.extend_from_slice(&result.elapsed_us.to_le_bytes());
        buf.extend_from_slice(&(output_bytes.len() as u32).to_le_bytes());
        buf.extend_from_slice(output_bytes);
        buf.extend_from_slice(&(error_bytes.len() as u32).to_le_bytes());
        buf.extend_from_slice(error_bytes);

        buf
    }

    /// Deserialize an [`ExecutionResult`] from its binary payload.
    fn deserialize_exec_result(data: &[u8]) -> Result<ExecutionResult, IpcSerError> {
        // Minimum: 1 (success) + 8 (elapsed) + 4 (output_len) + 4 (error_len) = 17
        if data.len() < 17 {
            return Err(IpcSerError::MalformedExecResult);
        }

        let success = data[0] != 0;
        let elapsed_us = u64::from_le_bytes(data[1..9].try_into().unwrap());

        let output_len = u32::from_le_bytes(data[9..13].try_into().unwrap()) as usize;
        if data.len() < 13 + output_len + 4 {
            return Err(IpcSerError::MalformedExecResult);
        }
        let output =
            std::str::from_utf8(&data[13..13 + output_len]).map_err(|_| IpcSerError::InvalidUtf8)?;

        let err_offset = 13 + output_len;
        let error_len =
            u32::from_le_bytes(data[err_offset..err_offset + 4].try_into().unwrap()) as usize;
        if data.len() < err_offset + 4 + error_len {
            return Err(IpcSerError::MalformedExecResult);
        }
        let error = if error_len == 0 {
            None
        } else {
            let s = std::str::from_utf8(&data[err_offset + 4..err_offset + 4 + error_len])
                .map_err(|_| IpcSerError::InvalidUtf8)?;
            Some(s.to_owned())
        };

        Ok(ExecutionResult {
            success,
            output: output.to_owned(),
            error,
            elapsed_us,
        })
    }
}

// ── Tests ────────────────────────────────────────────────────────────

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn roundtrip_ping() {
        let mut buf = [0u8; 64];
        let written = IpcMessage::Ping.serialize(&mut buf).unwrap();
        let (msg, consumed) = IpcMessage::deserialize(&buf[..written]).unwrap();
        assert_eq!(consumed, written);
        assert!(matches!(msg, IpcMessage::Ping));
    }

    #[test]
    fn roundtrip_execute_luau() {
        let original = IpcMessage::ExecuteLuau {
            source: "print('hello from YueEx')".to_owned(),
        };
        let mut buf = [0u8; 256];
        let written = original.serialize(&mut buf).unwrap();
        let (msg, consumed) = IpcMessage::deserialize(&buf[..written]).unwrap();
        assert_eq!(consumed, written);
        match msg {
            IpcMessage::ExecuteLuau { source } => {
                assert_eq!(source, "print('hello from YueEx')");
            }
            _ => panic!("Expected ExecuteLuau"),
        }
    }

    #[test]
    fn roundtrip_exec_result_success() {
        let result = ExecutionResult {
            success: true,
            output: "42".to_owned(),
            error: None,
            elapsed_us: 1234,
        };
        let original = IpcMessage::ExecResult(result);
        let mut buf = [0u8; 256];
        let written = original.serialize(&mut buf).unwrap();
        let (msg, _) = IpcMessage::deserialize(&buf[..written]).unwrap();
        match msg {
            IpcMessage::ExecResult(r) => {
                assert!(r.success);
                assert_eq!(r.output, "42");
                assert!(r.error.is_none());
                assert_eq!(r.elapsed_us, 1234);
            }
            _ => panic!("Expected ExecResult"),
        }
    }

    #[test]
    fn roundtrip_exec_result_failure() {
        let result = ExecutionResult {
            success: false,
            output: String::new(),
            error: Some("attempt to index nil".to_owned()),
            elapsed_us: 500,
        };
        let original = IpcMessage::ExecResult(result);
        let mut buf = [0u8; 256];
        let written = original.serialize(&mut buf).unwrap();
        let (msg, _) = IpcMessage::deserialize(&buf[..written]).unwrap();
        match msg {
            IpcMessage::ExecResult(r) => {
                assert!(!r.success);
                assert_eq!(r.error.as_deref(), Some("attempt to index nil"));
            }
            _ => panic!("Expected ExecResult"),
        }
    }

    #[test]
    fn roundtrip_shutdown() {
        let mut buf = [0u8; 64];
        let written = IpcMessage::Shutdown.serialize(&mut buf).unwrap();
        let (msg, _) = IpcMessage::deserialize(&buf[..written]).unwrap();
        assert!(matches!(msg, IpcMessage::Shutdown));
    }

    #[test]
    fn roundtrip_error_report() {
        let original = IpcMessage::ErrorReport {
            message: "scheduler hook failed".to_owned(),
        };
        let mut buf = [0u8; 256];
        let written = original.serialize(&mut buf).unwrap();
        let (msg, _) = IpcMessage::deserialize(&buf[..written]).unwrap();
        match msg {
            IpcMessage::ErrorReport { message } => {
                assert_eq!(message, "scheduler hook failed");
            }
            _ => panic!("Expected ErrorReport"),
        }
    }

    #[test]
    fn buffer_too_small() {
        let msg = IpcMessage::ExecuteLuau {
            source: "print('x')".to_owned(),
        };
        let mut buf = [0u8; 2]; // way too small
        let err = msg.serialize(&mut buf).unwrap_err();
        assert!(matches!(err, IpcSerError::BufferTooSmall { .. }));
    }

    #[test]
    fn unknown_tag() {
        let buf = [0xAA, 0x00, 0x00, 0x00, 0x00]; // unknown tag 0xAA
        let err = IpcMessage::deserialize(&buf).unwrap_err();
        assert!(matches!(err, IpcSerError::UnknownTag { tag: 0xAA }));
    }
}
