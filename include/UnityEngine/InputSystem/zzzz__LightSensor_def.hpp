#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class LightSensor;
}
// Type: UnityEngine.InputSystem::LightSensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6364))
// CS Name: UnityEngine.InputSystem.LightSensor
class CORDL_TYPE LightSensor : public UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~LightSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightSensor", modifiers: " const&", def_value: None }]
constexpr LightSensor(LightSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightSensor", modifiers: "&&", def_value: None }]
constexpr LightSensor(LightSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightSensor(void* ptr) noexcept : UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr LightSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightSensor& operator=(LightSensor&& o) noexcept = default;
  constexpr LightSensor& operator=(LightSensor const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__lightLevel_k__BackingField, put=__set__lightLevel_k__BackingField))  _lightLevel_k__BackingField;

constexpr void __set__lightLevel_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__lightLevel_k__BackingField() const;

static UnityEngine::InputSystem::LightSensor __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::LightSensor value) ;

static UnityEngine::InputSystem::LightSensor __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_lightLevel, put=set_lightLevel))  lightLevel;

static UnityEngine::InputSystem::LightSensor __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_lightLevel addr 0x2915e4c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_lightLevel() ;

/// @brief Method set_lightLevel addr 0x2915e54 size 0x8 virtual false final false
 void set_lightLevel(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_current addr 0x2915e5c size 0x48 virtual false final false
static UnityEngine::InputSystem::LightSensor get_current() ;

/// @brief Method set_current addr 0x2915ea4 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::LightSensor value) ;

/// @brief Method MakeCurrent addr 0x2915ef0 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2915f44 size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x2915fc8 size 0x78 virtual true final false
 void FinishSetup() ;

static UnityEngine::InputSystem::LightSensor New_ctor() ;

/// @brief Method .ctor addr 0x2916040 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::LightSensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LightSensor, "UnityEngine.InputSystem", "LightSensor");
