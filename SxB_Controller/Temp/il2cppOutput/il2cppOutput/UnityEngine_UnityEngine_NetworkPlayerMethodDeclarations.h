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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"

// System.String UnityEngine.NetworkPlayer::Internal_GetIPAddress(System.Int32)
extern "C" String_t* NetworkPlayer_Internal_GetIPAddress_m2422 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPort(System.Int32)
extern "C" int32_t NetworkPlayer_Internal_GetPort_m2423 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalIP()
extern "C" String_t* NetworkPlayer_Internal_GetLocalIP_m2424 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetLocalPort()
extern "C" int32_t NetworkPlayer_Internal_GetLocalPort_m2425 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::Internal_GetPlayerIndex()
extern "C" int32_t NetworkPlayer_Internal_GetPlayerIndex_m2426 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetGUID(System.Int32)
extern "C" String_t* NetworkPlayer_Internal_GetGUID_m2427 (Object_t * __this /* static, unused */, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::Internal_GetLocalGUID()
extern "C" String_t* NetworkPlayer_Internal_GetLocalGUID_m2428 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::GetHashCode()
extern "C" int32_t NetworkPlayer_GetHashCode_m2429 (NetworkPlayer_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NetworkPlayer::Equals(System.Object)
extern "C" bool NetworkPlayer_Equals_m2430 (NetworkPlayer_t12 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_ipAddress()
extern "C" String_t* NetworkPlayer_get_ipAddress_m70 (NetworkPlayer_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.NetworkPlayer::get_port()
extern "C" int32_t NetworkPlayer_get_port_m71 (NetworkPlayer_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::get_guid()
extern "C" String_t* NetworkPlayer_get_guid_m84 (NetworkPlayer_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.NetworkPlayer::ToString()
extern "C" String_t* NetworkPlayer_ToString_m2431 (NetworkPlayer_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
