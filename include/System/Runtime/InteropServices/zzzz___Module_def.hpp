#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::InteropServices {
class _Module;
}
// Type: System.Runtime.InteropServices::_Module
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3338))
// CS Name: System.Runtime.InteropServices._Module
class CORDL_TYPE _Module : public ::cordl_internals::InterfaceW {
public:
// Declarations
~_Module() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit _Module(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::InteropServices::_Module);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::_Module, "System.Runtime.InteropServices", "_Module");
