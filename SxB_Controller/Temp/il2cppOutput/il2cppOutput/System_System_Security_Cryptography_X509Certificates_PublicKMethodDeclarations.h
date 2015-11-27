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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t714;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t727;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t716;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t715;
// System.Security.Cryptography.Oid
struct Oid_t717;
// System.Byte[]
struct ByteU5BU5D_t728;
// System.Security.Cryptography.DSA
struct DSA_t839;
// System.Security.Cryptography.RSA
struct RSA_t840;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m3801 (PublicKey_t714 * __this, X509Certificate_t727 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t716 * PublicKey_get_EncodedKeyValue_m3802 (PublicKey_t714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t716 * PublicKey_get_EncodedParameters_m3803 (PublicKey_t714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t715 * PublicKey_get_Key_m3804 (PublicKey_t714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t717 * PublicKey_get_Oid_m3805 (PublicKey_t714 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t728* PublicKey_GetUnsignedBigInteger_m3806 (Object_t * __this /* static, unused */, ByteU5BU5D_t728* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t839 * PublicKey_DecodeDSA_m3807 (Object_t * __this /* static, unused */, ByteU5BU5D_t728* ___rawPublicKey, ByteU5BU5D_t728* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t840 * PublicKey_DecodeRSA_m3808 (Object_t * __this /* static, unused */, ByteU5BU5D_t728* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
