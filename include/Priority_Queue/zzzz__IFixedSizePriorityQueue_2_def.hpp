#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IFixedSizePriorityQueue_2;
}
// Type: Priority_Queue::IFixedSizePriorityQueue`2
namespace Priority_Queue {
// cpp template
template<typename TItem,typename TPriority>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6165))
// CS Name: Priority_Queue.IFixedSizePriorityQueue`2
class CORDL_TYPE IFixedSizePriorityQueue_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<TItem,TPriority>
constexpr operator  Priority_Queue::IPriorityQueue_2<TItem,TPriority>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TItem>
constexpr operator  System::Collections::Generic::IEnumerable_1<TItem>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IFixedSizePriorityQueue_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFixedSizePriorityQueue_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_MaxSize))  MaxSize;


// Methods

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Resize(int32_t maxNodes) ;

/// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_MaxSize() ;

/// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final false
 void ResetNode(TItem node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::IFixedSizePriorityQueue_2, "Priority_Queue", "IFixedSizePriorityQueue`2");
