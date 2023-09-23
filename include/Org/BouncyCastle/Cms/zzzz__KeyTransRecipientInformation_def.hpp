#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KeyTransRecipientInfo;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KeyTransRecipientInformation;
}
// Type: Org.BouncyCastle.Cms::KeyTransRecipientInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(671))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(676))
// CS Name: Org.BouncyCastle.Cms.KeyTransRecipientInformation
class CORDL_TYPE KeyTransRecipientInformation : public Org::BouncyCastle::Cms::RecipientInformation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~KeyTransRecipientInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInformation", modifiers: " const&", def_value: None }]
constexpr KeyTransRecipientInformation(KeyTransRecipientInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyTransRecipientInformation", modifiers: "&&", def_value: None }]
constexpr KeyTransRecipientInformation(KeyTransRecipientInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyTransRecipientInformation(void* ptr) noexcept : Org::BouncyCastle::Cms::RecipientInformation(ptr) {
}


  constexpr KeyTransRecipientInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyTransRecipientInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyTransRecipientInformation& operator=(KeyTransRecipientInformation&& o) noexcept = default;
  constexpr KeyTransRecipientInformation& operator=(KeyTransRecipientInformation const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo __get_info() const;


// Methods

// Ctor Parameters [CppParam { name: "info", ty: "Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo", modifiers: "", def_value: None }, CppParam { name: "secureReadable", ty: "Org::BouncyCastle::Cms::CmsSecureReadable", modifiers: "", def_value: None }]
explicit KeyTransRecipientInformation(Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method .ctor addr 0x115854c size 0x21c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::KeyTransRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method GetExchangeEncryptionAlgorithmName addr 0x1179e94 size 0x1c4 virtual false final false
 ::StringW GetExchangeEncryptionAlgorithmName(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algo) ;

/// @brief Method UnwrapKey addr 0x117a058 size 0x388 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter UnwrapKey(Org::BouncyCastle::Crypto::ICipherParameters key) ;

/// @brief Method GetContentStream addr 0x117a3e0 size 0x1c virtual true final false
 Org::BouncyCastle::Cms::CmsTypedStream GetContentStream(Org::BouncyCastle::Crypto::ICipherParameters key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::KeyTransRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::KeyTransRecipientInformation, "Org.BouncyCastle.Cms", "KeyTransRecipientInformation");
