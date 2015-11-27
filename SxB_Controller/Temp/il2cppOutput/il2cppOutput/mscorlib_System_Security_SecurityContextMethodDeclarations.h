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

// System.Security.SecurityContext
struct SecurityContext_t1550;
// System.Threading.CompressedStack
struct CompressedStack_t1551;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m9533 (SecurityContext_t1550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m9534 (SecurityContext_t1550 * __this, SecurityContext_t1550 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1550 * SecurityContext_Capture_m9535 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m9536 (SecurityContext_t1550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1551 * SecurityContext_get_CompressedStack_m9537 (SecurityContext_t1550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
