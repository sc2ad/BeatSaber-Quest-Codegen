#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Zenject {
class ILateTickable;
}
// Type: Zenject::ILateTickable
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15676))
// CS Name: Zenject.ILateTickable
class CORDL_TYPE ILateTickable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILateTickable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILateTickable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method LateTick addr 0x0 size 0xffffffffffffffff virtual true final false
 void LateTick() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ILateTickable);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ILateTickable, "Zenject", "ILateTickable");
