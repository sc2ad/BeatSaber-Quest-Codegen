#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Sensor_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class HumiditySensor;
}
// Type: UnityEngine.InputSystem::HumiditySensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6357))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6367))
// CS Name: UnityEngine.InputSystem.HumiditySensor
class CORDL_TYPE HumiditySensor : public ::UnityEngine::InputSystem::Sensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~HumiditySensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "HumiditySensor", modifiers: " const&", def_value: None }]
constexpr HumiditySensor(HumiditySensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HumiditySensor", modifiers: "&&", def_value: None }]
constexpr HumiditySensor(HumiditySensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HumiditySensor(void* ptr) noexcept : ::UnityEngine::InputSystem::Sensor(ptr) {
}


  constexpr HumiditySensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HumiditySensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HumiditySensor& operator=(HumiditySensor&& o) noexcept = default;
  constexpr HumiditySensor& operator=(HumiditySensor const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__relativeHumidity_k__BackingField, put=__set__relativeHumidity_k__BackingField))  _relativeHumidity_k__BackingField;

constexpr void __set__relativeHumidity_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__relativeHumidity_k__BackingField() const;

static ::UnityEngine::InputSystem::HumiditySensor __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(::UnityEngine::InputSystem::HumiditySensor value) ;

static ::UnityEngine::InputSystem::HumiditySensor __get__current_k__BackingField() ;


// Properties

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_relativeHumidity, put=set_relativeHumidity))  relativeHumidity;

static ::UnityEngine::InputSystem::HumiditySensor __declspec(property(get=get_current, put=set_current))  current;


// Methods

/// @brief Method get_relativeHumidity addr 0x2916440 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_relativeHumidity() ;

/// @brief Method set_relativeHumidity addr 0x2916448 size 0x8 virtual false final false
 void set_relativeHumidity(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_current addr 0x2916450 size 0x48 virtual false final false
static ::UnityEngine::InputSystem::HumiditySensor get_current() ;

/// @brief Method set_current addr 0x2916498 size 0x4c virtual false final false
static void set_current(::UnityEngine::InputSystem::HumiditySensor value) ;

/// @brief Method MakeCurrent addr 0x29164e4 size 0x54 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x2916538 size 0x84 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x29165bc size 0x78 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit HumiditySensor() ;

/// @brief Method .ctor addr 0x2916634 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::HumiditySensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HumiditySensor, "UnityEngine.InputSystem", "HumiditySensor");
