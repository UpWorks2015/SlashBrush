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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t183;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t328;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t578;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
extern "C" void UnityEvent_1__ctor_m1961_gshared (UnityEvent_1_t183 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1961(__this, method) (( void (*) (UnityEvent_1_t183 *, const MethodInfo*))UnityEvent_1__ctor_m1961_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m1730_gshared (UnityEvent_1_t183 * __this, UnityAction_1_t328 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m1730(__this, ___call, method) (( void (*) (UnityEvent_1_t183 *, UnityAction_1_t328 *, const MethodInfo*))UnityEvent_1_AddListener_m1730_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12973_gshared (UnityEvent_1_t183 * __this, UnityAction_1_t328 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12973(__this, ___call, method) (( void (*) (UnityEvent_1_t183 *, UnityAction_1_t328 *, const MethodInfo*))UnityEvent_1_RemoveListener_m12973_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12974_gshared (UnityEvent_1_t183 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12974(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t183 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12974_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t578 * UnityEvent_1_GetDelegate_m12975_gshared (UnityEvent_1_t183 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12975(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t578 * (*) (UnityEvent_1_t183 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12975_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t578 * UnityEvent_1_GetDelegate_m12976_gshared (Object_t * __this /* static, unused */, UnityAction_1_t328 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12976(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t578 * (*) (Object_t * /* static, unused */, UnityAction_1_t328 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12976_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1966_gshared (UnityEvent_1_t183 * __this, bool ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1966(__this, ___arg0, method) (( void (*) (UnityEvent_1_t183 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m1966_gshared)(__this, ___arg0, method)
