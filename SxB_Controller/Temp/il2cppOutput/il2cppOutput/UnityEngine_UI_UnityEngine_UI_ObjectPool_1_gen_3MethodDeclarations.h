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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m11478(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1826 *, UnityAction_1_t1827 *, UnityAction_1_t1827 *, const MethodInfo*))ObjectPool_1__ctor_m11310_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m11479(__this, method) (( int32_t (*) (ObjectPool_1_t1826 *, const MethodInfo*))ObjectPool_1_get_countAll_m11312_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11480(__this, ___value, method) (( void (*) (ObjectPool_1_t1826 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11314_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m11481(__this, method) (( int32_t (*) (ObjectPool_1_t1826 *, const MethodInfo*))ObjectPool_1_get_countActive_m11316_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11482(__this, method) (( int32_t (*) (ObjectPool_1_t1826 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11318_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m11483(__this, method) (( List_1_t301 * (*) (ObjectPool_1_t1826 *, const MethodInfo*))ObjectPool_1_Get_m11320_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m11484(__this, ___element, method) (( void (*) (ObjectPool_1_t1826 *, List_1_t301 *, const MethodInfo*))ObjectPool_1_Release_m11322_gshared)(__this, ___element, method)
