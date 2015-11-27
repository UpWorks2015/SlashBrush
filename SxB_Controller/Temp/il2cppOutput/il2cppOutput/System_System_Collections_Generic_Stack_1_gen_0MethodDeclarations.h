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

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t1817;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2045;
// System.Collections.IEnumerator
struct IEnumerator_t289;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m11323_gshared (Stack_1_t1817 * __this, const MethodInfo* method);
#define Stack_1__ctor_m11323(__this, method) (( void (*) (Stack_1_t1817 *, const MethodInfo*))Stack_1__ctor_m11323_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m11324_gshared (Stack_1_t1817 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m11324(__this, method) (( bool (*) (Stack_1_t1817 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m11324_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m11325_gshared (Stack_1_t1817 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m11325(__this, method) (( Object_t * (*) (Stack_1_t1817 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m11325_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m11326_gshared (Stack_1_t1817 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m11326(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t1817 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m11326_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11327_gshared (Stack_1_t1817 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11327(__this, method) (( Object_t* (*) (Stack_1_t1817 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m11327_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m11328_gshared (Stack_1_t1817 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m11328(__this, method) (( Object_t * (*) (Stack_1_t1817 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m11328_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m11329_gshared (Stack_1_t1817 * __this, const MethodInfo* method);
#define Stack_1_Peek_m11329(__this, method) (( Object_t * (*) (Stack_1_t1817 *, const MethodInfo*))Stack_1_Peek_m11329_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m11330_gshared (Stack_1_t1817 * __this, const MethodInfo* method);
#define Stack_1_Pop_m11330(__this, method) (( Object_t * (*) (Stack_1_t1817 *, const MethodInfo*))Stack_1_Pop_m11330_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m11331_gshared (Stack_1_t1817 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m11331(__this, ___t, method) (( void (*) (Stack_1_t1817 *, Object_t *, const MethodInfo*))Stack_1_Push_m11331_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m11332_gshared (Stack_1_t1817 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m11332(__this, method) (( int32_t (*) (Stack_1_t1817 *, const MethodInfo*))Stack_1_get_Count_m11332_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1819  Stack_1_GetEnumerator_m11333_gshared (Stack_1_t1817 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m11333(__this, method) (( Enumerator_t1819  (*) (Stack_1_t1817 *, const MethodInfo*))Stack_1_GetEnumerator_m11333_gshared)(__this, method)
