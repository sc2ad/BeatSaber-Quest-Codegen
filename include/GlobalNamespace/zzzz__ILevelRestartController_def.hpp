#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace GlobalNamespace {
class ILevelRestartController;
}
// Type: ::ILevelRestartController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5168))
// CS Name: ILevelRestartController
class CORDL_TYPE ILevelRestartController : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILevelRestartController() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILevelRestartController(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method RestartLevel addr 0x0 size 0xffffffffffffffff virtual true final false
 void RestartLevel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ILevelRestartController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILevelRestartController, "", "ILevelRestartController");
