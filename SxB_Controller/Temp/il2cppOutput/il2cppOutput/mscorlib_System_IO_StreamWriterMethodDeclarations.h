﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.StreamWriter
struct StreamWriter_t1228;
// System.IO.Stream
struct Stream_t977;
// System.Text.Encoding
struct Encoding_t869;
// System.Char[]
struct CharU5BU5D_t25;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void StreamWriter__ctor_m7805 (StreamWriter_t1228 * __this, Stream_t977 * ___stream, Encoding_t869 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding,System.Int32)
extern "C" void StreamWriter__ctor_m7806 (StreamWriter_t1228 * __this, Stream_t977 * ___stream, Encoding_t869 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::.cctor()
extern "C" void StreamWriter__cctor_m7807 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Initialize(System.Text.Encoding,System.Int32)
extern "C" void StreamWriter_Initialize_m7808 (StreamWriter_t1228 * __this, Encoding_t869 * ___encoding, int32_t ___bufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::set_AutoFlush(System.Boolean)
extern "C" void StreamWriter_set_AutoFlush_m7809 (StreamWriter_t1228 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Dispose(System.Boolean)
extern "C" void StreamWriter_Dispose_m7810 (StreamWriter_t1228 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Flush()
extern "C" void StreamWriter_Flush_m7811 (StreamWriter_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::FlushBytes()
extern "C" void StreamWriter_FlushBytes_m7812 (StreamWriter_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Decode()
extern "C" void StreamWriter_Decode_m7813 (StreamWriter_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_Write_m7814 (StreamWriter_t1228 * __this, CharU5BU5D_t25* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.Char[],System.Int32,System.Int32)
extern "C" void StreamWriter_LowLevelWrite_m7815 (StreamWriter_t1228 * __this, CharU5BU5D_t25* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::LowLevelWrite(System.String)
extern "C" void StreamWriter_LowLevelWrite_m7816 (StreamWriter_t1228 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char)
extern "C" void StreamWriter_Write_m7817 (StreamWriter_t1228 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.Char[])
extern "C" void StreamWriter_Write_m7818 (StreamWriter_t1228 * __this, CharU5BU5D_t25* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Write(System.String)
extern "C" void StreamWriter_Write_m7819 (StreamWriter_t1228 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Close()
extern "C" void StreamWriter_Close_m7820 (StreamWriter_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamWriter::Finalize()
extern "C" void StreamWriter_Finalize_m7821 (StreamWriter_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;