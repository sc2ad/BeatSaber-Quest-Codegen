#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Type: UnityEngine.InputSystem.Controls::IntegerControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 92 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6720))
// CS Name: UnityEngine.InputSystem.Controls.IntegerControl
class CORDL_TYPE IntegerControl : public ::UnityEngine::InputSystem::InputControl_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~IntegerControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegerControl", modifiers: " const&", def_value: None }]
constexpr IntegerControl(IntegerControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegerControl", modifiers: "&&", def_value: None }]
constexpr IntegerControl(IntegerControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntegerControl(void* ptr) noexcept : ::UnityEngine::InputSystem::InputControl_1<int32_t>(ptr) {
}


  constexpr IntegerControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntegerControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntegerControl& operator=(IntegerControl&& o) noexcept = default;
  constexpr IntegerControl& operator=(IntegerControl const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit IntegerControl() ;

/// @brief Method .ctor addr 0x297868c size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2978714 size 0xc virtual true final false
 int32_t ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2978720 size 0x18 virtual true final false
 void WriteValueIntoState(int32_t value, void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::IntegerControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::IntegerControl, "UnityEngine.InputSystem.Controls", "IntegerControl");
