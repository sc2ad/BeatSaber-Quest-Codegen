#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class AttitudeSensor;
}
// Type: UnityEngine.InputSystem::AttitudeSensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6361))
// CS Name: UnityEngine.InputSystem.AttitudeSensor
class CORDL_TYPE AttitudeSensor : public ::UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AttitudeSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttitudeSensor", modifiers: " const&", def_value: None }]
constexpr AttitudeSensor(AttitudeSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttitudeSensor", modifiers: "&&", def_value: None }]
constexpr AttitudeSensor(AttitudeSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttitudeSensor(void* ptr) noexcept : ::UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr AttitudeSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttitudeSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttitudeSensor& operator=(AttitudeSensor&& o) noexcept = default;
  constexpr AttitudeSensor& operator=(AttitudeSensor const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=__get__attitude_k__BackingField, put=__set__attitude_k__BackingField))  _attitude_k__BackingField;

constexpr void __set__attitude_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl __get__attitude_k__BackingField() const;

static ::UnityEngine::InputSystem::AttitudeSensor __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(::UnityEngine::InputSystem::AttitudeSensor value) ;

static ::UnityEngine::InputSystem::AttitudeSensor __get__current_k__BackingField() ;


// Properties

 ::UnityEngine::InputSystem::Controls::QuaternionControl __declspec(property(get=get_attitude, put=set_attitude))  attitude;

static ::UnityEngine::InputSystem::AttitudeSensor __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_attitude addr 0x2915858 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::QuaternionControl get_attitude() ;

/// @brief Method set_attitude addr 0x2915860 size 0x8 virtual false final false
 void set_attitude(::UnityEngine::InputSystem::Controls::QuaternionControl value) ;

/// @brief Method get_current addr 0x2915868 size 0x48 virtual false final false
static ::UnityEngine::InputSystem::AttitudeSensor get_current() ;

/// @brief Method set_current addr 0x29158b0 size 0x4c virtual false final false
static void set_current(::UnityEngine::InputSystem::AttitudeSensor value) ;

/// @brief Method MakeCurrent addr 0x29158fc size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2915950 size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x29159d4 size 0x78 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit AttitudeSensor() ;

/// @brief Method .ctor addr 0x2915a4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::AttitudeSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::AttitudeSensor, "UnityEngine.InputSystem", "AttitudeSensor");
