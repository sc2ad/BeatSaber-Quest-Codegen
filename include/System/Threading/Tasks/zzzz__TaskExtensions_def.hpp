#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskExtensions;
}
// Type: System.Threading.Tasks::TaskExtensions
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14602))
// CS Name: System.Threading.Tasks.TaskExtensions
class CORDL_TYPE TaskExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TaskExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: " const&", def_value: None }]
constexpr TaskExtensions(TaskExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskExtensions", modifiers: "&&", def_value: None }]
constexpr TaskExtensions(TaskExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskExtensions& operator=(TaskExtensions&& o) noexcept = default;
  constexpr TaskExtensions& operator=(TaskExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Unwrap addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TResult>
static System::Threading::Tasks::Task_1<TResult> Unwrap(System::Threading::Tasks::Task_1<System::Threading::Tasks::Task_1<TResult>> task) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::TaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskExtensions, "System.Threading.Tasks", "TaskExtensions");
