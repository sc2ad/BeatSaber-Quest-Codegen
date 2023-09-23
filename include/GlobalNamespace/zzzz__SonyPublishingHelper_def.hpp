#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class SonyPublisherSKUSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyPublishingHelper;
}
// Type: ::SonyPublishingHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4690))
// CS Name: SonyPublishingHelper
class CORDL_TYPE SonyPublishingHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SonyPublishingHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyPublishingHelper", modifiers: " const&", def_value: None }]
constexpr SonyPublishingHelper(SonyPublishingHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SonyPublishingHelper", modifiers: "&&", def_value: None }]
constexpr SonyPublishingHelper(SonyPublishingHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SonyPublishingHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SonyPublishingHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SonyPublishingHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SonyPublishingHelper& operator=(SonyPublishingHelper&& o) noexcept = default;
  constexpr SonyPublishingHelper& operator=(SonyPublishingHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetServiceId addr 0x221c2d0 size 0x28 virtual false final false
static ::StringW GetServiceId(GlobalNamespace::SonyPublisherSKUSettingsSO sonyPublisherSKUSettings) ;

/// @brief Method GetContentId addr 0x221c318 size 0x20 virtual false final false
static ::StringW GetContentId(GlobalNamespace::SonyPublisherSKUSettingsSO sonyPublisherSKUSettings) ;

/// @brief Method GetContentId addr 0x221c36c size 0x5c virtual false final false
static ::StringW GetContentId(::StringW serviceId, ::StringW productLabel) ;

/// @brief Method GetContentIdFromTitleId addr 0x221c338 size 0x34 virtual false final false
static ::StringW GetContentIdFromTitleId(::StringW serviceIdPrefix, ::StringW titleId, ::StringW productLabel) ;

/// @brief Method GetContentIdFromNpTitleId addr 0x221c3c8 size 0x18 virtual false final false
static ::StringW GetContentIdFromNpTitleId(::StringW serviceIdPrefix, ::StringW npTitleId, ::StringW productLabel) ;

/// @brief Method GetNpTitleId addr 0x221c43c size 0x4c virtual false final false
static ::StringW GetNpTitleId(::StringW titleId) ;

/// @brief Method GetServiceIdFromTitleId addr 0x221c2f8 size 0x20 virtual false final false
static ::StringW GetServiceIdFromTitleId(::StringW serviceIdPrefix, ::StringW titleId) ;

/// @brief Method GetServiceIdFromNpTitleId addr 0x221c3e0 size 0x5c virtual false final false
static ::StringW GetServiceIdFromNpTitleId(::StringW serviceIdPrefix, ::StringW npTitleId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SonyPublishingHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SonyPublishingHelper, "", "SonyPublishingHelper");
