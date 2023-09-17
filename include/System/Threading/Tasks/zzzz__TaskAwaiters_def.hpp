#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Threading::Tasks {
struct ForceAsyncAwaiter;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskAwaiters;
}
// Type: System.Threading.Tasks::TaskAwaiters
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2767))
// CS Name: System.Threading.Tasks.TaskAwaiters
class CORDL_TYPE TaskAwaiters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TaskAwaiters() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskAwaiters", modifiers: " const&", def_value: None }]
constexpr TaskAwaiters(TaskAwaiters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskAwaiters", modifiers: "&&", def_value: None }]
constexpr TaskAwaiters(TaskAwaiters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskAwaiters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskAwaiters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskAwaiters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskAwaiters& operator=(TaskAwaiters&& o) noexcept = default;
  constexpr TaskAwaiters& operator=(TaskAwaiters const& o) noexcept = default;
                


// Methods

/// @brief Method ForceAsync addr 0x24b4c28 size 0x4 virtual false final false
static ::System::Threading::Tasks::ForceAsyncAwaiter ForceAsync(::System::Threading::Tasks::Task task) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Tasks::TaskAwaiters);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskAwaiters, "System.Threading.Tasks", "TaskAwaiters");
