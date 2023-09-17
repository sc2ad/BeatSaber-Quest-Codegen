#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorPublicKey;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyAgreeRecipientInfoGenerator;
}
// Type: Org.BouncyCastle.Cms::KeyAgreeRecipientInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(673))
// CS Name: Org.BouncyCastle.Cms.KeyAgreeRecipientInfoGenerator
class CORDL_TYPE KeyAgreeRecipientInfoGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::RecipientInfoGenerator
constexpr operator  ::Org::BouncyCastle::Cms::RecipientInfoGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KeyAgreeRecipientInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfoGenerator", modifiers: " const&", def_value: None }]
constexpr KeyAgreeRecipientInfoGenerator(KeyAgreeRecipientInfoGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyAgreeRecipientInfoGenerator", modifiers: "&&", def_value: None }]
constexpr KeyAgreeRecipientInfoGenerator(KeyAgreeRecipientInfoGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyAgreeRecipientInfoGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyAgreeRecipientInfoGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyAgreeRecipientInfoGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyAgreeRecipientInfoGenerator& operator=(KeyAgreeRecipientInfoGenerator&& o) noexcept = default;
  constexpr KeyAgreeRecipientInfoGenerator& operator=(KeyAgreeRecipientInfoGenerator const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Cms::CmsEnvelopedHelper __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper value) ;

static ::Org::BouncyCastle::Cms::CmsEnvelopedHelper __get_Helper() ;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_keyAgreementOID, put=__set_keyAgreementOID))  keyAgreementOID;

constexpr void __set_keyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_keyAgreementOID() const;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_keyEncryptionOID, put=__set_keyEncryptionOID))  keyEncryptionOID;

constexpr void __set_keyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_keyEncryptionOID() const;

 ::System::Collections::IList __declspec(property(get=__get_recipientCerts, put=__set_recipientCerts))  recipientCerts;

constexpr void __set_recipientCerts(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_recipientCerts() const;

 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair __declspec(property(get=__get_senderKeyPair, put=__set_senderKeyPair))  senderKeyPair;

constexpr void __set_senderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair __get_senderKeyPair() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(put=set_KeyAgreementOID))  KeyAgreementOID;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(put=set_KeyEncryptionOID))  KeyEncryptionOID;

 ::System::Collections::ICollection __declspec(property(put=set_RecipientCerts))  RecipientCerts;

 ::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair __declspec(property(put=set_SenderKeyPair))  SenderKeyPair;


// Methods

// Ctor Parameters []
explicit KeyAgreeRecipientInfoGenerator() ;

/// @brief Method .ctor addr 0x11778c0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method set_KeyAgreementOID addr 0x11778c8 size 0x8 virtual false final false
 void set_KeyAgreementOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

/// @brief Method set_KeyEncryptionOID addr 0x11778d0 size 0x8 virtual false final false
 void set_KeyEncryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

/// @brief Method set_RecipientCerts addr 0x11778d8 size 0x6c virtual false final false
 void set_RecipientCerts(::System::Collections::ICollection value) ;

/// @brief Method set_SenderKeyPair addr 0x1177944 size 0x8 virtual false final false
 void set_SenderKeyPair(::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair value) ;

/// @brief Method Generate addr 0x117794c size 0x11f8 virtual true final true
 ::Org::BouncyCastle::Asn1::Cms::RecipientInfo Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CreateOriginatorPublicKey addr 0x1178b44 size 0x120 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::OriginatorPublicKey CreateOriginatorPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KeyAgreeRecipientInfoGenerator, "Org.BouncyCastle.Cms", "KeyAgreeRecipientInfoGenerator");
