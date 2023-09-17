#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Internal::Runtime::Augments {
class TaskTraceCallbacks;
}
// Type: Internal.Runtime.Augments::TaskTraceCallbacks
namespace Internal::Runtime::Augments {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2305))
// CS Name: Internal.Runtime.Augments.TaskTraceCallbacks
class CORDL_TYPE TaskTraceCallbacks : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TaskTraceCallbacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskTraceCallbacks", modifiers: " const&", def_value: None }]
constexpr TaskTraceCallbacks(TaskTraceCallbacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskTraceCallbacks", modifiers: "&&", def_value: None }]
constexpr TaskTraceCallbacks(TaskTraceCallbacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskTraceCallbacks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskTraceCallbacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskTraceCallbacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskTraceCallbacks& operator=(TaskTraceCallbacks&& o) noexcept = default;
  constexpr TaskTraceCallbacks& operator=(TaskTraceCallbacks const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_Enabled))  Enabled;


// Methods

/// @brief Method get_Enabled addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_Enabled() ;

/// @brief Method TaskWaitBegin_Asynchronous addr 0x0 size 0xffffffffffffffff virtual true final false
 void TaskWaitBegin_Asynchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) ;

/// @brief Method TaskWaitBegin_Synchronous addr 0x0 size 0xffffffffffffffff virtual true final false
 void TaskWaitBegin_Synchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) ;

/// @brief Method TaskWaitEnd addr 0x0 size 0xffffffffffffffff virtual true final false
 void TaskWaitEnd(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) ;

/// @brief Method TaskScheduled addr 0x0 size 0xffffffffffffffff virtual true final false
 void TaskScheduled(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID, int32_t CreatingTaskID, int32_t TaskCreationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Internal::Runtime::Augments
} // end anonymous namespace
NEED_NO_BOX(::Internal::Runtime::Augments::TaskTraceCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::TaskTraceCallbacks, "Internal.Runtime.Augments", "TaskTraceCallbacks");
