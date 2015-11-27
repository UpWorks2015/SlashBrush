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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t2268;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2258;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17159_gshared (ShimEnumerator_t2268 * __this, Dictionary_2_t2258 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17159(__this, ___host, method) (( void (*) (ShimEnumerator_t2268 *, Dictionary_2_t2258 *, const MethodInfo*))ShimEnumerator__ctor_m17159_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17160_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17160(__this, method) (( bool (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_MoveNext_m17160_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t838  ShimEnumerator_get_Entry_m17161_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17161(__this, method) (( DictionaryEntry_t838  (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_get_Entry_m17161_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17162_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17162(__this, method) (( Object_t * (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_get_Key_m17162_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17163_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17163(__this, method) (( Object_t * (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_get_Value_m17163_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17164_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17164(__this, method) (( Object_t * (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_get_Current_m17164_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m17165_gshared (ShimEnumerator_t2268 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m17165(__this, method) (( void (*) (ShimEnumerator_t2268 *, const MethodInfo*))ShimEnumerator_Reset_m17165_gshared)(__this, method)
