#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class StateMachineAttribute;
}
// Type: System.Runtime.CompilerServices::StateMachineAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3376))
// CS Name: System.Runtime.CompilerServices.StateMachineAttribute
class CORDL_TYPE StateMachineAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StateMachineAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "StateMachineAttribute", modifiers: " const&", def_value: None }]
constexpr StateMachineAttribute(StateMachineAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StateMachineAttribute", modifiers: "&&", def_value: None }]
constexpr StateMachineAttribute(StateMachineAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StateMachineAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr StateMachineAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StateMachineAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StateMachineAttribute& operator=(StateMachineAttribute&& o) noexcept = default;
  constexpr StateMachineAttribute& operator=(StateMachineAttribute const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get__StateMachineType_k__BackingField, put=__set__StateMachineType_k__BackingField))  _StateMachineType_k__BackingField;

constexpr void __set__StateMachineType_k__BackingField(::System::Type value) ;

constexpr ::System::Type __get__StateMachineType_k__BackingField() const;


// Properties

 ::System::Type __declspec(property(get=get_StateMachineType))  StateMachineType;


// Methods

// Ctor Parameters [CppParam { name: "stateMachineType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit StateMachineAttribute(::System::Type stateMachineType) ;

/// @brief Method .ctor addr 0x236d9dc size 0x28 virtual false final false
 void _ctor(::System::Type stateMachineType) ;

/// @brief Method get_StateMachineType addr 0x236e3c8 size 0x8 virtual false final false
 ::System::Type get_StateMachineType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::StateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::StateMachineAttribute, "System.Runtime.CompilerServices", "StateMachineAttribute");
