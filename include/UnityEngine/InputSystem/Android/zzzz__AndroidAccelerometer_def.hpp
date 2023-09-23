#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Accelerometer_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidAccelerometer;
}
// Type: UnityEngine.InputSystem.Android::AndroidAccelerometer
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6358))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6515))
// CS Name: UnityEngine.InputSystem.Android.AndroidAccelerometer
class CORDL_TYPE AndroidAccelerometer : public UnityEngine::InputSystem::Accelerometer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidAccelerometer() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAccelerometer", modifiers: " const&", def_value: None }]
constexpr AndroidAccelerometer(AndroidAccelerometer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAccelerometer", modifiers: "&&", def_value: None }]
constexpr AndroidAccelerometer(AndroidAccelerometer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidAccelerometer(void* ptr) noexcept : UnityEngine::InputSystem::Accelerometer(ptr) {
}


  constexpr AndroidAccelerometer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidAccelerometer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidAccelerometer& operator=(AndroidAccelerometer&& o) noexcept = default;
  constexpr AndroidAccelerometer& operator=(AndroidAccelerometer const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidAccelerometer() ;

/// @brief Method .ctor addr 0x2953058 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidAccelerometer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidAccelerometer, "UnityEngine.InputSystem.Android", "AndroidAccelerometer");
