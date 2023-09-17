#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace Priority_Queue {
template<typename TPriority>
class GenericPriorityQueueNode_1;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TPriority>
class GenericPriorityQueueNode_1<TPriority>;
}
namespace Priority_Queue {
template<>
class GenericPriorityQueueNode_1<float_t>;
}
// Type: Priority_Queue::GenericPriorityQueueNode`1
// Type: Priority_Queue::GenericPriorityQueueNode`1
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6164))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6164), inst: 2 })
// CS Name: Priority_Queue.GenericPriorityQueueNode`1
class CORDL_TYPE GenericPriorityQueueNode_1<TPriority> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GenericPriorityQueueNode_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: " const&", def_value: None }]
constexpr GenericPriorityQueueNode_1(GenericPriorityQueueNode_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: "&&", def_value: None }]
constexpr GenericPriorityQueueNode_1(GenericPriorityQueueNode_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericPriorityQueueNode_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericPriorityQueueNode_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericPriorityQueueNode_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericPriorityQueueNode_1& operator=(GenericPriorityQueueNode_1&& o) noexcept = default;
  constexpr GenericPriorityQueueNode_1& operator=(GenericPriorityQueueNode_1 const& o) noexcept = default;
                


// Fields

 TPriority __declspec(property(get=__get__Priority_k__BackingField, put=__set__Priority_k__BackingField))  _Priority_k__BackingField;

constexpr void __set__Priority_k__BackingField(TPriority value) ;

constexpr TPriority __get__Priority_k__BackingField() const;

 int32_t __declspec(property(get=__get__QueueIndex_k__BackingField, put=__set__QueueIndex_k__BackingField))  _QueueIndex_k__BackingField;

constexpr void __set__QueueIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__QueueIndex_k__BackingField() const;

 int64_t __declspec(property(get=__get__InsertionIndex_k__BackingField, put=__set__InsertionIndex_k__BackingField))  _InsertionIndex_k__BackingField;

constexpr void __set__InsertionIndex_k__BackingField(int64_t value) ;

constexpr int64_t __get__InsertionIndex_k__BackingField() const;


// Properties

 TPriority __declspec(property(get=get_Priority, put=set_Priority))  Priority;

 int32_t __declspec(property(get=get_QueueIndex, put=set_QueueIndex))  QueueIndex;

 int64_t __declspec(property(get=get_InsertionIndex, put=set_InsertionIndex))  InsertionIndex;


// Methods

/// @brief Method get_Priority addr 0x0 size 0xffffffffffffffff virtual false final false
 TPriority get_Priority() ;

/// @brief Method set_Priority addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Priority(TPriority value) ;

/// @brief Method get_QueueIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_QueueIndex() ;

/// @brief Method set_QueueIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_QueueIndex(int32_t value) ;

/// @brief Method get_InsertionIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t get_InsertionIndex() ;

/// @brief Method set_InsertionIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_InsertionIndex(int64_t value) ;

// Ctor Parameters []
explicit GenericPriorityQueueNode_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::GenericPriorityQueueNode`1
namespace Priority_Queue {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6164))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6164), inst: 374 })
// CS Name: Priority_Queue.GenericPriorityQueueNode`1
class CORDL_TYPE GenericPriorityQueueNode_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GenericPriorityQueueNode_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: " const&", def_value: None }]
constexpr GenericPriorityQueueNode_1(GenericPriorityQueueNode_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueueNode_1", modifiers: "&&", def_value: None }]
constexpr GenericPriorityQueueNode_1(GenericPriorityQueueNode_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericPriorityQueueNode_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericPriorityQueueNode_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericPriorityQueueNode_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericPriorityQueueNode_1& operator=(GenericPriorityQueueNode_1&& o) noexcept = default;
  constexpr GenericPriorityQueueNode_1& operator=(GenericPriorityQueueNode_1 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__Priority_k__BackingField, put=__set__Priority_k__BackingField))  _Priority_k__BackingField;

constexpr void __set__Priority_k__BackingField(float_t value) ;

constexpr float_t __get__Priority_k__BackingField() const;

 int32_t __declspec(property(get=__get__QueueIndex_k__BackingField, put=__set__QueueIndex_k__BackingField))  _QueueIndex_k__BackingField;

constexpr void __set__QueueIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__QueueIndex_k__BackingField() const;

 int64_t __declspec(property(get=__get__InsertionIndex_k__BackingField, put=__set__InsertionIndex_k__BackingField))  _InsertionIndex_k__BackingField;

constexpr void __set__InsertionIndex_k__BackingField(int64_t value) ;

constexpr int64_t __get__InsertionIndex_k__BackingField() const;


// Properties

 float_t __declspec(property(get=get_Priority, put=set_Priority))  Priority;

 int32_t __declspec(property(get=get_QueueIndex, put=set_QueueIndex))  QueueIndex;

 int64_t __declspec(property(get=get_InsertionIndex, put=set_InsertionIndex))  InsertionIndex;


// Methods

/// @brief Method get_Priority addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_Priority() ;

/// @brief Method set_Priority addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Priority(float_t value) ;

/// @brief Method get_QueueIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_QueueIndex() ;

/// @brief Method set_QueueIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_QueueIndex(int32_t value) ;

/// @brief Method get_InsertionIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 int64_t get_InsertionIndex() ;

/// @brief Method set_InsertionIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_InsertionIndex(int64_t value) ;

// Ctor Parameters []
explicit GenericPriorityQueueNode_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::GenericPriorityQueueNode_1, "Priority_Queue", "GenericPriorityQueueNode`1");
