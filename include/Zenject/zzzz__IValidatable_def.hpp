#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Zenject {
class IValidatable;
}
// Type: Zenject::IValidatable
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11307))
// CS Name: Zenject.IValidatable
class CORDL_TYPE IValidatable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IValidatable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IValidatable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Validate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::IValidatable);
DEFINE_IL2CPP_ARG_TYPE(Zenject::IValidatable, "Zenject", "IValidatable");
