#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Threading {
class ThreadPoolWorkQueueThreadLocals;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
struct SpinLock;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
class ____System__Threading__ThreadPoolWorkQueue__SparseArray_1;
}
namespace System::Threading {
class ThreadPoolWorkQueue;
}
namespace System::Threading {
class ____System__Threading__ThreadPoolWorkQueue__QueueSegment;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
class ____System__Threading__ThreadPoolWorkQueue__SparseArray_1<T>;
}
namespace System::Threading {
class ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue;
}
// Type: ::SparseArray`1
// Type: ::WorkStealingQueue
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2731))
// CS Name: System.Threading.ThreadPoolWorkQueue::WorkStealingQueue
class CORDL_TYPE ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue(____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue(____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue& operator=(____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue&& o) noexcept = default;
  constexpr ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue& operator=(____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue const& o) noexcept = default;
                


// Fields

 ::ArrayW<::System::Threading::IThreadPoolWorkItem> __declspec(property(get=__get_m_array, put=__set_m_array))  m_array;

constexpr void __set_m_array(::ArrayW<::System::Threading::IThreadPoolWorkItem> value) ;

constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem> __get_m_array() const;

 int32_t __declspec(property(get=__get_m_mask, put=__set_m_mask))  m_mask;

constexpr void __set_m_mask(int32_t value) ;

constexpr int32_t __get_m_mask() const;

 int32_t __declspec(property(get=__get_m_headIndex, put=__set_m_headIndex))  m_headIndex;

constexpr void __set_m_headIndex(int32_t value) ;

constexpr int32_t __get_m_headIndex() const;

 int32_t __declspec(property(get=__get_m_tailIndex, put=__set_m_tailIndex))  m_tailIndex;

constexpr void __set_m_tailIndex(int32_t value) ;

constexpr int32_t __get_m_tailIndex() const;

 ::System::Threading::SpinLock __declspec(property(get=__get_m_foreignLock, put=__set_m_foreignLock))  m_foreignLock;

constexpr void __set_m_foreignLock(::System::Threading::SpinLock value) ;

constexpr ::System::Threading::SpinLock __get_m_foreignLock() const;


// Methods

/// @brief Method LocalPush addr 0x24ad4cc size 0x434 virtual false final false
 void LocalPush(::System::Threading::IThreadPoolWorkItem obj) ;

/// @brief Method LocalFindAndPop addr 0x24ad970 size 0x2bc virtual false final false
 bool LocalFindAndPop(::System::Threading::IThreadPoolWorkItem obj) ;

/// @brief Method LocalPop addr 0x24addfc size 0x274 virtual false final false
 bool LocalPop(ByRef<::System::Threading::IThreadPoolWorkItem> obj) ;

/// @brief Method TrySteal addr 0x24ae070 size 0x8 virtual false final false
 bool TrySteal(ByRef<::System::Threading::IThreadPoolWorkItem> obj, ByRef<bool> missedSteal) ;

/// @brief Method TrySteal addr 0x24ae558 size 0x244 virtual false final false
 bool TrySteal(ByRef<::System::Threading::IThreadPoolWorkItem> obj, ByRef<bool> missedSteal, int32_t millisecondsTimeout) ;

// Ctor Parameters []
explicit ____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue() ;

/// @brief Method .ctor addr 0x24ae79c size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::QueueSegment
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2732))
// CS Name: System.Threading.ThreadPoolWorkQueue::QueueSegment
class CORDL_TYPE ____System__Threading__ThreadPoolWorkQueue__QueueSegment : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____System__Threading__ThreadPoolWorkQueue__QueueSegment() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__ThreadPoolWorkQueue__QueueSegment", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__ThreadPoolWorkQueue__QueueSegment(____System__Threading__ThreadPoolWorkQueue__QueueSegment const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__ThreadPoolWorkQueue__QueueSegment", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__ThreadPoolWorkQueue__QueueSegment(____System__Threading__ThreadPoolWorkQueue__QueueSegment&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__ThreadPoolWorkQueue__QueueSegment(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__ThreadPoolWorkQueue__QueueSegment& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__ThreadPoolWorkQueue__QueueSegment& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__ThreadPoolWorkQueue__QueueSegment& operator=(____System__Threading__ThreadPoolWorkQueue__QueueSegment&& o) noexcept = default;
  constexpr ____System__Threading__ThreadPoolWorkQueue__QueueSegment& operator=(____System__Threading__ThreadPoolWorkQueue__QueueSegment const& o) noexcept = default;
                


// Fields

 ::ArrayW<::System::Threading::IThreadPoolWorkItem> __declspec(property(get=__get_nodes, put=__set_nodes))  nodes;

constexpr void __set_nodes(::ArrayW<::System::Threading::IThreadPoolWorkItem> value) ;

constexpr ::ArrayW<::System::Threading::IThreadPoolWorkItem> __get_nodes() const;

 int32_t __declspec(property(get=__get_indexes, put=__set_indexes))  indexes;

constexpr void __set_indexes(int32_t value) ;

constexpr int32_t __get_indexes() const;

 ::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment value) ;

constexpr ::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment __get_Next() const;


// Methods

/// @brief Method GetIndexes addr 0x24ae81c size 0x34 virtual false final false
 void GetIndexes(ByRef<int32_t> upper, ByRef<int32_t> lower) ;

/// @brief Method CompareExchangeIndexes addr 0x24ae850 size 0x68 virtual false final false
 bool CompareExchangeIndexes(ByRef<int32_t> prevUpper, int32_t newUpper, ByRef<int32_t> prevLower, int32_t newLower) ;

// Ctor Parameters []
explicit ____System__Threading__ThreadPoolWorkQueue__QueueSegment() ;

/// @brief Method .ctor addr 0x24ae8bc size 0x5c virtual false final false
 void _ctor() ;

/// @brief Method IsUsedUp addr 0x24ae918 size 0x44 virtual false final false
 bool IsUsedUp() ;

/// @brief Method TryEnqueue addr 0x24ae95c size 0xac virtual false final false
 bool TryEnqueue(::System::Threading::IThreadPoolWorkItem node) ;

/// @brief Method TryDequeue addr 0x24aea08 size 0xec virtual false final false
 bool TryDequeue(ByRef<::System::Threading::IThreadPoolWorkItem> node) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::ThreadPoolWorkQueue
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2733))
// CS Name: System.Threading.ThreadPoolWorkQueue
class CORDL_TYPE ThreadPoolWorkQueue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using QueueSegment = ::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment;

using WorkStealingQueue = ::System::Threading::____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue;

template<typename T>
using SparseArray_1 = ::System::Threading::____System__Threading__ThreadPoolWorkQueue__SparseArray_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ThreadPoolWorkQueue() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue", modifiers: " const&", def_value: None }]
constexpr ThreadPoolWorkQueue(ThreadPoolWorkQueue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolWorkQueue", modifiers: "&&", def_value: None }]
constexpr ThreadPoolWorkQueue(ThreadPoolWorkQueue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadPoolWorkQueue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadPoolWorkQueue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadPoolWorkQueue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadPoolWorkQueue& operator=(ThreadPoolWorkQueue&& o) noexcept = default;
  constexpr ThreadPoolWorkQueue& operator=(ThreadPoolWorkQueue const& o) noexcept = default;
                


// Fields

 ::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment __declspec(property(get=__get_queueHead, put=__set_queueHead))  queueHead;

constexpr void __set_queueHead(::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment value) ;

constexpr ::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment __get_queueHead() const;

 ::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment __declspec(property(get=__get_queueTail, put=__set_queueTail))  queueTail;

constexpr void __set_queueTail(::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment value) ;

constexpr ::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment __get_queueTail() const;

static ::System::Threading::____System__Threading__ThreadPoolWorkQueue__SparseArray_1<::System::Threading::____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue> __declspec(property(get=__get_allThreadQueues, put=__set_allThreadQueues))  allThreadQueues;

static void __set_allThreadQueues(::System::Threading::____System__Threading__ThreadPoolWorkQueue__SparseArray_1<::System::Threading::____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue> value) ;

static ::System::Threading::____System__Threading__ThreadPoolWorkQueue__SparseArray_1<::System::Threading::____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue> __get_allThreadQueues() ;

 int32_t __declspec(property(get=__get_numOutstandingThreadRequests, put=__set_numOutstandingThreadRequests))  numOutstandingThreadRequests;

constexpr void __set_numOutstandingThreadRequests(int32_t value) ;

constexpr int32_t __get_numOutstandingThreadRequests() const;


// Methods

// Ctor Parameters []
explicit ThreadPoolWorkQueue() ;

/// @brief Method .ctor addr 0x24ad19c size 0x78 virtual false final false
 void _ctor() ;

/// @brief Method EnsureCurrentThreadHasQueue addr 0x24ad214 size 0x90 virtual false final false
 ::System::Threading::ThreadPoolWorkQueueThreadLocals EnsureCurrentThreadHasQueue() ;

/// @brief Method EnsureThreadRequested addr 0x24ad2a4 size 0xa0 virtual false final false
 void EnsureThreadRequested() ;

/// @brief Method MarkThreadRequestSatisfied addr 0x24ad344 size 0x4c virtual false final false
 void MarkThreadRequestSatisfied() ;

/// @brief Method Enqueue addr 0x24ad390 size 0x13c virtual false final false
 void Enqueue(::System::Threading::IThreadPoolWorkItem callback, bool forceGlobal) ;

/// @brief Method LocalFindAndPop addr 0x24ad900 size 0x70 virtual false final false
 bool LocalFindAndPop(::System::Threading::IThreadPoolWorkItem callback) ;

/// @brief Method Dequeue addr 0x24adc2c size 0x1d0 virtual false final false
 void Dequeue(::System::Threading::ThreadPoolWorkQueueThreadLocals tl, ByRef<::System::Threading::IThreadPoolWorkItem> callback, ByRef<bool> missedSteal) ;

/// @brief Method Dispatch addr 0x24ae078 size 0x450 virtual false final false
static bool Dispatch() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::SparseArray`1
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2730))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2730), inst: 2 })
// CS Name: System.Threading.ThreadPoolWorkQueue::SparseArray`1
class CORDL_TYPE ____System__Threading__ThreadPoolWorkQueue__SparseArray_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____System__Threading__ThreadPoolWorkQueue__SparseArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__ThreadPoolWorkQueue__SparseArray_1", modifiers: " const&", def_value: None }]
constexpr ____System__Threading__ThreadPoolWorkQueue__SparseArray_1(____System__Threading__ThreadPoolWorkQueue__SparseArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Threading__ThreadPoolWorkQueue__SparseArray_1", modifiers: "&&", def_value: None }]
constexpr ____System__Threading__ThreadPoolWorkQueue__SparseArray_1(____System__Threading__ThreadPoolWorkQueue__SparseArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Threading__ThreadPoolWorkQueue__SparseArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Threading__ThreadPoolWorkQueue__SparseArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Threading__ThreadPoolWorkQueue__SparseArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Threading__ThreadPoolWorkQueue__SparseArray_1& operator=(____System__Threading__ThreadPoolWorkQueue__SparseArray_1&& o) noexcept = default;
  constexpr ____System__Threading__ThreadPoolWorkQueue__SparseArray_1& operator=(____System__Threading__ThreadPoolWorkQueue__SparseArray_1 const& o) noexcept = default;
                


// Fields

 ::ArrayW<T> __declspec(property(get=__get_m_array, put=__set_m_array))  m_array;

constexpr void __set_m_array(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get_m_array() const;


// Properties

 ::ArrayW<T> __declspec(property(get=get_Current))  Current;


// Methods

// Ctor Parameters [CppParam { name: "initialSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Threading__ThreadPoolWorkQueue__SparseArray_1(int32_t initialSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t initialSize) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual false final false
 ::ArrayW<T> get_Current() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Add(T e) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual false final false
 void Remove(T e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::____System__Threading__ThreadPoolWorkQueue__SparseArray_1, "System.Threading", "ThreadPoolWorkQueue/SparseArray`1");
NEED_NO_BOX(::System::Threading::ThreadPoolWorkQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ThreadPoolWorkQueue, "System.Threading", "ThreadPoolWorkQueue");
NEED_NO_BOX(::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::____System__Threading__ThreadPoolWorkQueue__QueueSegment, "System.Threading", "ThreadPoolWorkQueue/QueueSegment");
NEED_NO_BOX(::System::Threading::____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::____System__Threading__ThreadPoolWorkQueue__WorkStealingQueue, "System.Threading", "ThreadPoolWorkQueue/WorkStealingQueue");
