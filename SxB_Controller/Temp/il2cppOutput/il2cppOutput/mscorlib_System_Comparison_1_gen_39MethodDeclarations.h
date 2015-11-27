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

// System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>
struct Comparison_1_t2333;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t168;
// System.AsyncCallback
struct AsyncCallback_t169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m17642_gshared (Comparison_1_t2333 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m17642(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2333 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m17642_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m17643_gshared (Comparison_1_t2333 * __this, CustomAttributeTypedArgument_t1298  ___x, CustomAttributeTypedArgument_t1298  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m17643(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2333 *, CustomAttributeTypedArgument_t1298 , CustomAttributeTypedArgument_t1298 , const MethodInfo*))Comparison_1_Invoke_m17643_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m17644_gshared (Comparison_1_t2333 * __this, CustomAttributeTypedArgument_t1298  ___x, CustomAttributeTypedArgument_t1298  ___y, AsyncCallback_t169 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m17644(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2333 *, CustomAttributeTypedArgument_t1298 , CustomAttributeTypedArgument_t1298 , AsyncCallback_t169 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m17644_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m17645_gshared (Comparison_1_t2333 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m17645(__this, ___result, method) (( int32_t (*) (Comparison_1_t2333 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m17645_gshared)(__this, ___result, method)
