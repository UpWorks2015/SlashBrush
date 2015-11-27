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

// NetworkViewMgr1
struct NetworkViewMgr1_t10;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"
#include "UnityEngine_UnityEngine_NetworkDisconnection.h"
#include "UnityEngine_UnityEngine_NetworkConnectionError.h"

// System.Void NetworkViewMgr1::.ctor()
extern "C" void NetworkViewMgr1__ctor_m40 (NetworkViewMgr1_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr1::.cctor()
extern "C" void NetworkViewMgr1__cctor_m41 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkViewMgr1::get_WebUrl()
extern "C" String_t* NetworkViewMgr1_get_WebUrl_m42 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkViewMgr1::get_Connected()
extern "C" bool NetworkViewMgr1_get_Connected_m43 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr1::Start()
extern "C" void NetworkViewMgr1_Start_m44 (NetworkViewMgr1_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkViewMgr1::GetIP()
extern "C" String_t* NetworkViewMgr1_GetIP_m45 (NetworkViewMgr1_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr1::OnGUI()
extern "C" void NetworkViewMgr1_OnGUI_m46 (NetworkViewMgr1_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr1::OnServerInitialized()
extern "C" void NetworkViewMgr1_OnServerInitialized_m47 (NetworkViewMgr1_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr1::OnConnectedToServer()
extern "C" void NetworkViewMgr1_OnConnectedToServer_m48 (NetworkViewMgr1_t10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr1::OnPlayerConnected(UnityEngine.NetworkPlayer)
extern "C" void NetworkViewMgr1_OnPlayerConnected_m49 (NetworkViewMgr1_t10 * __this, NetworkPlayer_t12  ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr1::OnPlayerDisconnected(UnityEngine.NetworkPlayer)
extern "C" void NetworkViewMgr1_OnPlayerDisconnected_m50 (NetworkViewMgr1_t10 * __this, NetworkPlayer_t12  ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr1::OnDisconnectedFromServer(UnityEngine.NetworkDisconnection)
extern "C" void NetworkViewMgr1_OnDisconnectedFromServer_m51 (NetworkViewMgr1_t10 * __this, int32_t ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr1::OnFailedToConnect(UnityEngine.NetworkConnectionError)
extern "C" void NetworkViewMgr1_OnFailedToConnect_m52 (NetworkViewMgr1_t10 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
