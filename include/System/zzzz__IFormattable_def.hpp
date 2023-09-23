#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
class IFormattable;
}
// Type: System::IFormattable
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2417))
// CS Name: System.IFormattable
class CORDL_TYPE IFormattable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFormattable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFormattable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IFormattable);
DEFINE_IL2CPP_ARG_TYPE(System::IFormattable, "System", "IFormattable");
