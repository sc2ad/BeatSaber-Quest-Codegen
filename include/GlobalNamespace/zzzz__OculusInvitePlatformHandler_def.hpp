#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusInvitePlatformHandler;
}
// Type: ::OculusInvitePlatformHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4505))
// CS Name: OculusInvitePlatformHandler
class CORDL_TYPE OculusInvitePlatformHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IInvitePlatformHandler
constexpr operator  ::GlobalNamespace::IInvitePlatformHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OculusInvitePlatformHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusInvitePlatformHandler", modifiers: " const&", def_value: None }]
constexpr OculusInvitePlatformHandler(OculusInvitePlatformHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusInvitePlatformHandler", modifiers: "&&", def_value: None }]
constexpr OculusInvitePlatformHandler(OculusInvitePlatformHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusInvitePlatformHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusInvitePlatformHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusInvitePlatformHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusInvitePlatformHandler& operator=(OculusInvitePlatformHandler&& o) noexcept = default;
  constexpr OculusInvitePlatformHandler& operator=(OculusInvitePlatformHandler const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_isSupported))  isSupported;


// Methods

/// @brief Method get_isSupported addr 0x21f3070 size 0x8 virtual true final true
 bool get_isSupported() ;

/// @brief Method OpenInvitePanel addr 0x21f3078 size 0x60 virtual true final true
 void OpenInvitePanel() ;

// Ctor Parameters []
explicit OculusInvitePlatformHandler() ;

/// @brief Method .ctor addr 0x21f30d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OculusInvitePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusInvitePlatformHandler, "", "OculusInvitePlatformHandler");
