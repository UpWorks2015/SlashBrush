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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1954;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1904;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2398;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t289;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2399;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t837;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1958;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12981_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12981(__this, method) (( void (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2__ctor_m12981_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12983_gshared (Dictionary_2_t1954 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12983(__this, ___comparer, method) (( void (*) (Dictionary_2_t1954 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12983_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12985_gshared (Dictionary_2_t1954 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12985(__this, ___capacity, method) (( void (*) (Dictionary_2_t1954 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12985_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12987_gshared (Dictionary_2_t1954 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12987(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1954 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2__ctor_m12987_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12989_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12989(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12989_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12991_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12991(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1954 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12991_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12993_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12993(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1954 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12993_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12995_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12995(__this, ___key, method) (( bool (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12995_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12997_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12997(__this, ___key, method) (( void (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12997_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12999_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12999(__this, method) (( bool (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12999_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13001_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13001(__this, method) (( Object_t * (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13001_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13003_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13003(__this, method) (( bool (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13003_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13005_gshared (Dictionary_2_t1954 * __this, KeyValuePair_2_t1956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13005(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1954 *, KeyValuePair_2_t1956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13005_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13007_gshared (Dictionary_2_t1954 * __this, KeyValuePair_2_t1956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13007(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1954 *, KeyValuePair_2_t1956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13007_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13009_gshared (Dictionary_2_t1954 * __this, KeyValuePair_2U5BU5D_t2398* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13009(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1954 *, KeyValuePair_2U5BU5D_t2398*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13009_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13011_gshared (Dictionary_2_t1954 * __this, KeyValuePair_2_t1956  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13011(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1954 *, KeyValuePair_2_t1956 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13011_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13013_gshared (Dictionary_2_t1954 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13013(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1954 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13013_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13015_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13015(__this, method) (( Object_t * (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13015_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13017_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13017(__this, method) (( Object_t* (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13017_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13019_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13019(__this, method) (( Object_t * (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13019_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13021_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13021(__this, method) (( int32_t (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_get_Count_m13021_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m13023_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13023(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13023_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13025_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13025(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1954 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m13025_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13027_gshared (Dictionary_2_t1954 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13027(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1954 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13027_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13029_gshared (Dictionary_2_t1954 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13029(__this, ___size, method) (( void (*) (Dictionary_2_t1954 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13029_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13031_gshared (Dictionary_2_t1954 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13031(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1954 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13031_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1956  Dictionary_2_make_pair_m13033_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13033(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1956  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m13033_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m13035_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13035(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m13035_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13037_gshared (Dictionary_2_t1954 * __this, KeyValuePair_2U5BU5D_t2398* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13037(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1954 *, KeyValuePair_2U5BU5D_t2398*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13037_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m13039_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13039(__this, method) (( void (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_Resize_m13039_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13041_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13041(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1954 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m13041_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m13043_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13043(__this, method) (( void (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_Clear_m13043_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13045_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13045(__this, ___key, method) (( bool (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13045_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13047_gshared (Dictionary_2_t1954 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13047(__this, ___value, method) (( bool (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m13047_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13049_gshared (Dictionary_2_t1954 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13049(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1954 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2_GetObjectData_m13049_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13051_gshared (Dictionary_2_t1954 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13051(__this, ___sender, method) (( void (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13051_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13053_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13053(__this, ___key, method) (( bool (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13053_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13055_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13055(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1954 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13055_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1958 * Dictionary_2_get_Values_m13057_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13057(__this, method) (( ValueCollection_t1958 * (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_get_Values_m13057_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13059_gshared (Dictionary_2_t1954 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13059(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13059_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13061_gshared (Dictionary_2_t1954 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13061(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1954 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13061_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13063_gshared (Dictionary_2_t1954 * __this, KeyValuePair_2_t1956  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13063(__this, ___pair, method) (( bool (*) (Dictionary_2_t1954 *, KeyValuePair_2_t1956 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13063_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1960  Dictionary_2_GetEnumerator_m13065_gshared (Dictionary_2_t1954 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13065(__this, method) (( Enumerator_t1960  (*) (Dictionary_2_t1954 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13065_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t838  Dictionary_2_U3CCopyToU3Em__0_m13067_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13067(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t838  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13067_gshared)(__this /* static, unused */, ___key, ___value, method)
