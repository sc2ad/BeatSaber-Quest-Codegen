#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
// Type: UnityEngine.InputSystem.Controls::TouchPhaseControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3758 }), TypeDefinitionIndex(TypeDefinitionIndex(6370))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6725))
// CS Name: UnityEngine.InputSystem.Controls.TouchPhaseControl
class CORDL_TYPE TouchPhaseControl : public UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::TouchPhase> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~TouchPhaseControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchPhaseControl", modifiers: " const&", def_value: None }]
constexpr TouchPhaseControl(TouchPhaseControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchPhaseControl", modifiers: "&&", def_value: None }]
constexpr TouchPhaseControl(TouchPhaseControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TouchPhaseControl(void* ptr) noexcept : UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::TouchPhase>(ptr) {
}


  constexpr TouchPhaseControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TouchPhaseControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TouchPhaseControl& operator=(TouchPhaseControl&& o) noexcept = default;
  constexpr TouchPhaseControl& operator=(TouchPhaseControl const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::Controls::TouchPhaseControl New_ctor() ;

/// @brief Method .ctor addr 0x2979268 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x29792f0 size 0x28 virtual true final false
 UnityEngine::InputSystem::TouchPhase ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2979318 size 0xc virtual true final false
 void WriteValueIntoState(UnityEngine::InputSystem::TouchPhase value, void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(UnityEngine::InputSystem::Controls::TouchPhaseControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::TouchPhaseControl, "UnityEngine.InputSystem.Controls", "TouchPhaseControl");
