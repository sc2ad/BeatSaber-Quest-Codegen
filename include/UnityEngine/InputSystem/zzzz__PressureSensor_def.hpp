#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class PressureSensor;
}
// Type: UnityEngine.InputSystem::PressureSensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6365))
// CS Name: UnityEngine.InputSystem.PressureSensor
class CORDL_TYPE PressureSensor : public UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~PressureSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "PressureSensor", modifiers: " const&", def_value: None }]
constexpr PressureSensor(PressureSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PressureSensor", modifiers: "&&", def_value: None }]
constexpr PressureSensor(PressureSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PressureSensor(void* ptr) noexcept : UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr PressureSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PressureSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PressureSensor& operator=(PressureSensor&& o) noexcept = default;
  constexpr PressureSensor& operator=(PressureSensor const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__atmosphericPressure_k__BackingField, put=__set__atmosphericPressure_k__BackingField))  _atmosphericPressure_k__BackingField;

constexpr void __set__atmosphericPressure_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__atmosphericPressure_k__BackingField() const;

static UnityEngine::InputSystem::PressureSensor __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::PressureSensor value) ;

static UnityEngine::InputSystem::PressureSensor __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_atmosphericPressure, put=set_atmosphericPressure))  atmosphericPressure;

static UnityEngine::InputSystem::PressureSensor __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_atmosphericPressure addr 0x2916048 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_atmosphericPressure() ;

/// @brief Method set_atmosphericPressure addr 0x2916050 size 0x8 virtual false final false
 void set_atmosphericPressure(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_current addr 0x2916058 size 0x48 virtual false final false
static UnityEngine::InputSystem::PressureSensor get_current() ;

/// @brief Method set_current addr 0x29160a0 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::PressureSensor value) ;

/// @brief Method MakeCurrent addr 0x29160ec size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2916140 size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x29161c4 size 0x78 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit PressureSensor() ;

/// @brief Method .ctor addr 0x291623c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::PressureSensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::PressureSensor, "UnityEngine.InputSystem", "PressureSensor");
