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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1902;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1904;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2391;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t289;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2392;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t837;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1907;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12442_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12442(__this, method) (( void (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2__ctor_m12442_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12443_gshared (Dictionary_2_t1902 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12443(__this, ___comparer, method) (( void (*) (Dictionary_2_t1902 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12443_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12444_gshared (Dictionary_2_t1902 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12444(__this, ___capacity, method) (( void (*) (Dictionary_2_t1902 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12444_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12445_gshared (Dictionary_2_t1902 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12445(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1902 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2__ctor_m12445_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12446_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12446(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1902 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12446_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12447_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12447(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1902 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12447_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12448_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12448(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1902 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12448_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12449_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12449(__this, ___key, method) (( bool (*) (Dictionary_2_t1902 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12449_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12450_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12450(__this, ___key, method) (( void (*) (Dictionary_2_t1902 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12450_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12451_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12451(__this, method) (( bool (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12451_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12452_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12452(__this, method) (( Object_t * (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12452_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12453_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12453(__this, method) (( bool (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12453_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12454_gshared (Dictionary_2_t1902 * __this, KeyValuePair_2_t1905  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12454(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1902 *, KeyValuePair_2_t1905 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12454_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12455_gshared (Dictionary_2_t1902 * __this, KeyValuePair_2_t1905  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12455(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1902 *, KeyValuePair_2_t1905 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12455_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12456_gshared (Dictionary_2_t1902 * __this, KeyValuePair_2U5BU5D_t2391* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12456(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1902 *, KeyValuePair_2U5BU5D_t2391*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12456_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12457_gshared (Dictionary_2_t1902 * __this, KeyValuePair_2_t1905  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12457(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1902 *, KeyValuePair_2_t1905 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12457_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12458_gshared (Dictionary_2_t1902 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12458(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1902 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12458_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12459_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12459(__this, method) (( Object_t * (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12459_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12460_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12460(__this, method) (( Object_t* (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12460_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12461_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12461(__this, method) (( Object_t * (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12461_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12462_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12462(__this, method) (( int32_t (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_get_Count_m12462_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12463_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12463(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1902 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12463_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12464_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12464(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1902 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12464_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12465_gshared (Dictionary_2_t1902 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12465(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1902 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12465_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12466_gshared (Dictionary_2_t1902 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12466(__this, ___size, method) (( void (*) (Dictionary_2_t1902 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12466_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12467_gshared (Dictionary_2_t1902 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12467(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1902 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12467_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1905  Dictionary_2_make_pair_m12468_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12468(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1905  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12468_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12469_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12469(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12469_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12470_gshared (Dictionary_2_t1902 * __this, KeyValuePair_2U5BU5D_t2391* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12470(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1902 *, KeyValuePair_2U5BU5D_t2391*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12470_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12471_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12471(__this, method) (( void (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_Resize_m12471_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12472_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12472(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1902 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12472_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12473_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12473(__this, method) (( void (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_Clear_m12473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12474_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12474(__this, ___key, method) (( bool (*) (Dictionary_2_t1902 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12474_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12475_gshared (Dictionary_2_t1902 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12475(__this, ___value, method) (( bool (*) (Dictionary_2_t1902 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12475_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12476_gshared (Dictionary_2_t1902 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12476(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1902 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2_GetObjectData_m12476_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12477_gshared (Dictionary_2_t1902 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12477(__this, ___sender, method) (( void (*) (Dictionary_2_t1902 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12477_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12478_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12478(__this, ___key, method) (( bool (*) (Dictionary_2_t1902 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12478_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12479_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12479(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1902 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12479_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1907 * Dictionary_2_get_Values_m12480_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12480(__this, method) (( ValueCollection_t1907 * (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_get_Values_m12480_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12481_gshared (Dictionary_2_t1902 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12481(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1902 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12481_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12482_gshared (Dictionary_2_t1902 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12482(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1902 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12482_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12483_gshared (Dictionary_2_t1902 * __this, KeyValuePair_2_t1905  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12483(__this, ___pair, method) (( bool (*) (Dictionary_2_t1902 *, KeyValuePair_2_t1905 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12483_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1909  Dictionary_2_GetEnumerator_m12484_gshared (Dictionary_2_t1902 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12484(__this, method) (( Enumerator_t1909  (*) (Dictionary_2_t1902 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12484_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t838  Dictionary_2_U3CCopyToU3Em__0_m12485_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12485(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t838  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12485_gshared)(__this /* static, unused */, ___key, ___value, method)
