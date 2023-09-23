#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IFixedSizePriorityQueue_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class IPriorityQueue_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class GenericPriorityQueue_2;
}
namespace Priority_Queue {
template<typename TItem,typename TPriority>
class Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TItem>
class GenericPriorityQueue_2<TItem,float_t>;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
class GenericPriorityQueue_2<TItem,TPriority>;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
class Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority>;
}
namespace Priority_Queue {
template<::cordl_internals::il2cpp_reference_type TItem>
class Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t>;
}
// Type: ::<GetEnumerator>d__25
// Type: Priority_Queue::GenericPriorityQueue`2
// Type: ::<GetEnumerator>d__25
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6162))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6162), inst: 80 })
// CS Name: Priority_Queue.GenericPriorityQueue`2::<GetEnumerator>d__25
class CORDL_TYPE Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,TPriority> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TItem>
constexpr operator  System::Collections::Generic::IEnumerator_1<TItem>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25() = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: " const&", def_value: None }]
constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25(Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: "&&", def_value: None }]
constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25(Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25& operator=(Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25&& o) noexcept = default;
  constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25& operator=(Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 TItem __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(TItem value) ;

constexpr TItem __get___2__current() const;

 Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> value) ;

constexpr Priority_Queue::GenericPriorityQueue_2<TItem,TPriority> __get___4__this() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 TItem __declspec(property(get=System_Collections_Generic_IEnumerator_TItem__get_Current))  System_Collections_Generic_IEnumerator_TItem__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TItem>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem System_Collections_Generic_IEnumerator_TItem__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: ::<GetEnumerator>d__25
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6162))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6162), inst: 1553 })
// CS Name: Priority_Queue.GenericPriorityQueue`2::<GetEnumerator>d__25
class CORDL_TYPE Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem,float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TItem>
constexpr operator  System::Collections::Generic::IEnumerator_1<TItem>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25() = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: " const&", def_value: None }]
constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25(Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25", modifiers: "&&", def_value: None }]
constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25(Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25& operator=(Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25&& o) noexcept = default;
  constexpr Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25& operator=(Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 TItem __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(TItem value) ;

constexpr TItem __get___2__current() const;

 Priority_Queue::GenericPriorityQueue_2<TItem,float_t> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(Priority_Queue::GenericPriorityQueue_2<TItem,float_t> value) ;

constexpr Priority_Queue::GenericPriorityQueue_2<TItem,float_t> __get___4__this() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 TItem __declspec(property(get=System_Collections_Generic_IEnumerator_TItem__get_Current))  System_Collections_Generic_IEnumerator_TItem__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25(int32_t __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<TItem>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem System_Collections_Generic_IEnumerator_TItem__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
// Type: Priority_Queue::GenericPriorityQueue`2
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem,::cordl_internals::il2cpp_reference_type TPriority>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6163))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6163), inst: 80 })
// CS Name: Priority_Queue.GenericPriorityQueue`2
class CORDL_TYPE GenericPriorityQueue_2<TItem,TPriority> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__25 = Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, TPriority>;

/// @brief Convert operator to Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>
constexpr operator  Priority_Queue::IFixedSizePriorityQueue_2<TItem,TPriority>() const noexcept;

/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<TItem,TPriority>
constexpr operator  Priority_Queue::IPriorityQueue_2<TItem,TPriority>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TItem>
constexpr operator  System::Collections::Generic::IEnumerable_1<TItem>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GenericPriorityQueue_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: " const&", def_value: None }]
constexpr GenericPriorityQueue_2(GenericPriorityQueue_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "&&", def_value: None }]
constexpr GenericPriorityQueue_2(GenericPriorityQueue_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericPriorityQueue_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericPriorityQueue_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericPriorityQueue_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericPriorityQueue_2& operator=(GenericPriorityQueue_2&& o) noexcept = default;
  constexpr GenericPriorityQueue_2& operator=(GenericPriorityQueue_2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__numNodes, put=__set__numNodes))  _numNodes;

constexpr void __set__numNodes(int32_t value) ;

constexpr int32_t __get__numNodes() const;

 ::ArrayW<TItem> __declspec(property(get=__get__nodes, put=__set__nodes))  _nodes;

constexpr void __set__nodes(::ArrayW<TItem> value) ;

constexpr ::ArrayW<TItem> __get__nodes() const;

 int64_t __declspec(property(get=__get__numNodesEverEnqueued, put=__set__numNodesEverEnqueued))  _numNodesEverEnqueued;

constexpr void __set__numNodesEverEnqueued(int64_t value) ;

constexpr int64_t __get__numNodesEverEnqueued() const;

 System::Comparison_1<TPriority> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(System::Comparison_1<TPriority> value) ;

constexpr System::Comparison_1<TPriority> __get__comparer() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=get_MaxSize))  MaxSize;

 TItem __declspec(property(get=get_First))  First;


// Methods

// Ctor Parameters [CppParam { name: "maxNodes", ty: "int32_t", modifiers: "", def_value: None }]
explicit GenericPriorityQueue_2(int32_t maxNodes) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxNodes) ;

// Ctor Parameters [CppParam { name: "maxNodes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<TPriority>", modifiers: "", def_value: None }]
explicit GenericPriorityQueue_2(int32_t maxNodes, System::Collections::Generic::IComparer_1<TPriority> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxNodes, System::Collections::Generic::IComparer_1<TPriority> comparer) ;

// Ctor Parameters [CppParam { name: "maxNodes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Comparison_1<TPriority>", modifiers: "", def_value: None }]
explicit GenericPriorityQueue_2(int32_t maxNodes, System::Comparison_1<TPriority> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxNodes, System::Comparison_1<TPriority> comparer) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_MaxSize() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(TItem node) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
 void Enqueue(TItem node, TPriority priority) ;

/// @brief Method CascadeUp addr 0x0 size 0xffffffffffffffff virtual false final false
 void CascadeUp(TItem node) ;

/// @brief Method CascadeDown addr 0x0 size 0xffffffffffffffff virtual false final false
 void CascadeDown(TItem node) ;

/// @brief Method HasHigherPriority addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasHigherPriority(TItem higher, TItem lower) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem Dequeue() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
 void Resize(int32_t maxNodes) ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem get_First() ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdatePriority(TItem node, TPriority priority) ;

/// @brief Method OnNodeUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnNodeUpdated(TItem node) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(TItem node) ;

/// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final true
 void ResetNode(TItem node) ;

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
// Type: Priority_Queue::GenericPriorityQueue`2
namespace Priority_Queue {
// cpp template
template<::cordl_internals::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6163))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6163), inst: 1553 })
// CS Name: Priority_Queue.GenericPriorityQueue`2
class CORDL_TYPE GenericPriorityQueue_2<TItem,float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__25 = Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25<TItem, float_t>;

/// @brief Convert operator to Priority_Queue::IFixedSizePriorityQueue_2<TItem,float_t>
constexpr operator  Priority_Queue::IFixedSizePriorityQueue_2<TItem,float_t>() const noexcept;

/// @brief Convert operator to Priority_Queue::IPriorityQueue_2<TItem,float_t>
constexpr operator  Priority_Queue::IPriorityQueue_2<TItem,float_t>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<TItem>
constexpr operator  System::Collections::Generic::IEnumerable_1<TItem>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GenericPriorityQueue_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: " const&", def_value: None }]
constexpr GenericPriorityQueue_2(GenericPriorityQueue_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GenericPriorityQueue_2", modifiers: "&&", def_value: None }]
constexpr GenericPriorityQueue_2(GenericPriorityQueue_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GenericPriorityQueue_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GenericPriorityQueue_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GenericPriorityQueue_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GenericPriorityQueue_2& operator=(GenericPriorityQueue_2&& o) noexcept = default;
  constexpr GenericPriorityQueue_2& operator=(GenericPriorityQueue_2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__numNodes, put=__set__numNodes))  _numNodes;

constexpr void __set__numNodes(int32_t value) ;

constexpr int32_t __get__numNodes() const;

 ::ArrayW<TItem> __declspec(property(get=__get__nodes, put=__set__nodes))  _nodes;

constexpr void __set__nodes(::ArrayW<TItem> value) ;

constexpr ::ArrayW<TItem> __get__nodes() const;

 int64_t __declspec(property(get=__get__numNodesEverEnqueued, put=__set__numNodesEverEnqueued))  _numNodesEverEnqueued;

constexpr void __set__numNodesEverEnqueued(int64_t value) ;

constexpr int64_t __get__numNodesEverEnqueued() const;

 System::Comparison_1<float_t> __declspec(property(get=__get__comparer, put=__set__comparer))  _comparer;

constexpr void __set__comparer(System::Comparison_1<float_t> value) ;

constexpr System::Comparison_1<float_t> __get__comparer() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=get_MaxSize))  MaxSize;

 TItem __declspec(property(get=get_First))  First;


// Methods

// Ctor Parameters [CppParam { name: "maxNodes", ty: "int32_t", modifiers: "", def_value: None }]
explicit GenericPriorityQueue_2(int32_t maxNodes) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxNodes) ;

// Ctor Parameters [CppParam { name: "maxNodes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Collections::Generic::IComparer_1<float_t>", modifiers: "", def_value: None }]
explicit GenericPriorityQueue_2(int32_t maxNodes, System::Collections::Generic::IComparer_1<float_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxNodes, System::Collections::Generic::IComparer_1<float_t> comparer) ;

// Ctor Parameters [CppParam { name: "maxNodes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "comparer", ty: "System::Comparison_1<float_t>", modifiers: "", def_value: None }]
explicit GenericPriorityQueue_2(int32_t maxNodes, System::Comparison_1<float_t> comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxNodes, System::Comparison_1<float_t> comparer) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_MaxSize addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_MaxSize() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(TItem node) ;

/// @brief Method Enqueue addr 0x0 size 0xffffffffffffffff virtual true final true
 void Enqueue(TItem node, float_t priority) ;

/// @brief Method CascadeUp addr 0x0 size 0xffffffffffffffff virtual false final false
 void CascadeUp(TItem node) ;

/// @brief Method CascadeDown addr 0x0 size 0xffffffffffffffff virtual false final false
 void CascadeDown(TItem node) ;

/// @brief Method HasHigherPriority addr 0x0 size 0xffffffffffffffff virtual false final false
 bool HasHigherPriority(TItem higher, TItem lower) ;

/// @brief Method Dequeue addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem Dequeue() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
 void Resize(int32_t maxNodes) ;

/// @brief Method get_First addr 0x0 size 0xffffffffffffffff virtual true final true
 TItem get_First() ;

/// @brief Method UpdatePriority addr 0x0 size 0xffffffffffffffff virtual true final true
 void UpdatePriority(TItem node, float_t priority) ;

/// @brief Method OnNodeUpdated addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnNodeUpdated(TItem node) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 void Remove(TItem node) ;

/// @brief Method ResetNode addr 0x0 size 0xffffffffffffffff virtual true final true
 void ResetNode(TItem node) ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::GenericPriorityQueue_2, "Priority_Queue", "GenericPriorityQueue`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::Priority_Queue__GenericPriorityQueue_2___GetEnumerator_d__25, "Priority_Queue", "GenericPriorityQueue`2/<GetEnumerator>d__25");
