#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace GlobalNamespace {
class IReturnToMenuController;
}
// Type: ::IReturnToMenuController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5169))
// CS Name: IReturnToMenuController
class CORDL_TYPE IReturnToMenuController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IReturnToMenuController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReturnToMenuController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ReturnToMenu addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReturnToMenu() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IReturnToMenuController, "", "IReturnToMenuController");
