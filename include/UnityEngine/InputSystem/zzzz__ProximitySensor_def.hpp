#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class ProximitySensor;
}
// Type: UnityEngine.InputSystem::ProximitySensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6366))
// CS Name: UnityEngine.InputSystem.ProximitySensor
class CORDL_TYPE ProximitySensor : public UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~ProximitySensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProximitySensor", modifiers: " const&", def_value: None }]
constexpr ProximitySensor(ProximitySensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProximitySensor", modifiers: "&&", def_value: None }]
constexpr ProximitySensor(ProximitySensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProximitySensor(void* ptr) noexcept : UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr ProximitySensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProximitySensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProximitySensor& operator=(ProximitySensor&& o) noexcept = default;
  constexpr ProximitySensor& operator=(ProximitySensor const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__distance_k__BackingField, put=__set__distance_k__BackingField))  _distance_k__BackingField;

constexpr void __set__distance_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__distance_k__BackingField() const;

static UnityEngine::InputSystem::ProximitySensor __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::ProximitySensor value) ;

static UnityEngine::InputSystem::ProximitySensor __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_distance, put=set_distance))  distance;

static UnityEngine::InputSystem::ProximitySensor __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_distance addr 0x2916244 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_distance() ;

/// @brief Method set_distance addr 0x291624c size 0x8 virtual false final false
 void set_distance(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_current addr 0x2916254 size 0x48 virtual false final false
static UnityEngine::InputSystem::ProximitySensor get_current() ;

/// @brief Method set_current addr 0x291629c size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::ProximitySensor value) ;

/// @brief Method MakeCurrent addr 0x29162e8 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x291633c size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x29163c0 size 0x78 virtual true final false
 void FinishSetup() ;

static UnityEngine::InputSystem::ProximitySensor New_ctor() ;

/// @brief Method .ctor addr 0x2916438 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::ProximitySensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::ProximitySensor, "UnityEngine.InputSystem", "ProximitySensor");
