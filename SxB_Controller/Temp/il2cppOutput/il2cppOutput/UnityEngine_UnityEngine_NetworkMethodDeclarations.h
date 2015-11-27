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
// UnityEngine.NetworkPlayer[]
struct NetworkPlayerU5BU5D_t13;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkConnectionError.h"
#include "UnityEngine_UnityEngine_NetworkPlayer.h"
#include "UnityEngine_UnityEngine_NetworkViewID.h"

// UnityEngine.NetworkConnectionError UnityEngine.Network::Internal_InitializeServerDeprecated(System.Int32,System.Int32)
extern "C" int32_t Network_Internal_InitializeServerDeprecated_m2442 (Object_t * __this /* static, unused */, int32_t ___connections, int32_t ___listenPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkConnectionError UnityEngine.Network::InitializeServer(System.Int32,System.Int32)
extern "C" int32_t Network_InitializeServer_m68 (Object_t * __this /* static, unused */, int32_t ___connections, int32_t ___listenPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkConnectionError UnityEngine.Network::Internal_ConnectToSingleIP(System.String,System.Int32,System.Int32,System.String)
extern "C" int32_t Network_Internal_ConnectToSingleIP_m2443 (Object_t * __this /* static, unused */, String_t* ___IP, int32_t ___remotePort, int32_t ___localPort, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkConnectionError UnityEngine.Network::Connect(System.String,System.Int32)
extern "C" int32_t Network_Connect_m67 (Object_t * __this /* static, unused */, String_t* ___IP, int32_t ___remotePort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkConnectionError UnityEngine.Network::Connect(System.String,System.Int32,System.String)
extern "C" int32_t Network_Connect_m2444 (Object_t * __this /* static, unused */, String_t* ___IP, int32_t ___remotePort, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Network::Disconnect(System.Int32)
extern "C" void Network_Disconnect_m2445 (Object_t * __this /* static, unused */, int32_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Network::Disconnect()
extern "C" void Network_Disconnect_m64 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer[] UnityEngine.Network::get_connections()
extern "C" NetworkPlayerU5BU5D_t13* Network_get_connections_m59 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Network::Internal_GetPlayer()
extern "C" int32_t Network_Internal_GetPlayer_m2446 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkPlayer UnityEngine.Network::get_player()
extern "C" NetworkPlayer_t12  Network_get_player_m83 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Network::DestroyPlayerObjects(UnityEngine.NetworkPlayer)
extern "C" void Network_DestroyPlayerObjects_m75 (Object_t * __this /* static, unused */, NetworkPlayer_t12  ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Network::Internal_RemoveRPCs(UnityEngine.NetworkPlayer,UnityEngine.NetworkViewID,System.UInt32)
extern "C" void Network_Internal_RemoveRPCs_m2447 (Object_t * __this /* static, unused */, NetworkPlayer_t12  ___playerID, NetworkViewID_t424  ___viewID, uint32_t ___channelMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Network::INTERNAL_CALL_Internal_RemoveRPCs(UnityEngine.NetworkPlayer,UnityEngine.NetworkViewID&,System.UInt32)
extern "C" void Network_INTERNAL_CALL_Internal_RemoveRPCs_m2448 (Object_t * __this /* static, unused */, NetworkPlayer_t12  ___playerID, NetworkViewID_t424 * ___viewID, uint32_t ___channelMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Network::RemoveRPCs(UnityEngine.NetworkPlayer)
extern "C" void Network_RemoveRPCs_m74 (Object_t * __this /* static, unused */, NetworkPlayer_t12  ___playerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Network::get_isServer()
extern "C" bool Network_get_isServer_m76 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
