#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Collections {
class IEnumerable;
}
// Type: System.Collections::IEnumerable
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3744))
// CS Name: System.Collections.IEnumerable
class CORDL_TYPE IEnumerable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IEnumerable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEnumerable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::IEnumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(System::Collections::IEnumerable);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IEnumerable, "System.Collections", "IEnumerable");
