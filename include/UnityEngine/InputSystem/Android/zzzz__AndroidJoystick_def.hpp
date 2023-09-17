#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Joystick_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidJoystick;
}
// Type: UnityEngine.InputSystem.Android::AndroidJoystick
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6324))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6512))
// CS Name: UnityEngine.InputSystem.Android.AndroidJoystick
class CORDL_TYPE AndroidJoystick : public ::UnityEngine::InputSystem::Joystick {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~AndroidJoystick() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJoystick", modifiers: " const&", def_value: None }]
constexpr AndroidJoystick(AndroidJoystick const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJoystick", modifiers: "&&", def_value: None }]
constexpr AndroidJoystick(AndroidJoystick&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJoystick(void* ptr) noexcept : ::UnityEngine::InputSystem::Joystick(ptr) {
}


  constexpr AndroidJoystick& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJoystick& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJoystick& operator=(AndroidJoystick&& o) noexcept = default;
  constexpr AndroidJoystick& operator=(AndroidJoystick const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidJoystick() ;

/// @brief Method .ctor addr 0x2953040 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidJoystick);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidJoystick, "UnityEngine.InputSystem.Android", "AndroidJoystick");
