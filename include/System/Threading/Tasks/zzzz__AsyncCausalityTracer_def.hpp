#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Threading::Tasks {
struct AsyncCausalityStatus;
}
namespace System::Threading::Tasks {
struct CausalitySynchronousWork;
}
namespace System::Threading::Tasks {
struct CausalityTraceLevel;
}
// Forward declare root types
namespace System::Threading::Tasks {
class AsyncCausalityTracer;
}
// Type: System.Threading.Tasks::AsyncCausalityTracer
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2816))
// CS Name: System.Threading.Tasks.AsyncCausalityTracer
class CORDL_TYPE AsyncCausalityTracer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AsyncCausalityTracer() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCausalityTracer", modifiers: " const&", def_value: None }]
constexpr AsyncCausalityTracer(AsyncCausalityTracer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCausalityTracer", modifiers: "&&", def_value: None }]
constexpr AsyncCausalityTracer(AsyncCausalityTracer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncCausalityTracer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncCausalityTracer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncCausalityTracer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncCausalityTracer& operator=(AsyncCausalityTracer&& o) noexcept = default;
  constexpr AsyncCausalityTracer& operator=(AsyncCausalityTracer const& o) noexcept = default;
                


// Properties

static bool __declspec(property(get=get_LoggingOn))  LoggingOn;


// Methods

/// @brief Method get_LoggingOn addr 0x24bc744 size 0x8 virtual false final false
static bool get_LoggingOn() ;

/// @brief Method TraceOperationCreation addr 0x24bf954 size 0x4 virtual false final false
static void TraceOperationCreation(System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, ::StringW operationName, uint64_t relatedContext) ;

/// @brief Method TraceOperationCompletion addr 0x24bf958 size 0x4 virtual false final false
static void TraceOperationCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, System::Threading::Tasks::AsyncCausalityStatus status) ;

/// @brief Method TraceSynchronousWorkStart addr 0x24bf95c size 0x4 virtual false final false
static void TraceSynchronousWorkStart(System::Threading::Tasks::CausalityTraceLevel traceLevel, int32_t taskId, System::Threading::Tasks::CausalitySynchronousWork work) ;

/// @brief Method TraceSynchronousWorkCompletion addr 0x24bc74c size 0x4 virtual false final false
static void TraceSynchronousWorkCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::CausalitySynchronousWork work) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::AsyncCausalityTracer);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::AsyncCausalityTracer, "System.Threading.Tasks", "AsyncCausalityTracer");
