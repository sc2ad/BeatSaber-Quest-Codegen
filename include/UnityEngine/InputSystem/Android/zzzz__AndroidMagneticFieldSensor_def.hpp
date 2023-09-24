#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__MagneticFieldSensor_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidMagneticFieldSensor;
}
// Type: UnityEngine.InputSystem.Android::AndroidMagneticFieldSensor
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6516))
// CS Name: UnityEngine.InputSystem.Android.AndroidMagneticFieldSensor
class CORDL_TYPE AndroidMagneticFieldSensor : public UnityEngine::InputSystem::MagneticFieldSensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidMagneticFieldSensor() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidMagneticFieldSensor", modifiers: " const&", def_value: None }]
constexpr AndroidMagneticFieldSensor(AndroidMagneticFieldSensor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidMagneticFieldSensor", modifiers: "&&", def_value: None }]
constexpr AndroidMagneticFieldSensor(AndroidMagneticFieldSensor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidMagneticFieldSensor(void* ptr) noexcept : UnityEngine::InputSystem::MagneticFieldSensor(ptr) {
}


  constexpr AndroidMagneticFieldSensor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidMagneticFieldSensor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidMagneticFieldSensor& operator=(AndroidMagneticFieldSensor&& o) noexcept = default;
  constexpr AndroidMagneticFieldSensor& operator=(AndroidMagneticFieldSensor const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor New_ctor() ;

/// @brief Method .ctor addr 0x2953060 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor, "UnityEngine.InputSystem.Android", "AndroidMagneticFieldSensor");
