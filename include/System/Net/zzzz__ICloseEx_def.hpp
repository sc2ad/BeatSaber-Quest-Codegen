#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System::Net {
struct CloseExState;
}
// Forward declare root types
namespace System::Net {
class ICloseEx;
}
// Type: System.Net::ICloseEx
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7956))
// CS Name: System.Net.ICloseEx
class CORDL_TYPE ICloseEx : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICloseEx() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICloseEx(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CloseEx addr 0x0 size 0xffffffffffffffff virtual true final false
 void CloseEx(System::Net::CloseExState closeState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ICloseEx);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ICloseEx, "System.Net", "ICloseEx");
