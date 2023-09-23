#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Action;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System {
class IAsyncResult;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class Func_5;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Threading::Tasks {
class System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise;
}
namespace System::Threading::Tasks {
class TaskFactory;
}
// Type: ::CompleteOnInvokePromise
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2770)), TypeDefinitionIndex(TypeDefinitionIndex(2783)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2770), inst: 383 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2805))
// CS Name: System.Threading.Tasks.TaskFactory::CompleteOnInvokePromise
class CORDL_TYPE System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise : public System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> {
public:
// Declarations
/// @brief Convert operator to System::Threading::Tasks::ITaskCompletionAction
constexpr operator  System::Threading::Tasks::ITaskCompletionAction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise", modifiers: " const&", def_value: None }]
constexpr System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise(System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise", modifiers: "&&", def_value: None }]
constexpr System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise(System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise(void* ptr) noexcept : System::Threading::Tasks::Task_1<System::Threading::Tasks::Task>(ptr) {
}


  constexpr System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise& operator=(System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise&& o) noexcept = default;
  constexpr System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise& operator=(System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IList_1<System::Threading::Tasks::Task> __declspec(property(get=__get__tasks, put=__set__tasks))  _tasks;

constexpr void __set__tasks(System::Collections::Generic::IList_1<System::Threading::Tasks::Task> value) ;

constexpr System::Collections::Generic::IList_1<System::Threading::Tasks::Task> __get__tasks() const;


// Properties

 bool __declspec(property(get=get_InvokeMayRunArbitraryCode))  InvokeMayRunArbitraryCode;


// Methods

// Ctor Parameters [CppParam { name: "tasks", ty: "System::Collections::Generic::IList_1<System::Threading::Tasks::Task>", modifiers: "", def_value: None }]
explicit System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise(System::Collections::Generic::IList_1<System::Threading::Tasks::Task> tasks) ;

/// @brief Method .ctor addr 0x24bf014 size 0x114 virtual false final false
 void _ctor(System::Collections::Generic::IList_1<System::Threading::Tasks::Task> tasks) ;

/// @brief Method Invoke addr 0x24bf128 size 0x22c virtual true final true
 void Invoke(System::Threading::Tasks::Task completingTask) ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x24bf354 size 0x8 virtual true final true
 bool get_InvokeMayRunArbitraryCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskFactory
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2806))
// CS Name: System.Threading.Tasks.TaskFactory
class CORDL_TYPE TaskFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CompleteOnInvokePromise = System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TaskFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory", modifiers: " const&", def_value: None }]
constexpr TaskFactory(TaskFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskFactory", modifiers: "&&", def_value: None }]
constexpr TaskFactory(TaskFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskFactory& operator=(TaskFactory&& o) noexcept = default;
  constexpr TaskFactory& operator=(TaskFactory const& o) noexcept = default;
                


// Fields

 System::Threading::CancellationToken __declspec(property(get=__get_m_defaultCancellationToken, put=__set_m_defaultCancellationToken))  m_defaultCancellationToken;

constexpr void __set_m_defaultCancellationToken(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get_m_defaultCancellationToken() const;

 System::Threading::Tasks::TaskScheduler __declspec(property(get=__get_m_defaultScheduler, put=__set_m_defaultScheduler))  m_defaultScheduler;

constexpr void __set_m_defaultScheduler(System::Threading::Tasks::TaskScheduler value) ;

constexpr System::Threading::Tasks::TaskScheduler __get_m_defaultScheduler() const;

 System::Threading::Tasks::TaskCreationOptions __declspec(property(get=__get_m_defaultCreationOptions, put=__set_m_defaultCreationOptions))  m_defaultCreationOptions;

constexpr void __set_m_defaultCreationOptions(System::Threading::Tasks::TaskCreationOptions value) ;

constexpr System::Threading::Tasks::TaskCreationOptions __get_m_defaultCreationOptions() const;

 System::Threading::Tasks::TaskContinuationOptions __declspec(property(get=__get_m_defaultContinuationOptions, put=__set_m_defaultContinuationOptions))  m_defaultContinuationOptions;

constexpr void __set_m_defaultContinuationOptions(System::Threading::Tasks::TaskContinuationOptions value) ;

constexpr System::Threading::Tasks::TaskContinuationOptions __get_m_defaultContinuationOptions() const;


// Methods

// Ctor Parameters []
explicit TaskFactory() ;

/// @brief Method .ctor addr 0x24bca4c size 0x14 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "cancellationToken", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "creationOptions", ty: "System::Threading::Tasks::TaskCreationOptions", modifiers: "", def_value: None }, CppParam { name: "continuationOptions", ty: "System::Threading::Tasks::TaskContinuationOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit TaskFactory(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x24bec4c size 0x50 virtual false final false
 void _ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method CheckCreationOptions addr 0x24beda4 size 0x60 virtual false final false
static void CheckCreationOptions(System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method StartNew addr 0x24bee04 size 0x8c virtual false final false
 System::Threading::Tasks::Task StartNew(System::Action action, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x24bee90 size 0x90 virtual false final false
 System::Threading::Tasks::Task StartNew(System::Action_1<::bs_hook::Il2CppWrapperType> action, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> StartNew(System::Func_1<TResult> function, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method StartNew addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
 System::Threading::Tasks::Task_1<TResult> StartNew(System::Func_2<::bs_hook::Il2CppWrapperType,TResult> function, ::bs_hook::Il2CppWrapperType state, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
 System::Threading::Tasks::Task FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Action_1<System::IAsyncResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1>
 System::Threading::Tasks::Task FromAsync(System::Func_4<TArg1,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Action_1<System::IAsyncResult> endMethod, TArg1 arg1, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task FromAsync(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Action_1<System::IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method FromAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TArg1,typename TArg2>
 System::Threading::Tasks::Task FromAsync(System::Func_5<TArg1,TArg2,System::AsyncCallback,::bs_hook::Il2CppWrapperType,System::IAsyncResult> beginMethod, System::Action_1<System::IAsyncResult> endMethod, TArg1 arg1, TArg2 arg2, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions) ;

/// @brief Method CheckFromAsyncOptions addr 0x24bef20 size 0xf4 virtual false final false
static void CheckFromAsyncOptions(System::Threading::Tasks::TaskCreationOptions creationOptions, bool hasBeginMethod) ;

/// @brief Method CommonCWAnyLogic addr 0x24bbde0 size 0x23c virtual false final false
static System::Threading::Tasks::Task_1<System::Threading::Tasks::Task> CommonCWAnyLogic(System::Collections::Generic::IList_1<System::Threading::Tasks::Task> tasks) ;

/// @brief Method CheckMultiTaskContinuationOptions addr 0x24bec9c size 0x108 virtual false final false
static void CheckMultiTaskContinuationOptions(System::Threading::Tasks::TaskContinuationOptions continuationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::System__Threading__Tasks__TaskFactory__CompleteOnInvokePromise, "System.Threading.Tasks", "TaskFactory/CompleteOnInvokePromise");
NEED_NO_BOX(System::Threading::Tasks::TaskFactory);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskFactory, "System.Threading.Tasks", "TaskFactory");
