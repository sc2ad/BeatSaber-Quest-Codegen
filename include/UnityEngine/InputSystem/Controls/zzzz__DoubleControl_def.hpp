#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
// Type: UnityEngine.InputSystem.Controls::DoubleControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 2598 }), TypeDefinitionIndex(TypeDefinitionIndex(6299))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6716))
// CS Name: UnityEngine.InputSystem.Controls.DoubleControl
class CORDL_TYPE DoubleControl : public ::UnityEngine::InputSystem::InputControl_1<double_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~DoubleControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleControl", modifiers: " const&", def_value: None }]
constexpr DoubleControl(DoubleControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DoubleControl", modifiers: "&&", def_value: None }]
constexpr DoubleControl(DoubleControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DoubleControl(void* ptr) noexcept : ::UnityEngine::InputSystem::InputControl_1<double_t>(ptr) {
}


  constexpr DoubleControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DoubleControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DoubleControl& operator=(DoubleControl&& o) noexcept = default;
  constexpr DoubleControl& operator=(DoubleControl const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DoubleControl() ;

/// @brief Method .ctor addr 0x2977e48 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2977ed0 size 0xc virtual true final false
 double_t ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2977edc size 0xc virtual true final false
 void WriteValueIntoState(double_t value, void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DoubleControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DoubleControl, "UnityEngine.InputSystem.Controls", "DoubleControl");
