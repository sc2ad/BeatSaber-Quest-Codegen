#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace IntervalTree {
template<typename TKey,typename TValue>
struct RangeValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace IntervalTree {
template<typename TKey,typename TValue>
class IIntervalTree_2;
}
// Type: IntervalTree::IIntervalTree`2
namespace IntervalTree {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15972))
// CS Name: IntervalTree.IIntervalTree`2
class CORDL_TYPE IIntervalTree_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<IntervalTree::RangeValuePair_2<TKey,TValue>>
constexpr operator  System::Collections::Generic::IEnumerable_1<IntervalTree::RangeValuePair_2<TKey,TValue>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IIntervalTree_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IIntervalTree_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Collections::Generic::IEnumerable_1<TValue> __declspec(property(get=get_Values))  Values;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method get_Values addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<TValue> get_Values() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<TValue> Query(TKey value) ;

/// @brief Method Query addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<TValue> Query(TKey from, TKey to) ;

/// @brief Method QueryWithCount addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::List_1<TValue> QueryWithCount(TKey from, TKey to) ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final false
 void Add(TKey from, TKey to, TValue value) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 void Remove(TValue item) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 void Remove(System::Collections::Generic::IEnumerable_1<TValue> items) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def IntervalTree
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(IntervalTree::IIntervalTree_2, "IntervalTree", "IIntervalTree`2");
