#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Type: System.Collections.Generic::IEnumerable`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3817))
// CS Name: System.Collections.Generic.IEnumerable`1
class CORDL_TYPE IEnumerable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IEnumerable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IEnumerable_1, "System.Collections.Generic", "IEnumerable`1");
