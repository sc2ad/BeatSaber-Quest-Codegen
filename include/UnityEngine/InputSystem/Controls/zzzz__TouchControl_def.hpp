#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class TouchPressControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class TouchPhaseControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class DoubleControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class TouchControl;
}
// Type: UnityEngine.InputSystem.Controls::TouchControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3759 }), TypeDefinitionIndex(TypeDefinitionIndex(6597)), TypeDefinitionIndex(TypeDefinitionIndex(6299))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6724))
// CS Name: UnityEngine.InputSystem.Controls.TouchControl
class CORDL_TYPE TouchControl : public UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::LowLevel::TouchState> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x150};

virtual ~TouchControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchControl", modifiers: " const&", def_value: None }]
constexpr TouchControl(TouchControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchControl", modifiers: "&&", def_value: None }]
constexpr TouchControl(TouchControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TouchControl(void* ptr) noexcept : UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::LowLevel::TouchState>(ptr) {
}


  constexpr TouchControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TouchControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TouchControl& operator=(TouchControl&& o) noexcept = default;
  constexpr TouchControl& operator=(TouchControl const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::TouchPressControl __declspec(property(get=__get__press_k__BackingField, put=__set__press_k__BackingField))  _press_k__BackingField;

constexpr void __set__press_k__BackingField(UnityEngine::InputSystem::Controls::TouchPressControl value) ;

constexpr UnityEngine::InputSystem::Controls::TouchPressControl __get__press_k__BackingField() const;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__touchId_k__BackingField, put=__set__touchId_k__BackingField))  _touchId_k__BackingField;

constexpr void __set__touchId_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__touchId_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__position_k__BackingField() const;

 UnityEngine::InputSystem::Controls::DeltaControl __declspec(property(get=__get__delta_k__BackingField, put=__set__delta_k__BackingField))  _delta_k__BackingField;

constexpr void __set__delta_k__BackingField(UnityEngine::InputSystem::Controls::DeltaControl value) ;

constexpr UnityEngine::InputSystem::Controls::DeltaControl __get__delta_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__pressure_k__BackingField, put=__set__pressure_k__BackingField))  _pressure_k__BackingField;

constexpr void __set__pressure_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__pressure_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__radius_k__BackingField, put=__set__radius_k__BackingField))  _radius_k__BackingField;

constexpr void __set__radius_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__radius_k__BackingField() const;

 UnityEngine::InputSystem::Controls::TouchPhaseControl __declspec(property(get=__get__phase_k__BackingField, put=__set__phase_k__BackingField))  _phase_k__BackingField;

constexpr void __set__phase_k__BackingField(UnityEngine::InputSystem::Controls::TouchPhaseControl value) ;

constexpr UnityEngine::InputSystem::Controls::TouchPhaseControl __get__phase_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__indirectTouch_k__BackingField, put=__set__indirectTouch_k__BackingField))  _indirectTouch_k__BackingField;

constexpr void __set__indirectTouch_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__indirectTouch_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__tap_k__BackingField, put=__set__tap_k__BackingField))  _tap_k__BackingField;

constexpr void __set__tap_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__tap_k__BackingField() const;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=__get__tapCount_k__BackingField, put=__set__tapCount_k__BackingField))  _tapCount_k__BackingField;

constexpr void __set__tapCount_k__BackingField(UnityEngine::InputSystem::Controls::IntegerControl value) ;

constexpr UnityEngine::InputSystem::Controls::IntegerControl __get__tapCount_k__BackingField() const;

 UnityEngine::InputSystem::Controls::DoubleControl __declspec(property(get=__get__startTime_k__BackingField, put=__set__startTime_k__BackingField))  _startTime_k__BackingField;

constexpr void __set__startTime_k__BackingField(UnityEngine::InputSystem::Controls::DoubleControl value) ;

constexpr UnityEngine::InputSystem::Controls::DoubleControl __get__startTime_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__startPosition_k__BackingField, put=__set__startPosition_k__BackingField))  _startPosition_k__BackingField;

constexpr void __set__startPosition_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__startPosition_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::TouchPressControl __declspec(property(get=get_press, put=set_press))  press;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_touchId, put=set_touchId))  touchId;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::InputSystem::Controls::DeltaControl __declspec(property(get=get_delta, put=set_delta))  delta;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_pressure, put=set_pressure))  pressure;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_radius, put=set_radius))  radius;

 UnityEngine::InputSystem::Controls::TouchPhaseControl __declspec(property(get=get_phase, put=set_phase))  phase;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_indirectTouch, put=set_indirectTouch))  indirectTouch;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_tap, put=set_tap))  tap;

 UnityEngine::InputSystem::Controls::IntegerControl __declspec(property(get=get_tapCount, put=set_tapCount))  tapCount;

 UnityEngine::InputSystem::Controls::DoubleControl __declspec(property(get=get_startTime, put=set_startTime))  startTime;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_startPosition, put=set_startPosition))  startPosition;

 bool __declspec(property(get=get_isInProgress))  isInProgress;


// Methods

/// @brief Method get_press addr 0x2978d58 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPressControl get_press() ;

/// @brief Method set_press addr 0x2978d60 size 0x8 virtual false final false
 void set_press(UnityEngine::InputSystem::Controls::TouchPressControl value) ;

/// @brief Method get_touchId addr 0x2978d68 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_touchId() ;

/// @brief Method set_touchId addr 0x2978d70 size 0x8 virtual false final false
 void set_touchId(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_position addr 0x2978d78 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_position() ;

/// @brief Method set_position addr 0x2978d80 size 0x8 virtual false final false
 void set_position(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_delta addr 0x2978d88 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::DeltaControl get_delta() ;

/// @brief Method set_delta addr 0x2978d90 size 0x8 virtual false final false
 void set_delta(UnityEngine::InputSystem::Controls::DeltaControl value) ;

/// @brief Method get_pressure addr 0x2978d98 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_pressure() ;

/// @brief Method set_pressure addr 0x2978da0 size 0x8 virtual false final false
 void set_pressure(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_radius addr 0x2978da8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_radius() ;

/// @brief Method set_radius addr 0x2978db0 size 0x8 virtual false final false
 void set_radius(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_phase addr 0x2978db8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::TouchPhaseControl get_phase() ;

/// @brief Method set_phase addr 0x2978dc0 size 0x8 virtual false final false
 void set_phase(UnityEngine::InputSystem::Controls::TouchPhaseControl value) ;

/// @brief Method get_indirectTouch addr 0x2978dc8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_indirectTouch() ;

/// @brief Method set_indirectTouch addr 0x2978dd0 size 0x8 virtual false final false
 void set_indirectTouch(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_tap addr 0x2978dd8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_tap() ;

/// @brief Method set_tap addr 0x2978de0 size 0x8 virtual false final false
 void set_tap(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_tapCount addr 0x2978de8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::IntegerControl get_tapCount() ;

/// @brief Method set_tapCount addr 0x2978df0 size 0x8 virtual false final false
 void set_tapCount(UnityEngine::InputSystem::Controls::IntegerControl value) ;

/// @brief Method get_startTime addr 0x2978df8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::DoubleControl get_startTime() ;

/// @brief Method set_startTime addr 0x2978e00 size 0x8 virtual false final false
 void set_startTime(UnityEngine::InputSystem::Controls::DoubleControl value) ;

/// @brief Method get_startPosition addr 0x2978e08 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_startPosition() ;

/// @brief Method set_startPosition addr 0x2978e10 size 0x8 virtual false final false
 void set_startPosition(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_isInProgress addr 0x2978e18 size 0x70 virtual false final false
 bool get_isInProgress() ;

static UnityEngine::InputSystem::Controls::TouchControl New_ctor() ;

/// @brief Method .ctor addr 0x2978e88 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method FinishSetup addr 0x2978f00 size 0x2d4 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x29791d4 size 0x24 virtual true final false
 UnityEngine::InputSystem::LowLevel::TouchState ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x29791f8 size 0x70 virtual true final false
 void WriteValueIntoState(UnityEngine::InputSystem::LowLevel::TouchState value, void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(UnityEngine::InputSystem::Controls::TouchControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::TouchControl, "UnityEngine.InputSystem.Controls", "TouchControl");
