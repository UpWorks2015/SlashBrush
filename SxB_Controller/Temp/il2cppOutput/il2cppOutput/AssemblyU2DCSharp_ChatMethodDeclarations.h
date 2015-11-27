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

// Chat
struct Chat_t3;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Chat::.ctor()
extern "C" void Chat__ctor_m10 (Chat_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Chat::.cctor()
extern "C" void Chat__cctor_m11 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Chat::OnGUI()
extern "C" void Chat_OnGUI_m12 (Chat_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Chat::chatMessage(System.String)
extern "C" void Chat_chatMessage_m13 (Chat_t3 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
