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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1901;
// System.Collections.IEnumerator
struct IEnumerator_t289;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2045;
// System.Object[]
struct ObjectU5BU5D_t15;
// System.Predicate`1<System.Object>
struct Predicate_1_t1787;
// System.Comparison`1<System.Object>
struct Comparison_1_t1793;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m12410_gshared (IndexedSet_1_t1901 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m12410(__this, method) (( void (*) (IndexedSet_1_t1901 *, const MethodInfo*))IndexedSet_1__ctor_m12410_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12412_gshared (IndexedSet_1_t1901 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12412(__this, method) (( Object_t * (*) (IndexedSet_1_t1901 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12412_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m12414_gshared (IndexedSet_1_t1901 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m12414(__this, ___item, method) (( void (*) (IndexedSet_1_t1901 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m12414_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m12416_gshared (IndexedSet_1_t1901 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m12416(__this, ___item, method) (( bool (*) (IndexedSet_1_t1901 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m12416_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m12418_gshared (IndexedSet_1_t1901 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m12418(__this, method) (( Object_t* (*) (IndexedSet_1_t1901 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m12418_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m12420_gshared (IndexedSet_1_t1901 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m12420(__this, method) (( void (*) (IndexedSet_1_t1901 *, const MethodInfo*))IndexedSet_1_Clear_m12420_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12422_gshared (IndexedSet_1_t1901 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12422(__this, ___item, method) (( bool (*) (IndexedSet_1_t1901 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12422_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12424_gshared (IndexedSet_1_t1901 * __this, ObjectU5BU5D_t15* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12424(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1901 *, ObjectU5BU5D_t15*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12424_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12426_gshared (IndexedSet_1_t1901 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12426(__this, method) (( int32_t (*) (IndexedSet_1_t1901 *, const MethodInfo*))IndexedSet_1_get_Count_m12426_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12428_gshared (IndexedSet_1_t1901 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12428(__this, method) (( bool (*) (IndexedSet_1_t1901 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12428_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12430_gshared (IndexedSet_1_t1901 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12430(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1901 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12430_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12432_gshared (IndexedSet_1_t1901 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12432(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1901 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12432_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12434_gshared (IndexedSet_1_t1901 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12434(__this, ___index, method) (( void (*) (IndexedSet_1_t1901 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12434_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12436_gshared (IndexedSet_1_t1901 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12436(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1901 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12436_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12438_gshared (IndexedSet_1_t1901 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12438(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1901 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12438_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12440_gshared (IndexedSet_1_t1901 * __this, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12440(__this, ___match, method) (( void (*) (IndexedSet_1_t1901 *, Predicate_1_t1787 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12440_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12441_gshared (IndexedSet_1_t1901 * __this, Comparison_1_t1793 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12441(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1901 *, Comparison_1_t1793 *, const MethodInfo*))IndexedSet_1_Sort_m12441_gshared)(__this, ___sortLayoutFunction, method)
