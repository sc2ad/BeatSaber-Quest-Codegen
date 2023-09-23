#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace Priority_Queue {
class FastPriorityQueueNode;
}
// Type: Priority_Queue::FastPriorityQueueNode
namespace Priority_Queue {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6161))
// CS Name: Priority_Queue.FastPriorityQueueNode
class CORDL_TYPE FastPriorityQueueNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~FastPriorityQueueNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueueNode", modifiers: " const&", def_value: None }]
constexpr FastPriorityQueueNode(FastPriorityQueueNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FastPriorityQueueNode", modifiers: "&&", def_value: None }]
constexpr FastPriorityQueueNode(FastPriorityQueueNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FastPriorityQueueNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FastPriorityQueueNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FastPriorityQueueNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FastPriorityQueueNode& operator=(FastPriorityQueueNode&& o) noexcept = default;
  constexpr FastPriorityQueueNode& operator=(FastPriorityQueueNode const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__Priority_k__BackingField, put=__set__Priority_k__BackingField))  _Priority_k__BackingField;

constexpr void __set__Priority_k__BackingField(float_t value) ;

constexpr float_t __get__Priority_k__BackingField() const;

 int32_t __declspec(property(get=__get__QueueIndex_k__BackingField, put=__set__QueueIndex_k__BackingField))  _QueueIndex_k__BackingField;

constexpr void __set__QueueIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__QueueIndex_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_Priority, put=set_Priority))  Priority;

 int32_t __declspec(property(get=get_QueueIndex, put=set_QueueIndex))  QueueIndex;


// Methods

/// @brief Method get_Priority addr 0x21d70c8 size 0x8 virtual false final false
 float_t get_Priority() ;

/// @brief Method set_Priority addr 0x21d70d0 size 0x8 virtual false final false
 void set_Priority(float_t value) ;

/// @brief Method get_QueueIndex addr 0x21d70d8 size 0x8 virtual false final false
 int32_t get_QueueIndex() ;

/// @brief Method set_QueueIndex addr 0x21d70e0 size 0x8 virtual false final false
 void set_QueueIndex(int32_t value) ;

// Ctor Parameters []
explicit FastPriorityQueueNode() ;

/// @brief Method .ctor addr 0x21d70e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
NEED_NO_BOX(Priority_Queue::FastPriorityQueueNode);
DEFINE_IL2CPP_ARG_TYPE(Priority_Queue::FastPriorityQueueNode, "Priority_Queue", "FastPriorityQueueNode");
