﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Queue
struct Queue_t678;
// System.Threading.Thread
struct Thread_t679;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_Sockets_AddressFamily.h"
#include "System_System_Net_Sockets_SocketType.h"
#include "System_System_Net_Sockets_ProtocolType.h"

// System.Net.Sockets.Socket
struct  Socket_t677  : public Object_t
{
	// System.Collections.Queue System.Net.Sockets.Socket::readQ
	Queue_t678 * ___readQ_0;
	// System.Collections.Queue System.Net.Sockets.Socket::writeQ
	Queue_t678 * ___writeQ_1;
	// System.Int32 System.Net.Sockets.Socket::MinListenPort
	int32_t ___MinListenPort_2;
	// System.Int32 System.Net.Sockets.Socket::MaxListenPort
	int32_t ___MaxListenPort_3;
	// System.Int32 System.Net.Sockets.Socket::linger_timeout
	int32_t ___linger_timeout_6;
	// System.IntPtr System.Net.Sockets.Socket::socket
	IntPtr_t ___socket_7;
	// System.Net.Sockets.AddressFamily System.Net.Sockets.Socket::address_family
	int32_t ___address_family_8;
	// System.Net.Sockets.SocketType System.Net.Sockets.Socket::socket_type
	int32_t ___socket_type_9;
	// System.Net.Sockets.ProtocolType System.Net.Sockets.Socket::protocol_type
	int32_t ___protocol_type_10;
	// System.Boolean System.Net.Sockets.Socket::blocking
	bool ___blocking_11;
	// System.Threading.Thread System.Net.Sockets.Socket::blocking_thread
	Thread_t679 * ___blocking_thread_12;
	// System.Int32 System.Net.Sockets.Socket::max_bind_count
	int32_t ___max_bind_count_14;
	// System.Boolean System.Net.Sockets.Socket::connected
	bool ___connected_15;
	// System.Boolean System.Net.Sockets.Socket::closed
	bool ___closed_16;
	// System.Boolean System.Net.Sockets.Socket::disposed
	bool ___disposed_17;
};
struct Socket_t677_StaticFields{
	// System.Int32 System.Net.Sockets.Socket::ipv4Supported
	int32_t ___ipv4Supported_4;
	// System.Int32 System.Net.Sockets.Socket::ipv6Supported
	int32_t ___ipv6Supported_5;
	// System.Int32 System.Net.Sockets.Socket::current_bind_count
	int32_t ___current_bind_count_13;
};