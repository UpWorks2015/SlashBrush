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

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t973;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t725;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t700;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t168;
// System.AsyncCallback
struct AsyncCallback_t169;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m5567 (CertificateSelectionCallback_t973 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t725 * CertificateSelectionCallback_Invoke_m5568 (CertificateSelectionCallback_t973 * __this, X509CertificateCollection_t700 * ___clientCertificates, X509Certificate_t725 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t700 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t725 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t973(Il2CppObject* delegate, X509CertificateCollection_t700 * ___clientCertificates, X509Certificate_t725 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t700 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m5569 (CertificateSelectionCallback_t973 * __this, X509CertificateCollection_t700 * ___clientCertificates, X509Certificate_t725 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t700 * ___serverRequestedCertificates, AsyncCallback_t169 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t725 * CertificateSelectionCallback_EndInvoke_m5570 (CertificateSelectionCallback_t973 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
