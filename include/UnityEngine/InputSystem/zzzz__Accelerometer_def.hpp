#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Accelerometer;
}
// Type: UnityEngine.InputSystem::Accelerometer
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6358))
// CS Name: UnityEngine.InputSystem.Accelerometer
class CORDL_TYPE Accelerometer : public UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~Accelerometer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Accelerometer", modifiers: " const&", def_value: None }]
constexpr Accelerometer(Accelerometer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Accelerometer", modifiers: "&&", def_value: None }]
constexpr Accelerometer(Accelerometer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Accelerometer(void* ptr) noexcept : UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr Accelerometer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Accelerometer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Accelerometer& operator=(Accelerometer&& o) noexcept = default;
  constexpr Accelerometer& operator=(Accelerometer const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__acceleration_k__BackingField, put=__set__acceleration_k__BackingField))  _acceleration_k__BackingField;

constexpr void __set__acceleration_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__acceleration_k__BackingField() const;

static UnityEngine::InputSystem::Accelerometer __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::Accelerometer value) ;

static UnityEngine::InputSystem::Accelerometer __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_acceleration, put=set_acceleration))  acceleration;

static UnityEngine::InputSystem::Accelerometer __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_acceleration addr 0x2915264 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_acceleration() ;

/// @brief Method set_acceleration addr 0x291526c size 0x8 virtual false final false
 void set_acceleration(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_current addr 0x2915274 size 0x48 virtual false final false
static UnityEngine::InputSystem::Accelerometer get_current() ;

/// @brief Method set_current addr 0x29152bc size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::Accelerometer value) ;

/// @brief Method MakeCurrent addr 0x2915308 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x291535c size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x29153e0 size 0x78 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit Accelerometer() ;

/// @brief Method .ctor addr 0x2915458 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::Accelerometer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Accelerometer, "UnityEngine.InputSystem", "Accelerometer");
