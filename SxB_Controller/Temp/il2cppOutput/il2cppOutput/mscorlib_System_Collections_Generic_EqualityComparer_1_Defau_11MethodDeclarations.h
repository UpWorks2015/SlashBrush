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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>
struct DefaultComparer_t2329;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m17629_gshared (DefaultComparer_t2329 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17629(__this, method) (( void (*) (DefaultComparer_t2329 *, const MethodInfo*))DefaultComparer__ctor_m17629_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17630_gshared (DefaultComparer_t2329 * __this, CustomAttributeTypedArgument_t1298  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17630(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2329 *, CustomAttributeTypedArgument_t1298 , const MethodInfo*))DefaultComparer_GetHashCode_m17630_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeTypedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17631_gshared (DefaultComparer_t2329 * __this, CustomAttributeTypedArgument_t1298  ___x, CustomAttributeTypedArgument_t1298  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17631(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2329 *, CustomAttributeTypedArgument_t1298 , CustomAttributeTypedArgument_t1298 , const MethodInfo*))DefaultComparer_Equals_m17631_gshared)(__this, ___x, ___y, method)
