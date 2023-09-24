#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Delegate;
}
namespace System::Threading::Tasks {
struct TaskCreationOptions;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
struct InternalTaskOptions;
}
// Forward declare root types
namespace System::Threading::Tasks {
class ContinuationTaskFromTask;
}
// Type: System.Threading.Tasks::ContinuationTaskFromTask
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2783))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2794))
// CS Name: System.Threading.Tasks.ContinuationTaskFromTask
class CORDL_TYPE ContinuationTaskFromTask : public System::Threading::Tasks::Task {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~ContinuationTaskFromTask() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromTask", modifiers: " const&", def_value: None }]
constexpr ContinuationTaskFromTask(ContinuationTaskFromTask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuationTaskFromTask", modifiers: "&&", def_value: None }]
constexpr ContinuationTaskFromTask(ContinuationTaskFromTask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuationTaskFromTask(void* ptr) noexcept : System::Threading::Tasks::Task(ptr) {
}


  constexpr ContinuationTaskFromTask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuationTaskFromTask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuationTaskFromTask& operator=(ContinuationTaskFromTask&& o) noexcept = default;
  constexpr ContinuationTaskFromTask& operator=(ContinuationTaskFromTask const& o) noexcept = default;
                


// Fields

 System::Threading::Tasks::Task __declspec(property(get=__get_m_antecedent, put=__set_m_antecedent))  m_antecedent;

constexpr void __set_m_antecedent(System::Threading::Tasks::Task value) ;

constexpr System::Threading::Tasks::Task __get_m_antecedent() const;


// Methods

static System::Threading::Tasks::ContinuationTaskFromTask New_ctor(System::Threading::Tasks::Task antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method .ctor addr 0x24baa38 size 0xb4 virtual false final false
 void _ctor(System::Threading::Tasks::Task antecedent, System::Delegate action, ::bs_hook::Il2CppWrapperType state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions) ;

/// @brief Method InnerInvoke addr 0x24bce6c size 0xd0 virtual true final false
 void InnerInvoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::ContinuationTaskFromTask);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::ContinuationTaskFromTask, "System.Threading.Tasks", "ContinuationTaskFromTask");
