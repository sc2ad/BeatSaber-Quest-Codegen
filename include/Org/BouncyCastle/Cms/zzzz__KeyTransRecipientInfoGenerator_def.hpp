#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyTransRecipientInfoGenerator;
}
// Type: Org.BouncyCastle.Cms::KeyTransRecipientInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(675))
// CS Name: Org.BouncyCastle.Cms.KeyTransRecipientInfoGenerator
class CORDL_TYPE KeyTransRecipientInfoGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Cms::RecipientInfoGenerator
constexpr operator  Org::BouncyCastle::Cms::RecipientInfoGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~KeyTransRecipientInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInfoGenerator", modifiers: " const&", def_value: None }]
constexpr KeyTransRecipientInfoGenerator(KeyTransRecipientInfoGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInfoGenerator", modifiers: "&&", def_value: None }]
constexpr KeyTransRecipientInfoGenerator(KeyTransRecipientInfoGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyTransRecipientInfoGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyTransRecipientInfoGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyTransRecipientInfoGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyTransRecipientInfoGenerator& operator=(KeyTransRecipientInfoGenerator&& o) noexcept = default;
  constexpr KeyTransRecipientInfoGenerator& operator=(KeyTransRecipientInfoGenerator const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Cms::CmsEnvelopedHelper __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(Org::BouncyCastle::Cms::CmsEnvelopedHelper value) ;

static Org::BouncyCastle::Cms::CmsEnvelopedHelper __get_Helper() ;

 Org::BouncyCastle::Asn1::X509::TbsCertificateStructure __declspec(property(get=__get_recipientTbsCert, put=__set_recipientTbsCert))  recipientTbsCert;

constexpr void __set_recipientTbsCert(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure value) ;

constexpr Org::BouncyCastle::Asn1::X509::TbsCertificateStructure __get_recipientTbsCert() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_recipientPublicKey, put=__set_recipientPublicKey))  recipientPublicKey;

constexpr void __set_recipientPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_recipientPublicKey() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_subjectKeyIdentifier, put=__set_subjectKeyIdentifier))  subjectKeyIdentifier;

constexpr void __set_subjectKeyIdentifier(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_subjectKeyIdentifier() const;

 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __get_info() const;

 Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber __declspec(property(get=__get_issuerAndSerialNumber, put=__set_issuerAndSerialNumber))  issuerAndSerialNumber;

constexpr void __set_issuerAndSerialNumber(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber value) ;

constexpr Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber __get_issuerAndSerialNumber() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Properties

 Org::BouncyCastle::X509::X509Certificate __declspec(property(put=set_RecipientCert))  RecipientCert;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(put=set_RecipientPublicKey))  RecipientPublicKey;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(put=set_SubjectKeyIdentifier))  SubjectKeyIdentifier;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_AlgorithmDetails))  AlgorithmDetails;


// Methods

// Ctor Parameters []
explicit KeyTransRecipientInfoGenerator() ;

/// @brief Method .ctor addr 0x117987c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "issuerAndSerialNumber", ty: "Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber", modifiers: "", def_value: None }]
explicit KeyTransRecipientInfoGenerator(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber issuerAndSerialNumber) ;

/// @brief Method .ctor addr 0x1179884 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber issuerAndSerialNumber) ;

// Ctor Parameters [CppParam { name: "subjectKeyIdentifier", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit KeyTransRecipientInfoGenerator(::ArrayW<uint8_t> subjectKeyIdentifier) ;

/// @brief Method .ctor addr 0x11798ac size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> subjectKeyIdentifier) ;

/// @brief Method set_RecipientCert addr 0x1179928 size 0x58 virtual false final false
 void set_RecipientCert(Org::BouncyCastle::X509::X509Certificate value) ;

/// @brief Method set_RecipientPublicKey addr 0x1179980 size 0xdc virtual false final false
 void set_RecipientPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

/// @brief Method set_SubjectKeyIdentifier addr 0x1179a5c size 0x8 virtual false final false
 void set_SubjectKeyIdentifier(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

/// @brief Method Generate addr 0x1179a64 size 0x1c0 virtual true final true
 Org::BouncyCastle::Asn1::Cms::RecipientInfo Generate(Org::BouncyCastle::Crypto::Parameters::KeyParameter contentEncryptionKey, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method get_AlgorithmDetails addr 0x1179c24 size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_AlgorithmDetails() ;

/// @brief Method GenerateWrappedKey addr 0x1179c40 size 0x1dc virtual true final false
 ::ArrayW<uint8_t> GenerateWrappedKey(Org::BouncyCastle::Crypto::Parameters::KeyParameter contentEncryptionKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::KeyTransRecipientInfoGenerator, "Org.BouncyCastle.Cms", "KeyTransRecipientInfoGenerator");
