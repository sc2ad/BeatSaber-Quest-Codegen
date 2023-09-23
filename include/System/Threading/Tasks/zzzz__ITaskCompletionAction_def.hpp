#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
// Type: System.Threading.Tasks::ITaskCompletionAction
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2791))
// CS Name: System.Threading.Tasks.ITaskCompletionAction
class CORDL_TYPE ITaskCompletionAction : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITaskCompletionAction() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITaskCompletionAction(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_InvokeMayRunArbitraryCode))  InvokeMayRunArbitraryCode;


// Methods

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invoke(System::Threading::Tasks::Task completingTask) ;

/// @brief Method get_InvokeMayRunArbitraryCode addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_InvokeMayRunArbitraryCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading::Tasks
NEED_NO_BOX(System::Threading::Tasks::ITaskCompletionAction);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::ITaskCompletionAction, "System.Threading.Tasks", "ITaskCompletionAction");
