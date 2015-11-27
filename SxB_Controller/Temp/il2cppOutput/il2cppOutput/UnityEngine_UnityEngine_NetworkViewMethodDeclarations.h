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

// UnityEngine.NetworkView
struct NetworkView_t19;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t15;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RPCMode.h"

// System.Void UnityEngine.NetworkView::Internal_RPC(UnityEngine.NetworkView,System.String,UnityEngine.RPCMode,System.Object[])
extern "C" void NetworkView_Internal_RPC_m2441 (Object_t * __this /* static, unused */, NetworkView_t19 * ___view, String_t* ___name, int32_t ___mode, ObjectU5BU5D_t15* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NetworkView::RPC(System.String,UnityEngine.RPCMode,System.Object[])
extern "C" void NetworkView_RPC_m87 (NetworkView_t19 * __this, String_t* ___name, int32_t ___mode, ObjectU5BU5D_t15* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
