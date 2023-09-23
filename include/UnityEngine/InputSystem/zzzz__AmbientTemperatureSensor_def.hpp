#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class AmbientTemperatureSensor;
}
// Type: UnityEngine.InputSystem::AmbientTemperatureSensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6368))
// CS Name: UnityEngine.InputSystem.AmbientTemperatureSensor
class CORDL_TYPE AmbientTemperatureSensor : public UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AmbientTemperatureSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AmbientTemperatureSensor", modifiers: " const&", def_value: None }]
constexpr AmbientTemperatureSensor(AmbientTemperatureSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AmbientTemperatureSensor", modifiers: "&&", def_value: None }]
constexpr AmbientTemperatureSensor(AmbientTemperatureSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AmbientTemperatureSensor(void* ptr) noexcept : UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr AmbientTemperatureSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AmbientTemperatureSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AmbientTemperatureSensor& operator=(AmbientTemperatureSensor&& o) noexcept = default;
  constexpr AmbientTemperatureSensor& operator=(AmbientTemperatureSensor const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__ambientTemperature_k__BackingField, put=__set__ambientTemperature_k__BackingField))  _ambientTemperature_k__BackingField;

constexpr void __set__ambientTemperature_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__ambientTemperature_k__BackingField() const;

static UnityEngine::InputSystem::AmbientTemperatureSensor __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::AmbientTemperatureSensor value) ;

static UnityEngine::InputSystem::AmbientTemperatureSensor __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_ambientTemperature, put=set_ambientTemperature))  ambientTemperature;

static UnityEngine::InputSystem::AmbientTemperatureSensor __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_ambientTemperature addr 0x291663c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_ambientTemperature() ;

/// @brief Method set_ambientTemperature addr 0x2916644 size 0x8 virtual false final false
 void set_ambientTemperature(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_current addr 0x291664c size 0x48 virtual false final false
static UnityEngine::InputSystem::AmbientTemperatureSensor get_current() ;

/// @brief Method set_current addr 0x2916694 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::AmbientTemperatureSensor value) ;

/// @brief Method MakeCurrent addr 0x29166e0 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2916734 size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x29167b8 size 0x78 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit AmbientTemperatureSensor() ;

/// @brief Method .ctor addr 0x2916830 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::AmbientTemperatureSensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::AmbientTemperatureSensor, "UnityEngine.InputSystem", "AmbientTemperatureSensor");
