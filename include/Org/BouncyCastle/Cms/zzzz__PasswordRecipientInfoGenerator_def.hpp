#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class PasswordRecipientInfoGenerator;
}
// Type: Org.BouncyCastle.Cms::PasswordRecipientInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(682))
// CS Name: Org.BouncyCastle.Cms.PasswordRecipientInfoGenerator
class CORDL_TYPE PasswordRecipientInfoGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Cms::RecipientInfoGenerator
constexpr operator  Org::BouncyCastle::Cms::RecipientInfoGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PasswordRecipientInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfoGenerator", modifiers: " const&", def_value: None }]
constexpr PasswordRecipientInfoGenerator(PasswordRecipientInfoGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInfoGenerator", modifiers: "&&", def_value: None }]
constexpr PasswordRecipientInfoGenerator(PasswordRecipientInfoGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PasswordRecipientInfoGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PasswordRecipientInfoGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PasswordRecipientInfoGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PasswordRecipientInfoGenerator& operator=(PasswordRecipientInfoGenerator&& o) noexcept = default;
  constexpr PasswordRecipientInfoGenerator& operator=(PasswordRecipientInfoGenerator const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Cms::CmsEnvelopedHelper __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(Org::BouncyCastle::Cms::CmsEnvelopedHelper value) ;

static Org::BouncyCastle::Cms::CmsEnvelopedHelper __get_Helper() ;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_keyDerivationAlgorithm, put=__set_keyDerivationAlgorithm))  keyDerivationAlgorithm;

constexpr void __set_keyDerivationAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_keyDerivationAlgorithm() const;

 Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(get=__get_keyEncryptionKey, put=__set_keyEncryptionKey))  keyEncryptionKey;

constexpr void __set_keyEncryptionKey(Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::KeyParameter __get_keyEncryptionKey() const;

 ::StringW __declspec(property(get=__get_keyEncryptionKeyOID, put=__set_keyEncryptionKeyOID))  keyEncryptionKeyOID;

constexpr void __set_keyEncryptionKeyOID(::StringW value) ;

constexpr ::StringW __get_keyEncryptionKeyOID() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(put=set_KeyDerivationAlgorithm))  KeyDerivationAlgorithm;

 Org::BouncyCastle::Crypto::Parameters::KeyParameter __declspec(property(put=set_KeyEncryptionKey))  KeyEncryptionKey;

 ::StringW __declspec(property(put=set_KeyEncryptionKeyOID))  KeyEncryptionKeyOID;


// Methods

// Ctor Parameters []
explicit PasswordRecipientInfoGenerator() ;

/// @brief Method .ctor addr 0x117c3d8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method set_KeyDerivationAlgorithm addr 0x117c3e0 size 0x8 virtual false final false
 void set_KeyDerivationAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

/// @brief Method set_KeyEncryptionKey addr 0x117c3e8 size 0x8 virtual false final false
 void set_KeyEncryptionKey(Org::BouncyCastle::Crypto::Parameters::KeyParameter value) ;

/// @brief Method set_KeyEncryptionKeyOID addr 0x117c3f0 size 0x8 virtual false final false
 void set_KeyEncryptionKeyOID(::StringW value) ;

/// @brief Method Generate addr 0x117c3f8 size 0x4bc virtual true final true
 Org::BouncyCastle::Asn1::Cms::RecipientInfo Generate(Org::BouncyCastle::Crypto::Parameters::KeyParameter contentEncryptionKey, Org::BouncyCastle::Security::SecureRandom random) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::PasswordRecipientInfoGenerator, "Org.BouncyCastle.Cms", "PasswordRecipientInfoGenerator");
