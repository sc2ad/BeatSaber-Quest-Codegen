#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
class Mouse;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class RectTransform;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct ____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode;
}
namespace UnityEngine::InputSystem::UI {
class VirtualMouseInput;
}
// Type: ::CursorMode
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6467))
// CS Name: UnityEngine.InputSystem.UI.VirtualMouseInput::CursorMode
struct CORDL_TYPE ____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode(____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode const&) = default;
                    constexpr ____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode(____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode&&) = default;
                    constexpr ____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode& operator=(____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode& operator=(____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode_Unwrapped : int32_t {
__SoftwareCursor = 0,
__HardwareCursorIfAvailable = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SoftwareCursor offset 0
static ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode const SoftwareCursor;

/// @brief Field HardwareCursorIfAvailable offset 0
static ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode const HardwareCursorIfAvailable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
// Type: UnityEngine.InputSystem.UI::VirtualMouseInput
namespace UnityEngine::InputSystem::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6468))
// CS Name: UnityEngine.InputSystem.UI.VirtualMouseInput
class CORDL_TYPE VirtualMouseInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CursorMode = ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~VirtualMouseInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "VirtualMouseInput", modifiers: " const&", def_value: None }]
constexpr VirtualMouseInput(VirtualMouseInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VirtualMouseInput", modifiers: "&&", def_value: None }]
constexpr VirtualMouseInput(VirtualMouseInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VirtualMouseInput(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr VirtualMouseInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VirtualMouseInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VirtualMouseInput& operator=(VirtualMouseInput&& o) noexcept = default;
  constexpr VirtualMouseInput& operator=(VirtualMouseInput const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode __declspec(property(get=__get_m_CursorMode, put=__set_m_CursorMode))  m_CursorMode;

constexpr void __set_m_CursorMode(::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode value) ;

constexpr ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode __get_m_CursorMode() const;

 ::UnityEngine::UI::Graphic __declspec(property(get=__get_m_CursorGraphic, put=__set_m_CursorGraphic))  m_CursorGraphic;

constexpr void __set_m_CursorGraphic(::UnityEngine::UI::Graphic value) ;

constexpr ::UnityEngine::UI::Graphic __get_m_CursorGraphic() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_CursorTransform, put=__set_m_CursorTransform))  m_CursorTransform;

constexpr void __set_m_CursorTransform(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_CursorTransform() const;

 float_t __declspec(property(get=__get_m_CursorSpeed, put=__set_m_CursorSpeed))  m_CursorSpeed;

constexpr void __set_m_CursorSpeed(float_t value) ;

constexpr float_t __get_m_CursorSpeed() const;

 float_t __declspec(property(get=__get_m_ScrollSpeed, put=__set_m_ScrollSpeed))  m_ScrollSpeed;

constexpr void __set_m_ScrollSpeed(float_t value) ;

constexpr float_t __get_m_ScrollSpeed() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_StickAction, put=__set_m_StickAction))  m_StickAction;

constexpr void __set_m_StickAction(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_StickAction() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_LeftButtonAction, put=__set_m_LeftButtonAction))  m_LeftButtonAction;

constexpr void __set_m_LeftButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_LeftButtonAction() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_MiddleButtonAction, put=__set_m_MiddleButtonAction))  m_MiddleButtonAction;

constexpr void __set_m_MiddleButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_MiddleButtonAction() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_RightButtonAction, put=__set_m_RightButtonAction))  m_RightButtonAction;

constexpr void __set_m_RightButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_RightButtonAction() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_ForwardButtonAction, put=__set_m_ForwardButtonAction))  m_ForwardButtonAction;

constexpr void __set_m_ForwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_ForwardButtonAction() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_BackButtonAction, put=__set_m_BackButtonAction))  m_BackButtonAction;

constexpr void __set_m_BackButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_BackButtonAction() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_ScrollWheelAction, put=__set_m_ScrollWheelAction))  m_ScrollWheelAction;

constexpr void __set_m_ScrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_ScrollWheelAction() const;

 ::UnityEngine::Canvas __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas))  m_Canvas;

constexpr void __set_m_Canvas(::UnityEngine::Canvas value) ;

constexpr ::UnityEngine::Canvas __get_m_Canvas() const;

 ::UnityEngine::InputSystem::Mouse __declspec(property(get=__get_m_VirtualMouse, put=__set_m_VirtualMouse))  m_VirtualMouse;

constexpr void __set_m_VirtualMouse(::UnityEngine::InputSystem::Mouse value) ;

constexpr ::UnityEngine::InputSystem::Mouse __get_m_VirtualMouse() const;

 ::UnityEngine::InputSystem::Mouse __declspec(property(get=__get_m_SystemMouse, put=__set_m_SystemMouse))  m_SystemMouse;

constexpr void __set_m_SystemMouse(::UnityEngine::InputSystem::Mouse value) ;

constexpr ::UnityEngine::InputSystem::Mouse __get_m_SystemMouse() const;

 ::System::Action __declspec(property(get=__get_m_AfterInputUpdateDelegate, put=__set_m_AfterInputUpdateDelegate))  m_AfterInputUpdateDelegate;

constexpr void __set_m_AfterInputUpdateDelegate(::System::Action value) ;

constexpr ::System::Action __get_m_AfterInputUpdateDelegate() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_ButtonActionTriggeredDelegate, put=__set_m_ButtonActionTriggeredDelegate))  m_ButtonActionTriggeredDelegate;

constexpr void __set_m_ButtonActionTriggeredDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_ButtonActionTriggeredDelegate() const;

 double_t __declspec(property(get=__get_m_LastTime, put=__set_m_LastTime))  m_LastTime;

constexpr void __set_m_LastTime(double_t value) ;

constexpr double_t __get_m_LastTime() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_LastStickValue, put=__set_m_LastStickValue))  m_LastStickValue;

constexpr void __set_m_LastStickValue(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_LastStickValue() const;


// Properties

 ::UnityEngine::RectTransform __declspec(property(get=get_cursorTransform, put=set_cursorTransform))  cursorTransform;

 float_t __declspec(property(get=get_cursorSpeed, put=set_cursorSpeed))  cursorSpeed;

 ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode __declspec(property(get=get_cursorMode, put=set_cursorMode))  cursorMode;

 ::UnityEngine::UI::Graphic __declspec(property(get=get_cursorGraphic, put=set_cursorGraphic))  cursorGraphic;

 float_t __declspec(property(get=get_scrollSpeed, put=set_scrollSpeed))  scrollSpeed;

 ::UnityEngine::InputSystem::Mouse __declspec(property(get=get_virtualMouse))  virtualMouse;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_stickAction, put=set_stickAction))  stickAction;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_leftButtonAction, put=set_leftButtonAction))  leftButtonAction;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_rightButtonAction, put=set_rightButtonAction))  rightButtonAction;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_middleButtonAction, put=set_middleButtonAction))  middleButtonAction;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_forwardButtonAction, put=set_forwardButtonAction))  forwardButtonAction;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_backButtonAction, put=set_backButtonAction))  backButtonAction;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_scrollWheelAction, put=set_scrollWheelAction))  scrollWheelAction;


// Methods

/// @brief Method get_cursorTransform addr 0x2943c44 size 0x8 virtual false final false
 ::UnityEngine::RectTransform get_cursorTransform() ;

/// @brief Method set_cursorTransform addr 0x2943c4c size 0x8 virtual false final false
 void set_cursorTransform(::UnityEngine::RectTransform value) ;

/// @brief Method get_cursorSpeed addr 0x2943c54 size 0x8 virtual false final false
 float_t get_cursorSpeed() ;

/// @brief Method set_cursorSpeed addr 0x2943c5c size 0x8 virtual false final false
 void set_cursorSpeed(float_t value) ;

/// @brief Method get_cursorMode addr 0x2943c64 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode get_cursorMode() ;

/// @brief Method set_cursorMode addr 0x2943c6c size 0xf8 virtual false final false
 void set_cursorMode(::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode value) ;

/// @brief Method get_cursorGraphic addr 0x2943f7c size 0x8 virtual false final false
 ::UnityEngine::UI::Graphic get_cursorGraphic() ;

/// @brief Method set_cursorGraphic addr 0x2943f84 size 0x8 virtual false final false
 void set_cursorGraphic(::UnityEngine::UI::Graphic value) ;

/// @brief Method get_scrollSpeed addr 0x2943fe0 size 0x8 virtual false final false
 float_t get_scrollSpeed() ;

/// @brief Method set_scrollSpeed addr 0x2943fe8 size 0x8 virtual false final false
 void set_scrollSpeed(float_t value) ;

/// @brief Method get_virtualMouse addr 0x2943ff0 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Mouse get_virtualMouse() ;

/// @brief Method get_stickAction addr 0x2943ff8 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_stickAction() ;

/// @brief Method set_stickAction addr 0x294400c size 0x30 virtual false final false
 void set_stickAction(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method get_leftButtonAction addr 0x2944164 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_leftButtonAction() ;

/// @brief Method set_leftButtonAction addr 0x2944178 size 0x90 virtual false final false
 void set_leftButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method get_rightButtonAction addr 0x2944278 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_rightButtonAction() ;

/// @brief Method set_rightButtonAction addr 0x294428c size 0x90 virtual false final false
 void set_rightButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method get_middleButtonAction addr 0x294431c size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_middleButtonAction() ;

/// @brief Method set_middleButtonAction addr 0x2944330 size 0x90 virtual false final false
 void set_middleButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method get_forwardButtonAction addr 0x29443c0 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_forwardButtonAction() ;

/// @brief Method set_forwardButtonAction addr 0x29443d4 size 0x90 virtual false final false
 void set_forwardButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method get_backButtonAction addr 0x2944464 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_backButtonAction() ;

/// @brief Method set_backButtonAction addr 0x2944478 size 0x90 virtual false final false
 void set_backButtonAction(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method get_scrollWheelAction addr 0x2944508 size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_scrollWheelAction() ;

/// @brief Method set_scrollWheelAction addr 0x294451c size 0x30 virtual false final false
 void set_scrollWheelAction(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method OnEnable addr 0x294454c size 0x40c virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2944958 size 0x23c virtual false final false
 void OnDisable() ;

/// @brief Method TryFindCanvas addr 0x2943f8c size 0x54 virtual false final false
 void TryFindCanvas() ;

/// @brief Method TryEnableHardwareCursor addr 0x2943d64 size 0x218 virtual false final false
 void TryEnableHardwareCursor() ;

/// @brief Method UpdateMotion addr 0x2944b94 size 0x3b8 virtual false final false
 void UpdateMotion() ;

/// @brief Method OnButtonActionTriggered addr 0x2944f4c size 0x1f4 virtual false final false
 void OnButtonActionTriggered(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method SetActionCallback addr 0x2944208 size 0x70 virtual false final false
static void SetActionCallback(::UnityEngine::InputSystem::InputActionProperty field, ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> callback, bool install) ;

/// @brief Method SetAction addr 0x294403c size 0x128 virtual false final false
static void SetAction(ByRef<::UnityEngine::InputSystem::InputActionProperty> field, ::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method OnAfterInputUpdate addr 0x2945140 size 0x4 virtual false final false
 void OnAfterInputUpdate() ;

// Ctor Parameters []
explicit VirtualMouseInput() ;

/// @brief Method .ctor addr 0x2945144 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::____UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode, "UnityEngine.InputSystem.UI", "VirtualMouseInput/CursorMode");
NEED_NO_BOX(::UnityEngine::InputSystem::UI::VirtualMouseInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::VirtualMouseInput, "UnityEngine.InputSystem.UI", "VirtualMouseInput");
