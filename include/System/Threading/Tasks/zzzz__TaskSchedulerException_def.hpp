#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
namespace {
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskSchedulerException;
}
// Type: System.Threading.Tasks::TaskSchedulerException
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2757))
// CS Name: System.Threading.Tasks.TaskSchedulerException
class CORDL_TYPE TaskSchedulerException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~TaskSchedulerException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerException", modifiers: " const&", def_value: None }]
constexpr TaskSchedulerException(TaskSchedulerException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskSchedulerException", modifiers: "&&", def_value: None }]
constexpr TaskSchedulerException(TaskSchedulerException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskSchedulerException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr TaskSchedulerException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskSchedulerException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskSchedulerException& operator=(TaskSchedulerException&& o) noexcept = default;
  constexpr TaskSchedulerException& operator=(TaskSchedulerException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TaskSchedulerException() ;

/// @brief Method .ctor addr 0x24b3774 size 0x70 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "innerException", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit TaskSchedulerException(::System::Exception innerException) ;

/// @brief Method .ctor addr 0x24b37e4 size 0x80 virtual false final false
 void _ctor(::System::Exception innerException) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TaskSchedulerException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24b3864 size 0x80 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Tasks::TaskSchedulerException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskSchedulerException, "System.Threading.Tasks", "TaskSchedulerException");
