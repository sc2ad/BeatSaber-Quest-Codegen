#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuation_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System {
class Action;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading {
class ContextCallback;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Threading::Tasks {
class AwaitTaskContinuation;
}
// Type: System.Threading.Tasks::AwaitTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2797))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2803))
// CS Name: System.Threading.Tasks.AwaitTaskContinuation
class CORDL_TYPE AwaitTaskContinuation : public System::Threading::Tasks::TaskContinuation {
public:
// Declarations
/// @brief Convert operator to System::Threading::IThreadPoolWorkItem
constexpr operator  System::Threading::IThreadPoolWorkItem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AwaitTaskContinuation() = default;

// Ctor Parameters [CppParam { name: "", ty: "AwaitTaskContinuation", modifiers: " const&", def_value: None }]
constexpr AwaitTaskContinuation(AwaitTaskContinuation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AwaitTaskContinuation", modifiers: "&&", def_value: None }]
constexpr AwaitTaskContinuation(AwaitTaskContinuation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AwaitTaskContinuation(void* ptr) noexcept : System::Threading::Tasks::TaskContinuation(ptr) {
}


  constexpr AwaitTaskContinuation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AwaitTaskContinuation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AwaitTaskContinuation& operator=(AwaitTaskContinuation&& o) noexcept = default;
  constexpr AwaitTaskContinuation& operator=(AwaitTaskContinuation const& o) noexcept = default;
                


// Fields

 System::Threading::ExecutionContext __declspec(property(get=__get_m_capturedContext, put=__set_m_capturedContext))  m_capturedContext;

constexpr void __set_m_capturedContext(System::Threading::ExecutionContext value) ;

constexpr System::Threading::ExecutionContext __get_m_capturedContext() const;

 System::Action __declspec(property(get=__get_m_action, put=__set_m_action))  m_action;

constexpr void __set_m_action(System::Action value) ;

constexpr System::Action __get_m_action() const;

static System::Threading::ContextCallback __declspec(property(get=__get_s_invokeActionCallback, put=__set_s_invokeActionCallback))  s_invokeActionCallback;

static void __set_s_invokeActionCallback(System::Threading::ContextCallback value) ;

static System::Threading::ContextCallback __get_s_invokeActionCallback() ;


// Properties

static bool __declspec(property(get=get_IsValidLocationForInlining))  IsValidLocationForInlining;


// Methods

// Ctor Parameters [CppParam { name: "action", ty: "System::Action", modifiers: "", def_value: None }, CppParam { name: "flowExecutionContext", ty: "bool", modifiers: "", def_value: None }]
explicit AwaitTaskContinuation(System::Action action, bool flowExecutionContext) ;

/// @brief Method .ctor addr 0x24bd220 size 0x80 virtual false final false
 void _ctor(System::Action action, bool flowExecutionContext) ;

/// @brief Method CreateTask addr 0x24bdc60 size 0x90 virtual false final false
 System::Threading::Tasks::Task CreateTask(System::Action_1<::bs_hook::Il2CppWrapperType> action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method Run addr 0x24bdb44 size 0x11c virtual true final false
 void Run(System::Threading::Tasks::Task ignored, bool canInlineContinuationTask) ;

/// @brief Method get_IsValidLocationForInlining addr 0x24bdea4 size 0x134 virtual false final false
static bool get_IsValidLocationForInlining() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x24bdfd8 size 0x128 virtual true final true
 void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() ;

/// @brief Method InvokeAction addr 0x24be100 size 0x6c virtual false final false
static void InvokeAction(::bs_hook::Il2CppWrapperType state) ;

/// @brief Method GetInvokeActionCallback addr 0x24be16c size 0xa8 virtual false final false
static System::Threading::ContextCallback GetInvokeActionCallback() ;

/// @brief Method RunCallback addr 0x24bd48c size 0x17c virtual false final false
 void RunCallback(System::Threading::ContextCallback callback, ::bs_hook::Il2CppWrapperType state, ByRef<System::Threading::Tasks::Task> currentTask) ;

/// @brief Method RunOrScheduleAction addr 0x24ba4bc size 0x158 virtual false final false
static void RunOrScheduleAction(System::Action action, bool allowInlining, ByRef<System::Threading::Tasks::Task> currentTask) ;

/// @brief Method UnsafeScheduleAction addr 0x24b9450 size 0x8c virtual false final false
static void UnsafeScheduleAction(System::Action action) ;

/// @brief Method ThrowAsyncIfNecessary addr 0x24bde4c size 0x58 virtual false final false
static void ThrowAsyncIfNecessary(System::Exception exc) ;

/// @brief Method MarkAborted addr 0x24be214 size 0x4 virtual true final true
 void MarkAborted(System::Threading::ThreadAbortException e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::AwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::AwaitTaskContinuation, "System.Threading.Tasks", "AwaitTaskContinuation");
