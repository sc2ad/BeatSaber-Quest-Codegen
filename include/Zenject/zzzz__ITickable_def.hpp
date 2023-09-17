#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace Zenject {
class ITickable;
}
// Type: Zenject::ITickable
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15674))
// CS Name: Zenject.ITickable
class CORDL_TYPE ITickable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITickable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITickable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Tick addr 0x0 size 0xffffffffffffffff virtual true final false
 void Tick() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ITickable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ITickable, "Zenject", "ITickable");
