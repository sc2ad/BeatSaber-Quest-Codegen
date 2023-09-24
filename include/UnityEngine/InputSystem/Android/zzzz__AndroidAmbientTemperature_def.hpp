#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__AmbientTemperatureSensor_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidAmbientTemperature;
}
// Type: UnityEngine.InputSystem.Android::AndroidAmbientTemperature
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6525))
// CS Name: UnityEngine.InputSystem.Android.AndroidAmbientTemperature
class CORDL_TYPE AndroidAmbientTemperature : public UnityEngine::InputSystem::AmbientTemperatureSensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidAmbientTemperature() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAmbientTemperature", modifiers: " const&", def_value: None }]
constexpr AndroidAmbientTemperature(AndroidAmbientTemperature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAmbientTemperature", modifiers: "&&", def_value: None }]
constexpr AndroidAmbientTemperature(AndroidAmbientTemperature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidAmbientTemperature(void* ptr) noexcept : UnityEngine::InputSystem::AmbientTemperatureSensor(ptr) {
}


  constexpr AndroidAmbientTemperature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidAmbientTemperature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidAmbientTemperature& operator=(AndroidAmbientTemperature&& o) noexcept = default;
  constexpr AndroidAmbientTemperature& operator=(AndroidAmbientTemperature const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::Android::AndroidAmbientTemperature New_ctor() ;

/// @brief Method .ctor addr 0x29530a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidAmbientTemperature);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidAmbientTemperature, "UnityEngine.InputSystem.Android", "AndroidAmbientTemperature");
