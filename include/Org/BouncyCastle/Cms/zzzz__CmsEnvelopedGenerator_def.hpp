#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KekIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Cms {
class CmsPbeKey;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedGenerator;
}
// Type: Org.BouncyCastle.Cms::CmsEnvelopedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(617))
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedGenerator
class CORDL_TYPE CmsEnvelopedGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CmsEnvelopedGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedGenerator", modifiers: " const&", def_value: None }]
constexpr CmsEnvelopedGenerator(CmsEnvelopedGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedGenerator", modifiers: "&&", def_value: None }]
constexpr CmsEnvelopedGenerator(CmsEnvelopedGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsEnvelopedGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsEnvelopedGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsEnvelopedGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsEnvelopedGenerator& operator=(CmsEnvelopedGenerator&& o) noexcept = default;
  constexpr CmsEnvelopedGenerator& operator=(CmsEnvelopedGenerator const& o) noexcept = default;
                


// Fields

/// @brief Field IdeaCbc offset 0
static constexpr ::ConstString  IdeaCbc{u"1.3.6.1.4.1.188.7.1.1.2"};

/// @brief Field Cast5Cbc offset 0
static constexpr ::ConstString  Cast5Cbc{u"1.2.840.113533.7.66.10"};

static ::ArrayW<int16_t> __declspec(property(get=__get_rc2Table, put=__set_rc2Table))  rc2Table;

static void __set_rc2Table(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_rc2Table() ;

static ::StringW __declspec(property(get=__get_DesEde3Cbc, put=__set_DesEde3Cbc))  DesEde3Cbc;

static void __set_DesEde3Cbc(::StringW value) ;

static ::StringW __get_DesEde3Cbc() ;

static ::StringW __declspec(property(get=__get_RC2Cbc, put=__set_RC2Cbc))  RC2Cbc;

static void __set_RC2Cbc(::StringW value) ;

static ::StringW __get_RC2Cbc() ;

static ::StringW __declspec(property(get=__get_Aes128Cbc, put=__set_Aes128Cbc))  Aes128Cbc;

static void __set_Aes128Cbc(::StringW value) ;

static ::StringW __get_Aes128Cbc() ;

static ::StringW __declspec(property(get=__get_Aes192Cbc, put=__set_Aes192Cbc))  Aes192Cbc;

static void __set_Aes192Cbc(::StringW value) ;

static ::StringW __get_Aes192Cbc() ;

static ::StringW __declspec(property(get=__get_Aes256Cbc, put=__set_Aes256Cbc))  Aes256Cbc;

static void __set_Aes256Cbc(::StringW value) ;

static ::StringW __get_Aes256Cbc() ;

static ::StringW __declspec(property(get=__get_Camellia128Cbc, put=__set_Camellia128Cbc))  Camellia128Cbc;

static void __set_Camellia128Cbc(::StringW value) ;

static ::StringW __get_Camellia128Cbc() ;

static ::StringW __declspec(property(get=__get_Camellia192Cbc, put=__set_Camellia192Cbc))  Camellia192Cbc;

static void __set_Camellia192Cbc(::StringW value) ;

static ::StringW __get_Camellia192Cbc() ;

static ::StringW __declspec(property(get=__get_Camellia256Cbc, put=__set_Camellia256Cbc))  Camellia256Cbc;

static void __set_Camellia256Cbc(::StringW value) ;

static ::StringW __get_Camellia256Cbc() ;

static ::StringW __declspec(property(get=__get_SeedCbc, put=__set_SeedCbc))  SeedCbc;

static void __set_SeedCbc(::StringW value) ;

static ::StringW __get_SeedCbc() ;

static ::StringW __declspec(property(get=__get_DesEde3Wrap, put=__set_DesEde3Wrap))  DesEde3Wrap;

static void __set_DesEde3Wrap(::StringW value) ;

static ::StringW __get_DesEde3Wrap() ;

static ::StringW __declspec(property(get=__get_Aes128Wrap, put=__set_Aes128Wrap))  Aes128Wrap;

static void __set_Aes128Wrap(::StringW value) ;

static ::StringW __get_Aes128Wrap() ;

static ::StringW __declspec(property(get=__get_Aes192Wrap, put=__set_Aes192Wrap))  Aes192Wrap;

static void __set_Aes192Wrap(::StringW value) ;

static ::StringW __get_Aes192Wrap() ;

static ::StringW __declspec(property(get=__get_Aes256Wrap, put=__set_Aes256Wrap))  Aes256Wrap;

static void __set_Aes256Wrap(::StringW value) ;

static ::StringW __get_Aes256Wrap() ;

static ::StringW __declspec(property(get=__get_Camellia128Wrap, put=__set_Camellia128Wrap))  Camellia128Wrap;

static void __set_Camellia128Wrap(::StringW value) ;

static ::StringW __get_Camellia128Wrap() ;

static ::StringW __declspec(property(get=__get_Camellia192Wrap, put=__set_Camellia192Wrap))  Camellia192Wrap;

static void __set_Camellia192Wrap(::StringW value) ;

static ::StringW __get_Camellia192Wrap() ;

static ::StringW __declspec(property(get=__get_Camellia256Wrap, put=__set_Camellia256Wrap))  Camellia256Wrap;

static void __set_Camellia256Wrap(::StringW value) ;

static ::StringW __get_Camellia256Wrap() ;

static ::StringW __declspec(property(get=__get_SeedWrap, put=__set_SeedWrap))  SeedWrap;

static void __set_SeedWrap(::StringW value) ;

static ::StringW __get_SeedWrap() ;

static ::StringW __declspec(property(get=__get_ECDHSha1Kdf, put=__set_ECDHSha1Kdf))  ECDHSha1Kdf;

static void __set_ECDHSha1Kdf(::StringW value) ;

static ::StringW __get_ECDHSha1Kdf() ;

static ::StringW __declspec(property(get=__get_ECMqvSha1Kdf, put=__set_ECMqvSha1Kdf))  ECMqvSha1Kdf;

static void __set_ECMqvSha1Kdf(::StringW value) ;

static ::StringW __get_ECMqvSha1Kdf() ;

 System::Collections::IList __declspec(property(get=__get_recipientInfoGenerators, put=__set_recipientInfoGenerators))  recipientInfoGenerators;

constexpr void __set_recipientInfoGenerators(System::Collections::IList value) ;

constexpr System::Collections::IList __get_recipientInfoGenerators() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_rand, put=__set_rand))  rand;

constexpr void __set_rand(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_rand() const;

 Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=__get_unprotectedAttributeGenerator, put=__set_unprotectedAttributeGenerator))  unprotectedAttributeGenerator;

constexpr void __set_unprotectedAttributeGenerator(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator __get_unprotectedAttributeGenerator() const;


// Properties

 Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=get_UnprotectedAttributeGenerator, put=set_UnprotectedAttributeGenerator))  UnprotectedAttributeGenerator;


// Methods

static Org::BouncyCastle::Cms::CmsEnvelopedGenerator New_ctor() ;

/// @brief Method .ctor addr 0x114e50c size 0x64 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Cms::CmsEnvelopedGenerator New_ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x114e570 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method get_UnprotectedAttributeGenerator addr 0x114e5ec size 0x8 virtual false final false
 Org::BouncyCastle::Cms::CmsAttributeTableGenerator get_UnprotectedAttributeGenerator() ;

/// @brief Method set_UnprotectedAttributeGenerator addr 0x114e5f4 size 0x8 virtual false final false
 void set_UnprotectedAttributeGenerator(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

/// @brief Method AddKeyTransRecipient addr 0x114e5fc size 0xf0 virtual false final false
 void AddKeyTransRecipient(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method AddKeyTransRecipient addr 0x114e6ec size 0x128 virtual false final false
 void AddKeyTransRecipient(Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, ::ArrayW<uint8_t> subKeyId) ;

/// @brief Method AddKekRecipient addr 0x114e814 size 0x94 virtual false final false
 void AddKekRecipient(::StringW keyAlgorithm, Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> keyIdentifier) ;

/// @brief Method AddKekRecipient addr 0x114e8a8 size 0x104 virtual false final false
 void AddKekRecipient(::StringW keyAlgorithm, Org::BouncyCastle::Crypto::Parameters::KeyParameter key, Org::BouncyCastle::Asn1::Cms::KekIdentifier kekIdentifier) ;

/// @brief Method AddPasswordRecipient addr 0x114e9ac size 0x1c0 virtual false final false
 void AddPasswordRecipient(Org::BouncyCastle::Cms::CmsPbeKey pbeKey, ::StringW kekAlgorithmOid) ;

/// @brief Method AddKeyAgreementRecipient addr 0x114eb6c size 0x120 virtual false final false
 void AddKeyAgreementRecipient(::StringW agreementAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPrivateKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPublicKey, Org::BouncyCastle::X509::X509Certificate recipientCert, ::StringW cekWrapAlgorithm) ;

/// @brief Method AddKeyAgreementRecipients addr 0x114ec8c size 0x248 virtual false final false
 void AddKeyAgreementRecipients(::StringW agreementAlgorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPrivateKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter senderPublicKey, System::Collections::ICollection recipientCerts, ::StringW cekWrapAlgorithm) ;

/// @brief Method AddRecipientInfoGenerator addr 0x114eed4 size 0xac virtual false final false
 void AddRecipientInfoGenerator(Org::BouncyCastle::Cms::RecipientInfoGenerator recipientInfoGenerator) ;

/// @brief Method GetAlgorithmIdentifier addr 0x114ef80 size 0x144 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetAlgorithmIdentifier(::StringW encryptionOid, Org::BouncyCastle::Crypto::Parameters::KeyParameter encKey, Org::BouncyCastle::Asn1::Asn1Encodable asn1Params, ByRef<Org::BouncyCastle::Crypto::ICipherParameters> cipherParameters) ;

/// @brief Method GenerateAsn1Parameters addr 0x114f0c4 size 0x238 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable GenerateAsn1Parameters(::StringW encryptionOid, ::ArrayW<uint8_t> encKeyBytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsEnvelopedGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsEnvelopedGenerator, "Org.BouncyCastle.Cms", "CmsEnvelopedGenerator");
