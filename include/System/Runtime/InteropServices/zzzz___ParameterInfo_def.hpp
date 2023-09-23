#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace System::Runtime::InteropServices {
class _ParameterInfo;
}
// Type: System.Runtime.InteropServices::_ParameterInfo
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3339))
// CS Name: System.Runtime.InteropServices._ParameterInfo
class CORDL_TYPE _ParameterInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~_ParameterInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit _ParameterInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::_ParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::_ParameterInfo, "System.Runtime.InteropServices", "_ParameterInfo");
