#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__LinearAccelerationSensor_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidLinearAccelerationSensor;
}
// Type: UnityEngine.InputSystem.Android::AndroidLinearAccelerationSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6362))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6522))
// CS Name: UnityEngine.InputSystem.Android.AndroidLinearAccelerationSensor
class CORDL_TYPE AndroidLinearAccelerationSensor : public ::UnityEngine::InputSystem::LinearAccelerationSensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidLinearAccelerationSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidLinearAccelerationSensor", modifiers: " const&", def_value: None }]
constexpr AndroidLinearAccelerationSensor(AndroidLinearAccelerationSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidLinearAccelerationSensor", modifiers: "&&", def_value: None }]
constexpr AndroidLinearAccelerationSensor(AndroidLinearAccelerationSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidLinearAccelerationSensor(void* ptr) noexcept : ::UnityEngine::InputSystem::LinearAccelerationSensor(ptr) {
}


  constexpr AndroidLinearAccelerationSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidLinearAccelerationSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidLinearAccelerationSensor& operator=(AndroidLinearAccelerationSensor&& o) noexcept = default;
  constexpr AndroidLinearAccelerationSensor& operator=(AndroidLinearAccelerationSensor const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidLinearAccelerationSensor() ;

/// @brief Method .ctor addr 0x2953090 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidLinearAccelerationSensor, "UnityEngine.InputSystem.Android", "AndroidLinearAccelerationSensor");
