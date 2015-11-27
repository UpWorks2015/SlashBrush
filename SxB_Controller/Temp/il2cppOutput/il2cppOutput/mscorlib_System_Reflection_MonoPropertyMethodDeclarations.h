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

// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1309;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t636;
// System.Object[]
struct ObjectU5BU5D_t15;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1315;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t628;
// System.Globalization.CultureInfo
struct CultureInfo_t630;
// System.Type[]
struct TypeU5BU5D_t606;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t608;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PInfo.h"
#include "mscorlib_System_Reflection_PropertyAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoProperty::.ctor()
extern "C" void MonoProperty__ctor_m8412 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::CachePropertyInfo(System.Reflection.PInfo)
extern "C" void MonoProperty_CachePropertyInfo_m8413 (MonoProperty_t * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyAttributes System.Reflection.MonoProperty::get_Attributes()
extern "C" int32_t MonoProperty_get_Attributes_m8414 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanRead()
extern "C" bool MonoProperty_get_CanRead_m8415 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::get_CanWrite()
extern "C" bool MonoProperty_get_CanWrite_m8416 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_PropertyType()
extern "C" Type_t * MonoProperty_get_PropertyType_m8417 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_ReflectedType()
extern "C" Type_t * MonoProperty_get_ReflectedType_m8418 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoProperty::get_DeclaringType()
extern "C" Type_t * MonoProperty_get_DeclaringType_m8419 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::get_Name()
extern "C" String_t* MonoProperty_get_Name_m8420 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.MonoProperty::GetAccessors(System.Boolean)
extern "C" MethodInfoU5BU5D_t1309* MonoProperty_GetAccessors_m8421 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetGetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetGetMethod_m8422 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoProperty::GetIndexParameters()
extern "C" ParameterInfoU5BU5D_t636* MonoProperty_GetIndexParameters_m8423 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoProperty::GetSetMethod(System.Boolean)
extern "C" MethodInfo_t * MonoProperty_GetSetMethod_m8424 (MonoProperty_t * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoProperty::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoProperty_IsDefined_m8425 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t15* MonoProperty_GetCustomAttributes_m8426 (MonoProperty_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoProperty::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t15* MonoProperty_GetCustomAttributes_m8427 (MonoProperty_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::CreateGetterDelegate(System.Reflection.MethodInfo)
extern "C" GetterAdapter_t1315 * MonoProperty_CreateGetterDelegate_m8428 (Object_t * __this /* static, unused */, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Object[])
extern "C" Object_t * MonoProperty_GetValue_m8429 (MonoProperty_t * __this, Object_t * ___obj, ObjectU5BU5D_t15* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoProperty_GetValue_m8430 (MonoProperty_t * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t628 * ___binder, ObjectU5BU5D_t15* ___index, CultureInfo_t630 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" void MonoProperty_SetValue_m8431 (MonoProperty_t * __this, Object_t * ___obj, Object_t * ___value, int32_t ___invokeAttr, Binder_t628 * ___binder, ObjectU5BU5D_t15* ___index, CultureInfo_t630 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoProperty::ToString()
extern "C" String_t* MonoProperty_ToString_m8432 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetOptionalCustomModifiers()
extern "C" TypeU5BU5D_t606* MonoProperty_GetOptionalCustomModifiers_m8433 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoProperty::GetRequiredCustomModifiers()
extern "C" TypeU5BU5D_t606* MonoProperty_GetRequiredCustomModifiers_m8434 (MonoProperty_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoProperty::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoProperty_GetObjectData_m8435 (MonoProperty_t * __this, SerializationInfo_t608 * ___info, StreamingContext_t609  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
