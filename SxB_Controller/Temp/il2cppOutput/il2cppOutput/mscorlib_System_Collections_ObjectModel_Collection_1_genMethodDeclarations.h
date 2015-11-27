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

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t1783;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t289;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t15;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2045;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1782;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m10974_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1__ctor_m10974(__this, method) (( void (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1__ctor_m10974_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10975_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10975(__this, method) (( bool (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10975_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m10976_gshared (Collection_1_t1783 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m10976(__this, ___array, ___index, method) (( void (*) (Collection_1_t1783 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m10976_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m10977_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m10977(__this, method) (( Object_t * (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m10977_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m10978_gshared (Collection_1_t1783 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m10978(__this, ___value, method) (( int32_t (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m10978_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m10979_gshared (Collection_1_t1783 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m10979(__this, ___value, method) (( bool (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m10979_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m10980_gshared (Collection_1_t1783 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m10980(__this, ___value, method) (( int32_t (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m10980_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m10981_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m10981(__this, ___index, ___value, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m10981_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m10982_gshared (Collection_1_t1783 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m10982(__this, ___value, method) (( void (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m10982_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m10983_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m10983(__this, method) (( bool (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m10983_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m10984_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m10984(__this, method) (( Object_t * (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m10984_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m10985_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m10985(__this, method) (( bool (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m10985_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m10986_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m10986(__this, method) (( bool (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m10986_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m10987_gshared (Collection_1_t1783 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m10987(__this, ___index, method) (( Object_t * (*) (Collection_1_t1783 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m10987_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m10988_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m10988(__this, ___index, ___value, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m10988_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m10989_gshared (Collection_1_t1783 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m10989(__this, ___item, method) (( void (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_Add_m10989_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m10990_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_Clear_m10990(__this, method) (( void (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_Clear_m10990_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m10991_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m10991(__this, method) (( void (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_ClearItems_m10991_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m10992_gshared (Collection_1_t1783 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m10992(__this, ___item, method) (( bool (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_Contains_m10992_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m10993_gshared (Collection_1_t1783 * __this, ObjectU5BU5D_t15* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m10993(__this, ___array, ___index, method) (( void (*) (Collection_1_t1783 *, ObjectU5BU5D_t15*, int32_t, const MethodInfo*))Collection_1_CopyTo_m10993_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m10994_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m10994(__this, method) (( Object_t* (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_GetEnumerator_m10994_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m10995_gshared (Collection_1_t1783 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m10995(__this, ___item, method) (( int32_t (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m10995_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m10996_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m10996(__this, ___index, ___item, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m10996_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m10997_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m10997(__this, ___index, ___item, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m10997_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m10998_gshared (Collection_1_t1783 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m10998(__this, ___item, method) (( bool (*) (Collection_1_t1783 *, Object_t *, const MethodInfo*))Collection_1_Remove_m10998_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m10999_gshared (Collection_1_t1783 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m10999(__this, ___index, method) (( void (*) (Collection_1_t1783 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m10999_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m11000_gshared (Collection_1_t1783 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m11000(__this, ___index, method) (( void (*) (Collection_1_t1783 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m11000_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m11001_gshared (Collection_1_t1783 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m11001(__this, method) (( int32_t (*) (Collection_1_t1783 *, const MethodInfo*))Collection_1_get_Count_m11001_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m11002_gshared (Collection_1_t1783 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m11002(__this, ___index, method) (( Object_t * (*) (Collection_1_t1783 *, int32_t, const MethodInfo*))Collection_1_get_Item_m11002_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m11003_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m11003(__this, ___index, ___value, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m11003_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m11004_gshared (Collection_1_t1783 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m11004(__this, ___index, ___item, method) (( void (*) (Collection_1_t1783 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m11004_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m11005_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m11005(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m11005_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m11006_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m11006(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m11006_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m11007_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m11007(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m11007_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m11008_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m11008(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m11008_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m11009_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m11009(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m11009_gshared)(__this /* static, unused */, ___list, method)
