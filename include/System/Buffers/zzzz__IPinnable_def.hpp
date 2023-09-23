#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace System::Buffers {
class IPinnable;
}
// Type: System.Buffers::IPinnable
namespace System::Buffers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3868))
// CS Name: System.Buffers.IPinnable
class CORDL_TYPE IPinnable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPinnable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPinnable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Unpin addr 0x0 size 0xffffffffffffffff virtual true final false
 void Unpin() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
NEED_NO_BOX(System::Buffers::IPinnable);
DEFINE_IL2CPP_ARG_TYPE(System::Buffers::IPinnable, "System.Buffers", "IPinnable");
