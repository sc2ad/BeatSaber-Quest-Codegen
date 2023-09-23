#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Priority_Queue/zzzz__FastPriorityQueueNode_def.hpp"
#include <cstdint>
// Forward declare root types
namespace Priority_Queue {
class StablePriorityQueueNode;
}
// Type: Priority_Queue::StablePriorityQueueNode
namespace Priority_Queue {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6161))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6172))
// CS Name: Priority_Queue.StablePriorityQueueNode
class CORDL_TYPE StablePriorityQueueNode : public Priority_Queue::FastPriorityQueueNode {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~StablePriorityQueueNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueueNode", modifiers: " const&", def_value: None }]
constexpr StablePriorityQueueNode(StablePriorityQueueNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StablePriorityQueueNode", modifiers: "&&", def_value: None }]
constexpr StablePriorityQueueNode(StablePriorityQueueNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StablePriorityQueueNode(void* ptr) noexcept : Priority_Queue::FastPriorityQueueNode(ptr) {
}


  constexpr StablePriorityQueueNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StablePriorityQueueNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StablePriorityQueueNode& operator=(StablePriorityQueueNode&& o) noexcept = default;
  constexpr StablePriorityQueueNode& operator=(StablePriorityQueueNode const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get__InsertionIndex_k__BackingField, put=__set__InsertionIndex_k__BackingField))  _InsertionIndex_k__BackingField;

constexpr void __set__InsertionIndex_k__BackingField(int64_t value) ;

constexpr int64_t __get__InsertionIndex_k__BackingField() const;


// Properties

 int64_t __declspec(property(get=get_InsertionIndex, put=set_InsertionIndex))  InsertionIndex;


// Methods

/// @brief Method get_InsertionIndex addr 0x21d70f0 size 0x8 virtual false final false
 int64_t get_InsertionIndex() ;

/// @brief Method set_InsertionIndex addr 0x21d70f8 size 0x8 virtual false final false
 void set_InsertionIndex(int64_t value) ;

// Ctor Parameters []
explicit StablePriorityQueueNode() ;

/// @brief Method .ctor addr 0x21d7100 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
NEED_NO_BOX(Priority_Queue::StablePriorityQueueNode);
DEFINE_IL2CPP_ARG_TYPE(Priority_Queue::StablePriorityQueueNode, "Priority_Queue", "StablePriorityQueueNode");
