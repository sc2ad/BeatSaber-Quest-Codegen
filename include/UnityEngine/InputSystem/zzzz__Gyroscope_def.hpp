#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Gyroscope;
}
// Type: UnityEngine.InputSystem::Gyroscope
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6359))
// CS Name: UnityEngine.InputSystem.Gyroscope
class CORDL_TYPE Gyroscope : public UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~Gyroscope() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gyroscope", modifiers: " const&", def_value: None }]
constexpr Gyroscope(Gyroscope const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gyroscope", modifiers: "&&", def_value: None }]
constexpr Gyroscope(Gyroscope&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gyroscope(void* ptr) noexcept : UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr Gyroscope& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gyroscope& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gyroscope& operator=(Gyroscope&& o) noexcept = default;
  constexpr Gyroscope& operator=(Gyroscope const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__angularVelocity_k__BackingField, put=__set__angularVelocity_k__BackingField))  _angularVelocity_k__BackingField;

constexpr void __set__angularVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__angularVelocity_k__BackingField() const;

static UnityEngine::InputSystem::Gyroscope __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::Gyroscope value) ;

static UnityEngine::InputSystem::Gyroscope __get__current_k__BackingField() ;


// Properties

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_angularVelocity, put=set_angularVelocity))  angularVelocity;

static UnityEngine::InputSystem::Gyroscope __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_angularVelocity addr 0x2915460 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_angularVelocity() ;

/// @brief Method set_angularVelocity addr 0x2915468 size 0x8 virtual false final false
 void set_angularVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_current addr 0x2915470 size 0x48 virtual false final false
static UnityEngine::InputSystem::Gyroscope get_current() ;

/// @brief Method set_current addr 0x29154b8 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::Gyroscope value) ;

/// @brief Method MakeCurrent addr 0x2915504 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2915558 size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x29155dc size 0x78 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit Gyroscope() ;

/// @brief Method .ctor addr 0x2915654 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::Gyroscope);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Gyroscope, "UnityEngine.InputSystem", "Gyroscope");
