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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2258;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1904;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2449;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t289;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2450;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t837;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2263;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__13.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m17009_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17009(__this, method) (( void (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2__ctor_m17009_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17010_gshared (Dictionary_2_t2258 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17010(__this, ___comparer, method) (( void (*) (Dictionary_2_t2258 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17010_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17012_gshared (Dictionary_2_t2258 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17012(__this, ___capacity, method) (( void (*) (Dictionary_2_t2258 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17012_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17014_gshared (Dictionary_2_t2258 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17014(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2258 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2__ctor_m17014_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17016_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17016(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2258 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17016_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17018_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17018(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2258 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17018_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17020_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17020(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2258 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17020_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17022_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17022(__this, ___key, method) (( bool (*) (Dictionary_2_t2258 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17022_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17024_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17024(__this, ___key, method) (( void (*) (Dictionary_2_t2258 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17024_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17026_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17026(__this, method) (( bool (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17026_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17028_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17028(__this, method) (( Object_t * (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17028_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17030_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17030(__this, method) (( bool (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17030_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17032_gshared (Dictionary_2_t2258 * __this, KeyValuePair_2_t2260  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17032(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2258 *, KeyValuePair_2_t2260 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17032_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17034_gshared (Dictionary_2_t2258 * __this, KeyValuePair_2_t2260  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17034(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2258 *, KeyValuePair_2_t2260 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17034_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17036_gshared (Dictionary_2_t2258 * __this, KeyValuePair_2U5BU5D_t2449* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17036(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2258 *, KeyValuePair_2U5BU5D_t2449*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17036_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17038_gshared (Dictionary_2_t2258 * __this, KeyValuePair_2_t2260  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17038(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2258 *, KeyValuePair_2_t2260 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17038_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17040_gshared (Dictionary_2_t2258 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17040(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2258 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17040_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17042_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17042(__this, method) (( Object_t * (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17042_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17044_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17044(__this, method) (( Object_t* (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17044_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17046_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17046(__this, method) (( Object_t * (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17046_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17048_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17048(__this, method) (( int32_t (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_get_Count_m17048_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m17050_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17050(__this, ___key, method) (( bool (*) (Dictionary_2_t2258 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m17050_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17052_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17052(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2258 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m17052_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17054_gshared (Dictionary_2_t2258 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17054(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2258 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17054_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17056_gshared (Dictionary_2_t2258 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17056(__this, ___size, method) (( void (*) (Dictionary_2_t2258 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17056_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17058_gshared (Dictionary_2_t2258 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17058(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2258 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17058_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2260  Dictionary_2_make_pair_m17060_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17060(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2260  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m17060_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m17062_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17062(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m17062_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17064_gshared (Dictionary_2_t2258 * __this, KeyValuePair_2U5BU5D_t2449* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17064(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2258 *, KeyValuePair_2U5BU5D_t2449*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17064_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m17066_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17066(__this, method) (( void (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_Resize_m17066_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17068_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17068(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2258 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m17068_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m17070_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17070(__this, method) (( void (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_Clear_m17070_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17072_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17072(__this, ___key, method) (( bool (*) (Dictionary_2_t2258 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m17072_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17074_gshared (Dictionary_2_t2258 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17074(__this, ___value, method) (( bool (*) (Dictionary_2_t2258 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m17074_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17076_gshared (Dictionary_2_t2258 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17076(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2258 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2_GetObjectData_m17076_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17078_gshared (Dictionary_2_t2258 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17078(__this, ___sender, method) (( void (*) (Dictionary_2_t2258 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17078_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17080_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17080(__this, ___key, method) (( bool (*) (Dictionary_2_t2258 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m17080_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17082_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17082(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2258 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m17082_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2263 * Dictionary_2_get_Values_m17084_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17084(__this, method) (( ValueCollection_t2263 * (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_get_Values_m17084_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m17086_gshared (Dictionary_2_t2258 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17086(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2258 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17086_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m17088_gshared (Dictionary_2_t2258 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17088(__this, ___value, method) (( bool (*) (Dictionary_2_t2258 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17088_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17090_gshared (Dictionary_2_t2258 * __this, KeyValuePair_2_t2260  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17090(__this, ___pair, method) (( bool (*) (Dictionary_2_t2258 *, KeyValuePair_2_t2260 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17090_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2265  Dictionary_2_GetEnumerator_m17092_gshared (Dictionary_2_t2258 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17092(__this, method) (( Enumerator_t2265  (*) (Dictionary_2_t2258 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17092_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t838  Dictionary_2_U3CCopyToU3Em__0_m17094_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17094(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t838  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17094_gshared)(__this /* static, unused */, ___key, ___value, method)
