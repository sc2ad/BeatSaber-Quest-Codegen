#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Threading::Tasks {
class TaskExceptionHolder;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Collections::Generic {
template<typename T>
class LowLevelListWithIList_1;
}
namespace System::Threading {
class ManualResetEventSlim;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class TimerCallback;
}
namespace System::Runtime::CompilerServices {
struct YieldAwaitable;
}
namespace System::Threading::Tasks {
struct TaskStatus;
}
namespace System {
class Delegate;
}
namespace System {
struct TimeSpan;
}
namespace System::Threading::Tasks {
class System__Threading__Tasks__Task__DelayPromise;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading::Tasks {
class System__Threading__Tasks__Task____c;
}
namespace System::Threading::Tasks {
class StackGuard;
}
namespace System::Threading::Tasks {
class TaskContinuation;
}
namespace System {
class IDisposable;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class System__Threading__Tasks__Task__ContingentProperties;
}
namespace System::Threading {
class WaitHandle;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System {
class Action;
}
namespace System::Threading::Tasks {
class System__Threading__Tasks__Task__SetOnInvokeMres;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading::Tasks {
template<typename T>
class System__Threading__Tasks__Task__WhenAllPromise_1;
}
namespace System::Threading::Tasks {
class TaskFactory;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System {
class OperationCanceledException;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System {
class AggregateException;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Exception;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
namespace System::Runtime::CompilerServices {
struct ConfiguredTaskAwaitable;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
// Forward declare root types
namespace System::Threading::Tasks {
class System__Threading__Tasks__Task__ContingentProperties;
}
namespace System::Threading::Tasks {
class System__Threading__Tasks__Task__SetOnInvokeMres;
}
namespace System::Threading::Tasks {
class System__Threading__Tasks__Task____c;
}
namespace System::Threading::Tasks {
class Task;
}
// Type: ::ContingentProperties
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2778))
// CS Name: System.Threading.Tasks.Task::ContingentProperties
class CORDL_TYPE System__Threading__Tasks__Task__ContingentProperties : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~System__Threading__Tasks__Task__ContingentProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__Task__ContingentProperties", modifiers: " const&", def_value: None }]
constexpr System__Threading__Tasks__Task__ContingentProperties(System__Threading__Tasks__Task__ContingentProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__Task__ContingentProperties", modifiers: "&&", def_value: None }]
constexpr System__Threading__Tasks__Task__ContingentProperties(System__Threading__Tasks__Task__ContingentProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Tasks__Task__ContingentProperties(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__Tasks__Task__ContingentProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Tasks__Task__ContingentProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Tasks__Task__ContingentProperties& operator=(System__Threading__Tasks__Task__ContingentProperties&& o) noexcept = default;
  constexpr System__Threading__Tasks__Task__ContingentProperties& operator=(System__Threading__Tasks__Task__ContingentProperties const& o) noexcept = default;
                


// Fields

 System::Threading::ExecutionContext __declspec(property(get=__get_m_capturedContext, put=__set_m_capturedContext))  m_capturedContext;

constexpr void __set_m_capturedContext(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get_m_capturedContext() const;

 System::Threading::ManualResetEventSlim __declspec(property(get=__get_m_completionEvent, put=__set_m_completionEvent))  m_completionEvent;

constexpr void __set_m_completionEvent(System::Threading::ManualResetEventSlim value) ;

constexpr System::Threading::ManualResetEventSlim __get_m_completionEvent() const;

 System::Threading::Tasks::TaskExceptionHolder __declspec(property(get=__get_m_exceptionsHolder, put=__set_m_exceptionsHolder))  m_exceptionsHolder;

constexpr void __set_m_exceptionsHolder(System::Threading::Tasks::TaskExceptionHolder value) ;

constexpr System::Threading::Tasks::TaskExceptionHolder __get_m_exceptionsHolder() const;

 System::Threading::CancellationToken __declspec(property(get=__get_m_cancellationToken, put=__set_m_cancellationToken))  m_cancellationToken;

constexpr void __set_m_cancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_m_cancellationToken() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_cancellationRegistration, put=__set_m_cancellationRegistration))  m_cancellationRegistration;

constexpr void __set_m_cancellationRegistration(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_cancellationRegistration() const;

 int32_t __declspec(property(get=__get_m_internalCancellationRequested, put=__set_m_internalCancellationRequested))  m_internalCancellationRequested;

constexpr void __set_m_internalCancellationRequested(int32_t value) ;

constexpr int32_t __get_m_internalCancellationRequested() const;

 int32_t __declspec(property(get=__get_m_completionCountdown, put=__set_m_completionCountdown))  m_completionCountdown;

constexpr void __set_m_completionCountdown(int32_t value) ;

constexpr int32_t __get_m_completionCountdown() const;

 System::Collections::Generic::LowLevelListWithIList_1<System::Threading::Tasks::Task> __declspec(property(get=__get_m_exceptionalChildren, put=__set_m_exceptionalChildren))  m_exceptionalChildren;

constexpr void __set_m_exceptionalChildren(System::Collections::Generic::LowLevelListWithIList_1<System::Threading::Tasks::Task> value) ;

constexpr System::Collections::Generic::LowLevelListWithIList_1<System::Threading::Tasks::Task> __get_m_exceptionalChildren() const;


// Methods

/// @brief Method SetCompleted addr 0x24b80c0 size 0x28 virtual false final false
 void SetCompleted() ;

/// @brief Method UnregisterCancellationCallback addr 0x24b80e8 size 0x108 virtual false final false
 void UnregisterCancellationCallback() ;

static System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties New_ctor() ;

/// @brief Method .ctor addr 0x24b52d8 size 0x24 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::SetOnInvokeMres
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2677))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2779))
// CS Name: System.Threading.Tasks.Task::SetOnInvokeMres
class CORDL_TYPE System__Threading__Tasks__Task__SetOnInvokeMres : public System::Threading::ManualResetEventSlim {
public:
// Declarations
/// @brief Convert operator to System::Threading::Tasks::ITaskCompletionAction
constexpr operator  System::Threading::Tasks::ITaskCompletionAction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Threading__Tasks__Task__SetOnInvokeMres() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__Task__SetOnInvokeMres", modifiers: " const&", def_value: None }]
constexpr System__Threading__Tasks__Task__SetOnInvokeMres(System__Threading__Tasks__Task__SetOnInvokeMres const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__Task__SetOnInvokeMres", modifiers: "&&", def_value: None }]
constexpr System__Threading__Tasks__Task__SetOnInvokeMres(System__Threading__Tasks__Task__SetOnInvokeMres&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Tasks__Task__SetOnInvokeMres(void* ptr) noexcept : System::Threading::ManualResetEventSlim(ptr) {
}


  constexpr System__Threading__Tasks__Task__SetOnInvokeMres& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Tasks__Task__SetOnInvokeMres& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Tasks__Task__SetOnInvokeMres& operator=(System__Threading__Tasks__Task__SetOnInvokeMres&& o) noexcept = default;
  constexpr System__Threading__Tasks__Task__SetOnInvokeMres& operator=(System__Threading__Tasks__Task__SetOnInvokeMres const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_InvokeMayRunArbitraryCode))  InvokeMayRunArbitraryCode;


// Methods

static System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres New_ctor() ;

/// @brief Method .ctor addr 0x24ba2b4 size 0x60 virtual false final false
 void _ctor() ;

/// @brief Method Invoke addr 0x24bca60 size 0x8 virtual true final true
 void Invoke(System::Threading::Tasks::Task completingTask) ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x24bca68 size 0x8 virtual true final true
 bool get_InvokeMayRunArbitraryCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: ::<>c
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2782))
// CS Name: System.Threading.Tasks.Task::<>c
class CORDL_TYPE System__Threading__Tasks__Task____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Threading__Tasks__Task____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__Task____c", modifiers: " const&", def_value: None }]
constexpr System__Threading__Tasks__Task____c(System__Threading__Tasks__Task____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__Task____c", modifiers: "&&", def_value: None }]
constexpr System__Threading__Tasks__Task____c(System__Threading__Tasks__Task____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Tasks__Task____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__Tasks__Task____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Tasks__Task____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Tasks__Task____c& operator=(System__Threading__Tasks__Task____c&& o) noexcept = default;
  constexpr System__Threading__Tasks__Task____c& operator=(System__Threading__Tasks__Task____c const& o) noexcept = default;
                


// Fields

static System::Threading::Tasks::System__Threading__Tasks__Task____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Threading::Tasks::System__Threading__Tasks__Task____c value) ;

static System::Threading::Tasks::System__Threading__Tasks__Task____c __get___9() ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get___9__247_0, put=__set___9__247_0))  __9__247_0;

static void __set___9__247_0(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get___9__247_0() ;

static System::Threading::TimerCallback __declspec(property(get=__get___9__247_1, put=__set___9__247_1))  __9__247_1;

static void __set___9__247_1(System::Threading::TimerCallback value) ;

static System::Threading::TimerCallback __get___9__247_1() ;


// Methods

static System::Threading::Tasks::System__Threading__Tasks__Task____c New_ctor() ;

/// @brief Method .ctor addr 0x24bcc0c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Delay>b__247_0 addr 0x24bcc14 size 0x60 virtual false final false
 void _Delay_b__247_0(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method <Delay>b__247_1 addr 0x24bcc74 size 0x60 virtual false final false
 void _Delay_b__247_1(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method <.cctor>b__271_0 addr 0x24bccd4 size 0x6c virtual false final false
 System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties __cctor_b__271_0() ;

/// @brief Method <.cctor>b__271_1 addr 0x24bcd40 size 0x20 virtual false final false
 bool __cctor_b__271_1(System::Threading::Tasks::Task t) ;

/// @brief Method <.cctor>b__271_2 addr 0x24bcd60 size 0xc virtual false final false
 bool __cctor_b__271_2(::bs_hook::Il2CppWrapperType tc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::Task
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2783))
// CS Name: System.Threading.Tasks.Task
class CORDL_TYPE Task : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = System::Threading::Tasks::System__Threading__Tasks__Task____c;

template<typename T>
using WhenAllPromise_1 = System::Threading::Tasks::System__Threading__Tasks__Task__WhenAllPromise_1<T>;

using DelayPromise = System::Threading::Tasks::System__Threading__Tasks__Task__DelayPromise;

using SetOnInvokeMres = System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres;

using ContingentProperties = System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties;

/// @brief Convert operator to System::Threading::IThreadPoolWorkItem
constexpr operator  System::Threading::IThreadPoolWorkItem() const noexcept;

/// @brief Convert operator to System::IAsyncResult
constexpr operator  System::IAsyncResult() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Task() = default;

// Ctor Parameters [CppParam { name: "", ty: "Task", modifiers: " const&", def_value: None }]
constexpr Task(Task const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Task", modifiers: "&&", def_value: None }]
constexpr Task(Task&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Task(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Task& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Task& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Task& operator=(Task&& o) noexcept = default;
  constexpr Task& operator=(Task const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_s_taskIdCounter, put=__set_s_taskIdCounter))  s_taskIdCounter;

static void __set_s_taskIdCounter(int32_t value) ;

static int32_t __get_s_taskIdCounter() ;

 int32_t __declspec(property(get=__get_m_taskId, put=__set_m_taskId))  m_taskId;

constexpr void __set_m_taskId(int32_t value) ;

constexpr int32_t __get_m_taskId() const;

 System::Delegate __declspec(property(get=__get_m_action, put=__set_m_action))  m_action;

constexpr void __set_m_action(System::Delegate value) ;

constexpr System::Delegate __get_m_action() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_stateObject, put=__set_m_stateObject))  m_stateObject;

constexpr void __set_m_stateObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_stateObject() const;

 System::Threading::Tasks::TaskScheduler __declspec(property(get=__get_m_taskScheduler, put=__set_m_taskScheduler))  m_taskScheduler;

constexpr void __set_m_taskScheduler(System::Threading::Tasks::TaskScheduler value) ;

constexpr System::Threading::Tasks::TaskScheduler __get_m_taskScheduler() const;

 System::Threading::Tasks::Task __declspec(property(get=__get_m_parent, put=__set_m_parent))  m_parent;

constexpr void __set_m_parent(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_m_parent() const;

 int32_t __declspec(property(get=__get_m_stateFlags, put=__set_m_stateFlags))  m_stateFlags;

constexpr void __set_m_stateFlags(int32_t value) ;

constexpr int32_t __get_m_stateFlags() const;

/// @brief Field OptionsMask offset 0
static constexpr int32_t  OptionsMask{65535};

/// @brief Field TASK_STATE_STARTED offset 0
static constexpr int32_t  TASK_STATE_STARTED{65536};

/// @brief Field TASK_STATE_DELEGATE_INVOKED offset 0
static constexpr int32_t  TASK_STATE_DELEGATE_INVOKED{131072};

/// @brief Field TASK_STATE_DISPOSED offset 0
static constexpr int32_t  TASK_STATE_DISPOSED{262144};

/// @brief Field TASK_STATE_EXCEPTIONOBSERVEDBYPARENT offset 0
static constexpr int32_t  TASK_STATE_EXCEPTIONOBSERVEDBYPARENT{524288};

/// @brief Field TASK_STATE_CANCELLATIONACKNOWLEDGED offset 0
static constexpr int32_t  TASK_STATE_CANCELLATIONACKNOWLEDGED{1048576};

/// @brief Field TASK_STATE_FAULTED offset 0
static constexpr int32_t  TASK_STATE_FAULTED{2097152};

/// @brief Field TASK_STATE_CANCELED offset 0
static constexpr int32_t  TASK_STATE_CANCELED{4194304};

/// @brief Field TASK_STATE_WAITING_ON_CHILDREN offset 0
static constexpr int32_t  TASK_STATE_WAITING_ON_CHILDREN{8388608};

/// @brief Field TASK_STATE_RAN_TO_COMPLETION offset 0
static constexpr int32_t  TASK_STATE_RAN_TO_COMPLETION{16777216};

/// @brief Field TASK_STATE_WAITINGFORACTIVATION offset 0
static constexpr int32_t  TASK_STATE_WAITINGFORACTIVATION{33554432};

/// @brief Field TASK_STATE_COMPLETION_RESERVED offset 0
static constexpr int32_t  TASK_STATE_COMPLETION_RESERVED{67108864};

/// @brief Field TASK_STATE_THREAD_WAS_ABORTED offset 0
static constexpr int32_t  TASK_STATE_THREAD_WAS_ABORTED{134217728};

/// @brief Field TASK_STATE_WAIT_COMPLETION_NOTIFICATION offset 0
static constexpr int32_t  TASK_STATE_WAIT_COMPLETION_NOTIFICATION{268435456};

/// @brief Field TASK_STATE_COMPLETED_MASK offset 0
static constexpr int32_t  TASK_STATE_COMPLETED_MASK{23068672};

/// @brief Field CANCELLATION_REQUESTED offset 0
static constexpr int32_t  CANCELLATION_REQUESTED{1};

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_continuationObject, put=__set_m_continuationObject))  m_continuationObject;

constexpr void __set_m_continuationObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_continuationObject() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_taskCompletionSentinel, put=__set_s_taskCompletionSentinel))  s_taskCompletionSentinel;

static void __set_s_taskCompletionSentinel(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_taskCompletionSentinel() ;

static bool __declspec(property(get=__get_s_asyncDebuggingEnabled, put=__set_s_asyncDebuggingEnabled))  s_asyncDebuggingEnabled;

static void __set_s_asyncDebuggingEnabled(bool value) ;

static bool __get_s_asyncDebuggingEnabled() ;

 System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties __declspec(property(get=__get_m_contingentProperties, put=__set_m_contingentProperties))  m_contingentProperties;

constexpr void __set_m_contingentProperties(System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties value) ;

constexpr System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties __get_m_contingentProperties() const;

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_taskCancelCallback, put=__set_s_taskCancelCallback))  s_taskCancelCallback;

static void __set_s_taskCancelCallback(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get_s_taskCancelCallback() ;

static System::Threading::Tasks::Task __declspec(property(get=__get_t_currentTask, put=__set_t_currentTask))  t_currentTask;

static void __set_t_currentTask(System::Threading::Tasks::Task value) ;

static System::Threading::Tasks::Task __get_t_currentTask() ;

static System::Threading::Tasks::StackGuard __declspec(property(get=__get_t_stackGuard, put=__set_t_stackGuard))  t_stackGuard;

static void __set_t_stackGuard(System::Threading::Tasks::StackGuard value) ;

static System::Threading::Tasks::StackGuard __get_t_stackGuard() ;

static System::Func_1<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties> __declspec(property(get=__get_s_createContingentProperties, put=__set_s_createContingentProperties))  s_createContingentProperties;

static void __set_s_createContingentProperties(System::Func_1<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties> value) ;

static System::Func_1<System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties> __get_s_createContingentProperties() ;

static System::Threading::Tasks::TaskFactory __declspec(property(get=__get__Factory_k__BackingField, put=__set__Factory_k__BackingField))  _Factory_k__BackingField;

static void __set__Factory_k__BackingField(System::Threading::Tasks::TaskFactory value) ;

static System::Threading::Tasks::TaskFactory __get__Factory_k__BackingField() ;

static System::Threading::Tasks::Task __declspec(property(get=__get__CompletedTask_k__BackingField, put=__set__CompletedTask_k__BackingField))  _CompletedTask_k__BackingField;

static void __set__CompletedTask_k__BackingField(System::Threading::Tasks::Task value) ;

static System::Threading::Tasks::Task __get__CompletedTask_k__BackingField() ;

static System::Predicate_1<System::Threading::Tasks::Task> __declspec(property(get=__get_s_IsExceptionObservedByParentPredicate, put=__set_s_IsExceptionObservedByParentPredicate))  s_IsExceptionObservedByParentPredicate;

static void __set_s_IsExceptionObservedByParentPredicate(System::Predicate_1<System::Threading::Tasks::Task> value) ;

static System::Predicate_1<System::Threading::Tasks::Task> __get_s_IsExceptionObservedByParentPredicate() ;

static System::Threading::ContextCallback __declspec(property(get=__get_s_ecCallback, put=__set_s_ecCallback))  s_ecCallback;

static void __set_s_ecCallback(System::Threading::ContextCallback value) ;

static System::Threading::ContextCallback __get_s_ecCallback() ;

static System::Predicate_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_IsTaskContinuationNullPredicate, put=__set_s_IsTaskContinuationNullPredicate))  s_IsTaskContinuationNullPredicate;

static void __set_s_IsTaskContinuationNullPredicate(System::Predicate_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Predicate_1<::bs_hook::Il2CppWrapperType> __get_s_IsTaskContinuationNullPredicate() ;

static System::Collections::Generic::Dictionary_2<int32_t,System::Threading::Tasks::Task> __declspec(property(get=__get_s_currentActiveTasks, put=__set_s_currentActiveTasks))  s_currentActiveTasks;

static void __set_s_currentActiveTasks(System::Collections::Generic::Dictionary_2<int32_t,System::Threading::Tasks::Task> value) ;

static System::Collections::Generic::Dictionary_2<int32_t,System::Threading::Tasks::Task> __get_s_currentActiveTasks() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_activeTasksLock, put=__set_s_activeTasksLock))  s_activeTasksLock;

static void __set_s_activeTasksLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_activeTasksLock() ;


// Properties

 System::Threading::Tasks::TaskCreationOptions __declspec(property(get=get_Options))  Options;

 bool __declspec(property(get=get_IsWaitNotificationEnabledOrNotRanToCompletion))  IsWaitNotificationEnabledOrNotRanToCompletion;

 bool __declspec(property(get=get_ShouldNotifyDebuggerOfWaitCompletion))  ShouldNotifyDebuggerOfWaitCompletion;

 bool __declspec(property(get=get_IsWaitNotificationEnabled))  IsWaitNotificationEnabled;

 int32_t __declspec(property(get=get_Id))  Id;

static System::Threading::Tasks::Task __declspec(property(get=get_InternalCurrent))  InternalCurrent;

static System::Threading::Tasks::StackGuard __declspec(property(get=get_CurrentStackGuard))  CurrentStackGuard;

 System::AggregateException __declspec(property(get=get_Exception))  Exception;

 System::Threading::Tasks::TaskStatus __declspec(property(get=get_Status))  Status;

 bool __declspec(property(get=get_IsCanceled))  IsCanceled;

 bool __declspec(property(get=get_IsCancellationRequested))  IsCancellationRequested;

 System::Threading::CancellationToken __declspec(property(get=get_CancellationToken))  CancellationToken;

 bool __declspec(property(get=get_IsCancellationAcknowledged))  IsCancellationAcknowledged;

 bool __declspec(property(get=get_IsCompleted))  IsCompleted;

 bool __declspec(property(get=get_IsCompletedSuccessfully))  IsCompletedSuccessfully;

 System::Threading::Tasks::TaskCreationOptions __declspec(property(get=get_CreationOptions))  CreationOptions;

 System::Threading::WaitHandle __declspec(property(get=System_IAsyncResult_get_AsyncWaitHandle))  System_IAsyncResult_AsyncWaitHandle;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_AsyncState))  AsyncState;

 bool __declspec(property(get=System_IAsyncResult_get_CompletedSynchronously))  System_IAsyncResult_CompletedSynchronously;

 System::Threading::Tasks::TaskScheduler __declspec(property(get=get_ExecutingTaskScheduler))  ExecutingTaskScheduler;

static System::Threading::Tasks::TaskFactory __declspec(property(get=get_Factory))  Factory;

static System::Threading::Tasks::Task __declspec(property(get=get_CompletedTask))  CompletedTask;

 System::Threading::ManualResetEventSlim __declspec(property(get=get_CompletedEvent))  CompletedEvent;

 bool __declspec(property(get=get_ExceptionRecorded))  ExceptionRecorded;

 bool __declspec(property(get=get_IsFaulted))  IsFaulted;

 System::Threading::ExecutionContext __declspec(property(get=get_CapturedContext, put=set_CapturedContext))  CapturedContext;

 bool __declspec(property(get=get_IsExceptionObservedByParent))  IsExceptionObservedByParent;

 bool __declspec(property(get=get_IsDelegateInvoked))  IsDelegateInvoked;


// Methods

static System::Threading::Tasks::Task New_ctor(bool canceled, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::CancellationToken ct) ;

/// @brief Method .ctor addr 0x24b5218 size 0xc0 virtual false final false
 void _ctor(bool canceled, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::CancellationToken ct) ;

static System::Threading::Tasks::Task New_ctor() ;

/// @brief Method .ctor addr 0x24b52fc size 0x28 virtual false final false
 void _ctor() ;

static System::Threading::Tasks::Task New_ctor(::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, bool promiseStyle) ;

/// @brief Method .ctor addr 0x24b5324 size 0x124 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, bool promiseStyle) ;

static System::Threading::Tasks::Task New_ctor(System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::Task parent, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x24b55a0 size 0xc8 virtual false final false
 void _ctor(System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::Task parent, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method TaskConstructorCore addr 0x24b5448 size 0x158 virtual false final false
 void TaskConstructorCore(System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method AssignCancellationToken addr 0x24b56f0 size 0x28c virtual false final false
 void AssignCancellationToken(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::Task antecedent, System::Threading::Tasks::TaskContinuation continuation) ;

/// @brief Method TaskCancelCallback addr 0x24b5cd4 size 0xf0 virtual false final false
static void TaskCancelCallback(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method TrySetCanceled addr 0x24b4bb0 size 0x8 virtual false final false
 bool TrySetCanceled(System::Threading::CancellationToken tokenToRecord) ;

/// @brief Method TrySetCanceled addr 0x24b42f4 size 0x54 virtual false final false
 bool TrySetCanceled(System::Threading::CancellationToken tokenToRecord, ::bs_hook::Il2CppWrapperType cancellationException) ;

/// @brief Method TrySetException addr 0x24b4bb8 size 0x70 virtual false final false
 bool TrySetException(::bs_hook::Il2CppWrapperType exceptionObject) ;

/// @brief Method get_Options addr 0x24b5a54 size 0x5c virtual false final false
 System::Threading::Tasks::TaskCreationOptions get_Options() ;

/// @brief Method OptionsMethod addr 0x24b6390 size 0x8 virtual false final false
static System::Threading::Tasks::TaskCreationOptions OptionsMethod(int32_t flags) ;

/// @brief Method AtomicStateUpdate addr 0x24b6018 size 0x88 virtual false final false
 bool AtomicStateUpdate(int32_t newBits, int32_t illegalBits) ;

/// @brief Method AtomicStateUpdate addr 0x24b6398 size 0xa0 virtual false final false
 bool AtomicStateUpdate(int32_t newBits, int32_t illegalBits, ByRef<int32_t> oldFlags) ;

/// @brief Method SetNotificationForWaitCompletion addr 0x24b6438 size 0x7c virtual false final false
 void SetNotificationForWaitCompletion(bool enabled) ;

/// @brief Method NotifyDebuggerOfWaitCompletionIfNecessary addr 0x24b64b4 size 0x50 virtual false final false
 bool NotifyDebuggerOfWaitCompletionIfNecessary() ;

/// @brief Method AnyTaskRequiresNotifyDebuggerOfWaitCompletion addr 0x24b6544 size 0x90 virtual false final false
static bool AnyTaskRequiresNotifyDebuggerOfWaitCompletion(::ArrayW<System::Threading::Tasks::Task> tasks) ;

/// @brief Method get_IsWaitNotificationEnabledOrNotRanToCompletion addr 0x24b65d4 size 0x28 virtual false final false
 bool get_IsWaitNotificationEnabledOrNotRanToCompletion() ;

/// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion addr 0x24b65fc size 0x18 virtual true final false
 bool get_ShouldNotifyDebuggerOfWaitCompletion() ;

/// @brief Method get_IsWaitNotificationEnabled addr 0x24b6504 size 0x18 virtual false final false
 bool get_IsWaitNotificationEnabled() ;

/// @brief Method NotifyDebuggerOfWaitCompletion addr 0x24b651c size 0x28 virtual false final false
 void NotifyDebuggerOfWaitCompletion() ;

/// @brief Method MarkStarted addr 0x24b6614 size 0xc virtual false final false
 bool MarkStarted() ;

/// @brief Method AddNewChild addr 0x24b567c size 0x74 virtual false final false
 void AddNewChild() ;

/// @brief Method DisregardChild addr 0x24b5c8c size 0x48 virtual false final false
 void DisregardChild() ;

/// @brief Method InternalStartNew addr 0x24b6620 size 0x10c virtual false final false
static System::Threading::Tasks::Task InternalStartNew(System::Threading::Tasks::Task creatingTask, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskScheduler scheduler, System::Threading::Tasks::TaskCreationOptions options, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method get_Id addr 0x24b4ed4 size 0x90 virtual false final false
 int32_t get_Id() ;

/// @brief Method get_InternalCurrent addr 0x24b693c size 0x58 virtual false final false
static System::Threading::Tasks::Task get_InternalCurrent() ;

/// @brief Method InternalCurrentIfAttached addr 0x24b6994 size 0x9c virtual false final false
static System::Threading::Tasks::Task InternalCurrentIfAttached(System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method get_CurrentStackGuard addr 0x24b6a30 size 0xb4 virtual false final false
static System::Threading::Tasks::StackGuard get_CurrentStackGuard() ;

/// @brief Method get_Exception addr 0x24b6aec size 0x3c virtual false final false
 System::AggregateException get_Exception() ;

/// @brief Method get_Status addr 0x24b6c8c size 0x60 virtual false final false
 System::Threading::Tasks::TaskStatus get_Status() ;

/// @brief Method get_IsCanceled addr 0x24b6cec size 0x20 virtual false final false
 bool get_IsCanceled() ;

/// @brief Method get_IsCancellationRequested addr 0x24b6d0c size 0x50 virtual false final false
 bool get_IsCancellationRequested() ;

/// @brief Method EnsureContingentPropertiesInitialized addr 0x24b5a14 size 0x40 virtual false final false
 System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties EnsureContingentPropertiesInitialized(bool needsProtection) ;

/// @brief Method EnsureContingentPropertiesInitializedCore addr 0x24b6d5c size 0xe0 virtual false final false
 System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties EnsureContingentPropertiesInitializedCore(bool needsProtection) ;

/// @brief Method get_CancellationToken addr 0x24b3748 size 0x24 virtual false final false
 System::Threading::CancellationToken get_CancellationToken() ;

/// @brief Method get_IsCancellationAcknowledged addr 0x24b6e3c size 0x18 virtual false final false
 bool get_IsCancellationAcknowledged() ;

/// @brief Method get_IsCompleted addr 0x24b39d8 size 0x64 virtual true final true
 bool get_IsCompleted() ;

/// @brief Method IsCompletedMethod addr 0x24b6e54 size 0x10 virtual false final false
static bool IsCompletedMethod(int32_t flags) ;

/// @brief Method get_IsCompletedSuccessfully addr 0x24b6e64 size 0x28 virtual false final false
 bool get_IsCompletedSuccessfully() ;

/// @brief Method get_CreationOptions addr 0x24b5668 size 0x14 virtual false final false
 System::Threading::Tasks::TaskCreationOptions get_CreationOptions() ;

/// @brief Method System.IAsyncResult.get_AsyncWaitHandle addr 0x24b6e8c size 0x88 virtual true final true
 System::Threading::WaitHandle System_IAsyncResult_get_AsyncWaitHandle() ;

/// @brief Method get_AsyncState addr 0x24b7008 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_AsyncState() ;

/// @brief Method System.IAsyncResult.get_CompletedSynchronously addr 0x24b7010 size 0x8 virtual true final true
 bool System_IAsyncResult_get_CompletedSynchronously() ;

/// @brief Method get_ExecutingTaskScheduler addr 0x24b7018 size 0x8 virtual false final false
 System::Threading::Tasks::TaskScheduler get_ExecutingTaskScheduler() ;

/// @brief Method get_Factory addr 0x24b7020 size 0x58 virtual false final false
static System::Threading::Tasks::TaskFactory get_Factory() ;

/// @brief Method get_CompletedTask addr 0x24b7078 size 0x58 virtual false final false
static System::Threading::Tasks::Task get_CompletedTask() ;

/// @brief Method get_CompletedEvent addr 0x24b6f14 size 0xf4 virtual false final false
 System::Threading::ManualResetEventSlim get_CompletedEvent() ;

/// @brief Method get_ExceptionRecorded addr 0x24b70d0 size 0x54 virtual false final false
 bool get_ExceptionRecorded() ;

/// @brief Method get_IsFaulted addr 0x24b6b28 size 0x18 virtual false final false
 bool get_IsFaulted() ;

/// @brief Method get_CapturedContext addr 0x24b7140 size 0x70 virtual false final false
 System::Threading::ExecutionContext get_CapturedContext() ;

/// @brief Method set_CapturedContext addr 0x24b597c size 0x98 virtual false final false
 void set_CapturedContext(System::Threading::ExecutionContext value) ;

/// @brief Method Dispose addr 0x24b71b0 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x24b721c size 0xe0 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method ScheduleAndStart addr 0x24b672c size 0x210 virtual false final false
 void ScheduleAndStart(bool needsProtection) ;

/// @brief Method AddException addr 0x24b61fc size 0x8 virtual false final false
 void AddException(::bs_hook::Il2CppWrapperType exceptionObject) ;

/// @brief Method AddException addr 0x24b7378 size 0x198 virtual false final false
 void AddException(::bs_hook::Il2CppWrapperType exceptionObject, bool representsCancellation) ;

/// @brief Method GetExceptions addr 0x24b6b40 size 0x14c virtual false final false
 System::AggregateException GetExceptions(bool includeTaskCanceledExceptions) ;

/// @brief Method GetExceptionDispatchInfos addr 0x24b76f8 size 0x10c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<System::Runtime::ExceptionServices::ExceptionDispatchInfo> GetExceptionDispatchInfos() ;

/// @brief Method GetCancellationExceptionDispatchInfo addr 0x24b7890 size 0x30 virtual false final false
 System::Runtime::ExceptionServices::ExceptionDispatchInfo GetCancellationExceptionDispatchInfo() ;

/// @brief Method ThrowIfExceptional addr 0x24b78c0 size 0x48 virtual false final false
 void ThrowIfExceptional(bool includeTaskCanceledExceptions) ;

/// @brief Method UpdateExceptionObservedStatus addr 0x24b7908 size 0xd4 virtual false final false
 void UpdateExceptionObservedStatus() ;

/// @brief Method get_IsExceptionObservedByParent addr 0x24b79dc size 0x18 virtual false final false
 bool get_IsExceptionObservedByParent() ;

/// @brief Method get_IsDelegateInvoked addr 0x24b79f4 size 0x18 virtual false final false
 bool get_IsDelegateInvoked() ;

/// @brief Method Finish addr 0x24b6204 size 0x18c virtual false final false
 void Finish(bool bUserDelegateExecuted) ;

/// @brief Method FinishStageTwo addr 0x24b7a0c size 0x278 virtual false final false
 void FinishStageTwo() ;

/// @brief Method FinishStageThree addr 0x24b81f0 size 0x50 virtual false final false
 void FinishStageThree() ;

/// @brief Method ProcessChildCompletion addr 0x24b8240 size 0x1b8 virtual false final false
 void ProcessChildCompletion(System::Threading::Tasks::Task childTask) ;

/// @brief Method AddExceptionsFromChildren addr 0x24b7c84 size 0x43c virtual false final false
 void AddExceptionsFromChildren() ;

/// @brief Method Execute addr 0x24b8ae0 size 0xac virtual false final false
 void Execute() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x24b8c94 size 0x8 virtual true final true
 void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() ;

/// @brief Method ExecuteEntry addr 0x24b8c9c size 0x11c virtual false final false
 bool ExecuteEntry(bool bPreventDoubleExecution) ;

/// @brief Method ExecutionContextCallback addr 0x24b8f5c size 0x78 virtual false final false
static void ExecutionContextCallback(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method InnerInvoke addr 0x24b8fd4 size 0xb4 virtual true final false
 void InnerInvoke() ;

/// @brief Method HandleException addr 0x24b8b8c size 0x108 virtual false final false
 void HandleException(System::Exception unhandledException) ;

/// @brief Method GetAwaiter addr 0x24b3c5c size 0x4 virtual false final false
 System::Runtime::CompilerServices::TaskAwaiter GetAwaiter() ;

/// @brief Method ConfigureAwait addr 0x24b3c68 size 0x34 virtual false final false
 System::Runtime::CompilerServices::ConfiguredTaskAwaitable ConfigureAwait(bool continueOnCapturedContext) ;

/// @brief Method SetContinuationForAwait addr 0x24b90b4 size 0x204 virtual false final false
 void SetContinuationForAwait(System::Action continuationAction, bool continueOnCapturedContext, bool flowExecutionContext) ;

/// @brief Method Yield addr 0x24b94dc size 0x8 virtual false final false
static System::Runtime::CompilerServices::YieldAwaitable Yield() ;

/// @brief Method Wait addr 0x24b94e4 size 0xc virtual false final false
 void Wait() ;

/// @brief Method Wait addr 0x24b94f0 size 0x11c virtual false final false
 bool Wait(int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WrappedTryRunInline addr 0x24b9cf8 size 0xd8 virtual false final false
 bool WrappedTryRunInline() ;

/// @brief Method InternalWait addr 0x24b960c size 0x6ec virtual false final false
 bool InternalWait(int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SpinThenBlockingWait addr 0x24ba05c size 0x19c virtual false final false
 bool SpinThenBlockingWait(int32_t millisecondsTimeout, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SpinWait addr 0x24ba1f8 size 0xbc virtual false final false
 bool SpinWait(int32_t millisecondsTimeout) ;

/// @brief Method InternalCancel addr 0x24b5ab0 size 0x1dc virtual false final false
 bool InternalCancel(bool bCancelNonExecutingOnly) ;

/// @brief Method RecordInternalCancellationRequest addr 0x24ba3e8 size 0x48 virtual false final false
 void RecordInternalCancellationRequest() ;

/// @brief Method RecordInternalCancellationRequest addr 0x24ba430 size 0x8c virtual false final false
 void RecordInternalCancellationRequest(System::Threading::CancellationToken tokenToRecord) ;

/// @brief Method RecordInternalCancellationRequest addr 0x24b60a0 size 0x3c virtual false final false
 void RecordInternalCancellationRequest(System::Threading::CancellationToken tokenToRecord, ::bs_hook::Il2CppWrapperType cancellationException) ;

/// @brief Method CancellationCleanupLogic addr 0x24b60dc size 0x120 virtual false final false
 void CancellationCleanupLogic() ;

/// @brief Method SetCancellationAcknowledged addr 0x24b9088 size 0x2c virtual false final false
 void SetCancellationAcknowledged() ;

/// @brief Method FinishContinuations addr 0x24b83f8 size 0x6e8 virtual false final false
 void FinishContinuations() ;

/// @brief Method LogFinishCompletionNotification addr 0x24ba640 size 0x54 virtual false final false
 void LogFinishCompletionNotification() ;

/// @brief Method ContinueWith addr 0x24ba694 size 0x74 virtual false final false
 System::Threading::Tasks::Task ContinueWith(System::Action_1<System::Threading::Tasks::Task> continuationAction) ;

/// @brief Method ContinueWith addr 0x24ba7a8 size 0x164 virtual false final false
 System::Threading::Tasks::Task ContinueWith(System::Action_1<System::Threading::Tasks::Task> continuationAction, System::Threading::Tasks::TaskScheduler scheduler, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method ContinueWith addr 0x24bac0c size 0x14 virtual false final false
 System::Threading::Tasks::Task ContinueWith(System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType> continuationAction, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method ContinueWith addr 0x24bac20 size 0x170 virtual false final false
 System::Threading::Tasks::Task ContinueWith(System::Action_2<System::Threading::Tasks::Task,::bs_hook::Il2CppWrapperType> continuationAction, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskScheduler scheduler, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

/// @brief Method CreationOptionsFromContinuationOptions addr 0x24ba90c size 0x12c virtual false final false
static void CreationOptionsFromContinuationOptions(System::Threading::Tasks::TaskContinuationOptions continuationOptions, ByRef<System::Threading::Tasks::TaskCreationOptions> creationOptions, ByRef<System::Threading::Tasks::InternalTaskOptions> internalOptions) ;

/// @brief Method ContinueWithCore addr 0x24baaec size 0x120 virtual false final false
 void ContinueWithCore(System::Threading::Tasks::Task continuationTask, System::Threading::Tasks::TaskScheduler scheduler, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskContinuationOptions options) ;

/// @brief Method AddCompletionAction addr 0x24baeb0 size 0x8 virtual false final false
 void AddCompletionAction(System::Threading::Tasks::ITaskCompletionAction action) ;

/// @brief Method AddCompletionAction addr 0x24ba314 size 0xd4 virtual false final false
 void AddCompletionAction(System::Threading::Tasks::ITaskCompletionAction action, bool addBeforeOthers) ;

/// @brief Method AddTaskContinuationComplex addr 0x24baeb8 size 0x320 virtual false final false
 bool AddTaskContinuationComplex(::bs_hook::Il2CppWrapperType tc, bool addBeforeOthers) ;

/// @brief Method AddTaskContinuation addr 0x24b93bc size 0x94 virtual false final false
 bool AddTaskContinuation(::bs_hook::Il2CppWrapperType tc, bool addBeforeOthers) ;

/// @brief Method RemoveContinuation addr 0x24b5dc4 size 0x254 virtual false final false
 void RemoveContinuation(::bs_hook::Il2CppWrapperType continuationObject) ;

/// @brief Method FromResult addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> FromResult(TResult result) ;

/// @brief Method FromException addr 0x24b4348 size 0x6c virtual false final false
static System::Threading::Tasks::Task FromException(System::Exception exception) ;

/// @brief Method FromException addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> FromException(System::Exception exception) ;

/// @brief Method FromCancellation addr 0x24bb1d8 size 0xc8 virtual false final false
static System::Threading::Tasks::Task FromCancellation(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FromCanceled addr 0x24b4788 size 0x54 virtual false final false
static System::Threading::Tasks::Task FromCanceled(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FromCancellation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> FromCancellation(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FromCanceled addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> FromCanceled(System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FromCancellation addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> FromCancellation(System::OperationCanceledException exception) ;

/// @brief Method Run addr 0x24bb2a0 size 0xd0 virtual false final false
static System::Threading::Tasks::Task Run(System::Action action) ;

/// @brief Method Run addr 0x24bb370 size 0xdc virtual false final false
static System::Threading::Tasks::Task Run(System::Action action, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> Run(System::Func_1<TResult> function) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> Run(System::Func_1<TResult> function, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Run addr 0x24bb44c size 0x58 virtual false final false
static System::Threading::Tasks::Task Run(System::Func_1<System::Threading::Tasks::Task> function) ;

/// @brief Method Run addr 0x24bb4a4 size 0x210 virtual false final false
static System::Threading::Tasks::Task Run(System::Func_1<System::Threading::Tasks::Task> function, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> Run(System::Func_1<System::Threading::Tasks::Task_1<TResult>> function) ;

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> Run(System::Func_1<System::Threading::Tasks::Task_1<TResult>> function, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Delay addr 0x24bb6b4 size 0xf4 virtual false final false
static System::Threading::Tasks::Task Delay(System::TimeSpan delay, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method Delay addr 0x24bbadc size 0x58 virtual false final false
static System::Threading::Tasks::Task Delay(int32_t millisecondsDelay) ;

/// @brief Method Delay addr 0x24bb7a8 size 0x334 virtual false final false
static System::Threading::Tasks::Task Delay(int32_t millisecondsDelay, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method WhenAll addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<::ArrayW<TResult>> WhenAll(System::Collections::Generic::IEnumerable_1<System::Threading::Tasks::Task_1<TResult>> tasks) ;

/// @brief Method WhenAll addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<::ArrayW<TResult>> WhenAll(::ArrayW<System::Threading::Tasks::Task_1<TResult>> tasks) ;

/// @brief Method InternalWhenAll addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<::ArrayW<TResult>> InternalWhenAll(::ArrayW<System::Threading::Tasks::Task_1<TResult>> tasks) ;

/// @brief Method WhenAny addr 0x24bbc48 size 0x198 virtual false final false
static System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> WhenAny(::ArrayW<System::Threading::Tasks::Task> tasks) ;

/// @brief Method WhenAny addr 0x24bc01c size 0x47c virtual false final false
static System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> WhenAny(System::Collections::Generic::IEnumerable_1<System::Threading::Tasks::Task> tasks) ;

/// @brief Method CreateUnwrapPromise addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> CreateUnwrapPromise(System::Threading::Tasks::Task outerTask, bool lookForOce) ;

/// @brief Method AddToActiveTasks addr 0x24bc498 size 0x164 virtual false final false
static bool AddToActiveTasks(System::Threading::Tasks::Task task) ;

/// @brief Method RemoveFromActiveTasks addr 0x24bc5fc size 0x144 virtual false final false
static void RemoveFromActiveTasks(int32_t taskId) ;

/// @brief Method MarkAborted addr 0x24bc740 size 0x4 virtual true final true
 void MarkAborted(System::Threading::ThreadAbortException e) ;

/// @brief Method ExecuteWithThreadLocal addr 0x24b8db8 size 0x1a4 virtual false final false
 void ExecuteWithThreadLocal(ByRef<System::Threading::Tasks::Task> currentTaskSlot) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::System__Threading__Tasks__Task__ContingentProperties, "System.Threading.Tasks", "Task/ContingentProperties");
NEED_NO_BOX(System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::System__Threading__Tasks__Task__SetOnInvokeMres, "System.Threading.Tasks", "Task/SetOnInvokeMres");
NEED_NO_BOX(System::Threading::Tasks::System__Threading__Tasks__Task____c);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::System__Threading__Tasks__Task____c, "System.Threading.Tasks", "Task/<>c");
NEED_NO_BOX(System::Threading::Tasks::Task);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task, "System.Threading.Tasks", "Task");
