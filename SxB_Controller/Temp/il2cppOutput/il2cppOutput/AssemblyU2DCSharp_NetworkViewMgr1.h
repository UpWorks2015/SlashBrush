#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// NetworkViewMgr1
struct  NetworkViewMgr1_t10  : public MonoBehaviour_t2
{
	// System.String NetworkViewMgr1::connectionIP
	String_t* ___connectionIP_2;
	// System.Int32 NetworkViewMgr1::portNumber
	int32_t ___portNumber_3;
};
struct NetworkViewMgr1_t10_StaticFields{
	// System.Boolean NetworkViewMgr1::connected
	bool ___connected_4;
	// System.String NetworkViewMgr1::webUrl
	String_t* ___webUrl_5;
	// System.Boolean NetworkViewMgr1::client
	bool ___client_6;
};
