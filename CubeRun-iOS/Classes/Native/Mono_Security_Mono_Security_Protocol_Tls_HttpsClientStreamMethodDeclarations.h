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

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t782;
// System.IO.Stream
struct Stream_t788;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t807;
// System.Net.HttpWebRequest
struct HttpWebRequest_t783;
// System.Byte[]
struct ByteU5BU5D_t677;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t808;
// System.Int32[]
struct Int32U5BU5D_t404;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t826;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m4197 (HttpsClientStream_t782 * __this, Stream_t788 * ___stream, X509CertificateCollection_t807 * ___clientCertificates, HttpWebRequest_t783 * ___request, ByteU5BU5D_t677* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m4198 (HttpsClientStream_t782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m4199 (HttpsClientStream_t782 * __this, X509Certificate_t808 * ___certificate, Int32U5BU5D_t404* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t808 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m4200 (Object_t * __this /* static, unused */, X509CertificateCollection_t807 * ___clientCerts, X509Certificate_t808 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t807 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t826 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m4201 (Object_t * __this /* static, unused */, X509Certificate_t808 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
