#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_def.hpp"
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IteratorStateMachineAttribute;
}
// Type: System.Runtime.CompilerServices::IteratorStateMachineAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3372))
// CS Name: System.Runtime.CompilerServices.IteratorStateMachineAttribute
class CORDL_TYPE IteratorStateMachineAttribute : public System::Runtime::CompilerServices::StateMachineAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IteratorStateMachineAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "IteratorStateMachineAttribute", modifiers: " const&", def_value: None }]
constexpr IteratorStateMachineAttribute(IteratorStateMachineAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IteratorStateMachineAttribute", modifiers: "&&", def_value: None }]
constexpr IteratorStateMachineAttribute(IteratorStateMachineAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IteratorStateMachineAttribute(void* ptr) noexcept : System::Runtime::CompilerServices::StateMachineAttribute(ptr) {
}


  constexpr IteratorStateMachineAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IteratorStateMachineAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IteratorStateMachineAttribute& operator=(IteratorStateMachineAttribute&& o) noexcept = default;
  constexpr IteratorStateMachineAttribute& operator=(IteratorStateMachineAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "stateMachineType", ty: "System::Type", modifiers: "", def_value: None }]
explicit IteratorStateMachineAttribute(System::Type stateMachineType) ;

/// @brief Method .ctor addr 0x236e0e0 size 0x28 virtual false final false
 void _ctor(System::Type stateMachineType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(System::Runtime::CompilerServices::IteratorStateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::IteratorStateMachineAttribute, "System.Runtime.CompilerServices", "IteratorStateMachineAttribute");
