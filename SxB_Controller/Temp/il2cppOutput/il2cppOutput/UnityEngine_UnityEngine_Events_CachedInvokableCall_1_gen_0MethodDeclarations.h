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

// UnityEngine.Events.CachedInvokableCall`1<System.Int32>
struct CachedInvokableCall_1_t641;
// UnityEngine.Object
struct Object_t296;
struct Object_t296_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t15;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3531_gshared (CachedInvokableCall_1_t641 * __this, Object_t296 * ___target, MethodInfo_t * ___theFunction, int32_t ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3531(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t641 *, Object_t296 *, MethodInfo_t *, int32_t, const MethodInfo*))CachedInvokableCall_1__ctor_m3531_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16796_gshared (CachedInvokableCall_1_t641 * __this, ObjectU5BU5D_t15* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16796(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t641 *, ObjectU5BU5D_t15*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16796_gshared)(__this, ___args, method)
