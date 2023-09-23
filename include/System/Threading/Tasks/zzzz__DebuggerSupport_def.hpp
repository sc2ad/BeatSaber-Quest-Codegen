#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Threading::Tasks {
struct CausalityRelation;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class LowLevelDictionary_2;
}
namespace System::Threading::Tasks {
struct CausalityTraceLevel;
}
namespace Internal::Runtime::Augments {
struct AsyncStatus;
}
namespace System::Threading::Tasks {
struct CausalitySynchronousWork;
}
// Forward declare root types
namespace System::Threading::Tasks {
class DebuggerSupport;
}
// Type: System.Threading.Tasks::DebuggerSupport
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2769))
// CS Name: System.Threading.Tasks.DebuggerSupport
class CORDL_TYPE DebuggerSupport : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DebuggerSupport() = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerSupport", modifiers: " const&", def_value: None }]
constexpr DebuggerSupport(DebuggerSupport const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerSupport", modifiers: "&&", def_value: None }]
constexpr DebuggerSupport(DebuggerSupport&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DebuggerSupport(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DebuggerSupport& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DebuggerSupport& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DebuggerSupport& operator=(DebuggerSupport&& o) noexcept = default;
  constexpr DebuggerSupport& operator=(DebuggerSupport const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::LowLevelDictionary_2<int32_t,System::Threading::Tasks::Task> __declspec(property(get=__get_s_activeTasks, put=__set_s_activeTasks))  s_activeTasks;

static void __set_s_activeTasks(System::Collections::Generic::LowLevelDictionary_2<int32_t,System::Threading::Tasks::Task> value) ;

static System::Collections::Generic::LowLevelDictionary_2<int32_t,System::Threading::Tasks::Task> __get_s_activeTasks() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_activeTasksLock, put=__set_s_activeTasksLock))  s_activeTasksLock;

static void __set_s_activeTasksLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_activeTasksLock() ;


// Properties

static bool __declspec(property(get=get_LoggingOn))  LoggingOn;


// Methods

/// @brief Method get_LoggingOn addr 0x24b4cc8 size 0x8 virtual false final false
static bool get_LoggingOn() ;

/// @brief Method TraceOperationCreation addr 0x24b4cd0 size 0x4 virtual false final false
static void TraceOperationCreation(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::Task task, ::StringW operationName, uint64_t relatedContext) ;

/// @brief Method TraceOperationCompletion addr 0x24b4cd4 size 0x4 virtual false final false
static void TraceOperationCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::Task task, Internal::Runtime::Augments::AsyncStatus status) ;

/// @brief Method TraceOperationRelation addr 0x24b4cd8 size 0x4 virtual false final false
static void TraceOperationRelation(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::Task task, System::Threading::Tasks::CausalityRelation relation) ;

/// @brief Method TraceSynchronousWorkStart addr 0x24b4cdc size 0x4 virtual false final false
static void TraceSynchronousWorkStart(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::Task task, System::Threading::Tasks::CausalitySynchronousWork work) ;

/// @brief Method TraceSynchronousWorkCompletion addr 0x24b4ce0 size 0x4 virtual false final false
static void TraceSynchronousWorkCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::CausalitySynchronousWork work) ;

/// @brief Method AddToActiveTasks addr 0x24b4ce4 size 0x94 virtual false final false
static void AddToActiveTasks(System::Threading::Tasks::Task task) ;

/// @brief Method AddToActiveTasksNonInlined addr 0x24b4d78 size 0x15c virtual false final false
static void AddToActiveTasksNonInlined(System::Threading::Tasks::Task task) ;

/// @brief Method RemoveFromActiveTasks addr 0x24b4f64 size 0x94 virtual false final false
static void RemoveFromActiveTasks(System::Threading::Tasks::Task task) ;

/// @brief Method RemoveFromActiveTasksNonInlined addr 0x24b4ff8 size 0x15c virtual false final false
static void RemoveFromActiveTasksNonInlined(System::Threading::Tasks::Task task) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::DebuggerSupport);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::DebuggerSupport, "System.Threading.Tasks", "DebuggerSupport");
