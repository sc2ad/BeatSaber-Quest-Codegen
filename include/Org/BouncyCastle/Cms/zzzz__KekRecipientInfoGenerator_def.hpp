#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KekIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KekRecipientInfoGenerator;
}
// Type: Org.BouncyCastle.Cms::KekRecipientInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(670))
// CS Name: Org.BouncyCastle.Cms.KekRecipientInfoGenerator
class CORDL_TYPE KekRecipientInfoGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::RecipientInfoGenerator
constexpr operator  ::Org::BouncyCastle::Cms::RecipientInfoGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KekRecipientInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "KekRecipientInfoGenerator", modifiers: " const&", def_value: None }]
constexpr KekRecipientInfoGenerator(KekRecipientInfoGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KekRecipientInfoGenerator", modifiers: "&&", def_value: None }]
constexpr KekRecipientInfoGenerator(KekRecipientInfoGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KekRecipientInfoGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KekRecipientInfoGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KekRecipientInfoGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KekRecipientInfoGenerator& operator=(KekRecipientInfoGenerator&& o) noexcept = default;
  constexpr KekRecipientInfoGenerator& operator=(KekRecipientInfoGenerator const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Cms::CmsEnvelopedHelper __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(::Org::BouncyCastle::Cms::CmsEnvelopedHelper value) ;

static ::Org::BouncyCastle::Cms::CmsEnvelopedHelper __get_Helper() ;

 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_keyEncryptionKey, put=__set_keyEncryptionKey))  keyEncryptionKey;

constexpr void __set_keyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_keyEncryptionKey() const;

 ::StringW __declspec(property(get=__get_keyEncryptionKeyOID, put=__set_keyEncryptionKeyOID))  keyEncryptionKeyOID;

constexpr void __set_keyEncryptionKeyOID(::StringW value) ;

constexpr ::StringW __get_keyEncryptionKeyOID() const;

 ::Org::BouncyCastle::Asn1::Cms::KekIdentifier __declspec(property(get=__get_kekIdentifier, put=__set_kekIdentifier))  kekIdentifier;

constexpr void __set_kekIdentifier(::Org::BouncyCastle::Asn1::Cms::KekIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::KekIdentifier __get_kekIdentifier() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_keyEncryptionAlgorithm, put=__set_keyEncryptionAlgorithm))  keyEncryptionAlgorithm;

constexpr void __set_keyEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_keyEncryptionAlgorithm() const;


// Properties

 ::Org::BouncyCastle::Asn1::Cms::KekIdentifier __declspec(property(put=set_KekIdentifier))  KekIdentifier;

 ::Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(put=set_KeyEncryptionKey))  KeyEncryptionKey;

 ::StringW __declspec(property(put=set_KeyEncryptionKeyOID))  KeyEncryptionKeyOID;


// Methods

// Ctor Parameters []
explicit KekRecipientInfoGenerator() ;

/// @brief Method .ctor addr 0x11766b0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method set_KekIdentifier addr 0x11766b8 size 0x8 virtual false final false
 void set_KekIdentifier(::Org::BouncyCastle::Asn1::Cms::KekIdentifier value) ;

/// @brief Method set_KeyEncryptionKey addr 0x11766c0 size 0x74 virtual false final false
 void set_KeyEncryptionKey(::Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

/// @brief Method set_KeyEncryptionKeyOID addr 0x1176bb4 size 0x8 virtual false final false
 void set_KeyEncryptionKeyOID(::StringW value) ;

/// @brief Method Generate addr 0x1176bbc size 0x288 virtual true final true
 ::Org::BouncyCastle::Asn1::Cms::RecipientInfo Generate(::Org::BouncyCastle::Crypto::Parameters::KeyParameter contentEncryptionKey, ::Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method DetermineKeyEncAlg addr 0x1176734 size 0x480 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier DetermineKeyEncAlg(::StringW algorithm, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::KekRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KekRecipientInfoGenerator, "Org.BouncyCastle.Cms", "KekRecipientInfoGenerator");
