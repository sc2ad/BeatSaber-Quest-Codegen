#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuation_def.hpp"
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class TaskScheduler;
}
// Forward declare root types
namespace System::Threading::Tasks {
class StandardTaskContinuation;
}
// Type: System.Threading.Tasks::StandardTaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2797))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2798))
// CS Name: System.Threading.Tasks.StandardTaskContinuation
class CORDL_TYPE StandardTaskContinuation : public System::Threading::Tasks::TaskContinuation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StandardTaskContinuation() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardTaskContinuation", modifiers: " const&", def_value: None }]
constexpr StandardTaskContinuation(StandardTaskContinuation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardTaskContinuation", modifiers: "&&", def_value: None }]
constexpr StandardTaskContinuation(StandardTaskContinuation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardTaskContinuation(void* ptr) noexcept : System::Threading::Tasks::TaskContinuation(ptr) {
}


  constexpr StandardTaskContinuation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardTaskContinuation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardTaskContinuation& operator=(StandardTaskContinuation&& o) noexcept = default;
  constexpr StandardTaskContinuation& operator=(StandardTaskContinuation const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task __declspec(property(get=__get_m_task, put=__set_m_task))  m_task;

constexpr void __set_m_task(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_m_task() const;

 System::Threading::Tasks::TaskContinuationOptions __declspec(property(get=__get_m_options, put=__set_m_options))  m_options;

constexpr void __set_m_options(System::Threading::Tasks::TaskContinuationOptions value) ;

constexpr System::Threading::Tasks::TaskContinuationOptions __get_m_options() const;

 System::Threading::Tasks::TaskScheduler __declspec(property(get=__get_m_taskScheduler, put=__set_m_taskScheduler))  m_taskScheduler;

constexpr void __set_m_taskScheduler(System::Threading::Tasks::TaskScheduler value) ;

constexpr System::Threading::Tasks::TaskScheduler __get_m_taskScheduler() const;


// Methods

// Ctor Parameters [CppParam { name: "task", ty: "System::Threading::Tasks::Task", modifiers: "", def_value: None }, CppParam { name: "options", ty: "System::Threading::Tasks::TaskContinuationOptions", modifiers: "", def_value: None }, CppParam { name: "scheduler", ty: "System::Threading::Tasks::TaskScheduler", modifiers: "", def_value: None }]
explicit StandardTaskContinuation(System::Threading::Tasks::Task task, System::Threading::Tasks::TaskContinuationOptions options, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method .ctor addr 0x24bad90 size 0x120 virtual false final false
 void _ctor(System::Threading::Tasks::Task task, System::Threading::Tasks::TaskContinuationOptions options, System::Threading::Tasks::TaskScheduler scheduler) ;

/// @brief Method Run addr 0x24bd088 size 0x198 virtual true final false
 void Run(System::Threading::Tasks::Task completedTask, bool bCanInlineContinuationTask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::StandardTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::StandardTaskContinuation, "System.Threading.Tasks", "StandardTaskContinuation");
