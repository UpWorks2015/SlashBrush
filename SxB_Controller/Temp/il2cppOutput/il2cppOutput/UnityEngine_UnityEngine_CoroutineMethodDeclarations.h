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

// UnityEngine.Coroutine
struct Coroutine_t177;
struct Coroutine_t177_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2163 (Coroutine_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2164 (Coroutine_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2165 (Coroutine_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t177_marshal(const Coroutine_t177& unmarshaled, Coroutine_t177_marshaled& marshaled);
extern "C" void Coroutine_t177_marshal_back(const Coroutine_t177_marshaled& marshaled, Coroutine_t177& unmarshaled);
extern "C" void Coroutine_t177_marshal_cleanup(Coroutine_t177_marshaled& marshaled);
