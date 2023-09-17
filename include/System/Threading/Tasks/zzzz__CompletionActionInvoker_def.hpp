#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Threading {
class ThreadAbortException;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
// Forward declare root types
namespace System::Threading::Tasks {
class CompletionActionInvoker;
}
// Type: System.Threading.Tasks::CompletionActionInvoker
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2784))
// CS Name: System.Threading.Tasks.CompletionActionInvoker
class CORDL_TYPE CompletionActionInvoker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Threading::IThreadPoolWorkItem
constexpr operator  ::System::Threading::IThreadPoolWorkItem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CompletionActionInvoker() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompletionActionInvoker", modifiers: " const&", def_value: None }]
constexpr CompletionActionInvoker(CompletionActionInvoker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompletionActionInvoker", modifiers: "&&", def_value: None }]
constexpr CompletionActionInvoker(CompletionActionInvoker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompletionActionInvoker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CompletionActionInvoker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompletionActionInvoker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompletionActionInvoker& operator=(CompletionActionInvoker&& o) noexcept = default;
  constexpr CompletionActionInvoker& operator=(CompletionActionInvoker const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::ITaskCompletionAction __declspec(property(get=__get_m_action, put=__set_m_action))  m_action;

constexpr void __set_m_action(::System::Threading::Tasks::ITaskCompletionAction value) ;

constexpr ::System::Threading::Tasks::ITaskCompletionAction __get_m_action() const;

 ::System::Threading::Tasks::Task __declspec(property(get=__get_m_completingTask, put=__set_m_completingTask))  m_completingTask;

constexpr void __set_m_completingTask(::System::Threading::Tasks::Task value) ;

constexpr ::System::Threading::Tasks::Task __get_m_completingTask() const;


// Methods

// Ctor Parameters [CppParam { name: "action", ty: "::System::Threading::Tasks::ITaskCompletionAction", modifiers: "", def_value: None }, CppParam { name: "completingTask", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }]
explicit CompletionActionInvoker(::System::Threading::Tasks::ITaskCompletionAction action, ::System::Threading::Tasks::Task completingTask) ;

/// @brief Method .ctor addr 0x24ba614 size 0x2c virtual false final false
 void _ctor(::System::Threading::Tasks::ITaskCompletionAction action, ::System::Threading::Tasks::Task completingTask) ;

/// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem addr 0x24bcd6c size 0xa8 virtual true final true
 void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() ;

/// @brief Method MarkAborted addr 0x24bce14 size 0x4 virtual true final true
 void MarkAborted(::System::Threading::ThreadAbortException e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Tasks::CompletionActionInvoker);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::CompletionActionInvoker, "System.Threading.Tasks", "CompletionActionInvoker");
