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

// NetworkViewMgr
struct  NetworkViewMgr_t5  : public MonoBehaviour_t2
{
	// System.String NetworkViewMgr::connectionIP
	String_t* ___connectionIP_2;
	// System.Int32 NetworkViewMgr::portNumber
	int32_t ___portNumber_3;
};
struct NetworkViewMgr_t5_StaticFields{
	// System.Boolean NetworkViewMgr::connected
	bool ___connected_4;
	// System.String NetworkViewMgr::webUrl
	String_t* ___webUrl_5;
};
