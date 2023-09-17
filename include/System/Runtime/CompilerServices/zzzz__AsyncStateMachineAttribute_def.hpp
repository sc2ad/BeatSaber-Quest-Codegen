#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_def.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncStateMachineAttribute;
}
// Type: System.Runtime.CompilerServices::AsyncStateMachineAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3349))
// CS Name: System.Runtime.CompilerServices.AsyncStateMachineAttribute
class CORDL_TYPE AsyncStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AsyncStateMachineAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncStateMachineAttribute", modifiers: " const&", def_value: None }]
constexpr AsyncStateMachineAttribute(AsyncStateMachineAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncStateMachineAttribute", modifiers: "&&", def_value: None }]
constexpr AsyncStateMachineAttribute(AsyncStateMachineAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncStateMachineAttribute(void* ptr) noexcept : ::System::Runtime::CompilerServices::StateMachineAttribute(ptr) {
}


  constexpr AsyncStateMachineAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncStateMachineAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncStateMachineAttribute& operator=(AsyncStateMachineAttribute&& o) noexcept = default;
  constexpr AsyncStateMachineAttribute& operator=(AsyncStateMachineAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "stateMachineType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit AsyncStateMachineAttribute(::System::Type stateMachineType) ;

/// @brief Method .ctor addr 0x236d9b4 size 0x28 virtual false final false
 void _ctor(::System::Type stateMachineType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncStateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncStateMachineAttribute, "System.Runtime.CompilerServices", "AsyncStateMachineAttribute");
