#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace Tayx::Graphy {
struct Tayx__Graphy__GraphyManager__ModulePosition;
}
// Forward declare root types
namespace Tayx::Graphy::UI {
class IMovable;
}
// Type: Tayx.Graphy.UI::IMovable
namespace Tayx::Graphy::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15197))
// CS Name: Tayx.Graphy.UI.IMovable
class CORDL_TYPE IMovable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMovable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMovable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetPosition addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetPosition(Tayx::Graphy::Tayx__Graphy__GraphyManager__ModulePosition newModulePosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::UI
NEED_NO_BOX(Tayx::Graphy::UI::IMovable);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::UI::IMovable, "Tayx.Graphy.UI", "IMovable");
