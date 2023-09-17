#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Linq {
template<typename TKey,typename TElement>
class IGrouping_2;
}
// Type: System.Linq::IGrouping`2
namespace System::Linq {
// cpp template
template<typename TKey,typename TElement>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14563))
// CS Name: System.Linq.IGrouping`2
class CORDL_TYPE IGrouping_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TElement>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TElement>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

~IGrouping_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGrouping_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 TKey __declspec(property(get=get_Key))  Key;


// Methods

/// @brief Method get_Key addr 0x0 size 0xffffffffffffffff virtual true final false
 TKey get_Key() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IGrouping_2, "System.Linq", "IGrouping`2");
