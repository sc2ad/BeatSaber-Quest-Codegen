#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class GravitySensor;
}
// Type: UnityEngine.InputSystem::GravitySensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6360))
// CS Name: UnityEngine.InputSystem.GravitySensor
class CORDL_TYPE GravitySensor : public UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~GravitySensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "GravitySensor", modifiers: " const&", def_value: None }]
constexpr GravitySensor(GravitySensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GravitySensor", modifiers: "&&", def_value: None }]
constexpr GravitySensor(GravitySensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GravitySensor(void* ptr) noexcept : UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr GravitySensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GravitySensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GravitySensor& operator=(GravitySensor&& o) noexcept = default;
  constexpr GravitySensor& operator=(GravitySensor const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__gravity_k__BackingField, put=__set__gravity_k__BackingField))  _gravity_k__BackingField;

constexpr void __set__gravity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__gravity_k__BackingField() const;

static UnityEngine::InputSystem::GravitySensor __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::GravitySensor value) ;

static UnityEngine::InputSystem::GravitySensor __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_gravity, put=set_gravity))  gravity;

static UnityEngine::InputSystem::GravitySensor __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_gravity addr 0x291565c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_gravity() ;

/// @brief Method set_gravity addr 0x2915664 size 0x8 virtual false final false
 void set_gravity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_current addr 0x291566c size 0x48 virtual false final false
static UnityEngine::InputSystem::GravitySensor get_current() ;

/// @brief Method set_current addr 0x29156b4 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::GravitySensor value) ;

/// @brief Method FinishSetup addr 0x2915700 size 0x78 virtual true final false
 void FinishSetup() ;

/// @brief Method MakeCurrent addr 0x2915778 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x29157cc size 0x84 virtual true final false
 void OnRemoved() ;

static UnityEngine::InputSystem::GravitySensor New_ctor() ;

/// @brief Method .ctor addr 0x2915850 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::GravitySensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::GravitySensor, "UnityEngine.InputSystem", "GravitySensor");
