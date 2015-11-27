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

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2103;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t168;
// System.AsyncCallback
struct AsyncCallback_t169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15268_gshared (Comparison_1_t2103 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15268(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2103 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15268_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15269_gshared (Comparison_1_t2103 * __this, Vector2_t72  ___x, Vector2_t72  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15269(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2103 *, Vector2_t72 , Vector2_t72 , const MethodInfo*))Comparison_1_Invoke_m15269_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15270_gshared (Comparison_1_t2103 * __this, Vector2_t72  ___x, Vector2_t72  ___y, AsyncCallback_t169 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15270(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2103 *, Vector2_t72 , Vector2_t72 , AsyncCallback_t169 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15270_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15271_gshared (Comparison_1_t2103 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15271(__this, ___result, method) (( int32_t (*) (Comparison_1_t2103 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15271_gshared)(__this, ___result, method)
