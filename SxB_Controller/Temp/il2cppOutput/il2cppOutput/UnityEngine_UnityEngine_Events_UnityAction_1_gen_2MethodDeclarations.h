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

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t328;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t168;
// System.AsyncCallback
struct AsyncCallback_t169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m1729_gshared (UnityAction_1_t328 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m1729(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t328 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m1729_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m12970_gshared (UnityAction_1_t328 * __this, bool ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m12970(__this, ___arg0, method) (( void (*) (UnityAction_1_t328 *, bool, const MethodInfo*))UnityAction_1_Invoke_m12970_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Boolean>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m12971_gshared (UnityAction_1_t328 * __this, bool ___arg0, AsyncCallback_t169 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m12971(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t328 *, bool, AsyncCallback_t169 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m12971_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m12972_gshared (UnityAction_1_t328 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m12972(__this, ___result, method) (( void (*) (UnityAction_1_t328 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m12972_gshared)(__this, ___result, method)