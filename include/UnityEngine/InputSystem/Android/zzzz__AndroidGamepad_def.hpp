#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGamepad;
}
// Type: UnityEngine.InputSystem.Android::AndroidGamepad
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6320))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6509))
// CS Name: UnityEngine.InputSystem.Android.AndroidGamepad
class CORDL_TYPE AndroidGamepad : public ::UnityEngine::InputSystem::Gamepad {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d8};

virtual ~AndroidGamepad() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGamepad", modifiers: " const&", def_value: None }]
constexpr AndroidGamepad(AndroidGamepad const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGamepad", modifiers: "&&", def_value: None }]
constexpr AndroidGamepad(AndroidGamepad&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidGamepad(void* ptr) noexcept : ::UnityEngine::InputSystem::Gamepad(ptr) {
}


  constexpr AndroidGamepad& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidGamepad& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidGamepad& operator=(AndroidGamepad&& o) noexcept = default;
  constexpr AndroidGamepad& operator=(AndroidGamepad const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidGamepad() ;

/// @brief Method .ctor addr 0x2953028 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidGamepad);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidGamepad, "UnityEngine.InputSystem.Android", "AndroidGamepad");
