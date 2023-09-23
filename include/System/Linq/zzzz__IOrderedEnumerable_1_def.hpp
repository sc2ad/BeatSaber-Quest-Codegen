#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace System::Linq {
template<typename TElement>
class IOrderedEnumerable_1;
}
// Type: System.Linq::IOrderedEnumerable`1
namespace System::Linq {
// cpp template
template<typename TElement>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14562))
// CS Name: System.Linq.IOrderedEnumerable`1
class CORDL_TYPE IOrderedEnumerable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TElement>
constexpr operator  System::Collections::Generic::IEnumerable_1<TElement>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IOrderedEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IOrderedEnumerable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateOrderedEnumerable addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename TKey>
 System::Linq::IOrderedEnumerable_1<TElement> CreateOrderedEnumerable(System::Func_2<TElement,TKey> keySelector, System::Collections::Generic::IComparer_1<TKey> comparer, bool descending) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Linq::IOrderedEnumerable_1, "System.Linq", "IOrderedEnumerable`1");
