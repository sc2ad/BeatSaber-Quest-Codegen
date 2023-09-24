#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__HumiditySensor_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidRelativeHumidity;
}
// Type: UnityEngine.InputSystem.Android::AndroidRelativeHumidity
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6367))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6524))
// CS Name: UnityEngine.InputSystem.Android.AndroidRelativeHumidity
class CORDL_TYPE AndroidRelativeHumidity : public UnityEngine::InputSystem::HumiditySensor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~AndroidRelativeHumidity() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidRelativeHumidity", modifiers: " const&", def_value: None }]
constexpr AndroidRelativeHumidity(AndroidRelativeHumidity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidRelativeHumidity", modifiers: "&&", def_value: None }]
constexpr AndroidRelativeHumidity(AndroidRelativeHumidity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidRelativeHumidity(void* ptr) noexcept : UnityEngine::InputSystem::HumiditySensor(ptr) {
}


  constexpr AndroidRelativeHumidity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidRelativeHumidity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidRelativeHumidity& operator=(AndroidRelativeHumidity&& o) noexcept = default;
  constexpr AndroidRelativeHumidity& operator=(AndroidRelativeHumidity const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::Android::AndroidRelativeHumidity New_ctor() ;

/// @brief Method .ctor addr 0x29530a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidRelativeHumidity);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidRelativeHumidity, "UnityEngine.InputSystem.Android", "AndroidRelativeHumidity");
