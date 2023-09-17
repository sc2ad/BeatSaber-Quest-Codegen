#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Concurrent {
template<typename T>
class IProducerConsumerCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
template<typename T>
class ThreadLocal_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentBag_1;
}
namespace System::Collections::Concurrent {
template<typename T>
class ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator;
}
namespace System::Collections::Concurrent {
template<typename T>
class ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type T>
class ConcurrentBag_1<T>;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type T>
class ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>;
}
namespace System::Collections::Concurrent {
template<::cordl_internals::il2cpp_reference_type T>
class ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>;
}
// Type: ::WorkStealingQueue
// Type: ::Enumerator
// Type: System.Collections.Concurrent::ConcurrentBag`1
// Type: ::WorkStealingQueue
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8378))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8378), inst: 2 })
// CS Name: System.Collections.Concurrent.ConcurrentBag`1::WorkStealingQueue
class CORDL_TYPE ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue", modifiers: " const&", def_value: None }]
constexpr ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue(____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue", modifiers: "&&", def_value: None }]
constexpr ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue(____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue& operator=(____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue&& o) noexcept = default;
  constexpr ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue& operator=(____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue const& o) noexcept = default;
                


// Fields

/// @brief Field InitialSize offset 0
static constexpr int32_t  InitialSize{32};

/// @brief Field StartIndex offset 0
static constexpr int32_t  StartIndex{0};

 int32_t __declspec(property(get=__get__headIndex, put=__set__headIndex))  _headIndex;

constexpr void __set__headIndex(int32_t value) ;

constexpr int32_t __get__headIndex() const;

 int32_t __declspec(property(get=__get__tailIndex, put=__set__tailIndex))  _tailIndex;

constexpr void __set__tailIndex(int32_t value) ;

constexpr int32_t __get__tailIndex() const;

 ::ArrayW<T> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__array() const;

 int32_t __declspec(property(get=__get__mask, put=__set__mask))  _mask;

constexpr void __set__mask(int32_t value) ;

constexpr int32_t __get__mask() const;

 int32_t __declspec(property(get=__get__addTakeCount, put=__set__addTakeCount))  _addTakeCount;

constexpr void __set__addTakeCount(int32_t value) ;

constexpr int32_t __get__addTakeCount() const;

 int32_t __declspec(property(get=__get__stealCount, put=__set__stealCount))  _stealCount;

constexpr void __set__stealCount(int32_t value) ;

constexpr int32_t __get__stealCount() const;

 int32_t __declspec(property(get=__get__currentOp, put=__set__currentOp))  _currentOp;

constexpr void __set__currentOp(int32_t value) ;

constexpr int32_t __get__currentOp() const;

 bool __declspec(property(get=__get__frozen, put=__set__frozen))  _frozen;

constexpr void __set__frozen(bool value) ;

constexpr bool __get__frozen() const;

 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> __declspec(property(get=__get__nextQueue, put=__set__nextQueue))  _nextQueue;

constexpr void __set__nextQueue(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> value) ;

constexpr ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> __get__nextQueue() const;

 int32_t __declspec(property(get=__get__ownerThreadId, put=__set__ownerThreadId))  _ownerThreadId;

constexpr void __set__ownerThreadId(int32_t value) ;

constexpr int32_t __get__ownerThreadId() const;


// Properties

 int32_t __declspec(property(get=get_DangerousCount))  DangerousCount;


// Methods

// Ctor Parameters [CppParam { name: "nextQueue", ty: "::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>", modifiers: "", def_value: None }]
explicit ____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> nextQueue) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> nextQueue) ;

/// @brief Method LocalPush addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalPush(T item, ByRef<int64_t> emptyToNonEmptyListTransitionCount) ;

/// @brief Method LocalClear addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalClear() ;

/// @brief Method TryLocalPop addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryLocalPop(ByRef<T> result) ;

/// @brief Method TrySteal addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySteal(ByRef<T> result, bool take) ;

/// @brief Method DangerousCopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t DangerousCopyTo(::ArrayW<T> array, int32_t arrayIndex) ;

/// @brief Method get_DangerousCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_DangerousCount() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
// Type: ::Enumerator
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8379))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8379), inst: 2 })
// CS Name: System.Collections.Concurrent.ConcurrentBag`1::Enumerator
class CORDL_TYPE ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<T>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____System__Collections__Concurrent__ConcurrentBag_1__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Concurrent__ConcurrentBag_1__Enumerator", modifiers: " const&", def_value: None }]
constexpr ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator(____System__Collections__Concurrent__ConcurrentBag_1__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Collections__Concurrent__ConcurrentBag_1__Enumerator", modifiers: "&&", def_value: None }]
constexpr ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator(____System__Collections__Concurrent__ConcurrentBag_1__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator& operator=(____System__Collections__Concurrent__ConcurrentBag_1__Enumerator&& o) noexcept = default;
  constexpr ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator& operator=(____System__Collections__Concurrent__ConcurrentBag_1__Enumerator const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__array() const;

 T __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(T value) ;

constexpr T __get__current() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Properties

 T __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "array", ty: "::ArrayW<T>", modifiers: "", def_value: None }]
explicit ____System__Collections__Concurrent__ConcurrentBag_1__Enumerator(::ArrayW<T> array) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<T> array) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 T get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
// Type: System.Collections.Concurrent::ConcurrentBag`1
namespace System::Collections::Concurrent {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8380))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8380), inst: 2 })
// CS Name: System.Collections.Concurrent.ConcurrentBag`1
class CORDL_TYPE ConcurrentBag_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Enumerator = ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__Enumerator<T>;

using WorkStealingQueue = ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>;

/// @brief Convert operator to ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>
constexpr operator  ::System::Collections::Concurrent::IProducerConsumerCollection_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<T>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IReadOnlyCollection_1<T>
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ConcurrentBag_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentBag_1", modifiers: " const&", def_value: None }]
constexpr ConcurrentBag_1(ConcurrentBag_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConcurrentBag_1", modifiers: "&&", def_value: None }]
constexpr ConcurrentBag_1(ConcurrentBag_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConcurrentBag_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConcurrentBag_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConcurrentBag_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConcurrentBag_1& operator=(ConcurrentBag_1&& o) noexcept = default;
  constexpr ConcurrentBag_1& operator=(ConcurrentBag_1 const& o) noexcept = default;
                


// Fields

 ::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>> __declspec(property(get=__get__locals, put=__set__locals))  _locals;

constexpr void __set__locals(::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>> value) ;

constexpr ::System::Threading::ThreadLocal_1<::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T>> __get__locals() const;

 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> __declspec(property(get=__get__workStealingQueues, put=__set__workStealingQueues))  _workStealingQueues;

constexpr void __set__workStealingQueues(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> value) ;

constexpr ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> __get__workStealingQueues() const;

 int64_t __declspec(property(get=__get__emptyToNonEmptyListTransitionCount, put=__set__emptyToNonEmptyListTransitionCount))  _emptyToNonEmptyListTransitionCount;

constexpr void __set__emptyToNonEmptyListTransitionCount(int64_t value) ;

constexpr int64_t __get__emptyToNonEmptyListTransitionCount() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 int32_t __declspec(property(get=get_DangerousCount))  DangerousCount;

 bool __declspec(property(get=System_Collections_ICollection_get_IsSynchronized))  System_Collections_ICollection_IsSynchronized;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_ICollection_get_SyncRoot))  System_Collections_ICollection_SyncRoot;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_GlobalQueuesLock))  GlobalQueuesLock;


// Methods

// Ctor Parameters []
explicit ConcurrentBag_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 void Add(T item) ;

/// @brief Method System.Collections.Concurrent.IProducerConsumerCollection<T>.TryAdd addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_Concurrent_IProducerConsumerCollection_T__TryAdd(T item) ;

/// @brief Method TryTake addr 0x0 size 0xffffffffffffffff virtual true final true
 bool TryTake(ByRef<T> result) ;

/// @brief Method GetCurrentThreadWorkStealingQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> GetCurrentThreadWorkStealingQueue(bool forceCreate) ;

/// @brief Method CreateWorkStealingQueueForCurrentThread addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> CreateWorkStealingQueueForCurrentThread() ;

/// @brief Method GetUnownedWorkStealingQueue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> GetUnownedWorkStealingQueue() ;

/// @brief Method TrySteal addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TrySteal(ByRef<T> result, bool take) ;

/// @brief Method TryStealFromTo addr 0x0 size 0xffffffffffffffff virtual false final false
 bool TryStealFromTo(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> startInclusive, ::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue<T> endExclusive, ByRef<T> result, bool take) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t index) ;

/// @brief Method CopyFromEachQueueToArray addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t CopyFromEachQueueToArray(::ArrayW<T> array, int32_t index) ;

/// @brief Method System.Collections.ICollection.CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void System_Collections_ICollection_CopyTo(::System::Array array, int32_t index) ;

/// @brief Method ToArray addr 0x0 size 0xffffffffffffffff virtual true final true
 ::ArrayW<T> ToArray() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_DangerousCount addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_DangerousCount() ;

/// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x0 size 0xffffffffffffffff virtual true final true
 bool System_Collections_ICollection_get_IsSynchronized() ;

/// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_ICollection_get_SyncRoot() ;

/// @brief Method get_GlobalQueuesLock addr 0x0 size 0xffffffffffffffff virtual false final false
 ::bs_hook::Il2CppWrapperType get_GlobalQueuesLock() ;

/// @brief Method FreezeBag addr 0x0 size 0xffffffffffffffff virtual false final false
 void FreezeBag(ByRef<bool> lockTaken) ;

/// @brief Method UnfreezeBag addr 0x0 size 0xffffffffffffffff virtual false final false
 void UnfreezeBag(bool lockTaken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::ConcurrentBag_1, "System.Collections.Concurrent", "ConcurrentBag`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__Enumerator, "System.Collections.Concurrent", "ConcurrentBag`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::____System__Collections__Concurrent__ConcurrentBag_1__WorkStealingQueue, "System.Collections.Concurrent", "ConcurrentBag`1/WorkStealingQueue");
