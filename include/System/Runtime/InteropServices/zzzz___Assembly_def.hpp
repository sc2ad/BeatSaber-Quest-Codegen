#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace System::Runtime::InteropServices {
class _Assembly;
}
// Type: System.Runtime.InteropServices::_Assembly
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3336))
// CS Name: System.Runtime.InteropServices._Assembly
class CORDL_TYPE _Assembly : public ::cordl_internals::InterfaceW {
public:
// Declarations
~_Assembly() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit _Assembly(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::_Assembly);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::_Assembly, "System.Runtime.InteropServices", "_Assembly");
