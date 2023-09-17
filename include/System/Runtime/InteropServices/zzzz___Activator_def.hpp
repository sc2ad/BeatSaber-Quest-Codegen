#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::InteropServices {
class _Activator;
}
// Type: System.Runtime.InteropServices::_Activator
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3335))
// CS Name: System.Runtime.InteropServices._Activator
class CORDL_TYPE _Activator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~_Activator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit _Activator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::_Activator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::_Activator, "System.Runtime.InteropServices", "_Activator");
