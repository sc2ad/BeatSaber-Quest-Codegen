#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace Zenject {
class IGuiRenderable;
}
// Type: Zenject::IGuiRenderable
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15646))
// CS Name: Zenject.IGuiRenderable
class CORDL_TYPE IGuiRenderable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGuiRenderable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGuiRenderable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GuiRender addr 0x0 size 0xffffffffffffffff virtual true final false
 void GuiRender() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IGuiRenderable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IGuiRenderable, "Zenject", "IGuiRenderable");
