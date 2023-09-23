#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System::Text {
class StringBuilder;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class ModifierSpec;
}
// Type: System::ModifierSpec
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2632))
// CS Name: System.ModifierSpec
class CORDL_TYPE ModifierSpec : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ModifierSpec() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModifierSpec(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Resolve addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type Resolve(System::Type type) ;

/// @brief Method Append addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Text::StringBuilder Append(System::Text::StringBuilder sb) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ModifierSpec);
DEFINE_IL2CPP_ARG_TYPE(System::ModifierSpec, "System", "ModifierSpec");
