#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Asn1::Cms {
class PasswordRecipientInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class PasswordRecipientInformation;
}
// Type: Org.BouncyCastle.Cms::PasswordRecipientInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(671))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(683))
// CS Name: Org.BouncyCastle.Cms.PasswordRecipientInformation
class CORDL_TYPE PasswordRecipientInformation : public Org::BouncyCastle::Cms::RecipientInformation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PasswordRecipientInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInformation", modifiers: " const&", def_value: None }]
constexpr PasswordRecipientInformation(PasswordRecipientInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PasswordRecipientInformation", modifiers: "&&", def_value: None }]
constexpr PasswordRecipientInformation(PasswordRecipientInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PasswordRecipientInformation(void* ptr) noexcept : Org::BouncyCastle::Cms::RecipientInformation(ptr) {
}


  constexpr PasswordRecipientInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PasswordRecipientInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PasswordRecipientInformation& operator=(PasswordRecipientInformation&& o) noexcept = default;
  constexpr PasswordRecipientInformation& operator=(PasswordRecipientInformation const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo __get_info() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_KeyDerivationAlgorithm))  KeyDerivationAlgorithm;


// Methods

static Org::BouncyCastle::Cms::PasswordRecipientInformation New_ctor(Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method .ctor addr 0x1158d98 size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::PasswordRecipientInfo info, Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method get_KeyDerivationAlgorithm addr 0x117c92c size 0x1c virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_KeyDerivationAlgorithm() ;

/// @brief Method GetContentStream addr 0x117c948 size 0x574 virtual true final false
 Org::BouncyCastle::Cms::CmsTypedStream GetContentStream(Org::BouncyCastle::Crypto::ICipherParameters key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::PasswordRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::PasswordRecipientInformation, "Org.BouncyCastle.Cms", "PasswordRecipientInformation");
