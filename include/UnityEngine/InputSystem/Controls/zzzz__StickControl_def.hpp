#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class StickControl;
}
// Type: UnityEngine.InputSystem.Controls::StickControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6727))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6723))
// CS Name: UnityEngine.InputSystem.Controls.StickControl
class CORDL_TYPE StickControl : public ::UnityEngine::InputSystem::Controls::Vector2Control {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~StickControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "StickControl", modifiers: " const&", def_value: None }]
constexpr StickControl(StickControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StickControl", modifiers: "&&", def_value: None }]
constexpr StickControl(StickControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StickControl(void* ptr) noexcept : ::UnityEngine::InputSystem::Controls::Vector2Control(ptr) {
}


  constexpr StickControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StickControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StickControl& operator=(StickControl&& o) noexcept = default;
  constexpr StickControl& operator=(StickControl const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__up_k__BackingField, put=__set__up_k__BackingField))  _up_k__BackingField;

constexpr void __set__up_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__up_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__down_k__BackingField, put=__set__down_k__BackingField))  _down_k__BackingField;

constexpr void __set__down_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__down_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__left_k__BackingField, put=__set__left_k__BackingField))  _left_k__BackingField;

constexpr void __set__left_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__left_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__right_k__BackingField, put=__set__right_k__BackingField))  _right_k__BackingField;

constexpr void __set__right_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__right_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_up, put=set_up))  up;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_down, put=set_down))  down;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_left, put=set_left))  left;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_right, put=set_right))  right;


// Methods

/// @brief Method get_up addr 0x2978c1c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_up() ;

/// @brief Method set_up addr 0x2978c24 size 0x8 virtual false final false
 void set_up(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_down addr 0x2978c2c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_down() ;

/// @brief Method set_down addr 0x2978c34 size 0x8 virtual false final false
 void set_down(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_left addr 0x2978c3c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_left() ;

/// @brief Method set_left addr 0x2978c44 size 0x8 virtual false final false
 void set_left(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_right addr 0x2978c4c size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_right() ;

/// @brief Method set_right addr 0x2978c54 size 0x8 virtual false final false
 void set_right(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method FinishSetup addr 0x2978c5c size 0xf8 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit StickControl() ;

/// @brief Method .ctor addr 0x2978d54 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::StickControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::StickControl, "UnityEngine.InputSystem.Controls", "StickControl");
