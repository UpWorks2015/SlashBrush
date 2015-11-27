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

// System.Predicate`1<UnityEngine.Vector2>
struct Predicate_1_t2100;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t168;
// System.AsyncCallback
struct AsyncCallback_t169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Predicate`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15258_gshared (Predicate_1_t2100 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15258(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2100 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15258_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15259_gshared (Predicate_1_t2100 * __this, Vector2_t72  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15259(__this, ___obj, method) (( bool (*) (Predicate_1_t2100 *, Vector2_t72 , const MethodInfo*))Predicate_1_Invoke_m15259_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector2>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15260_gshared (Predicate_1_t2100 * __this, Vector2_t72  ___obj, AsyncCallback_t169 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15260(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2100 *, Vector2_t72 , AsyncCallback_t169 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15260_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15261_gshared (Predicate_1_t2100 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15261(__this, ___result, method) (( bool (*) (Predicate_1_t2100 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15261_gshared)(__this, ___result, method)
