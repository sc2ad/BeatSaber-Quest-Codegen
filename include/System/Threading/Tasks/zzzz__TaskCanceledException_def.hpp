#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Threading::Tasks {
class Task;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskCanceledException;
}
// Type: System.Threading.Tasks::TaskCanceledException
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2454))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2755))
// CS Name: System.Threading.Tasks.TaskCanceledException
class CORDL_TYPE TaskCanceledException : public ::System::OperationCanceledException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~TaskCanceledException() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCanceledException", modifiers: " const&", def_value: None }]
constexpr TaskCanceledException(TaskCanceledException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaskCanceledException", modifiers: "&&", def_value: None }]
constexpr TaskCanceledException(TaskCanceledException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaskCanceledException(void* ptr) noexcept : ::System::OperationCanceledException(ptr) {
}


  constexpr TaskCanceledException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaskCanceledException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaskCanceledException& operator=(TaskCanceledException&& o) noexcept = default;
  constexpr TaskCanceledException& operator=(TaskCanceledException const& o) noexcept = default;
                


// Fields

 ::System::Threading::Tasks::Task __declspec(property(get=__get__canceledTask, put=__set__canceledTask))  _canceledTask;

constexpr void __set__canceledTask(::System::Threading::Tasks::Task value) ;

constexpr ::System::Threading::Tasks::Task __get__canceledTask() const;


// Methods

// Ctor Parameters []
explicit TaskCanceledException() ;

/// @brief Method .ctor addr 0x24b3674 size 0x4c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit TaskCanceledException(::StringW message) ;

/// @brief Method .ctor addr 0x24b36c0 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "task", ty: "::System::Threading::Tasks::Task", modifiers: "", def_value: None }]
explicit TaskCanceledException(::System::Threading::Tasks::Task task) ;

/// @brief Method .ctor addr 0x24b36c8 size 0x80 virtual false final false
 void _ctor(::System::Threading::Tasks::Task task) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit TaskCanceledException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24b376c size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::Tasks::TaskCanceledException);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskCanceledException, "System.Threading.Tasks", "TaskCanceledException");
