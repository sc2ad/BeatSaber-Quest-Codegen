#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Priority_Queue/zzzz__GenericPriorityQueueNode_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class GenericPriorityQueue_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class Priority_Queue__SimplePriorityQueue_2__SimpleNode;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class SimplePriorityQueue_2;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TItem>
class Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
class Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
class SimplePriorityQueue_2<TItem,TPriority>;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TItem>
class SimplePriorityQueue_2<TItem,float_t>;
}
// Type: ::SimpleNode
// Type: Priority_Queue::SimplePriorityQueue`2
// Type: ::SimpleNode
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6167)), TypeDefinitionIndex(TypeDefinitionIndex(6164)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6164), inst: 2453 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6167), inst: 80 })
// CS Name: Priority_Queue.SimplePriorityQueue`2::SimpleNode
class CORDL_TYPE Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> : public Priority_Queue::GenericPriorityQueueNode_1<TPriority> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Priority_Queue__SimplePriorityQueue_2__SimpleNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__SimplePriorityQueue_2__SimpleNode", modifiers: " const&", def_value: None }]
constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode(Priority_Queue__SimplePriorityQueue_2__SimpleNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__SimplePriorityQueue_2__SimpleNode", modifiers: "&&", def_value: None }]
constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode(Priority_Queue__SimplePriorityQueue_2__SimpleNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Priority_Queue__SimplePriorityQueue_2__SimpleNode(void* ptr) noexcept : Priority_Queue::GenericPriorityQueueNode_1<TPriority>(ptr) {
}


  constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode& operator=(Priority_Queue__SimplePriorityQueue_2__SimpleNode&& o) noexcept = default;
  constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode& operator=(Priority_Queue__SimplePriorityQueue_2__SimpleNode const& o) noexcept = default;
                


// Fields

 TItem __declspec(property(get=__get__Data_k__BackingField, put=__set__Data_k__BackingField))  _Data_k__BackingField;

constexpr void __set__Data_k__BackingField(TItem value) ;

constexpr TItem __get__Data_k__BackingField() const;


// Properties

 TItem __declspec(property(get=get_Data, put=set_Data))  Data;


// Methods

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual false final false
 TItem get_Data() ;

/// @brief Method set_Data addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Data(TItem value) ;

// Ctor Parameters [CppParam { name: "data", ty: "TItem", modifiers: "", def_value: None }]
explicit Priority_Queue__SimplePriorityQueue_2__SimpleNode(TItem data) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TItem data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: ::SimpleNode
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6167)), TypeDefinitionIndex(TypeDefinitionIndex(6164)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6164), inst: 2453 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6167), inst: 1553 })
// CS Name: Priority_Queue.SimplePriorityQueue`2::SimpleNode
class CORDL_TYPE Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> : public Priority_Queue::GenericPriorityQueueNode_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Priority_Queue__SimplePriorityQueue_2__SimpleNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__SimplePriorityQueue_2__SimpleNode", modifiers: " const&", def_value: None }]
constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode(Priority_Queue__SimplePriorityQueue_2__SimpleNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__SimplePriorityQueue_2__SimpleNode", modifiers: "&&", def_value: None }]
constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode(Priority_Queue__SimplePriorityQueue_2__SimpleNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Priority_Queue__SimplePriorityQueue_2__SimpleNode(void* ptr) noexcept : Priority_Queue::GenericPriorityQueueNode_1<float_t>(ptr) {
}


  constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode& operator=(Priority_Queue__SimplePriorityQueue_2__SimpleNode&& o) noexcept = default;
  constexpr Priority_Queue__SimplePriorityQueue_2__SimpleNode& operator=(Priority_Queue__SimplePriorityQueue_2__SimpleNode const& o) noexcept = default;
                


// Fields

 TItem __declspec(property(get=__get__Data_k__BackingField, put=__set__Data_k__BackingField))  _Data_k__BackingField;

constexpr void __set__Data_k__BackingField(TItem value) ;

constexpr TItem __get__Data_k__BackingField() const;


// Properties

 TItem __declspec(property(get=get_Data, put=set_Data))  Data;


// Methods

/// @brief Method get_Data addr 0x0 size 0xffffffffffffffff virtual false final false
 TItem get_Data() ;

/// @brief Method set_Data addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Data(TItem value) ;

// Ctor Parameters [CppParam { name: "data", ty: "TItem", modifiers: "", def_value: None }]
explicit Priority_Queue__SimplePriorityQueue_2__SimpleNode(TItem data) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(TItem data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::SimplePriorityQueue`2
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6168))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6168), inst: 80 })
// CS Name: Priority_Queue.SimplePriorityQueue`2
class CORDL_TYPE SimplePriorityQueue_2<TItem,TPriority> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SimpleNode = Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem, TPriority>;

/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<TItem,TPriority>
constexpr operator  Priority_Queue::IPriorityQueue_2<TItem,TPriority>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TItem>
constexpr operator  System::Collections::Generic::IEnumerable_1<TItem>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SimplePriorityQueue_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: " const&", def_value: None }]
constexpr SimplePriorityQueue_2(SimplePriorityQueue_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "&&", def_value: None }]
constexpr SimplePriorityQueue_2(SimplePriorityQueue_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimplePriorityQueue_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimplePriorityQueue_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimplePriorityQueue_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimplePriorityQueue_2& operator=(SimplePriorityQueue_2&& o) noexcept = default;
  constexpr SimplePriorityQueue_2& operator=(SimplePriorityQueue_2 const& o) noexcept = default;
                


// Fields

/// @brief Field INITIAL_QUEUE_SIZE offset 0
static constexpr int32_t  INITIAL_QUEUE_SIZE{10};

 Priority_Queue::GenericPriorityQueue_2<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>,TPriority> __declspec(property(get=__get__queue, put=__set__queue))  _queue;

constexpr void __set__queue(Priority_Queue::GenericPriorityQueue_2<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>,TPriority> value) ;

constexpr Priority_Queue::GenericPriorityQueue_2<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>,TPriority> __get__queue() const;

 System::Collections::Generic::Dictionary_2<TItem,System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>> __declspec(property(get=__get__itemToNodesCache, put=__set__itemToNodesCache))  _itemToNodesCache;

constexpr void __set__itemToNodesCache(System::Collections::Generic::Dictionary_2<TItem,System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>> value) ;

constexpr System::Collections::Generic::Dictionary_2<TItem,System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>>> __get__itemToNodesCache() const;

 System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>> __declspec(property(get=__get__nullNodesCache, put=__set__nullNodesCache))  _nullNodesCache;

constexpr void __set__nullNodesCache(System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>> value) ;

constexpr System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority>> __get__nullNodesCache() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 TItem __declspec(property(get=get_First))  First;


// Methods

// Ctor Parameters []
explicit SimplePriorityQueue_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "priorityComparer", ty: "System::Collections::Generic::IComparer_1<TPriority>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Collections::Generic::IComparer_1<TPriority> priorityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IComparer_1<TPriority> priorityComparer) ;

// Ctor Parameters [CppParam { name: "priorityComparer", ty: "System::Comparison_1<TPriority>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Comparison_1<TPriority> priorityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Comparison_1<TPriority> priorityComparer) ;

// Ctor Parameters [CppParam { name: "itemEquality", ty: "System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

// Ctor Parameters [CppParam { name: "priorityComparer", ty: "System::Collections::Generic::IComparer_1<TPriority>", modifiers: "", def_value: None }, CppParam { name: "itemEquality", ty: "System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Collections::Generic::IComparer_1<TPriority> priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IComparer_1<TPriority> priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

// Ctor Parameters [CppParam { name: "priorityComparer", ty: "System::Comparison_1<TPriority>", modifiers: "", def_value: None }, CppParam { name: "itemEquality", ty: "System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Comparison_1<TPriority> priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Comparison_1<TPriority> priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

/// @brief Method GetExistingNode addr 0x0 size 0xffffffffffffffff virtual false final false
 Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> GetExistingNode(TItem item) ;

/// @brief Method AddToNodeCache addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddToNodeCache(Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> node) ;

/// @brief Method RemoveFromNodeCache addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveFromNodeCache(Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> node) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem get_First() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(TItem item) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem Dequeue() ;

/// @brief Method EnqueueNoLockOrCache addr 0x0 size 0xffffffffffffffff virtual false final false
 Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,TPriority> EnqueueNoLockOrCache(TItem item, TPriority priority) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
 void Enqueue(TItem item, TPriority priority) ;

/// @brief Method EnqueueWithoutDuplicates addr 0x0 size 0xffffffffffffffff virtual false final false
 bool EnqueueWithoutDuplicates(TItem item, TPriority priority) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(TItem item) ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdatePriority(TItem item, TPriority priority) ;

/// @brief Method GetPriority addr 0x0 size 0xffffffffffffffff virtual false final false
 TPriority GetPriority(TItem item) ;

/// @brief Method TryFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryFirst(ByRef<TItem> first) ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<TItem> first) ;

/// @brief Method TryRemove addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryRemove(TItem item) ;

/// @brief Method TryUpdatePriority addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryUpdatePriority(TItem item, TPriority priority) ;

/// @brief Method TryGetPriority addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetPriority(TItem item, ByRef<TPriority> priority) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<TItem> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsValidQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::SimplePriorityQueue`2
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6168))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6168), inst: 1553 })
// CS Name: Priority_Queue.SimplePriorityQueue`2
class CORDL_TYPE SimplePriorityQueue_2<TItem,float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SimpleNode = Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem, float_t>;

/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<TItem,float_t>
constexpr operator  Priority_Queue::IPriorityQueue_2<TItem,float_t>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TItem>
constexpr operator  System::Collections::Generic::IEnumerable_1<TItem>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SimplePriorityQueue_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: " const&", def_value: None }]
constexpr SimplePriorityQueue_2(SimplePriorityQueue_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_2", modifiers: "&&", def_value: None }]
constexpr SimplePriorityQueue_2(SimplePriorityQueue_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimplePriorityQueue_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SimplePriorityQueue_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimplePriorityQueue_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimplePriorityQueue_2& operator=(SimplePriorityQueue_2&& o) noexcept = default;
  constexpr SimplePriorityQueue_2& operator=(SimplePriorityQueue_2 const& o) noexcept = default;
                


// Fields

/// @brief Field INITIAL_QUEUE_SIZE offset 0
static constexpr int32_t  INITIAL_QUEUE_SIZE{10};

 Priority_Queue::GenericPriorityQueue_2<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>,float_t> __declspec(property(get=__get__queue, put=__set__queue))  _queue;

constexpr void __set__queue(Priority_Queue::GenericPriorityQueue_2<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>,float_t> value) ;

constexpr Priority_Queue::GenericPriorityQueue_2<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>,float_t> __get__queue() const;

 System::Collections::Generic::Dictionary_2<TItem,System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>> __declspec(property(get=__get__itemToNodesCache, put=__set__itemToNodesCache))  _itemToNodesCache;

constexpr void __set__itemToNodesCache(System::Collections::Generic::Dictionary_2<TItem,System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>> value) ;

constexpr System::Collections::Generic::Dictionary_2<TItem,System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>>> __get__itemToNodesCache() const;

 System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>> __declspec(property(get=__get__nullNodesCache, put=__set__nullNodesCache))  _nullNodesCache;

constexpr void __set__nullNodesCache(System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>> value) ;

constexpr System::Collections::Generic::IList_1<Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t>> __get__nullNodesCache() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 TItem __declspec(property(get=get_First))  First;


// Methods

// Ctor Parameters []
explicit SimplePriorityQueue_2() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "priorityComparer", ty: "System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Collections::Generic::IComparer_1<float_t> priorityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IComparer_1<float_t> priorityComparer) ;

// Ctor Parameters [CppParam { name: "priorityComparer", ty: "System::Comparison_1<float_t>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Comparison_1<float_t> priorityComparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Comparison_1<float_t> priorityComparer) ;

// Ctor Parameters [CppParam { name: "itemEquality", ty: "System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

// Ctor Parameters [CppParam { name: "priorityComparer", ty: "System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "itemEquality", ty: "System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Collections::Generic::IComparer_1<float_t> priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Collections::Generic::IComparer_1<float_t> priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

// Ctor Parameters [CppParam { name: "priorityComparer", ty: "System::Comparison_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "itemEquality", ty: "System::Collections::Generic::IEqualityComparer_1<TItem>", modifiers: "", def_value: None }]
explicit SimplePriorityQueue_2(System::Comparison_1<float_t> priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Comparison_1<float_t> priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem> itemEquality) ;

/// @brief Method GetExistingNode addr 0x0 size 0xffffffffffffffff virtual false final false
 Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> GetExistingNode(TItem item) ;

/// @brief Method AddToNodeCache addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddToNodeCache(Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> node) ;

/// @brief Method RemoveFromNodeCache addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveFromNodeCache(Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> node) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem get_First() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(TItem item) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem Dequeue() ;

/// @brief Method EnqueueNoLockOrCache addr 0x0 size 0xffffffffffffffff virtual false final false
 Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode<TItem,float_t> EnqueueNoLockOrCache(TItem item, float_t priority) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
 void Enqueue(TItem item, float_t priority) ;

/// @brief Method EnqueueWithoutDuplicates addr 0x0 size 0xffffffffffffffff virtual false final false
 bool EnqueueWithoutDuplicates(TItem item, float_t priority) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(TItem item) ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdatePriority(TItem item, float_t priority) ;

/// @brief Method GetPriority addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetPriority(TItem item) ;

/// @brief Method TryFirst addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryFirst(ByRef<TItem> first) ;

/// @brief Method TryDequeue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryDequeue(ByRef<TItem> first) ;

/// @brief Method TryRemove addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryRemove(TItem item) ;

/// @brief Method TryUpdatePriority addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryUpdatePriority(TItem item, float_t priority) ;

/// @brief Method TryGetPriority addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryGetPriority(TItem item, ByRef<float_t> priority) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<TItem> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method IsValidQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsValidQueue() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::Priority_Queue__SimplePriorityQueue_2__SimpleNode, "Priority_Queue", "SimplePriorityQueue`2/SimpleNode");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::SimplePriorityQueue_2, "Priority_Queue", "SimplePriorityQueue`2");
