#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Type: System.Collections.Generic::IReadOnlyList`1
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3823))
// CS Name: System.Collections.Generic.IReadOnlyList`1
class CORDL_TYPE IReadOnlyList_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IReadOnlyList_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReadOnlyList_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 T __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 T get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IReadOnlyList_1, "System.Collections.Generic", "IReadOnlyList`1");
