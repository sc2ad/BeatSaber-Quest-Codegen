#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class NoInvitePlatformHandler;
}
// Type: ::NoInvitePlatformHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4504))
// CS Name: NoInvitePlatformHandler
class CORDL_TYPE NoInvitePlatformHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IInvitePlatformHandler
constexpr operator  GlobalNamespace::IInvitePlatformHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoInvitePlatformHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoInvitePlatformHandler", modifiers: " const&", def_value: None }]
constexpr NoInvitePlatformHandler(NoInvitePlatformHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoInvitePlatformHandler", modifiers: "&&", def_value: None }]
constexpr NoInvitePlatformHandler(NoInvitePlatformHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoInvitePlatformHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoInvitePlatformHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoInvitePlatformHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoInvitePlatformHandler& operator=(NoInvitePlatformHandler&& o) noexcept = default;
  constexpr NoInvitePlatformHandler& operator=(NoInvitePlatformHandler const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_isSupported))  isSupported;


// Methods

/// @brief Method get_isSupported addr 0x21f3020 size 0x8 virtual true final true
 bool get_isSupported() ;

/// @brief Method OpenInvitePanel addr 0x21f3028 size 0x40 virtual true final true
 void OpenInvitePanel() ;

static GlobalNamespace::NoInvitePlatformHandler New_ctor() ;

/// @brief Method .ctor addr 0x21f3068 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoInvitePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoInvitePlatformHandler, "", "NoInvitePlatformHandler");
