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

// C_Mgr
struct C_Mgr_t1;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"
#include "UnityEngine_UnityEngine_NetworkDisconnection.h"
#include "UnityEngine_UnityEngine_NetworkConnectionError.h"

// System.Void C_Mgr::.ctor()
extern "C" void C_Mgr__ctor_m0 (C_Mgr_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void C_Mgr::.cctor()
extern "C" void C_Mgr__cctor_m1 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean C_Mgr::get_Connected()
extern "C" bool C_Mgr_get_Connected_m2 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void C_Mgr::OnGUI()
extern "C" void C_Mgr_OnGUI_m3 (C_Mgr_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void C_Mgr::OnServerInitialized()
extern "C" void C_Mgr_OnServerInitialized_m4 (C_Mgr_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void C_Mgr::OnConnectedToServer()
extern "C" void C_Mgr_OnConnectedToServer_m5 (C_Mgr_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void C_Mgr::OnPlayerConnected(UnityEngine.NetworkPlayer)
extern "C" void C_Mgr_OnPlayerConnected_m6 (C_Mgr_t1 * __this, NetworkPlayer_t12  ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void C_Mgr::OnPlayerDisconnected(UnityEngine.NetworkPlayer)
extern "C" void C_Mgr_OnPlayerDisconnected_m7 (C_Mgr_t1 * __this, NetworkPlayer_t12  ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void C_Mgr::OnDisconnectedFromServer(UnityEngine.NetworkDisconnection)
extern "C" void C_Mgr_OnDisconnectedFromServer_m8 (C_Mgr_t1 * __this, int32_t ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void C_Mgr::OnFailedToConnect(UnityEngine.NetworkConnectionError)
extern "C" void C_Mgr_OnFailedToConnect_m9 (C_Mgr_t1 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
