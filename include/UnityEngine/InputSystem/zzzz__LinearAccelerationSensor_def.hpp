#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class LinearAccelerationSensor;
}
// Type: UnityEngine.InputSystem::LinearAccelerationSensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6362))
// CS Name: UnityEngine.InputSystem.LinearAccelerationSensor
class CORDL_TYPE LinearAccelerationSensor : public ::UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~LinearAccelerationSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinearAccelerationSensor", modifiers: " const&", def_value: None }]
constexpr LinearAccelerationSensor(LinearAccelerationSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinearAccelerationSensor", modifiers: "&&", def_value: None }]
constexpr LinearAccelerationSensor(LinearAccelerationSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinearAccelerationSensor(void* ptr) noexcept : ::UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr LinearAccelerationSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinearAccelerationSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinearAccelerationSensor& operator=(LinearAccelerationSensor&& o) noexcept = default;
  constexpr LinearAccelerationSensor& operator=(LinearAccelerationSensor const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__acceleration_k__BackingField, put=__set__acceleration_k__BackingField))  _acceleration_k__BackingField;

constexpr void __set__acceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector3Control __get__acceleration_k__BackingField() const;

static ::UnityEngine::InputSystem::LinearAccelerationSensor __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(::UnityEngine::InputSystem::LinearAccelerationSensor value) ;

static ::UnityEngine::InputSystem::LinearAccelerationSensor __get__current_k__BackingField() ;


// Properties

 ::UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_acceleration, put=set_acceleration))  acceleration;

static ::UnityEngine::InputSystem::LinearAccelerationSensor __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_acceleration addr 0x2915a54 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector3Control get_acceleration() ;

/// @brief Method set_acceleration addr 0x2915a5c size 0x8 virtual false final false
 void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_current addr 0x2915a64 size 0x48 virtual false final false
static ::UnityEngine::InputSystem::LinearAccelerationSensor get_current() ;

/// @brief Method set_current addr 0x2915aac size 0x4c virtual false final false
static void set_current(::UnityEngine::InputSystem::LinearAccelerationSensor value) ;

/// @brief Method MakeCurrent addr 0x2915af8 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2915b4c size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x2915bd0 size 0x78 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit LinearAccelerationSensor() ;

/// @brief Method .ctor addr 0x2915c48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::LinearAccelerationSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LinearAccelerationSensor, "UnityEngine.InputSystem", "LinearAccelerationSensor");
