#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace Mono::Security {
class ASN1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Certificate;
}
// Type: Mono.Security.X509::X509Certificate
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13962))
// CS Name: Mono.Security.X509.X509Certificate
class CORDL_TYPE X509Certificate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~X509Certificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: " const&", def_value: None }]
constexpr X509Certificate(X509Certificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate", modifiers: "&&", def_value: None }]
constexpr X509Certificate(X509Certificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Certificate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Certificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Certificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Certificate& operator=(X509Certificate&& o) noexcept = default;
  constexpr X509Certificate& operator=(X509Certificate const& o) noexcept = default;
                


// Fields

 Mono::Security::ASN1 __declspec(property(get=__get_decoder, put=__set_decoder))  decoder;

constexpr void __set_decoder(Mono::Security::ASN1 value) ;

constexpr Mono::Security::ASN1 __get_decoder() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_encodedcert, put=__set_m_encodedcert))  m_encodedcert;

constexpr void __set_m_encodedcert(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_encodedcert() const;

 System::DateTime __declspec(property(get=__get_m_from, put=__set_m_from))  m_from;

constexpr void __set_m_from(System::DateTime value) ;

constexpr System::DateTime __get_m_from() const;

 System::DateTime __declspec(property(get=__get_m_until, put=__set_m_until))  m_until;

constexpr void __set_m_until(System::DateTime value) ;

constexpr System::DateTime __get_m_until() const;

 Mono::Security::ASN1 __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(Mono::Security::ASN1 value) ;

constexpr Mono::Security::ASN1 __get_issuer() const;

 ::StringW __declspec(property(get=__get_m_issuername, put=__set_m_issuername))  m_issuername;

constexpr void __set_m_issuername(::StringW value) ;

constexpr ::StringW __get_m_issuername() const;

 ::StringW __declspec(property(get=__get_m_keyalgo, put=__set_m_keyalgo))  m_keyalgo;

constexpr void __set_m_keyalgo(::StringW value) ;

constexpr ::StringW __get_m_keyalgo() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_keyalgoparams, put=__set_m_keyalgoparams))  m_keyalgoparams;

constexpr void __set_m_keyalgoparams(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_keyalgoparams() const;

 Mono::Security::ASN1 __declspec(property(get=__get_subject, put=__set_subject))  subject;

constexpr void __set_subject(Mono::Security::ASN1 value) ;

constexpr Mono::Security::ASN1 __get_subject() const;

 ::StringW __declspec(property(get=__get_m_subject, put=__set_m_subject))  m_subject;

constexpr void __set_m_subject(::StringW value) ;

constexpr ::StringW __get_m_subject() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_publickey, put=__set_m_publickey))  m_publickey;

constexpr void __set_m_publickey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_publickey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_signature() const;

 ::StringW __declspec(property(get=__get_m_signaturealgo, put=__set_m_signaturealgo))  m_signaturealgo;

constexpr void __set_m_signaturealgo(::StringW value) ;

constexpr ::StringW __get_m_signaturealgo() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_signaturealgoparams, put=__set_m_signaturealgoparams))  m_signaturealgoparams;

constexpr void __set_m_signaturealgoparams(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_signaturealgoparams() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_certhash, put=__set_certhash))  certhash;

constexpr void __set_certhash(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_certhash() const;

 System::Security::Cryptography::RSA __declspec(property(get=__get__rsa, put=__set__rsa))  _rsa;

constexpr void __set__rsa(System::Security::Cryptography::RSA value) ;

constexpr System::Security::Cryptography::RSA __get__rsa() const;

 System::Security::Cryptography::DSA __declspec(property(get=__get__dsa, put=__set__dsa))  _dsa;

constexpr void __set__dsa(System::Security::Cryptography::DSA value) ;

constexpr System::Security::Cryptography::DSA __get__dsa() const;

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serialnumber, put=__set_serialnumber))  serialnumber;

constexpr void __set_serialnumber(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serialnumber() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_issuerUniqueID, put=__set_issuerUniqueID))  issuerUniqueID;

constexpr void __set_issuerUniqueID(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_issuerUniqueID() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_subjectUniqueID, put=__set_subjectUniqueID))  subjectUniqueID;

constexpr void __set_subjectUniqueID(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_subjectUniqueID() const;

 Mono::Security::X509::X509ExtensionCollection __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Mono::Security::X509::X509ExtensionCollection value) ;

constexpr Mono::Security::X509::X509ExtensionCollection __get_extensions() const;

static ::StringW __declspec(property(get=__get_encoding_error, put=__set_encoding_error))  encoding_error;

static void __set_encoding_error(::StringW value) ;

static ::StringW __get_encoding_error() ;


// Properties

 System::Security::Cryptography::DSA __declspec(property(get=get_DSA, put=set_DSA))  DSA;

 Mono::Security::X509::X509ExtensionCollection __declspec(property(get=get_Extensions))  Extensions;

 ::ArrayW<uint8_t> __declspec(property(get=get_Hash))  Hash;

 ::StringW __declspec(property(get=get_IssuerName))  IssuerName;

 ::StringW __declspec(property(get=get_KeyAlgorithm))  KeyAlgorithm;

 ::ArrayW<uint8_t> __declspec(property(get=get_KeyAlgorithmParameters, put=set_KeyAlgorithmParameters))  KeyAlgorithmParameters;

 ::ArrayW<uint8_t> __declspec(property(get=get_PublicKey))  PublicKey;

 System::Security::Cryptography::RSA __declspec(property(get=get_RSA, put=set_RSA))  RSA;

 ::ArrayW<uint8_t> __declspec(property(get=get_RawData))  RawData;

 ::ArrayW<uint8_t> __declspec(property(get=get_SerialNumber))  SerialNumber;

 ::ArrayW<uint8_t> __declspec(property(get=get_Signature))  Signature;

 ::StringW __declspec(property(get=get_SubjectName))  SubjectName;

 System::DateTime __declspec(property(get=get_ValidFrom))  ValidFrom;

 System::DateTime __declspec(property(get=get_ValidUntil))  ValidUntil;

 int32_t __declspec(property(get=get_Version))  Version;

 bool __declspec(property(get=get_IsCurrent))  IsCurrent;

 bool __declspec(property(get=get_IsSelfSigned))  IsSelfSigned;


// Methods

/// @brief Method Parse addr 0x228c664 size 0x908 virtual false final false
 void Parse(::ArrayW<uint8_t> data) ;

static Mono::Security::X509::X509Certificate New_ctor(::ArrayW<uint8_t> data) ;

/// @brief Method .ctor addr 0x22824dc size 0x194 virtual false final false
 void _ctor(::ArrayW<uint8_t> data) ;

/// @brief Method GetUnsignedBigInteger addr 0x228d0a0 size 0x94 virtual false final false
 ::ArrayW<uint8_t> GetUnsignedBigInteger(::ArrayW<uint8_t> integer) ;

/// @brief Method get_DSA addr 0x2285e64 size 0x29c virtual false final false
 System::Security::Cryptography::DSA get_DSA() ;

/// @brief Method set_DSA addr 0x228d134 size 0x10 virtual false final false
 void set_DSA(System::Security::Cryptography::DSA value) ;

/// @brief Method get_Extensions addr 0x228d144 size 0x8 virtual false final false
 Mono::Security::X509::X509ExtensionCollection get_Extensions() ;

/// @brief Method get_Hash addr 0x228d14c size 0x294 virtual false final false
 ::ArrayW<uint8_t> get_Hash() ;

/// @brief Method get_IssuerName addr 0x228d3e0 size 0x8 virtual true final false
 ::StringW get_IssuerName() ;

/// @brief Method get_KeyAlgorithm addr 0x228d3e8 size 0x8 virtual true final false
 ::StringW get_KeyAlgorithm() ;

/// @brief Method get_KeyAlgorithmParameters addr 0x228d3f0 size 0x74 virtual true final false
 ::ArrayW<uint8_t> get_KeyAlgorithmParameters() ;

/// @brief Method set_KeyAlgorithmParameters addr 0x228d464 size 0x8 virtual true final false
 void set_KeyAlgorithmParameters(::ArrayW<uint8_t> value) ;

/// @brief Method get_PublicKey addr 0x228d46c size 0x74 virtual true final false
 ::ArrayW<uint8_t> get_PublicKey() ;

/// @brief Method get_RSA addr 0x228d4e0 size 0x18c virtual true final false
 System::Security::Cryptography::RSA get_RSA() ;

/// @brief Method set_RSA addr 0x228d66c size 0x10 virtual true final false
 void set_RSA(System::Security::Cryptography::RSA value) ;

/// @brief Method get_RawData addr 0x228d67c size 0x74 virtual true final false
 ::ArrayW<uint8_t> get_RawData() ;

/// @brief Method get_SerialNumber addr 0x228d6f0 size 0x74 virtual true final false
 ::ArrayW<uint8_t> get_SerialNumber() ;

/// @brief Method get_Signature addr 0x228d764 size 0x43c virtual true final false
 ::ArrayW<uint8_t> get_Signature() ;

/// @brief Method get_SubjectName addr 0x228dba0 size 0x8 virtual true final false
 ::StringW get_SubjectName() ;

/// @brief Method get_ValidFrom addr 0x228dba8 size 0x8 virtual true final false
 System::DateTime get_ValidFrom() ;

/// @brief Method get_ValidUntil addr 0x228dbb0 size 0x8 virtual true final false
 System::DateTime get_ValidUntil() ;

/// @brief Method get_Version addr 0x228dbb8 size 0x8 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_IsCurrent addr 0x228dbc0 size 0x60 virtual false final false
 bool get_IsCurrent() ;

/// @brief Method WasCurrent addr 0x228dc20 size 0xd8 virtual false final false
 bool WasCurrent(System::DateTime instant) ;

/// @brief Method VerifySignature addr 0x228dcf8 size 0xc8 virtual false final false
 bool VerifySignature(System::Security::Cryptography::DSA dsa) ;

/// @brief Method VerifySignature addr 0x228ddc0 size 0x128 virtual false final false
 bool VerifySignature(System::Security::Cryptography::RSA rsa) ;

/// @brief Method VerifySignature addr 0x228dee8 size 0x18c virtual false final false
 bool VerifySignature(System::Security::Cryptography::AsymmetricAlgorithm aa) ;

/// @brief Method get_IsSelfSigned addr 0x228e074 size 0x108 virtual false final false
 bool get_IsSelfSigned() ;

/// @brief Method GetObjectData addr 0x228e17c size 0x5c virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method PEM addr 0x228cf6c size 0x134 virtual false final false
static ::ArrayW<uint8_t> PEM(::StringW type, ::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
NEED_NO_BOX(Mono::Security::X509::X509Certificate);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Certificate, "Mono.Security.X509", "X509Certificate");
