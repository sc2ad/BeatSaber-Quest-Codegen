#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
// Type: ::IRichPresencePlatformHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4795))
// CS Name: IRichPresencePlatformHandler
class CORDL_TYPE IRichPresencePlatformHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IRichPresencePlatformHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IRichPresencePlatformHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetPresence addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetPresence(::GlobalNamespace::IRichPresenceData richPresenceData) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IRichPresencePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRichPresencePlatformHandler, "", "IRichPresencePlatformHandler");
