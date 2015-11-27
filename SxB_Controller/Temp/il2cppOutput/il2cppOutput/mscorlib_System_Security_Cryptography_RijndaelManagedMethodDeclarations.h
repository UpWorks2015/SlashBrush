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

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1519;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t900;
// System.Byte[]
struct ByteU5BU5D_t728;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C" void RijndaelManaged__ctor_m9356 (RijndaelManaged_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C" void RijndaelManaged_GenerateIV_m9357 (RijndaelManaged_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C" void RijndaelManaged_GenerateKey_m9358 (RijndaelManaged_t1519 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateDecryptor_m9359 (RijndaelManaged_t1519 * __this, ByteU5BU5D_t728* ___rgbKey, ByteU5BU5D_t728* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * RijndaelManaged_CreateEncryptor_m9360 (RijndaelManaged_t1519 * __this, ByteU5BU5D_t728* ___rgbKey, ByteU5BU5D_t728* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
