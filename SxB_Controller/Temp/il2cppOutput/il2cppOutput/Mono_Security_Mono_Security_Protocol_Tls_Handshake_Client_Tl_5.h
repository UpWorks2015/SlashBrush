#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t997;
// System.String[]
struct StringU5BU5D_t26;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct  TlsServerCertificateRequest_t1006  : public HandshakeMessage_t979
{
	// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::certificateTypes
	ClientCertificateTypeU5BU5D_t997* ___certificateTypes_9;
	// System.String[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::distinguisedNames
	StringU5BU5D_t26* ___distinguisedNames_10;
};
