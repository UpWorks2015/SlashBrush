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

// System.ArgumentException
struct ArgumentException_t363;
// System.String
struct String_t;
// System.Exception
struct Exception_t309;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentException::.ctor()
extern "C" void ArgumentException__ctor_m9959 (ArgumentException_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" void ArgumentException__ctor_m2065 (ArgumentException_t363 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
extern "C" void ArgumentException__ctor_m4619 (ArgumentException_t363 * __this, String_t* ___message, Exception_t309 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" void ArgumentException__ctor_m4502 (ArgumentException_t363 * __this, String_t* ___message, String_t* ___paramName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C" void ArgumentException__ctor_m9960 (ArgumentException_t363 * __this, String_t* ___message, String_t* ___paramName, Exception_t309 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException__ctor_m9961 (ArgumentException_t363 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
extern "C" String_t* ArgumentException_get_ParamName_m9962 (ArgumentException_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
extern "C" String_t* ArgumentException_get_Message_m9963 (ArgumentException_t363 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ArgumentException_GetObjectData_m9964 (ArgumentException_t363 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
