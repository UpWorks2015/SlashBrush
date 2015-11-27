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

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1843;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t168;
// System.AsyncCallback
struct AsyncCallback_t169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m11626_gshared (Predicate_1_t1843 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m11626(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1843 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m11626_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m11627_gshared (Predicate_1_t1843 * __this, RaycastResult_t69  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m11627(__this, ___obj, method) (( bool (*) (Predicate_1_t1843 *, RaycastResult_t69 , const MethodInfo*))Predicate_1_Invoke_m11627_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m11628_gshared (Predicate_1_t1843 * __this, RaycastResult_t69  ___obj, AsyncCallback_t169 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m11628(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1843 *, RaycastResult_t69 , AsyncCallback_t169 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m11628_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m11629_gshared (Predicate_1_t1843 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m11629(__this, ___result, method) (( bool (*) (Predicate_1_t1843 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m11629_gshared)(__this, ___result, method)
