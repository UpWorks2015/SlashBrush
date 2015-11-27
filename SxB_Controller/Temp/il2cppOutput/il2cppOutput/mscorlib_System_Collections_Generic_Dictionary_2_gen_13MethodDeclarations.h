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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2217;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1904;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2444;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t289;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2445;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t837;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2222;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_11.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__11.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m16568_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16568(__this, method) (( void (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2__ctor_m16568_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16570_gshared (Dictionary_2_t2217 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16570(__this, ___comparer, method) (( void (*) (Dictionary_2_t2217 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16570_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16572_gshared (Dictionary_2_t2217 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16572(__this, ___capacity, method) (( void (*) (Dictionary_2_t2217 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16572_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16574_gshared (Dictionary_2_t2217 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16574(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2217 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2__ctor_m16574_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16576_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16576(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2217 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16576_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16578_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16578(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2217 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16578_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16580_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16580(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2217 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16580_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16582_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16582(__this, ___key, method) (( bool (*) (Dictionary_2_t2217 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16582_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16584_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16584(__this, ___key, method) (( void (*) (Dictionary_2_t2217 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16584_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16586_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16586(__this, method) (( bool (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16586_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16588_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16588(__this, method) (( Object_t * (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16588_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16590_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16590(__this, method) (( bool (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16590_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16592_gshared (Dictionary_2_t2217 * __this, KeyValuePair_2_t2219  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16592(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2217 *, KeyValuePair_2_t2219 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16592_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16594_gshared (Dictionary_2_t2217 * __this, KeyValuePair_2_t2219  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16594(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2217 *, KeyValuePair_2_t2219 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16594_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16596_gshared (Dictionary_2_t2217 * __this, KeyValuePair_2U5BU5D_t2444* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16596(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2217 *, KeyValuePair_2U5BU5D_t2444*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16596_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16598_gshared (Dictionary_2_t2217 * __this, KeyValuePair_2_t2219  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16598(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2217 *, KeyValuePair_2_t2219 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16598_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16600_gshared (Dictionary_2_t2217 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16600(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2217 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16600_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16602_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16602(__this, method) (( Object_t * (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16602_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16604_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16604(__this, method) (( Object_t* (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16604_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16606_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16606(__this, method) (( Object_t * (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16606_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16608_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16608(__this, method) (( int32_t (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_get_Count_m16608_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m16610_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16610(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2217 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16610_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16612_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16612(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2217 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m16612_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16614_gshared (Dictionary_2_t2217 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16614(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2217 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16614_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16616_gshared (Dictionary_2_t2217 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16616(__this, ___size, method) (( void (*) (Dictionary_2_t2217 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16616_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16618_gshared (Dictionary_2_t2217 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16618(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2217 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16618_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2219  Dictionary_2_make_pair_m16620_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16620(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2219  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m16620_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m16622_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16622(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m16622_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16624_gshared (Dictionary_2_t2217 * __this, KeyValuePair_2U5BU5D_t2444* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16624(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2217 *, KeyValuePair_2U5BU5D_t2444*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16624_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m16626_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16626(__this, method) (( void (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_Resize_m16626_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16628_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16628(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2217 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m16628_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m16630_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16630(__this, method) (( void (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_Clear_m16630_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16632_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16632(__this, ___key, method) (( bool (*) (Dictionary_2_t2217 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16632_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16634_gshared (Dictionary_2_t2217 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16634(__this, ___value, method) (( bool (*) (Dictionary_2_t2217 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m16634_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16636_gshared (Dictionary_2_t2217 * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16636(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2217 *, SerializationInfo_t608 *, StreamingContext_t609 , const MethodInfo*))Dictionary_2_GetObjectData_m16636_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16638_gshared (Dictionary_2_t2217 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16638(__this, ___sender, method) (( void (*) (Dictionary_2_t2217 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16638_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16640_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16640(__this, ___key, method) (( bool (*) (Dictionary_2_t2217 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16640_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16642_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16642(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2217 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16642_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2222 * Dictionary_2_get_Values_m16644_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16644(__this, method) (( ValueCollection_t2222 * (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_get_Values_m16644_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16646_gshared (Dictionary_2_t2217 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16646(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2217 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16646_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m16648_gshared (Dictionary_2_t2217 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16648(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2217 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16648_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16650_gshared (Dictionary_2_t2217 * __this, KeyValuePair_2_t2219  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16650(__this, ___pair, method) (( bool (*) (Dictionary_2_t2217 *, KeyValuePair_2_t2219 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16650_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2224  Dictionary_2_GetEnumerator_m16652_gshared (Dictionary_2_t2217 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16652(__this, method) (( Enumerator_t2224  (*) (Dictionary_2_t2217 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16652_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t838  Dictionary_2_U3CCopyToU3Em__0_m16654_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16654(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t838  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16654_gshared)(__this /* static, unused */, ___key, ___value, method)
