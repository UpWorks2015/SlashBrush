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

// System.Reflection.TargetParameterCountException
struct TargetParameterCountException_t1323;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.TargetParameterCountException::.ctor()
extern "C" void TargetParameterCountException__ctor_m8468 (TargetParameterCountException_t1323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.String)
extern "C" void TargetParameterCountException__ctor_m8469 (TargetParameterCountException_t1323 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.TargetParameterCountException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TargetParameterCountException__ctor_m8470 (TargetParameterCountException_t1323 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
