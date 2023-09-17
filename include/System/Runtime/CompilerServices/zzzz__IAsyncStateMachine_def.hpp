#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Type: System.Runtime.CompilerServices::IAsyncStateMachine
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3365))
// CS Name: System.Runtime.CompilerServices.IAsyncStateMachine
class CORDL_TYPE IAsyncStateMachine : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAsyncStateMachine() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsyncStateMachine(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final false
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::IAsyncStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IAsyncStateMachine, "System.Runtime.CompilerServices", "IAsyncStateMachine");
