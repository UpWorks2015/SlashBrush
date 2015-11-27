#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.IPAddress[]
struct IPAddressU5BU5D_t21;
// System.String[]
struct StringU5BU5D_t26;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// System.Net.IPHostEntry
struct  IPHostEntry_t20  : public Object_t
{
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t21* ___addressList_0;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t26* ___aliases_1;
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName_2;
};
