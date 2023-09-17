#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateCallbackReceiver;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Pointer;
}
// Type: UnityEngine.InputSystem::Pointer
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6330))
// CS Name: UnityEngine.InputSystem.Pointer
class CORDL_TYPE Pointer : public ::UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateCallbackReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x180};

virtual ~Pointer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: " const&", def_value: None }]
constexpr Pointer(Pointer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: "&&", def_value: None }]
constexpr Pointer(Pointer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pointer(void* ptr) noexcept : ::UnityEngine::InputSystem::InputDevice(ptr) {
}


  constexpr Pointer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pointer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pointer& operator=(Pointer&& o) noexcept = default;
  constexpr Pointer& operator=(Pointer const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control __get__position_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::DeltaControl __declspec(property(get=__get__delta_k__BackingField, put=__set__delta_k__BackingField))  _delta_k__BackingField;

constexpr void __set__delta_k__BackingField(::UnityEngine::InputSystem::Controls::DeltaControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::DeltaControl __get__delta_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__radius_k__BackingField, put=__set__radius_k__BackingField))  _radius_k__BackingField;

constexpr void __set__radius_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control __get__radius_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__pressure_k__BackingField, put=__set__pressure_k__BackingField))  _pressure_k__BackingField;

constexpr void __set__pressure_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__pressure_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__press_k__BackingField, put=__set__press_k__BackingField))  _press_k__BackingField;

constexpr void __set__press_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__press_k__BackingField() const;

static ::UnityEngine::InputSystem::Pointer __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(::UnityEngine::InputSystem::Pointer value) ;

static ::UnityEngine::InputSystem::Pointer __get__current_k__BackingField() ;


// Properties

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_position, put=set_position))  position;

 ::UnityEngine::InputSystem::Controls::DeltaControl __declspec(property(get=get_delta, put=set_delta))  delta;

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_radius, put=set_radius))  radius;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_pressure, put=set_pressure))  pressure;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_press, put=set_press))  press;

static ::UnityEngine::InputSystem::Pointer __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_position addr 0x28dc084 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector2Control get_position() ;

/// @brief Method set_position addr 0x28dc08c size 0x8 virtual false final false
 void set_position(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_delta addr 0x28dc094 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::DeltaControl get_delta() ;

/// @brief Method set_delta addr 0x28dc09c size 0x8 virtual false final false
 void set_delta(::UnityEngine::InputSystem::Controls::DeltaControl value) ;

/// @brief Method get_radius addr 0x28dc0a4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector2Control get_radius() ;

/// @brief Method set_radius addr 0x28dc0ac size 0x8 virtual false final false
 void set_radius(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_pressure addr 0x28dc0b4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_pressure() ;

/// @brief Method set_pressure addr 0x28dc0bc size 0x8 virtual false final false
 void set_pressure(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_press addr 0x28dc0c4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_press() ;

/// @brief Method set_press addr 0x28dc0cc size 0x8 virtual false final false
 void set_press(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_current addr 0x28dc0d4 size 0x48 virtual false final false
static ::UnityEngine::InputSystem::Pointer get_current() ;

/// @brief Method set_current addr 0x28dc11c size 0x4c virtual false final false
static void set_current(::UnityEngine::InputSystem::Pointer value) ;

/// @brief Method MakeCurrent addr 0x28db3f0 size 0x4c virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x28db518 size 0x7c virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x28db7dc size 0x164 virtual true final false
 void FinishSetup() ;

/// @brief Method OnNextUpdate addr 0x28db9d0 size 0x88 virtual false final false
 void OnNextUpdate() ;

/// @brief Method OnStateEvent addr 0x28dba9c size 0x4c virtual false final false
 void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnNextUpdate addr 0x28dc168 size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate() ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.OnStateEvent addr 0x28dc16c size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateCallbackReceiver.GetStateOffsetForEvent addr 0x28dc170 size 0x8 virtual true final true
 bool UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ByRef<uint32_t> offset) ;

// Ctor Parameters []
explicit Pointer() ;

/// @brief Method .ctor addr 0x28dbb1c size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Pointer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Pointer, "UnityEngine.InputSystem", "Pointer");
