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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1963;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1954;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13171_gshared (ShimEnumerator_t1963 * __this, Dictionary_2_t1954 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13171(__this, ___host, method) (( void (*) (ShimEnumerator_t1963 *, Dictionary_2_t1954 *, const MethodInfo*))ShimEnumerator__ctor_m13171_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13172_gshared (ShimEnumerator_t1963 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13172(__this, method) (( bool (*) (ShimEnumerator_t1963 *, const MethodInfo*))ShimEnumerator_MoveNext_m13172_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t838  ShimEnumerator_get_Entry_m13173_gshared (ShimEnumerator_t1963 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13173(__this, method) (( DictionaryEntry_t838  (*) (ShimEnumerator_t1963 *, const MethodInfo*))ShimEnumerator_get_Entry_m13173_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13174_gshared (ShimEnumerator_t1963 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13174(__this, method) (( Object_t * (*) (ShimEnumerator_t1963 *, const MethodInfo*))ShimEnumerator_get_Key_m13174_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13175_gshared (ShimEnumerator_t1963 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13175(__this, method) (( Object_t * (*) (ShimEnumerator_t1963 *, const MethodInfo*))ShimEnumerator_get_Value_m13175_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13176_gshared (ShimEnumerator_t1963 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13176(__this, method) (( Object_t * (*) (ShimEnumerator_t1963 *, const MethodInfo*))ShimEnumerator_get_Current_m13176_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m13177_gshared (ShimEnumerator_t1963 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m13177(__this, method) (( void (*) (ShimEnumerator_t1963 *, const MethodInfo*))ShimEnumerator_Reset_m13177_gshared)(__this, method)
