#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__AwaitTaskContinuation_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
template<typename T>
class Action_1;
}
namespace System::Threading::Tasks {
class System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c;
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
// Forward declare root types
namespace System::Threading::Tasks {
class System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c;
}
namespace System::Threading::Tasks {
class TaskSchedulerAwaitTaskContinuation;
}
// Type: ::<>c
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2801))
// CS Name: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation::<>c
class CORDL_TYPE System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c", modifiers: " const&", def_value: None }]
constexpr System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c(System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c", modifiers: "&&", def_value: None }]
constexpr System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c(System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c& operator=(System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c&& o) noexcept = default;
  constexpr System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c& operator=(System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c const& o) noexcept = default;
                


// Fields

static System::Threading::Tasks::System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Threading::Tasks::System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c value) ;

static System::Threading::Tasks::System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c __get___9() ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get___9__2_0, put=__set___9__2_0))  __9__2_0;

static void __set___9__2_0(System::Action_1<::bs_hook::Il2CppWrapperType> value) ;

static System::Action_1<::bs_hook::Il2CppWrapperType> __get___9__2_0() ;


// Methods

static System::Threading::Tasks::System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c New_ctor() ;

/// @brief Method .ctor addr 0x24bdd54 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Run>b__2_0 addr 0x24bdd5c size 0xf0 virtual false final false
 void _Run_b__2_0(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::TaskSchedulerAwaitTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2803))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2802))
// CS Name: System.Threading.Tasks.TaskSchedulerAwaitTaskContinuation
class CORDL_TYPE TaskSchedulerAwaitTaskContinuation : public System::Threading::Tasks::AwaitTaskContinuation {
public:
// Declarations
using __c = System::Threading::Tasks::System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TaskSchedulerAwaitTaskContinuation() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerAwaitTaskContinuation", modifiers: " const&", def_value: None }]
constexpr TaskSchedulerAwaitTaskContinuation(TaskSchedulerAwaitTaskContinuation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerAwaitTaskContinuation", modifiers: "&&", def_value: None }]
constexpr TaskSchedulerAwaitTaskContinuation(TaskSchedulerAwaitTaskContinuation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskSchedulerAwaitTaskContinuation(void* ptr) noexcept : System::Threading::Tasks::AwaitTaskContinuation(ptr) {
}


  constexpr TaskSchedulerAwaitTaskContinuation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskSchedulerAwaitTaskContinuation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskSchedulerAwaitTaskContinuation& operator=(TaskSchedulerAwaitTaskContinuation&& o) noexcept = default;
  constexpr TaskSchedulerAwaitTaskContinuation& operator=(TaskSchedulerAwaitTaskContinuation const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::TaskScheduler __declspec(property(get=__get_m_scheduler, put=__set_m_scheduler))  m_scheduler;

constexpr void __set_m_scheduler(System::Threading::Tasks::TaskScheduler value) ;

constexpr System::Threading::Tasks::TaskScheduler __get_m_scheduler() const;


// Methods

static System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation New_ctor(System::Threading::Tasks::TaskScheduler scheduler, System::Action action, bool flowExecutionContext) ;

/// @brief Method .ctor addr 0x24b938c size 0x30 virtual false final false
 void _ctor(System::Threading::Tasks::TaskScheduler scheduler, System::Action action, bool flowExecutionContext) ;

/// @brief Method Run addr 0x24bd900 size 0x244 virtual true final true
 void Run(System::Threading::Tasks::Task ignored, bool canInlineContinuationTask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::System__Threading__Tasks__TaskSchedulerAwaitTaskContinuation____c, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation/<>c");
NEED_NO_BOX(System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskSchedulerAwaitTaskContinuation, "System.Threading.Tasks", "TaskSchedulerAwaitTaskContinuation");
