#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__GravitySensor_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGravitySensor;
}
// Type: UnityEngine.InputSystem.Android::AndroidGravitySensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6360))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6521))
// CS Name: UnityEngine.InputSystem.Android.AndroidGravitySensor
class CORDL_TYPE AndroidGravitySensor : public UnityEngine::InputSystem::GravitySensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidGravitySensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGravitySensor", modifiers: " const&", def_value: None }]
constexpr AndroidGravitySensor(AndroidGravitySensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGravitySensor", modifiers: "&&", def_value: None }]
constexpr AndroidGravitySensor(AndroidGravitySensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidGravitySensor(void* ptr) noexcept : UnityEngine::InputSystem::GravitySensor(ptr) {
}


  constexpr AndroidGravitySensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidGravitySensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidGravitySensor& operator=(AndroidGravitySensor&& o) noexcept = default;
  constexpr AndroidGravitySensor& operator=(AndroidGravitySensor const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidGravitySensor() ;

/// @brief Method .ctor addr 0x2953088 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidGravitySensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidGravitySensor, "UnityEngine.InputSystem.Android", "AndroidGravitySensor");
