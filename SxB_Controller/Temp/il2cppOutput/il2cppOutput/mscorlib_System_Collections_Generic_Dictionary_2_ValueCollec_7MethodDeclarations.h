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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1958;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1954;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2045;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t289;
// System.Object[]
struct ObjectU5BU5D_t15;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_8.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m13125_gshared (ValueCollection_t1958 * __this, Dictionary_2_t1954 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m13125(__this, ___dictionary, method) (( void (*) (ValueCollection_t1958 *, Dictionary_2_t1954 *, const MethodInfo*))ValueCollection__ctor_m13125_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13126_gshared (ValueCollection_t1958 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13126(__this, ___item, method) (( void (*) (ValueCollection_t1958 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m13126_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13127_gshared (ValueCollection_t1958 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13127(__this, method) (( void (*) (ValueCollection_t1958 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m13127_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13128_gshared (ValueCollection_t1958 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13128(__this, ___item, method) (( bool (*) (ValueCollection_t1958 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m13128_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13129_gshared (ValueCollection_t1958 * __this, Object_t * ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13129(__this, ___item, method) (( bool (*) (ValueCollection_t1958 *, Object_t *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m13129_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13130_gshared (ValueCollection_t1958 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13130(__this, method) (( Object_t* (*) (ValueCollection_t1958 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m13130_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m13131_gshared (ValueCollection_t1958 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m13131(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1958 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m13131_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13132_gshared (ValueCollection_t1958 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13132(__this, method) (( Object_t * (*) (ValueCollection_t1958 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m13132_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13133_gshared (ValueCollection_t1958 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13133(__this, method) (( bool (*) (ValueCollection_t1958 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m13133_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13134_gshared (ValueCollection_t1958 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13134(__this, method) (( bool (*) (ValueCollection_t1958 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m13134_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m13135_gshared (ValueCollection_t1958 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m13135(__this, method) (( Object_t * (*) (ValueCollection_t1958 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m13135_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m13136_gshared (ValueCollection_t1958 * __this, ObjectU5BU5D_t15* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m13136(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1958 *, ObjectU5BU5D_t15*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m13136_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1959  ValueCollection_GetEnumerator_m13137_gshared (ValueCollection_t1958 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m13137(__this, method) (( Enumerator_t1959  (*) (ValueCollection_t1958 *, const MethodInfo*))ValueCollection_GetEnumerator_m13137_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m13138_gshared (ValueCollection_t1958 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m13138(__this, method) (( int32_t (*) (ValueCollection_t1958 *, const MethodInfo*))ValueCollection_get_Count_m13138_gshared)(__this, method)
