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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t545;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1875;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2389;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t289;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2390;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t837;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1880;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m3502_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3502(__this, method) (( void (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2__ctor_m3502_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12074_gshared (Dictionary_2_t545 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12074(__this, ___comparer, method) (( void (*) (Dictionary_2_t545 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12074_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12076_gshared (Dictionary_2_t545 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12076(__this, ___capacity, method) (( void (*) (Dictionary_2_t545 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12076_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12078_gshared (Dictionary_2_t545 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12078(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t545 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2__ctor_m12078_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12080_gshared (Dictionary_2_t545 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12080(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t545 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12080_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12082_gshared (Dictionary_2_t545 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12082(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t545 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12082_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12084_gshared (Dictionary_2_t545 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12084(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t545 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12084_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12086_gshared (Dictionary_2_t545 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12086(__this, ___key, method) (( bool (*) (Dictionary_2_t545 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12086_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12088_gshared (Dictionary_2_t545 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12088(__this, ___key, method) (( void (*) (Dictionary_2_t545 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12088_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12090_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12090(__this, method) (( bool (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12090_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12092_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12092(__this, method) (( Object_t * (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12092_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12094_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12094(__this, method) (( bool (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12094_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12096_gshared (Dictionary_2_t545 * __this, KeyValuePair_2_t1877  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12096(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t545 *, KeyValuePair_2_t1877 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12096_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12098_gshared (Dictionary_2_t545 * __this, KeyValuePair_2_t1877  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12098(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t545 *, KeyValuePair_2_t1877 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12098_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12100_gshared (Dictionary_2_t545 * __this, KeyValuePair_2U5BU5D_t2389* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12100(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t545 *, KeyValuePair_2U5BU5D_t2389*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12100_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12102_gshared (Dictionary_2_t545 * __this, KeyValuePair_2_t1877  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12102(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t545 *, KeyValuePair_2_t1877 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12102_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12104_gshared (Dictionary_2_t545 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12104(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t545 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12104_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12106_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12106(__this, method) (( Object_t * (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12106_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12108_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12108(__this, method) (( Object_t* (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12108_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12110_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12110(__this, method) (( Object_t * (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12110_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12112_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12112(__this, method) (( int32_t (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_get_Count_m12112_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12114_gshared (Dictionary_2_t545 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12114(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t545 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m12114_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12116_gshared (Dictionary_2_t545 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12116(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t545 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12116_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12118_gshared (Dictionary_2_t545 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12118(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t545 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12118_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12120_gshared (Dictionary_2_t545 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12120(__this, ___size, method) (( void (*) (Dictionary_2_t545 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12120_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12122_gshared (Dictionary_2_t545 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12122(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t545 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12122_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1877  Dictionary_2_make_pair_m12124_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12124(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1877  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12124_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12126_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12126(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12126_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12128_gshared (Dictionary_2_t545 * __this, KeyValuePair_2U5BU5D_t2389* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12128(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t545 *, KeyValuePair_2U5BU5D_t2389*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12128_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12130_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12130(__this, method) (( void (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_Resize_m12130_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12132_gshared (Dictionary_2_t545 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12132(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t545 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m12132_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12134_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12134(__this, method) (( void (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_Clear_m12134_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12136_gshared (Dictionary_2_t545 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12136(__this, ___key, method) (( bool (*) (Dictionary_2_t545 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m12136_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12138_gshared (Dictionary_2_t545 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12138(__this, ___value, method) (( bool (*) (Dictionary_2_t545 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12138_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12140_gshared (Dictionary_2_t545 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12140(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t545 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2_GetObjectData_m12140_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12142_gshared (Dictionary_2_t545 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12142(__this, ___sender, method) (( void (*) (Dictionary_2_t545 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12142_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12144_gshared (Dictionary_2_t545 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12144(__this, ___key, method) (( bool (*) (Dictionary_2_t545 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m12144_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12146_gshared (Dictionary_2_t545 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12146(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t545 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12146_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1880 * Dictionary_2_get_Values_m12147_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12147(__this, method) (( ValueCollection_t1880 * (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_get_Values_m12147_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m12149_gshared (Dictionary_2_t545 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12149(__this, ___key, method) (( int32_t (*) (Dictionary_2_t545 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12149_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12151_gshared (Dictionary_2_t545 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12151(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t545 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12151_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12153_gshared (Dictionary_2_t545 * __this, KeyValuePair_2_t1877  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12153(__this, ___pair, method) (( bool (*) (Dictionary_2_t545 *, KeyValuePair_2_t1877 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12153_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1882  Dictionary_2_GetEnumerator_m12154_gshared (Dictionary_2_t545 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12154(__this, method) (( Enumerator_t1882  (*) (Dictionary_2_t545 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12154_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t838  Dictionary_2_U3CCopyToU3Em__0_m12156_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12156(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t838  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12156_gshared)(__this /* static, unused */, ___key, ___value, method)