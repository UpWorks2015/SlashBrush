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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t2368;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m18015_gshared (DefaultComparer_t2368 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m18015(__this, method) (( void (*) (DefaultComparer_t2368 *, const MethodInfo*))DefaultComparer__ctor_m18015_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m18016_gshared (DefaultComparer_t2368 * __this, DateTime_t499  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m18016(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2368 *, DateTime_t499 , const MethodInfo*))DefaultComparer_GetHashCode_m18016_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m18017_gshared (DefaultComparer_t2368 * __this, DateTime_t499  ___x, DateTime_t499  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m18017(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2368 *, DateTime_t499 , DateTime_t499 , const MethodInfo*))DefaultComparer_Equals_m18017_gshared)(__this, ___x, ___y, method)
