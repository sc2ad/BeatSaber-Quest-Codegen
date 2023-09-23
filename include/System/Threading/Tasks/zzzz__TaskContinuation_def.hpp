#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskContinuation;
}
// Type: System.Threading.Tasks::TaskContinuation
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2797))
// CS Name: System.Threading.Tasks.TaskContinuation
class CORDL_TYPE TaskContinuation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TaskContinuation() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskContinuation", modifiers: " const&", def_value: None }]
constexpr TaskContinuation(TaskContinuation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskContinuation", modifiers: "&&", def_value: None }]
constexpr TaskContinuation(TaskContinuation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskContinuation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskContinuation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskContinuation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskContinuation& operator=(TaskContinuation&& o) noexcept = default;
  constexpr TaskContinuation& operator=(TaskContinuation const& o) noexcept = default;
                


// Methods

/// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final false
 void Run(System::Threading::Tasks::Task completedTask, bool bCanInlineContinuationTask) ;

/// @brief Method InlineIfPossibleOrElseQueue addr 0x24bcf3c size 0x144 virtual false final false
static void InlineIfPossibleOrElseQueue(System::Threading::Tasks::Task task, bool needsProtection) ;

// Ctor Parameters []
explicit TaskContinuation() ;

/// @brief Method .ctor addr 0x24bd080 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::TaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskContinuation, "System.Threading.Tasks", "TaskContinuation");
