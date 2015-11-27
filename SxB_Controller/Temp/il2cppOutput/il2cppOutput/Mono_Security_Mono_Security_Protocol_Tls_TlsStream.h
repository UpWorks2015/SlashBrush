#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t994;
// System.Byte[]
struct ByteU5BU5D_t728;

#include "mscorlib_System_IO_Stream.h"

// Mono.Security.Protocol.Tls.TlsStream
struct  TlsStream_t968  : public Stream_t977
{
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canRead
	bool ___canRead_1;
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canWrite
	bool ___canWrite_2;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.TlsStream::buffer
	MemoryStream_t994 * ___buffer_3;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::temp
	ByteU5BU5D_t728* ___temp_4;
};
