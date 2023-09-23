#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/DualShock/zzzz__DualShockGamepad_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class DualShock4GamepadAndroid;
}
// Type: UnityEngine.InputSystem.Android::DualShock4GamepadAndroid
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6506))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6513))
// CS Name: UnityEngine.InputSystem.Android.DualShock4GamepadAndroid
class CORDL_TYPE DualShock4GamepadAndroid : public UnityEngine::InputSystem::DualShock::DualShockGamepad {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x220};

virtual ~DualShock4GamepadAndroid() = default;

// Ctor Parameters [CppParam { name: "", ty: "DualShock4GamepadAndroid", modifiers: " const&", def_value: None }]
constexpr DualShock4GamepadAndroid(DualShock4GamepadAndroid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DualShock4GamepadAndroid", modifiers: "&&", def_value: None }]
constexpr DualShock4GamepadAndroid(DualShock4GamepadAndroid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DualShock4GamepadAndroid(void* ptr) noexcept : UnityEngine::InputSystem::DualShock::DualShockGamepad(ptr) {
}


  constexpr DualShock4GamepadAndroid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DualShock4GamepadAndroid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DualShock4GamepadAndroid& operator=(DualShock4GamepadAndroid&& o) noexcept = default;
  constexpr DualShock4GamepadAndroid& operator=(DualShock4GamepadAndroid const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DualShock4GamepadAndroid() ;

/// @brief Method .ctor addr 0x2953048 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::DualShock4GamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::DualShock4GamepadAndroid, "UnityEngine.InputSystem.Android", "DualShock4GamepadAndroid");
