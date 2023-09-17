#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
// Type: Priority_Queue::IPriorityQueue`2
namespace Priority_Queue {
// cpp template
template<typename TItem,typename TPriority>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6166))
// CS Name: Priority_Queue.IPriorityQueue`2
class CORDL_TYPE IPriorityQueue_2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<TItem>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<TItem>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

~IPriorityQueue_2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPriorityQueue_2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 TItem __declspec(property(get=get_First))  First;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final false
 void Enqueue(TItem node, TPriority priority) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final false
 TItem Dequeue() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Contains(TItem node) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 void Remove(TItem node) ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdatePriority(TItem node, TPriority priority) ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final false
 TItem get_First() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Count() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::IPriorityQueue_2, "Priority_Queue", "IPriorityQueue`2");
