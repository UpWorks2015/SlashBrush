#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t975;
// System.AsyncCallback
struct AsyncCallback_t169;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t728;
// System.IO.Stream
struct Stream_t977;
// System.Exception
struct Exception_t309;
// System.Threading.WaitHandle
struct WaitHandle_t1023;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m5246 (ReceiveRecordAsyncResult_t975 * __this, AsyncCallback_t169 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t728* ___initialBuffer, Stream_t977 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t977 * ReceiveRecordAsyncResult_get_Record_m5247 (ReceiveRecordAsyncResult_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t728* ReceiveRecordAsyncResult_get_ResultingBuffer_m5248 (ReceiveRecordAsyncResult_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t728* ReceiveRecordAsyncResult_get_InitialBuffer_m5249 (ReceiveRecordAsyncResult_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m5250 (ReceiveRecordAsyncResult_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t309 * ReceiveRecordAsyncResult_get_AsyncException_m5251 (ReceiveRecordAsyncResult_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m5252 (ReceiveRecordAsyncResult_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1023 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m5253 (ReceiveRecordAsyncResult_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m5254 (ReceiveRecordAsyncResult_t975 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5255 (ReceiveRecordAsyncResult_t975 * __this, Exception_t309 * ___ex, ByteU5BU5D_t728* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5256 (ReceiveRecordAsyncResult_t975 * __this, Exception_t309 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m5257 (ReceiveRecordAsyncResult_t975 * __this, ByteU5BU5D_t728* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
