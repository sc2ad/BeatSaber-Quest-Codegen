#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidGamepad_def.hpp"
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidGamepadWithDpadAxes;
}
// Type: UnityEngine.InputSystem.Android::AndroidGamepadWithDpadAxes
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6509))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6510))
// CS Name: UnityEngine.InputSystem.Android.AndroidGamepadWithDpadAxes
class CORDL_TYPE AndroidGamepadWithDpadAxes : public UnityEngine::InputSystem::Android::AndroidGamepad {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1d8};

virtual ~AndroidGamepadWithDpadAxes() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadAxes", modifiers: " const&", def_value: None }]
constexpr AndroidGamepadWithDpadAxes(AndroidGamepadWithDpadAxes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidGamepadWithDpadAxes", modifiers: "&&", def_value: None }]
constexpr AndroidGamepadWithDpadAxes(AndroidGamepadWithDpadAxes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidGamepadWithDpadAxes(void* ptr) noexcept : UnityEngine::InputSystem::Android::AndroidGamepad(ptr) {
}


  constexpr AndroidGamepadWithDpadAxes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidGamepadWithDpadAxes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidGamepadWithDpadAxes& operator=(AndroidGamepadWithDpadAxes&& o) noexcept = default;
  constexpr AndroidGamepadWithDpadAxes& operator=(AndroidGamepadWithDpadAxes const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AndroidGamepadWithDpadAxes() ;

/// @brief Method .ctor addr 0x2953030 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::AndroidGamepadWithDpadAxes, "UnityEngine.InputSystem.Android", "AndroidGamepadWithDpadAxes");
