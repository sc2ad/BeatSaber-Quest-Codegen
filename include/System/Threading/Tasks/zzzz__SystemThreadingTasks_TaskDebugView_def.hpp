#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Threading::Tasks {
class SystemThreadingTasks_TaskDebugView;
}
// Type: System.Threading.Tasks::SystemThreadingTasks_TaskDebugView
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2785))
// CS Name: System.Threading.Tasks.SystemThreadingTasks_TaskDebugView
class CORDL_TYPE SystemThreadingTasks_TaskDebugView : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SystemThreadingTasks_TaskDebugView() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemThreadingTasks_TaskDebugView", modifiers: " const&", def_value: None }]
constexpr SystemThreadingTasks_TaskDebugView(SystemThreadingTasks_TaskDebugView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemThreadingTasks_TaskDebugView", modifiers: "&&", def_value: None }]
constexpr SystemThreadingTasks_TaskDebugView(SystemThreadingTasks_TaskDebugView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemThreadingTasks_TaskDebugView(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SystemThreadingTasks_TaskDebugView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemThreadingTasks_TaskDebugView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemThreadingTasks_TaskDebugView& operator=(SystemThreadingTasks_TaskDebugView&& o) noexcept = default;
  constexpr SystemThreadingTasks_TaskDebugView& operator=(SystemThreadingTasks_TaskDebugView const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Tasks::SystemThreadingTasks_TaskDebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::SystemThreadingTasks_TaskDebugView, "System.Threading.Tasks", "SystemThreadingTasks_TaskDebugView");
