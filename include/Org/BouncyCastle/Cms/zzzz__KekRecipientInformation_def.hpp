#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__RecipientInformation_def.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1::Cms {
class KekRecipientInfo;
}
namespace Org::BouncyCastle::Cms {
class CmsTypedStream;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class KekRecipientInformation;
}
// Type: Org.BouncyCastle.Cms::KekRecipientInformation
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(671))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(672))
// CS Name: Org.BouncyCastle.Cms.KekRecipientInformation
class CORDL_TYPE KekRecipientInformation : public ::Org::BouncyCastle::Cms::RecipientInformation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~KekRecipientInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "KekRecipientInformation", modifiers: " const&", def_value: None }]
constexpr KekRecipientInformation(KekRecipientInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KekRecipientInformation", modifiers: "&&", def_value: None }]
constexpr KekRecipientInformation(KekRecipientInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KekRecipientInformation(void* ptr) noexcept : ::Org::BouncyCastle::Cms::RecipientInformation(ptr) {
}


  constexpr KekRecipientInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KekRecipientInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KekRecipientInformation& operator=(KekRecipientInformation&& o) noexcept = default;
  constexpr KekRecipientInformation& operator=(KekRecipientInformation const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo __declspec(property(get=__get_info, put=__set_info))  info;

constexpr void __set_info(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo __get_info() const;


// Methods

// Ctor Parameters [CppParam { name: "info", ty: "::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo", modifiers: "", def_value: None }, CppParam { name: "secureReadable", ty: "::Org::BouncyCastle::Cms::CmsSecureReadable", modifiers: "", def_value: None }]
explicit KekRecipientInformation(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo info, ::Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method .ctor addr 0x1158768 size 0xb4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo info, ::Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method GetContentStream addr 0x1177588 size 0x338 virtual true final false
 ::Org::BouncyCastle::Cms::CmsTypedStream GetContentStream(::Org::BouncyCastle::Crypto::ICipherParameters key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::KekRecipientInformation);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::KekRecipientInformation, "Org.BouncyCastle.Cms", "KekRecipientInformation");
