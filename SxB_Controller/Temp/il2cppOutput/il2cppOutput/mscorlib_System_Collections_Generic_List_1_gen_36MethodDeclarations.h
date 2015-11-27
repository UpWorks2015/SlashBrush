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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t356;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2045;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t289;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2382;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t28;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1777;
// System.Object[]
struct ObjectU5BU5D_t15;
// System.Predicate`1<System.Object>
struct Predicate_1_t1787;
// System.Comparison`1<System.Object>
struct Comparison_1_t1793;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10841_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1__ctor_m10841(__this, method) (( void (*) (List_1_t356 *, const MethodInfo*))List_1__ctor_m10841_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10843_gshared (List_1_t356 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10843(__this, ___capacity, method) (( void (*) (List_1_t356 *, int32_t, const MethodInfo*))List_1__ctor_m10843_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10845_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10845(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10845_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10847_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10847(__this, method) (( Object_t* (*) (List_1_t356 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10847_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10849_gshared (List_1_t356 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10849(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t356 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10849_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10851_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10851(__this, method) (( Object_t * (*) (List_1_t356 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10851_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10853_gshared (List_1_t356 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10853(__this, ___item, method) (( int32_t (*) (List_1_t356 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10853_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10855_gshared (List_1_t356 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10855(__this, ___item, method) (( bool (*) (List_1_t356 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10855_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10857_gshared (List_1_t356 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10857(__this, ___item, method) (( int32_t (*) (List_1_t356 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10857_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10859_gshared (List_1_t356 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10859(__this, ___index, ___item, method) (( void (*) (List_1_t356 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10859_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10861_gshared (List_1_t356 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10861(__this, ___item, method) (( void (*) (List_1_t356 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10861_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10863_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10863(__this, method) (( bool (*) (List_1_t356 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10863_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10865_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10865(__this, method) (( bool (*) (List_1_t356 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10865_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10867_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10867(__this, method) (( Object_t * (*) (List_1_t356 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10867_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10869_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10869(__this, method) (( bool (*) (List_1_t356 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10869_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10871_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10871(__this, method) (( bool (*) (List_1_t356 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10871_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10873_gshared (List_1_t356 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10873(__this, ___index, method) (( Object_t * (*) (List_1_t356 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10873_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10875_gshared (List_1_t356 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10875(__this, ___index, ___value, method) (( void (*) (List_1_t356 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10875_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10877_gshared (List_1_t356 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10877(__this, ___item, method) (( void (*) (List_1_t356 *, Object_t *, const MethodInfo*))List_1_Add_m10877_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10879_gshared (List_1_t356 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10879(__this, ___newCount, method) (( void (*) (List_1_t356 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10879_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10881_gshared (List_1_t356 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10881(__this, ___collection, method) (( void (*) (List_1_t356 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10881_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10883_gshared (List_1_t356 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10883(__this, ___enumerable, method) (( void (*) (List_1_t356 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10883_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10885_gshared (List_1_t356 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10885(__this, ___collection, method) (( void (*) (List_1_t356 *, Object_t*, const MethodInfo*))List_1_AddRange_m10885_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1777 * List_1_AsReadOnly_m10887_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10887(__this, method) (( ReadOnlyCollection_1_t1777 * (*) (List_1_t356 *, const MethodInfo*))List_1_AsReadOnly_m10887_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10889_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_Clear_m10889(__this, method) (( void (*) (List_1_t356 *, const MethodInfo*))List_1_Clear_m10889_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10891_gshared (List_1_t356 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10891(__this, ___item, method) (( bool (*) (List_1_t356 *, Object_t *, const MethodInfo*))List_1_Contains_m10891_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10893_gshared (List_1_t356 * __this, ObjectU5BU5D_t15* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10893(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t356 *, ObjectU5BU5D_t15*, int32_t, const MethodInfo*))List_1_CopyTo_m10893_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10895_gshared (List_1_t356 * __this, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_Find_m10895(__this, ___match, method) (( Object_t * (*) (List_1_t356 *, Predicate_1_t1787 *, const MethodInfo*))List_1_Find_m10895_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10897_gshared (Object_t * __this /* static, unused */, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10897(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1787 *, const MethodInfo*))List_1_CheckMatch_m10897_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10899_gshared (List_1_t356 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10899(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t356 *, int32_t, int32_t, Predicate_1_t1787 *, const MethodInfo*))List_1_GetIndex_m10899_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1781  List_1_GetEnumerator_m10901_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10901(__this, method) (( Enumerator_t1781  (*) (List_1_t356 *, const MethodInfo*))List_1_GetEnumerator_m10901_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10903_gshared (List_1_t356 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10903(__this, ___item, method) (( int32_t (*) (List_1_t356 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10903_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10905_gshared (List_1_t356 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10905(__this, ___start, ___delta, method) (( void (*) (List_1_t356 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10905_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10907_gshared (List_1_t356 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10907(__this, ___index, method) (( void (*) (List_1_t356 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10907_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10909_gshared (List_1_t356 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10909(__this, ___index, ___item, method) (( void (*) (List_1_t356 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10909_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10911_gshared (List_1_t356 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10911(__this, ___collection, method) (( void (*) (List_1_t356 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10911_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10913_gshared (List_1_t356 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10913(__this, ___item, method) (( bool (*) (List_1_t356 *, Object_t *, const MethodInfo*))List_1_Remove_m10913_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10915_gshared (List_1_t356 * __this, Predicate_1_t1787 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10915(__this, ___match, method) (( int32_t (*) (List_1_t356 *, Predicate_1_t1787 *, const MethodInfo*))List_1_RemoveAll_m10915_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10917_gshared (List_1_t356 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10917(__this, ___index, method) (( void (*) (List_1_t356 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10917_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10919_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_Reverse_m10919(__this, method) (( void (*) (List_1_t356 *, const MethodInfo*))List_1_Reverse_m10919_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10921_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_Sort_m10921(__this, method) (( void (*) (List_1_t356 *, const MethodInfo*))List_1_Sort_m10921_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10923_gshared (List_1_t356 * __this, Comparison_1_t1793 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10923(__this, ___comparison, method) (( void (*) (List_1_t356 *, Comparison_1_t1793 *, const MethodInfo*))List_1_Sort_m10923_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t15* List_1_ToArray_m10924_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_ToArray_m10924(__this, method) (( ObjectU5BU5D_t15* (*) (List_1_t356 *, const MethodInfo*))List_1_ToArray_m10924_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10926_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10926(__this, method) (( void (*) (List_1_t356 *, const MethodInfo*))List_1_TrimExcess_m10926_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10928_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10928(__this, method) (( int32_t (*) (List_1_t356 *, const MethodInfo*))List_1_get_Capacity_m10928_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10930_gshared (List_1_t356 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10930(__this, ___value, method) (( void (*) (List_1_t356 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10930_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10932_gshared (List_1_t356 * __this, const MethodInfo* method);
#define List_1_get_Count_m10932(__this, method) (( int32_t (*) (List_1_t356 *, const MethodInfo*))List_1_get_Count_m10932_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10934_gshared (List_1_t356 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10934(__this, ___index, method) (( Object_t * (*) (List_1_t356 *, int32_t, const MethodInfo*))List_1_get_Item_m10934_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10936_gshared (List_1_t356 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10936(__this, ___index, ___value, method) (( void (*) (List_1_t356 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10936_gshared)(__this, ___index, ___value, method)
