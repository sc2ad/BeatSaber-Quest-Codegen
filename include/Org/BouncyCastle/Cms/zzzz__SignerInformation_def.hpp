#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Time;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class IDigestCalculator;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DigestInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Cms {
class SignerID;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
// Type: Org.BouncyCastle.Cms::SignerInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(691))
// CS Name: Org.BouncyCastle.Cms.SignerInformation
class CORDL_TYPE SignerInformation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SignerInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInformation", modifiers: " const&", def_value: None }]
constexpr SignerInformation(SignerInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInformation", modifiers: "&&", def_value: None }]
constexpr SignerInformation(SignerInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerInformation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignerInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerInformation& operator=(SignerInformation&& o) noexcept = default;
  constexpr SignerInformation& operator=(SignerInformation const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Cms::CmsSignedHelper __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(Org::BouncyCastle::Cms::CmsSignedHelper value) ;

static Org::BouncyCastle::Cms::CmsSignedHelper __get_Helper() ;

 Org::BouncyCastle::Cms::SignerID __declspec(property(get=__get_sid, put=__set_sid))  sid;

constexpr void __set_sid(Org::BouncyCastle::Cms::SignerID value) ;

constexpr Org::BouncyCastle::Cms::SignerID __get_sid() const;

 Org::BouncyCastle::Asn1::Cms::SignerInfo __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(Org::BouncyCastle::Asn1::Cms::SignerInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::SignerInfo __get_info() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_digestAlgorithm, put=__set_digestAlgorithm))  digestAlgorithm;

constexpr void __set_digestAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_digestAlgorithm() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_encryptionAlgorithm, put=__set_encryptionAlgorithm))  encryptionAlgorithm;

constexpr void __set_encryptionAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_encryptionAlgorithm() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_signedAttributeSet, put=__set_signedAttributeSet))  signedAttributeSet;

constexpr void __set_signedAttributeSet(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_signedAttributeSet() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_unsignedAttributeSet, put=__set_unsignedAttributeSet))  unsignedAttributeSet;

constexpr void __set_unsignedAttributeSet(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_unsignedAttributeSet() const;

 Org::BouncyCastle::Cms::CmsProcessable __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(Org::BouncyCastle::Cms::CmsProcessable value) ;

constexpr Org::BouncyCastle::Cms::CmsProcessable __get_content() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_signature, put=__set_signature))  signature;

constexpr void __set_signature(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_signature() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_contentType() const;

 Org::BouncyCastle::Cms::IDigestCalculator __declspec(property(get=__get_digestCalculator, put=__set_digestCalculator))  digestCalculator;

constexpr void __set_digestCalculator(Org::BouncyCastle::Cms::IDigestCalculator value) ;

constexpr Org::BouncyCastle::Cms::IDigestCalculator __get_digestCalculator() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_resultDigest, put=__set_resultDigest))  resultDigest;

constexpr void __set_resultDigest(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_resultDigest() const;

 Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=__get_signedAttributeTable, put=__set_signedAttributeTable))  signedAttributeTable;

constexpr void __set_signedAttributeTable(Org::BouncyCastle::Asn1::Cms::AttributeTable value) ;

constexpr Org::BouncyCastle::Asn1::Cms::AttributeTable __get_signedAttributeTable() const;

 Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=__get_unsignedAttributeTable, put=__set_unsignedAttributeTable))  unsignedAttributeTable;

constexpr void __set_unsignedAttributeTable(Org::BouncyCastle::Asn1::Cms::AttributeTable value) ;

constexpr Org::BouncyCastle::Asn1::Cms::AttributeTable __get_unsignedAttributeTable() const;

 bool __declspec(property(get=__get_isCounterSignature, put=__set_isCounterSignature))  isCounterSignature;

constexpr void __set_isCounterSignature(bool value) ;

constexpr bool __get_isCounterSignature() const;


// Properties

 bool __declspec(property(get=get_IsCounterSignature))  IsCounterSignature;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ContentType))  ContentType;

 Org::BouncyCastle::Cms::SignerID __declspec(property(get=get_SignerID))  SignerID;

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_DigestAlgorithmID))  DigestAlgorithmID;

 ::StringW __declspec(property(get=get_DigestAlgOid))  DigestAlgOid;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_DigestAlgParams))  DigestAlgParams;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_EncryptionAlgorithmID))  EncryptionAlgorithmID;

 ::StringW __declspec(property(get=get_EncryptionAlgOid))  EncryptionAlgOid;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_EncryptionAlgParams))  EncryptionAlgParams;

 Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=get_SignedAttributes))  SignedAttributes;

 Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=get_UnsignedAttributes))  UnsignedAttributes;


// Methods

static Org::BouncyCastle::Cms::SignerInformation New_ctor(Org::BouncyCastle::Asn1::Cms::SignerInfo info, Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Cms::CmsProcessable content, Org::BouncyCastle::Cms::IDigestCalculator digestCalculator) ;

/// @brief Method .ctor addr 0x115adfc size 0x274 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::SignerInfo info, Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Cms::CmsProcessable content, Org::BouncyCastle::Cms::IDigestCalculator digestCalculator) ;

static Org::BouncyCastle::Cms::SignerInformation New_ctor(Org::BouncyCastle::Cms::SignerInformation baseInfo) ;

/// @brief Method .ctor addr 0x117de30 size 0x9c virtual false final false
 void _ctor(Org::BouncyCastle::Cms::SignerInformation baseInfo) ;

/// @brief Method get_IsCounterSignature addr 0x117decc size 0x8 virtual false final false
 bool get_IsCounterSignature() ;

/// @brief Method get_ContentType addr 0x117ded4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_ContentType() ;

/// @brief Method get_SignerID addr 0x117dedc size 0x8 virtual false final false
 Org::BouncyCastle::Cms::SignerID get_SignerID() ;

/// @brief Method get_Version addr 0x117dee4 size 0x24 virtual false final false
 int32_t get_Version() ;

/// @brief Method get_DigestAlgorithmID addr 0x117df08 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_DigestAlgorithmID() ;

/// @brief Method get_DigestAlgOid addr 0x117df10 size 0x2c virtual false final false
 ::StringW get_DigestAlgOid() ;

/// @brief Method get_DigestAlgParams addr 0x117df3c size 0x38 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object get_DigestAlgParams() ;

/// @brief Method GetContentDigest addr 0x117df74 size 0xc0 virtual false final false
 ::ArrayW<uint8_t> GetContentDigest() ;

/// @brief Method get_EncryptionAlgorithmID addr 0x117e034 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_EncryptionAlgorithmID() ;

/// @brief Method get_EncryptionAlgOid addr 0x117e03c size 0x2c virtual false final false
 ::StringW get_EncryptionAlgOid() ;

/// @brief Method get_EncryptionAlgParams addr 0x117e068 size 0x38 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object get_EncryptionAlgParams() ;

/// @brief Method get_SignedAttributes addr 0x117e0a0 size 0x78 virtual false final false
 Org::BouncyCastle::Asn1::Cms::AttributeTable get_SignedAttributes() ;

/// @brief Method get_UnsignedAttributes addr 0x117e118 size 0x78 virtual false final false
 Org::BouncyCastle::Asn1::Cms::AttributeTable get_UnsignedAttributes() ;

/// @brief Method GetSignature addr 0x1161e6c size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetSignature() ;

/// @brief Method GetCounterSignatures addr 0x117e190 size 0x88c virtual false final false
 Org::BouncyCastle::Cms::SignerInformationStore GetCounterSignatures() ;

/// @brief Method GetEncodedSignedAttributes addr 0x117ea1c size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetEncodedSignedAttributes() ;

/// @brief Method DoVerify addr 0x117ea78 size 0x12f4 virtual false final false
 bool DoVerify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method IsNull addr 0x1180610 size 0x84 virtual false final false
 bool IsNull(Org::BouncyCastle::Asn1::Asn1Encodable o) ;

/// @brief Method DerDecode addr 0x1180694 size 0xf8 virtual false final false
 Org::BouncyCastle::Asn1::X509::DigestInfo DerDecode(::ArrayW<uint8_t> encoding) ;

/// @brief Method VerifyDigest addr 0x117ff6c size 0x6a4 virtual false final false
 bool VerifyDigest(::ArrayW<uint8_t> digest, Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, ::ArrayW<uint8_t> signature) ;

/// @brief Method Verify addr 0x118078c size 0x98 virtual false final false
 bool Verify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

/// @brief Method Verify addr 0x1180964 size 0x70 virtual false final false
 bool Verify(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method ToSignerInfo addr 0x11809d4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::SignerInfo ToSignerInfo() ;

/// @brief Method GetSingleValuedSignedAttribute addr 0x117fd6c size 0x200 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object GetSingleValuedSignedAttribute(Org::BouncyCastle::Asn1::DerObjectIdentifier attrOID, ::StringW printableName) ;

/// @brief Method GetSigningTime addr 0x1180824 size 0x140 virtual false final false
 Org::BouncyCastle::Asn1::Cms::Time GetSigningTime() ;

/// @brief Method ReplaceUnsignedAttributes addr 0x11809dc size 0x134 virtual false final false
static Org::BouncyCastle::Cms::SignerInformation ReplaceUnsignedAttributes(Org::BouncyCastle::Cms::SignerInformation signerInformation, Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttributes) ;

/// @brief Method AddCounterSigners addr 0x1180b10 size 0x524 virtual false final false
static Org::BouncyCastle::Cms::SignerInformation AddCounterSigners(Org::BouncyCastle::Cms::SignerInformation signerInformation, Org::BouncyCastle::Cms::SignerInformationStore counterSigners) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::SignerInformation);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::SignerInformation, "Org.BouncyCastle.Cms", "SignerInformation");
