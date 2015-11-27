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

// System.Net.IPHostEntry
struct IPHostEntry_t20;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t21;
// System.String[]
struct StringU5BU5D_t26;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.IPHostEntry::.ctor()
extern "C" void IPHostEntry__ctor_m3718 (IPHostEntry_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C" IPAddressU5BU5D_t21* IPHostEntry_get_AddressList_m91 (IPHostEntry_t20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C" void IPHostEntry_set_AddressList_m3719 (IPHostEntry_t20 * __this, IPAddressU5BU5D_t21* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C" void IPHostEntry_set_Aliases_m3720 (IPHostEntry_t20 * __this, StringU5BU5D_t26* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C" void IPHostEntry_set_HostName_m3721 (IPHostEntry_t20 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
