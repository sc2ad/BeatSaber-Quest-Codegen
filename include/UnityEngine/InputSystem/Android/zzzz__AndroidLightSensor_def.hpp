#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__LightSensor_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidLightSensor;
}
// Type: UnityEngine.InputSystem.Android::AndroidLightSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6518))
// CS Name: UnityEngine.InputSystem.Android.AndroidLightSensor
class CORDL_TYPE AndroidLightSensor : public UnityEngine::InputSystem::LightSensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidLightSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidLightSensor", modifiers: " const&", def_value: None }]
constexpr AndroidLightSensor(AndroidLightSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidLightSensor", modifiers: "&&", def_value: None }]
constexpr AndroidLightSensor(AndroidLightSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidLightSensor(void* ptr) noexcept : UnityEngine::InputSystem::LightSensor(ptr) {
}


  constexpr AndroidLightSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidLightSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidLightSensor& operator=(AndroidLightSensor&& o) noexcept = default;
  constexpr AndroidLightSensor& operator=(AndroidLightSensor const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::Android::AndroidLightSensor New_ctor() ;

/// @brief Method .ctor addr 0x2953070 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidLightSensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidLightSensor, "UnityEngine.InputSystem.Android", "AndroidLightSensor");
