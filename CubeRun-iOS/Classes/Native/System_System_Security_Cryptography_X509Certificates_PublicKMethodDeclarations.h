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
struct PublicKey_t928;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t734;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t929;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t826;
// System.Security.Cryptography.Oid
struct Oid_t930;
// System.Byte[]
struct ByteU5BU5D_t677;
// System.Security.Cryptography.DSA
struct DSA_t735;
// System.Security.Cryptography.RSA
struct RSA_t728;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4873 (PublicKey_t928 * __this, X509Certificate_t734 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t929 * PublicKey_get_EncodedKeyValue_m4874 (PublicKey_t928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t929 * PublicKey_get_EncodedParameters_m4875 (PublicKey_t928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t826 * PublicKey_get_Key_m4876 (PublicKey_t928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t930 * PublicKey_get_Oid_m4877 (PublicKey_t928 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t677* PublicKey_GetUnsignedBigInteger_m4878 (Object_t * __this /* static, unused */, ByteU5BU5D_t677* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t735 * PublicKey_DecodeDSA_m4879 (Object_t * __this /* static, unused */, ByteU5BU5D_t677* ___rawPublicKey, ByteU5BU5D_t677* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t728 * PublicKey_DecodeRSA_m4880 (Object_t * __this /* static, unused */, ByteU5BU5D_t677* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
