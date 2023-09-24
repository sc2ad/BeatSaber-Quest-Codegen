#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepad_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGamepadWithDpadButtons;
}
// Type: UnityEngine.InputSystem.Android::AndroidGamepadWithDpadButtons
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6509))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6511))
// CS Name: UnityEngine.InputSystem.Android.AndroidGamepadWithDpadButtons
class CORDL_TYPE AndroidGamepadWithDpadButtons : public UnityEngine::InputSystem::Android::AndroidGamepad {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d8};

virtual ~AndroidGamepadWithDpadButtons() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadButtons", modifiers: " const&", def_value: None }]
constexpr AndroidGamepadWithDpadButtons(AndroidGamepadWithDpadButtons const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadButtons", modifiers: "&&", def_value: None }]
constexpr AndroidGamepadWithDpadButtons(AndroidGamepadWithDpadButtons&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidGamepadWithDpadButtons(void* ptr) noexcept : UnityEngine::InputSystem::Android::AndroidGamepad(ptr) {
}


  constexpr AndroidGamepadWithDpadButtons& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidGamepadWithDpadButtons& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidGamepadWithDpadButtons& operator=(AndroidGamepadWithDpadButtons&& o) noexcept = default;
  constexpr AndroidGamepadWithDpadButtons& operator=(AndroidGamepadWithDpadButtons const& o) noexcept = default;
                


// Methods

static UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons New_ctor() ;

/// @brief Method .ctor addr 0x2953038 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidGamepadWithDpadButtons, "UnityEngine.InputSystem.Android", "AndroidGamepadWithDpadButtons");
