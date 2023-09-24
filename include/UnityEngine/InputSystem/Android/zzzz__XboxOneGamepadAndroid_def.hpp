#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class XboxOneGamepadAndroid;
}
// Type: UnityEngine.InputSystem.Android::XboxOneGamepadAndroid
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6438))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6514))
// CS Name: UnityEngine.InputSystem.Android.XboxOneGamepadAndroid
class CORDL_TYPE XboxOneGamepadAndroid : public UnityEngine::InputSystem::XInput::XInputController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1f8};

virtual ~XboxOneGamepadAndroid() = default;

// Ctor Parameters [CppParam { name: "", ty: "XboxOneGamepadAndroid", modifiers: " const&", def_value: None }]
constexpr XboxOneGamepadAndroid(XboxOneGamepadAndroid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XboxOneGamepadAndroid", modifiers: "&&", def_value: None }]
constexpr XboxOneGamepadAndroid(XboxOneGamepadAndroid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XboxOneGamepadAndroid(void* ptr) noexcept : UnityEngine::InputSystem::XInput::XInputController(ptr) {
}


  constexpr XboxOneGamepadAndroid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XboxOneGamepadAndroid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XboxOneGamepadAndroid& operator=(XboxOneGamepadAndroid&& o) noexcept = default;
  constexpr XboxOneGamepadAndroid& operator=(XboxOneGamepadAndroid const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::Android::XboxOneGamepadAndroid New_ctor() ;

/// @brief Method .ctor addr 0x2953050 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::XboxOneGamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::XboxOneGamepadAndroid, "UnityEngine.InputSystem.Android", "XboxOneGamepadAndroid");
