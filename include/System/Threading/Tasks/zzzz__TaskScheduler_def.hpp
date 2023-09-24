#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Threading::Tasks {
class System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class UnobservedTaskExceptionEventArgs;
}
namespace System::Threading {
class Lock;
}
// Forward declare root types
namespace System::Threading::Tasks {
class System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
// Type: ::SystemThreadingTasks_TaskSchedulerDebugView
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2807))
// CS Name: System.Threading.Tasks.TaskScheduler::SystemThreadingTasks_TaskSchedulerDebugView
class CORDL_TYPE System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView", modifiers: " const&", def_value: None }]
constexpr System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView(System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView", modifiers: "&&", def_value: None }]
constexpr System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView(System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView& operator=(System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView&& o) noexcept = default;
  constexpr System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView& operator=(System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskScheduler
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2808))
// CS Name: System.Threading.Tasks.TaskScheduler
class CORDL_TYPE TaskScheduler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SystemThreadingTasks_TaskSchedulerDebugView = System::Threading::Tasks::System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TaskScheduler() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskScheduler", modifiers: " const&", def_value: None }]
constexpr TaskScheduler(TaskScheduler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskScheduler", modifiers: "&&", def_value: None }]
constexpr TaskScheduler(TaskScheduler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskScheduler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskScheduler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskScheduler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskScheduler& operator=(TaskScheduler&& o) noexcept = default;
  constexpr TaskScheduler& operator=(TaskScheduler const& o) noexcept = default;
                


// Fields

static System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_s_activeTaskSchedulers, put=__set_s_activeTaskSchedulers))  s_activeTaskSchedulers;

static void __set_s_activeTaskSchedulers(System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler,::bs_hook::Il2CppWrapperType> value) ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Threading::Tasks::TaskScheduler,::bs_hook::Il2CppWrapperType> __get_s_activeTaskSchedulers() ;

static System::Threading::Tasks::TaskScheduler __declspec(property(get=__get_s_defaultTaskScheduler, put=__set_s_defaultTaskScheduler))  s_defaultTaskScheduler;

static void __set_s_defaultTaskScheduler(System::Threading::Tasks::TaskScheduler value) ;

static System::Threading::Tasks::TaskScheduler __get_s_defaultTaskScheduler() ;

static int32_t __declspec(property(get=__get_s_taskSchedulerIdCounter, put=__set_s_taskSchedulerIdCounter))  s_taskSchedulerIdCounter;

static void __set_s_taskSchedulerIdCounter(int32_t value) ;

static int32_t __get_s_taskSchedulerIdCounter() ;

 int32_t __declspec(property(get=__get_m_taskSchedulerId, put=__set_m_taskSchedulerId))  m_taskSchedulerId;

constexpr void __set_m_taskSchedulerId(int32_t value) ;

constexpr int32_t __get_m_taskSchedulerId() const;

static System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs> __declspec(property(get=__get__unobservedTaskException, put=__set__unobservedTaskException))  _unobservedTaskException;

static void __set__unobservedTaskException(System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs> value) ;

static System::EventHandler_1<System::Threading::Tasks::UnobservedTaskExceptionEventArgs> __get__unobservedTaskException() ;

static System::Threading::Lock __declspec(property(get=__get__unobservedTaskExceptionLockObject, put=__set__unobservedTaskExceptionLockObject))  _unobservedTaskExceptionLockObject;

static void __set__unobservedTaskExceptionLockObject(System::Threading::Lock value) ;

static System::Threading::Lock __get__unobservedTaskExceptionLockObject() ;


// Properties

 bool __declspec(property(get=get_RequiresAtomicStartTransition))  RequiresAtomicStartTransition;

static System::Threading::Tasks::TaskScheduler __declspec(property(get=get_Default))  Default;

static System::Threading::Tasks::TaskScheduler __declspec(property(get=get_Current))  Current;

static System::Threading::Tasks::TaskScheduler __declspec(property(get=get_InternalCurrent))  InternalCurrent;

 int32_t __declspec(property(get=get_Id))  Id;


// Methods

/// @brief Method QueueTask addr 0x0 size 0xffffffffffffffff virtual true final false
 void QueueTask(System::Threading::Tasks::Task task) ;

/// @brief Method TryExecuteTaskInline addr 0x0 size 0xffffffffffffffff virtual true final false
 bool TryExecuteTaskInline(System::Threading::Tasks::Task task, bool taskWasPreviouslyQueued) ;

/// @brief Method TryRunInline addr 0x24b9dd0 size 0x1f8 virtual false final false
 bool TryRunInline(System::Threading::Tasks::Task task, bool taskWasPreviouslyQueued) ;

/// @brief Method TryDequeue addr 0x24bf35c size 0x8 virtual true final false
 bool TryDequeue(System::Threading::Tasks::Task task) ;

/// @brief Method NotifyWorkItemProgress addr 0x24bf364 size 0x4 virtual true final false
 void NotifyWorkItemProgress() ;

/// @brief Method get_RequiresAtomicStartTransition addr 0x24bf368 size 0x8 virtual true final false
 bool get_RequiresAtomicStartTransition() ;

static System::Threading::Tasks::TaskScheduler New_ctor() ;

/// @brief Method .ctor addr 0x24bf370 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Default addr 0x24bf378 size 0x58 virtual false final false
static System::Threading::Tasks::TaskScheduler get_Default() ;

/// @brief Method get_Current addr 0x24ba708 size 0xa0 virtual false final false
static System::Threading::Tasks::TaskScheduler get_Current() ;

/// @brief Method get_InternalCurrent addr 0x24b92e8 size 0xa4 virtual false final false
static System::Threading::Tasks::TaskScheduler get_InternalCurrent() ;

/// @brief Method get_Id addr 0x24b9fc8 size 0x94 virtual false final false
 int32_t get_Id() ;

/// @brief Method PublishUnobservedTaskException addr 0x24be490 size 0x134 virtual false final false
static void PublishUnobservedTaskException(::bs_hook::Il2CppWrapperType sender, System::Threading::Tasks::UnobservedTaskExceptionEventArgs ueea) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::System__Threading__Tasks__TaskScheduler__SystemThreadingTasks_TaskSchedulerDebugView, "System.Threading.Tasks", "TaskScheduler/SystemThreadingTasks_TaskSchedulerDebugView");
NEED_NO_BOX(System::Threading::Tasks::TaskScheduler);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskScheduler, "System.Threading.Tasks", "TaskScheduler");
