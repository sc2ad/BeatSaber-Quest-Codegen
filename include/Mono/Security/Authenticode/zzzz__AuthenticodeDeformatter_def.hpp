#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/Authenticode/zzzz__AuthenticodeBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security {
class Mono__Security__PKCS7__SignedData;
}
namespace Mono::Security {
class ASN1;
}
namespace Mono::Security {
class Mono__Security__PKCS7__SignerInfo;
}
namespace Mono::Security::X509 {
class X509Chain;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Mono::Security::Authenticode {
class AuthenticodeDeformatter;
}
// Type: Mono.Security.Authenticode::AuthenticodeDeformatter
namespace Mono::Security::Authenticode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14012))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14013))
// CS Name: Mono.Security.Authenticode.AuthenticodeDeformatter
class CORDL_TYPE AuthenticodeDeformatter : public Mono::Security::Authenticode::AuthenticodeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~AuthenticodeDeformatter() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticodeDeformatter", modifiers: " const&", def_value: None }]
constexpr AuthenticodeDeformatter(AuthenticodeDeformatter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticodeDeformatter", modifiers: "&&", def_value: None }]
constexpr AuthenticodeDeformatter(AuthenticodeDeformatter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticodeDeformatter(void* ptr) noexcept : Mono::Security::Authenticode::AuthenticodeBase(ptr) {
}


  constexpr AuthenticodeDeformatter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticodeDeformatter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticodeDeformatter& operator=(AuthenticodeDeformatter&& o) noexcept = default;
  constexpr AuthenticodeDeformatter& operator=(AuthenticodeDeformatter const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_filename, put=__set_filename))  filename;

constexpr void __set_filename(::StringW value) ;

constexpr ::StringW __get_filename() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_rawdata, put=__set_rawdata))  rawdata;

constexpr void __set_rawdata(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_rawdata() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_hash, put=__set_hash))  hash;

constexpr void __set_hash(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_hash() const;

 Mono::Security::X509::X509CertificateCollection __declspec(property(get=__get_coll, put=__set_coll))  coll;

constexpr void __set_coll(Mono::Security::X509::X509CertificateCollection value) ;

constexpr Mono::Security::X509::X509CertificateCollection __get_coll() const;

 Mono::Security::ASN1 __declspec(property(get=__get_signedHash, put=__set_signedHash))  signedHash;

constexpr void __set_signedHash(Mono::Security::ASN1 value) ;

constexpr Mono::Security::ASN1 __get_signedHash() const;

 System::DateTime __declspec(property(get=__get_timestamp, put=__set_timestamp))  timestamp;

constexpr void __set_timestamp(System::DateTime value) ;

constexpr System::DateTime __get_timestamp() const;

 Mono::Security::X509::X509Certificate __declspec(property(get=__get_signingCertificate, put=__set_signingCertificate))  signingCertificate;

constexpr void __set_signingCertificate(Mono::Security::X509::X509Certificate value) ;

constexpr Mono::Security::X509::X509Certificate __get_signingCertificate() const;

 int32_t __declspec(property(get=__get_reason, put=__set_reason))  reason;

constexpr void __set_reason(int32_t value) ;

constexpr int32_t __get_reason() const;

 bool __declspec(property(get=__get_trustedRoot, put=__set_trustedRoot))  trustedRoot;

constexpr void __set_trustedRoot(bool value) ;

constexpr bool __get_trustedRoot() const;

 bool __declspec(property(get=__get_trustedTimestampRoot, put=__set_trustedTimestampRoot))  trustedTimestampRoot;

constexpr void __set_trustedTimestampRoot(bool value) ;

constexpr bool __get_trustedTimestampRoot() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_entry, put=__set_entry))  entry;

constexpr void __set_entry(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_entry() const;

 Mono::Security::X509::X509Chain __declspec(property(get=__get_signerChain, put=__set_signerChain))  signerChain;

constexpr void __set_signerChain(Mono::Security::X509::X509Chain value) ;

constexpr Mono::Security::X509::X509Chain __get_signerChain() const;

 Mono::Security::X509::X509Chain __declspec(property(get=__get_timestampChain, put=__set_timestampChain))  timestampChain;

constexpr void __set_timestampChain(Mono::Security::X509::X509Chain value) ;

constexpr Mono::Security::X509::X509Chain __get_timestampChain() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(put=set_RawData))  RawData;

 Mono::Security::X509::X509Certificate __declspec(property(get=get_SigningCertificate))  SigningCertificate;


// Methods

static Mono::Security::Authenticode::AuthenticodeDeformatter New_ctor() ;

/// @brief Method .ctor addr 0x229d808 size 0x8c virtual false final false
 void _ctor() ;

static Mono::Security::Authenticode::AuthenticodeDeformatter New_ctor(::ArrayW<uint8_t> rawData) ;

/// @brief Method .ctor addr 0x229d894 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> rawData) ;

/// @brief Method set_RawData addr 0x229d8bc size 0xd0 virtual false final false
 void set_RawData(::ArrayW<uint8_t> value) ;

/// @brief Method get_SigningCertificate addr 0x229dd24 size 0x8 virtual false final false
 Mono::Security::X509::X509Certificate get_SigningCertificate() ;

/// @brief Method CheckSignature addr 0x229da30 size 0x2f4 virtual false final false
 bool CheckSignature() ;

/// @brief Method CompareIssuerSerial addr 0x229e774 size 0xf4 virtual false final false
 bool CompareIssuerSerial(::StringW issuer, ::ArrayW<uint8_t> serial, Mono::Security::X509::X509Certificate x509) ;

/// @brief Method VerifySignature addr 0x229dd2c size 0xa48 virtual false final false
 bool VerifySignature(Mono::Security::Mono__Security__PKCS7__SignedData sd, ::ArrayW<uint8_t> calculatedMessageDigest, System::Security::Cryptography::HashAlgorithm ha) ;

/// @brief Method VerifyCounterSignature addr 0x229e868 size 0xa00 virtual false final false
 bool VerifyCounterSignature(Mono::Security::Mono__Security__PKCS7__SignerInfo cs, ::ArrayW<uint8_t> signature) ;

/// @brief Method Reset addr 0x229d98c size 0xa4 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Authenticode
NEED_NO_BOX(Mono::Security::Authenticode::AuthenticodeDeformatter);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Authenticode::AuthenticodeDeformatter, "Mono.Security.Authenticode", "AuthenticodeDeformatter");
