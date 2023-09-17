#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Type: ::IInvitePlatformHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4503))
// CS Name: IInvitePlatformHandler
class CORDL_TYPE IInvitePlatformHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInvitePlatformHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInvitePlatformHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_isSupported))  isSupported;


// Methods

/// @brief Method get_isSupported addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isSupported() ;

/// @brief Method OpenInvitePanel addr 0x0 size 0xffffffffffffffff virtual true final false
 void OpenInvitePanel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IInvitePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IInvitePlatformHandler, "", "IInvitePlatformHandler");
