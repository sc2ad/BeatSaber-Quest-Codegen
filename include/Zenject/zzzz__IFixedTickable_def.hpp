#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Zenject {
class IFixedTickable;
}
// Type: Zenject::IFixedTickable
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15675))
// CS Name: Zenject.IFixedTickable
class CORDL_TYPE IFixedTickable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFixedTickable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFixedTickable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method FixedTick addr 0x0 size 0xffffffffffffffff virtual true final false
 void FixedTick() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::IFixedTickable);
DEFINE_IL2CPP_ARG_TYPE(Zenject::IFixedTickable, "Zenject", "IFixedTickable");
