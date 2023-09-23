#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Threading::Tasks {
template<typename TResult>
class SystemThreadingTasks_FutureDebugView_1;
}
// Type: System.Threading.Tasks::SystemThreadingTasks_FutureDebugView`1
namespace System::Threading::Tasks {
// cpp template
template<typename TResult>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2771))
// CS Name: System.Threading.Tasks.SystemThreadingTasks_FutureDebugView`1
class CORDL_TYPE SystemThreadingTasks_FutureDebugView_1 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SystemThreadingTasks_FutureDebugView_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemThreadingTasks_FutureDebugView_1", modifiers: " const&", def_value: None }]
constexpr SystemThreadingTasks_FutureDebugView_1(SystemThreadingTasks_FutureDebugView_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SystemThreadingTasks_FutureDebugView_1", modifiers: "&&", def_value: None }]
constexpr SystemThreadingTasks_FutureDebugView_1(SystemThreadingTasks_FutureDebugView_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SystemThreadingTasks_FutureDebugView_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SystemThreadingTasks_FutureDebugView_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SystemThreadingTasks_FutureDebugView_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SystemThreadingTasks_FutureDebugView_1& operator=(SystemThreadingTasks_FutureDebugView_1&& o) noexcept = default;
  constexpr SystemThreadingTasks_FutureDebugView_1& operator=(SystemThreadingTasks_FutureDebugView_1 const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::SystemThreadingTasks_FutureDebugView_1, "System.Threading.Tasks", "SystemThreadingTasks_FutureDebugView`1");
