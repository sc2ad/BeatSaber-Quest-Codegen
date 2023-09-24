#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__TaskScheduler_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class System__Threading__Tasks__ThreadPoolTaskScheduler____c;
}
namespace System::Threading {
class ParameterizedThreadStart;
}
// Forward declare root types
namespace System::Threading::Tasks {
class System__Threading__Tasks__ThreadPoolTaskScheduler____c;
}
namespace System::Threading::Tasks {
class ThreadPoolTaskScheduler;
}
// Type: ::<>c
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2810))
// CS Name: System.Threading.Tasks.ThreadPoolTaskScheduler::<>c
class CORDL_TYPE System__Threading__Tasks__ThreadPoolTaskScheduler____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Threading__Tasks__ThreadPoolTaskScheduler____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__ThreadPoolTaskScheduler____c", modifiers: " const&", def_value: None }]
constexpr System__Threading__Tasks__ThreadPoolTaskScheduler____c(System__Threading__Tasks__ThreadPoolTaskScheduler____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__Tasks__ThreadPoolTaskScheduler____c", modifiers: "&&", def_value: None }]
constexpr System__Threading__Tasks__ThreadPoolTaskScheduler____c(System__Threading__Tasks__ThreadPoolTaskScheduler____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Tasks__ThreadPoolTaskScheduler____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__Tasks__ThreadPoolTaskScheduler____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__Tasks__ThreadPoolTaskScheduler____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__Tasks__ThreadPoolTaskScheduler____c& operator=(System__Threading__Tasks__ThreadPoolTaskScheduler____c&& o) noexcept = default;
  constexpr System__Threading__Tasks__ThreadPoolTaskScheduler____c& operator=(System__Threading__Tasks__ThreadPoolTaskScheduler____c const& o) noexcept = default;
                


// Fields

static System::Threading::Tasks::System__Threading__Tasks__ThreadPoolTaskScheduler____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Threading::Tasks::System__Threading__Tasks__ThreadPoolTaskScheduler____c value) ;

static System::Threading::Tasks::System__Threading__Tasks__ThreadPoolTaskScheduler____c __get___9() ;


// Methods

static System::Threading::Tasks::System__Threading__Tasks__ThreadPoolTaskScheduler____c New_ctor() ;

/// @brief Method .ctor addr 0x24bf8c8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.cctor>b__10_0 addr 0x24bf8d0 size 0x84 virtual false final false
 void __cctor_b__10_0(::bs_hook::Il2CppWrapperType s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
// Type: System.Threading.Tasks::ThreadPoolTaskScheduler
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2808))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2811))
// CS Name: System.Threading.Tasks.ThreadPoolTaskScheduler
class CORDL_TYPE ThreadPoolTaskScheduler : public System::Threading::Tasks::TaskScheduler {
public:
// Declarations
using __c = System::Threading::Tasks::System__Threading__Tasks__ThreadPoolTaskScheduler____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ThreadPoolTaskScheduler() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolTaskScheduler", modifiers: " const&", def_value: None }]
constexpr ThreadPoolTaskScheduler(ThreadPoolTaskScheduler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadPoolTaskScheduler", modifiers: "&&", def_value: None }]
constexpr ThreadPoolTaskScheduler(ThreadPoolTaskScheduler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadPoolTaskScheduler(void* ptr) noexcept : System::Threading::Tasks::TaskScheduler(ptr) {
}


  constexpr ThreadPoolTaskScheduler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadPoolTaskScheduler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadPoolTaskScheduler& operator=(ThreadPoolTaskScheduler&& o) noexcept = default;
  constexpr ThreadPoolTaskScheduler& operator=(ThreadPoolTaskScheduler const& o) noexcept = default;
                


// Fields

static System::Threading::ParameterizedThreadStart __declspec(property(get=__get_s_longRunningThreadWork, put=__set_s_longRunningThreadWork))  s_longRunningThreadWork;

static void __set_s_longRunningThreadWork(System::Threading::ParameterizedThreadStart value) ;

static System::Threading::ParameterizedThreadStart __get_s_longRunningThreadWork() ;


// Properties

 bool __declspec(property(get=get_RequiresAtomicStartTransition))  RequiresAtomicStartTransition;


// Methods

static System::Threading::Tasks::ThreadPoolTaskScheduler New_ctor() ;

/// @brief Method .ctor addr 0x24bf47c size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method QueueTask addr 0x24bf4d4 size 0x1c8 virtual true final false
 void QueueTask(System::Threading::Tasks::Task task) ;

/// @brief Method TryExecuteTaskInline addr 0x24bf69c size 0xe4 virtual true final false
 bool TryExecuteTaskInline(System::Threading::Tasks::Task task, bool taskWasPreviouslyQueued) ;

/// @brief Method TryDequeue addr 0x24bf780 size 0x8 virtual true final false
 bool TryDequeue(System::Threading::Tasks::Task task) ;

/// @brief Method NotifyWorkItemProgress addr 0x24bf788 size 0x10 virtual true final false
 void NotifyWorkItemProgress() ;

/// @brief Method get_RequiresAtomicStartTransition addr 0x24bf798 size 0x8 virtual true final false
 bool get_RequiresAtomicStartTransition() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::System__Threading__Tasks__ThreadPoolTaskScheduler____c);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::System__Threading__Tasks__ThreadPoolTaskScheduler____c, "System.Threading.Tasks", "ThreadPoolTaskScheduler/<>c");
NEED_NO_BOX(System::Threading::Tasks::ThreadPoolTaskScheduler);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::ThreadPoolTaskScheduler, "System.Threading.Tasks", "ThreadPoolTaskScheduler");
