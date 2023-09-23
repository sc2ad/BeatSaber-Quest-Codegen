#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace System::Runtime::InteropServices {
class _AssemblyName;
}
// Type: System.Runtime.InteropServices::_AssemblyName
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3337))
// CS Name: System.Runtime.InteropServices._AssemblyName
class CORDL_TYPE _AssemblyName : public ::cordl_internals::InterfaceW {
public:
// Declarations
~_AssemblyName() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit _AssemblyName(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::_AssemblyName);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::_AssemblyName, "System.Runtime.InteropServices", "_AssemblyName");
