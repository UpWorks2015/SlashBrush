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

// System.NotImplementedException
struct NotImplementedException_t861;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.NotImplementedException::.ctor()
extern "C" void NotImplementedException__ctor_m10501 (NotImplementedException_t861 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.String)
extern "C" void NotImplementedException__ctor_m4557 (NotImplementedException_t861 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NotImplementedException__ctor_m10502 (NotImplementedException_t861 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;