#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_def.hpp"
#include <cmath>
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace Priority_Queue {
template<typename TItem>
class SimplePriorityQueue_1;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TItem>
class SimplePriorityQueue_1<TItem>;
}
// Type: Priority_Queue::SimplePriorityQueue`1
// Type: Priority_Queue::SimplePriorityQueue`1
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6168)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6168), inst: 3649 }), TypeDefinitionIndex(TypeDefinitionIndex(6169))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6169), inst: 2 })
// CS Name: Priority_Queue.SimplePriorityQueue`1
class CORDL_TYPE SimplePriorityQueue_1<TItem> : public Priority_Queue::SimplePriorityQueue_2<TItem,float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SimplePriorityQueue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_1", modifiers: " const&", def_value: None }]
constexpr SimplePriorityQueue_1(SimplePriorityQueue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_1", modifiers: "&&", def_value: None }]
constexpr SimplePriorityQueue_1(SimplePriorityQueue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimplePriorityQueue_1(void* ptr) noexcept : Priority_Queue::SimplePriorityQueue_2<TItem,float_t>(ptr) {
}


  constexpr SimplePriorityQueue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimplePriorityQueue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimplePriorityQueue_1& operator=(SimplePriorityQueue_1&& o) noexcept = default;
  constexpr SimplePriorityQueue_1& operator=(SimplePriorityQueue_1 const& o) noexcept = default;
                


// Methods

static Priority_Queue::SimplePriorityQueue_1<TItem> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static Priority_Queue::SimplePriorityQueue_1<TItem> New_ctor(System::Collections::Generic::IComparer_1<float_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IComparer_1<float_t> comparer) ;

static Priority_Queue::SimplePriorityQueue_1<TItem> New_ctor(System::Comparison_1<float_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Comparison_1<float_t> comparer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::SimplePriorityQueue_1, "Priority_Queue", "SimplePriorityQueue`1");
