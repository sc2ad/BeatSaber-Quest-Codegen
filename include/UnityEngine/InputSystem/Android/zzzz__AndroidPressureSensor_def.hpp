#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__PressureSensor_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidPressureSensor;
}
// Type: UnityEngine.InputSystem.Android::AndroidPressureSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6365))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6519))
// CS Name: UnityEngine.InputSystem.Android.AndroidPressureSensor
class CORDL_TYPE AndroidPressureSensor : public UnityEngine::InputSystem::PressureSensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidPressureSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidPressureSensor", modifiers: " const&", def_value: None }]
constexpr AndroidPressureSensor(AndroidPressureSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidPressureSensor", modifiers: "&&", def_value: None }]
constexpr AndroidPressureSensor(AndroidPressureSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidPressureSensor(void* ptr) noexcept : UnityEngine::InputSystem::PressureSensor(ptr) {
}


  constexpr AndroidPressureSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidPressureSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidPressureSensor& operator=(AndroidPressureSensor&& o) noexcept = default;
  constexpr AndroidPressureSensor& operator=(AndroidPressureSensor const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidPressureSensor() ;

/// @brief Method .ctor addr 0x2953078 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidPressureSensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidPressureSensor, "UnityEngine.InputSystem.Android", "AndroidPressureSensor");
