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

// NetworkViewMgr
struct NetworkViewMgr_t5;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"
#include "UnityEngine_UnityEngine_NetworkDisconnection.h"
#include "UnityEngine_UnityEngine_NetworkConnectionError.h"

// System.Void NetworkViewMgr::.ctor()
extern "C" void NetworkViewMgr__ctor_m14 (NetworkViewMgr_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr::.cctor()
extern "C" void NetworkViewMgr__cctor_m15 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkViewMgr::get_WebUrl()
extern "C" String_t* NetworkViewMgr_get_WebUrl_m16 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkViewMgr::get_Connected()
extern "C" bool NetworkViewMgr_get_Connected_m17 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr::Start()
extern "C" void NetworkViewMgr_Start_m18 (NetworkViewMgr_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkViewMgr::GetIP()
extern "C" String_t* NetworkViewMgr_GetIP_m19 (NetworkViewMgr_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr::OnGUI()
extern "C" void NetworkViewMgr_OnGUI_m20 (NetworkViewMgr_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr::OnServerInitialized()
extern "C" void NetworkViewMgr_OnServerInitialized_m21 (NetworkViewMgr_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr::OnConnectedToServer()
extern "C" void NetworkViewMgr_OnConnectedToServer_m22 (NetworkViewMgr_t5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr::OnPlayerConnected(UnityEngine.NetworkPlayer)
extern "C" void NetworkViewMgr_OnPlayerConnected_m23 (NetworkViewMgr_t5 * __this, NetworkPlayer_t12  ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr::OnPlayerDisconnected(UnityEngine.NetworkPlayer)
extern "C" void NetworkViewMgr_OnPlayerDisconnected_m24 (NetworkViewMgr_t5 * __this, NetworkPlayer_t12  ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr::OnDisconnectedFromServer(UnityEngine.NetworkDisconnection)
extern "C" void NetworkViewMgr_OnDisconnectedFromServer_m25 (NetworkViewMgr_t5 * __this, int32_t ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkViewMgr::OnFailedToConnect(UnityEngine.NetworkConnectionError)
extern "C" void NetworkViewMgr_OnFailedToConnect_m26 (NetworkViewMgr_t5 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
