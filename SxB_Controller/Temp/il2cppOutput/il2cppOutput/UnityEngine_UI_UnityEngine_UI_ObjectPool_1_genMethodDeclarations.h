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

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m1542(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t63 *, UnityAction_1_t65 *, UnityAction_1_t65 *, const MethodInfo*))ObjectPool_1__ctor_m11310_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m11311(__this, method) (( int32_t (*) (ObjectPool_1_t63 *, const MethodInfo*))ObjectPool_1_get_countAll_m11312_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m11313(__this, ___value, method) (( void (*) (ObjectPool_1_t63 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11314_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m11315(__this, method) (( int32_t (*) (ObjectPool_1_t63 *, const MethodInfo*))ObjectPool_1_get_countActive_m11316_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m11317(__this, method) (( int32_t (*) (ObjectPool_1_t63 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11318_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m11319(__this, method) (( List_1_t266 * (*) (ObjectPool_1_t63 *, const MethodInfo*))ObjectPool_1_Get_m11320_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m11321(__this, ___element, method) (( void (*) (ObjectPool_1_t63 *, List_1_t266 *, const MethodInfo*))ObjectPool_1_Release_m11322_gshared)(__this, ___element, method)
