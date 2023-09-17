#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Internal::Runtime::Augments {
class TaskTraceCallbacks;
}
// Forward declare root types
namespace Internal::Threading::Tasks::Tracing {
class TaskTrace;
}
// Type: Internal.Threading.Tasks.Tracing::TaskTrace
namespace Internal::Threading::Tasks::Tracing {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2303))
// CS Name: Internal.Threading.Tasks.Tracing.TaskTrace
class CORDL_TYPE TaskTrace : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TaskTrace() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskTrace", modifiers: " const&", def_value: None }]
constexpr TaskTrace(TaskTrace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskTrace", modifiers: "&&", def_value: None }]
constexpr TaskTrace(TaskTrace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskTrace(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TaskTrace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskTrace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskTrace& operator=(TaskTrace&& o) noexcept = default;
  constexpr TaskTrace& operator=(TaskTrace const& o) noexcept = default;
                


// Fields

static ::Internal::Runtime::Augments::TaskTraceCallbacks __declspec(property(get=__get_s_callbacks, put=__set_s_callbacks))  s_callbacks;

static void __set_s_callbacks(::Internal::Runtime::Augments::TaskTraceCallbacks value) ;

static ::Internal::Runtime::Augments::TaskTraceCallbacks __get_s_callbacks() ;


// Properties

static bool __declspec(property(get=get_Enabled))  Enabled;


// Methods

/// @brief Method get_Enabled addr 0x22bed20 size 0x60 virtual false final false
static bool get_Enabled() ;

/// @brief Method TaskWaitBegin_Asynchronous addr 0x22bed80 size 0x84 virtual false final false
static void TaskWaitBegin_Asynchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) ;

/// @brief Method TaskWaitBegin_Synchronous addr 0x22bee04 size 0x84 virtual false final false
static void TaskWaitBegin_Synchronous(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) ;

/// @brief Method TaskWaitEnd addr 0x22bee88 size 0x84 virtual false final false
static void TaskWaitEnd(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID) ;

/// @brief Method TaskScheduled addr 0x22bef0c size 0xa0 virtual false final false
static void TaskScheduled(int32_t OriginatingTaskSchedulerID, int32_t OriginatingTaskID, int32_t TaskID, int32_t CreatingTaskID, int32_t TaskCreationOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Internal::Threading::Tasks::Tracing
} // end anonymous namespace
NEED_NO_BOX(::Internal::Threading::Tasks::Tracing::TaskTrace);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Threading::Tasks::Tracing::TaskTrace, "Internal.Threading.Tasks.Tracing", "TaskTrace");
