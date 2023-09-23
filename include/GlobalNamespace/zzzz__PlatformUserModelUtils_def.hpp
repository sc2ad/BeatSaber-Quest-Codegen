#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class PlatformUserModelUtils;
}
// Type: ::PlatformUserModelUtils
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4705))
// CS Name: PlatformUserModelUtils
class CORDL_TYPE PlatformUserModelUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlatformUserModelUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformUserModelUtils", modifiers: " const&", def_value: None }]
constexpr PlatformUserModelUtils(PlatformUserModelUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformUserModelUtils", modifiers: "&&", def_value: None }]
constexpr PlatformUserModelUtils(PlatformUserModelUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformUserModelUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformUserModelUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformUserModelUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformUserModelUtils& operator=(PlatformUserModelUtils&& o) noexcept = default;
  constexpr PlatformUserModelUtils& operator=(PlatformUserModelUtils const& o) noexcept = default;
                


// Fields

/// @brief Field kMinimalTokenLength offset 0
static constexpr int32_t  kMinimalTokenLength{64};


// Methods

/// @brief Method ValidateXPlatformAccessToken addr 0x2211370 size 0x14 virtual false final false
static bool ValidateXPlatformAccessToken(::StringW token) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlatformUserModelUtils);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserModelUtils, "", "PlatformUserModelUtils");
