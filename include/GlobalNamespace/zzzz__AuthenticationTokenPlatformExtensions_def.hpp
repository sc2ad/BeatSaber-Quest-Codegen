#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__UserInfo__Platform;
}
// Forward declare root types
namespace GlobalNamespace {
class AuthenticationTokenPlatformExtensions;
}
// Type: ::AuthenticationTokenPlatformExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4531))
// CS Name: AuthenticationTokenPlatformExtensions
class CORDL_TYPE AuthenticationTokenPlatformExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AuthenticationTokenPlatformExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationTokenPlatformExtensions", modifiers: " const&", def_value: None }]
constexpr AuthenticationTokenPlatformExtensions(AuthenticationTokenPlatformExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationTokenPlatformExtensions", modifiers: "&&", def_value: None }]
constexpr AuthenticationTokenPlatformExtensions(AuthenticationTokenPlatformExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticationTokenPlatformExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AuthenticationTokenPlatformExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticationTokenPlatformExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticationTokenPlatformExtensions& operator=(AuthenticationTokenPlatformExtensions&& o) noexcept = default;
  constexpr AuthenticationTokenPlatformExtensions& operator=(AuthenticationTokenPlatformExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToAuthenticationTokenPlatform addr 0x220192c size 0x28 virtual false final false
static ::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform ToAuthenticationTokenPlatform(::GlobalNamespace::____GlobalNamespace__UserInfo__Platform platform) ;

/// @brief Method ToUserInfoPlatform addr 0x2201954 size 0x2c virtual false final false
static ::GlobalNamespace::____GlobalNamespace__UserInfo__Platform ToUserInfoPlatform(::GlobalNamespace::____GlobalNamespace__AuthenticationToken__Platform platform) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::AuthenticationTokenPlatformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationTokenPlatformExtensions, "", "AuthenticationTokenPlatformExtensions");
