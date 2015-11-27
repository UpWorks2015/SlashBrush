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

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1520;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1037;
// System.Byte[]
struct ByteU5BU5D_t728;
// System.UInt32[]
struct UInt32U5BU5D_t895;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RijndaelTransform__ctor_m9361 (RijndaelTransform_t1520 * __this, Rijndael_t1037 * ___algo, bool ___encryption, ByteU5BU5D_t728* ___key, ByteU5BU5D_t728* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
extern "C" void RijndaelTransform__cctor_m9362 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
extern "C" void RijndaelTransform_Clear_m9363 (RijndaelTransform_t1520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
extern "C" void RijndaelTransform_ECB_m9364 (RijndaelTransform_t1520 * __this, ByteU5BU5D_t728* ___input, ByteU5BU5D_t728* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
extern "C" uint32_t RijndaelTransform_SubByte_m9365 (RijndaelTransform_t1520 * __this, uint32_t ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt128_m9366 (RijndaelTransform_t1520 * __this, ByteU5BU5D_t728* ___indata, ByteU5BU5D_t728* ___outdata, UInt32U5BU5D_t895* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt192_m9367 (RijndaelTransform_t1520 * __this, ByteU5BU5D_t728* ___indata, ByteU5BU5D_t728* ___outdata, UInt32U5BU5D_t895* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Encrypt256_m9368 (RijndaelTransform_t1520 * __this, ByteU5BU5D_t728* ___indata, ByteU5BU5D_t728* ___outdata, UInt32U5BU5D_t895* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt128_m9369 (RijndaelTransform_t1520 * __this, ByteU5BU5D_t728* ___indata, ByteU5BU5D_t728* ___outdata, UInt32U5BU5D_t895* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt192_m9370 (RijndaelTransform_t1520 * __this, ByteU5BU5D_t728* ___indata, ByteU5BU5D_t728* ___outdata, UInt32U5BU5D_t895* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
extern "C" void RijndaelTransform_Decrypt256_m9371 (RijndaelTransform_t1520 * __this, ByteU5BU5D_t728* ___indata, ByteU5BU5D_t728* ___outdata, UInt32U5BU5D_t895* ___ekey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
