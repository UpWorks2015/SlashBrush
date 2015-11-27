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

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2348;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t168;
// System.AsyncCallback
struct AsyncCallback_t169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m17838_gshared (StaticGetter_1_t2348 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m17838(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2348 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m17838_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m17839_gshared (StaticGetter_1_t2348 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m17839(__this, method) (( Object_t * (*) (StaticGetter_1_t2348 *, const MethodInfo*))StaticGetter_1_Invoke_m17839_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m17840_gshared (StaticGetter_1_t2348 * __this, AsyncCallback_t169 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m17840(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2348 *, AsyncCallback_t169 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m17840_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m17841_gshared (StaticGetter_1_t2348 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m17841(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2348 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m17841_gshared)(__this, ___result, method)
