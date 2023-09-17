#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include <cmath>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem {
class Sensor;
}
// Type: UnityEngine.InputSystem::Sensor
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6357))
// CS Name: UnityEngine.InputSystem.Sensor
class CORDL_TYPE Sensor : public ::UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x158};

virtual ~Sensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sensor", modifiers: " const&", def_value: None }]
constexpr Sensor(Sensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sensor", modifiers: "&&", def_value: None }]
constexpr Sensor(Sensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sensor(void* ptr) noexcept : ::UnityEngine::InputSystem::InputDevice(ptr) {
}


  constexpr Sensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sensor& operator=(Sensor&& o) noexcept = default;
  constexpr Sensor& operator=(Sensor const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_samplingFrequency, put=set_samplingFrequency))  samplingFrequency;


// Methods

/// @brief Method get_samplingFrequency addr 0x29150c8 size 0xf4 virtual false final false
 float_t get_samplingFrequency() ;

/// @brief Method set_samplingFrequency addr 0x29151bc size 0xa0 virtual false final false
 void set_samplingFrequency(float_t value) ;

// Ctor Parameters []
explicit Sensor() ;

/// @brief Method .ctor addr 0x291525c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Sensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Sensor, "UnityEngine.InputSystem", "Sensor");
