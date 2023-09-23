#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModuleState;
}
// Forward declare root types
namespace Tayx::Graphy::UI {
class IModifiableState;
}
// Type: Tayx.Graphy.UI::IModifiableState
namespace Tayx::Graphy::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15196))
// CS Name: Tayx.Graphy.UI.IModifiableState
class CORDL_TYPE IModifiableState : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IModifiableState() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IModifiableState(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetState addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetState(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModuleState newState, bool silentUpdate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::UI
NEED_NO_BOX(Tayx::Graphy::UI::IModifiableState);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::UI::IModifiableState, "Tayx.Graphy.UI", "IModifiableState");
