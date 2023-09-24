#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Threading {
class System__Threading__SemaphoreSlim__TaskNode;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
struct System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class System__Threading__SemaphoreSlim__TaskNode;
}
namespace System::Threading {
struct System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32;
}
// Type: ::TaskNode
namespace System::Threading {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 99 }), TypeDefinitionIndex(TypeDefinitionIndex(2770))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2696))
// CS Name: System.Threading.SemaphoreSlim::TaskNode
class CORDL_TYPE System__Threading__SemaphoreSlim__TaskNode : public System::Threading::Tasks::Task_1<bool> {
public:
// Declarations
/// @brief Convert operator to System::Threading::IThreadPoolWorkItem
constexpr operator  System::Threading::IThreadPoolWorkItem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~System__Threading__SemaphoreSlim__TaskNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__SemaphoreSlim__TaskNode", modifiers: " const&", def_value: None }]
constexpr System__Threading__SemaphoreSlim__TaskNode(System__Threading__SemaphoreSlim__TaskNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__SemaphoreSlim__TaskNode", modifiers: "&&", def_value: None }]
constexpr System__Threading__SemaphoreSlim__TaskNode(System__Threading__SemaphoreSlim__TaskNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__SemaphoreSlim__TaskNode(void* ptr) noexcept : System::Threading::Tasks::Task_1<bool>(ptr) {
}


  constexpr System__Threading__SemaphoreSlim__TaskNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__SemaphoreSlim__TaskNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__SemaphoreSlim__TaskNode& operator=(System__Threading__SemaphoreSlim__TaskNode&& o) noexcept = default;
  constexpr System__Threading__SemaphoreSlim__TaskNode& operator=(System__Threading__SemaphoreSlim__TaskNode const& o) noexcept = default;
                


// Fields

 System::Threading::System__Threading__SemaphoreSlim__TaskNode __declspec(property(get=__get_Prev, put=__set_Prev))  Prev;

constexpr void __set_Prev(System::Threading::System__Threading__SemaphoreSlim__TaskNode value) ;

constexpr System::Threading::System__Threading__SemaphoreSlim__TaskNode __get_Prev() const;

 System::Threading::System__Threading__SemaphoreSlim__TaskNode __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(System::Threading::System__Threading__SemaphoreSlim__TaskNode value) ;

constexpr System::Threading::System__Threading__SemaphoreSlim__TaskNode __get_Next() const;


// Methods

static System::Threading::System__Threading__SemaphoreSlim__TaskNode New_ctor() ;

/// @brief Method .ctor addr 0x24a79e8 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x24a8108 size 0x4c virtual true final true
 void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted addr 0x24a8154 size 0x4 virtual true final true
 void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException tae) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::<WaitUntilCountOrTimeoutAsync>d__32
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2697))
// CS Name: System.Threading.SemaphoreSlim::<WaitUntilCountOrTimeoutAsync>d__32
struct CORDL_TYPE System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "asyncWaiter", ty: "System::Threading::System__Threading__SemaphoreSlim__TaskNode", modifiers: "", def_value: None }, CppParam { name: "millisecondsTimeout", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Threading::SemaphoreSlim", modifiers: "", def_value: None }, CppParam { name: "_cts_5__2", ty: "System::Threading::CancellationTokenSource", modifiers: "", def_value: None }, CppParam { name: "__7__wrap2", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None }]
constexpr System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, System::Threading::CancellationToken cancellationToken, System::Threading::System__Threading__SemaphoreSlim__TaskNode asyncWaiter, int32_t millisecondsTimeout, System::Threading::SemaphoreSlim __4__this, System::Threading::CancellationTokenSource _cts_5__2, ::bs_hook::Il2CppWrapperType __7__wrap2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __u__1, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept;


                    constexpr System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32(System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32 const&) = default;
                    constexpr System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32(System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32&&) = default;
                    constexpr System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32& operator=(System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32& operator=(System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __get___t__builder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_cancellationToken, put=__set_cancellationToken))  cancellationToken;

constexpr void __set_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_cancellationToken() const;

 System::Threading::System__Threading__SemaphoreSlim__TaskNode __declspec(property(get=__get_asyncWaiter, put=__set_asyncWaiter))  asyncWaiter;

constexpr void __set_asyncWaiter(System::Threading::System__Threading__SemaphoreSlim__TaskNode value) ;

constexpr System::Threading::System__Threading__SemaphoreSlim__TaskNode __get_asyncWaiter() const;

 int32_t __declspec(property(get=__get_millisecondsTimeout, put=__set_millisecondsTimeout))  millisecondsTimeout;

constexpr void __set_millisecondsTimeout(int32_t value) ;

constexpr int32_t __get_millisecondsTimeout() const;

 System::Threading::SemaphoreSlim __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Threading::SemaphoreSlim value) ;

constexpr System::Threading::SemaphoreSlim __get___4__this() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cts_5__2, put=__set__cts_5__2))  _cts_5__2;

constexpr void __set__cts_5__2(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cts_5__2() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2))  __7__wrap2;

constexpr void __set___7__wrap2(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___7__wrap2() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Threading::Tasks::Task> __get___u__1() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __declspec(property(get=__get___u__2, put=__set___u__2))  __u__2;

constexpr void __set___u__2(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __get___u__2() const;


// Methods

/// @brief Method MoveNext addr 0x24a8158 size 0x76c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x24a88c4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::SemaphoreSlim
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2698))
// CS Name: System.Threading.SemaphoreSlim
class CORDL_TYPE SemaphoreSlim : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _WaitUntilCountOrTimeoutAsync_d__32 = System::Threading::System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32;

using TaskNode = System::Threading::System__Threading__SemaphoreSlim__TaskNode;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SemaphoreSlim() = default;

// Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim", modifiers: " const&", def_value: None }]
constexpr SemaphoreSlim(SemaphoreSlim const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim", modifiers: "&&", def_value: None }]
constexpr SemaphoreSlim(SemaphoreSlim&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SemaphoreSlim(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SemaphoreSlim& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SemaphoreSlim& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SemaphoreSlim& operator=(SemaphoreSlim&& o) noexcept = default;
  constexpr SemaphoreSlim& operator=(SemaphoreSlim const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_currentCount, put=__set_m_currentCount))  m_currentCount;

constexpr void __set_m_currentCount(int32_t value) ;

constexpr int32_t __get_m_currentCount() const;

 int32_t __declspec(property(get=__get_m_maxCount, put=__set_m_maxCount))  m_maxCount;

constexpr void __set_m_maxCount(int32_t value) ;

constexpr int32_t __get_m_maxCount() const;

 int32_t __declspec(property(get=__get_m_waitCount, put=__set_m_waitCount))  m_waitCount;

constexpr void __set_m_waitCount(int32_t value) ;

constexpr int32_t __get_m_waitCount() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_lockObj, put=__set_m_lockObj))  m_lockObj;

constexpr void __set_m_lockObj(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_lockObj() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get_m_waitHandle, put=__set_m_waitHandle))  m_waitHandle;

constexpr void __set_m_waitHandle(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get_m_waitHandle() const;

 System::Threading::System__Threading__SemaphoreSlim__TaskNode __declspec(property(get=__get_m_asyncHead, put=__set_m_asyncHead))  m_asyncHead;

constexpr void __set_m_asyncHead(System::Threading::System__Threading__SemaphoreSlim__TaskNode value) ;

constexpr System::Threading::System__Threading__SemaphoreSlim__TaskNode __get_m_asyncHead() const;

 System::Threading::System__Threading__SemaphoreSlim__TaskNode __declspec(property(get=__get_m_asyncTail, put=__set_m_asyncTail))  m_asyncTail;

constexpr void __set_m_asyncTail(System::Threading::System__Threading__SemaphoreSlim__TaskNode value) ;

constexpr System::Threading::System__Threading__SemaphoreSlim__TaskNode __get_m_asyncTail() const;

static System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_s_trueTask, put=__set_s_trueTask))  s_trueTask;

static void __set_s_trueTask(System::Threading::Tasks::Task_1<bool> value) ;

static System::Threading::Tasks::Task_1<bool> __get_s_trueTask() ;

static System::Threading::Tasks::Task_1<bool> __declspec(property(get=__get_s_falseTask, put=__set_s_falseTask))  s_falseTask;

static void __set_s_falseTask(System::Threading::Tasks::Task_1<bool> value) ;

static System::Threading::Tasks::Task_1<bool> __get_s_falseTask() ;

/// @brief Field NO_MAXIMUM offset 0
static constexpr int32_t  NO_MAXIMUM{2147483647};

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_cancellationTokenCanceledEventHandler, put=__set_s_cancellationTokenCanceledEventHandler))  s_cancellationTokenCanceledEventHandler;

static void __set_s_cancellationTokenCanceledEventHandler(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get_s_cancellationTokenCanceledEventHandler() ;


// Properties

 int32_t __declspec(property(get=get_CurrentCount))  CurrentCount;


// Methods

/// @brief Method get_CurrentCount addr 0x24a6d24 size 0x18 virtual false final false
 int32_t get_CurrentCount() ;

static System::Threading::SemaphoreSlim New_ctor(int32_t initialCount) ;

/// @brief Method .ctor addr 0x24a6d3c size 0x8 virtual false final false
 void _ctor(int32_t initialCount) ;

static System::Threading::SemaphoreSlim New_ctor(int32_t initialCount, int32_t maxCount) ;

/// @brief Method .ctor addr 0x24a6d44 size 0x194 virtual false final false
 void _ctor(int32_t initialCount, int32_t maxCount) ;

/// @brief Method Wait addr 0x24a6ee0 size 0xc virtual false final false
 void Wait() ;

/// @brief Method Wait addr 0x24a73c4 size 0x8 virtual false final false
 bool Wait(int32_t millisecondsTimeout) ;

/// @brief Method Wait addr 0x24a6eec size 0x4d8 virtual false final false
 bool Wait(int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WaitUntilCountOrTimeout addr 0x24a7734 size 0x90 virtual false final false
 bool WaitUntilCountOrTimeout(int32_t millisecondsTimeout, uint32_t startTime, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WaitAsync addr 0x24a7828 size 0xc virtual false final false
 System::Threading::Tasks::Task WaitAsync() ;

/// @brief Method WaitAsync addr 0x24a7834 size 0xc virtual false final false
 System::Threading::Tasks::Task WaitAsync(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WaitAsync addr 0x24a7450 size 0x2e4 virtual false final false
 System::Threading::Tasks::Task_1<bool> WaitAsync(int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method CreateAndAddAsyncWaiter addr 0x24a7840 size 0x84 virtual false final false
 System::Threading::System__Threading__SemaphoreSlim__TaskNode CreateAndAddAsyncWaiter() ;

/// @brief Method RemoveAsyncWaiter addr 0x24a7a30 size 0x80 virtual false final false
 bool RemoveAsyncWaiter(System::Threading::System__Threading__SemaphoreSlim__TaskNode task) ;

/// @brief Method WaitUntilCountOrTimeoutAsync addr 0x24a78c4 size 0x124 virtual false final false
 System::Threading::Tasks::Task_1<bool> WaitUntilCountOrTimeoutAsync(System::Threading::System__Threading__SemaphoreSlim__TaskNode asyncWaiter, int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Release addr 0x24a7ab0 size 0x8 virtual false final false
 int32_t Release() ;

/// @brief Method Release addr 0x24a7ab8 size 0x2e4 virtual false final false
 int32_t Release(int32_t releaseCount) ;

/// @brief Method QueueWaiterTask addr 0x24a7df4 size 0xc virtual false final false
static void QueueWaiterTask(System::Threading::System__Threading__SemaphoreSlim__TaskNode waiterTask) ;

/// @brief Method Dispose addr 0x24a7e00 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x24a7e6c size 0x5c virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method CancellationTokenCanceledEventHandler addr 0x24a7ec8 size 0x114 virtual false final false
static void CancellationTokenCanceledEventHandler(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method CheckDispose addr 0x24a73cc size 0x84 virtual false final false
 void CheckDispose() ;

/// @brief Method GetResourceString addr 0x24a6ed8 size 0x8 virtual false final false
static ::StringW GetResourceString(::StringW str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::SemaphoreSlim);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SemaphoreSlim, "System.Threading", "SemaphoreSlim");
NEED_NO_BOX(System::Threading::System__Threading__SemaphoreSlim__TaskNode);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__SemaphoreSlim__TaskNode, "System.Threading", "SemaphoreSlim/TaskNode");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32, "System.Threading", "SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__32");
