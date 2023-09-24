#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::UI {
struct UnityEngine__InputSystem__UI__PointerModel__ButtonState;
}
namespace UnityEngine::EventSystems {
struct UnityEngine__EventSystems__PointerEventData__FramePressState;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct PointerModel;
}
namespace UnityEngine::InputSystem::UI {
struct UnityEngine__InputSystem__UI__PointerModel__ButtonState;
}
// Type: ::ButtonState
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6462))
// CS Name: UnityEngine.InputSystem.UI.PointerModel::ButtonState
struct CORDL_TYPE UnityEngine__InputSystem__UI__PointerModel__ButtonState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_IsPressed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FramePressState", ty: "UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState", modifiers: "", def_value: None }, CppParam { name: "m_PressTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_PressRaycast", ty: "UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None }, CppParam { name: "m_PressObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "m_RawPressObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "m_LastPressObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "m_DragObject", ty: "UnityEngine::GameObject", modifiers: "", def_value: None }, CppParam { name: "m_PressPosition", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_ClickTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ClickCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Dragging", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ClickedOnSameGameObject", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_IgnoreNextClick", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__UI__PointerModel__ButtonState(bool m_IsPressed, UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState m_FramePressState, float_t m_PressTime, UnityEngine::EventSystems::RaycastResult m_PressRaycast, UnityEngine::GameObject m_PressObject, UnityEngine::GameObject m_RawPressObject, UnityEngine::GameObject m_LastPressObject, UnityEngine::GameObject m_DragObject, UnityEngine::Vector2 m_PressPosition, float_t m_ClickTime, int32_t m_ClickCount, bool m_Dragging, bool m_ClickedOnSameGameObject, bool m_IgnoreNextClick) noexcept;


                    constexpr UnityEngine__InputSystem__UI__PointerModel__ButtonState(UnityEngine__InputSystem__UI__PointerModel__ButtonState const&) = default;
                    constexpr UnityEngine__InputSystem__UI__PointerModel__ButtonState(UnityEngine__InputSystem__UI__PointerModel__ButtonState&&) = default;
                    constexpr UnityEngine__InputSystem__UI__PointerModel__ButtonState& operator=(UnityEngine__InputSystem__UI__PointerModel__ButtonState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__UI__PointerModel__ButtonState& operator=(UnityEngine__InputSystem__UI__PointerModel__ButtonState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__UI__PointerModel__ButtonState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_m_IsPressed, put=__set_m_IsPressed))  m_IsPressed;

constexpr void __set_m_IsPressed(bool value) ;

constexpr bool __get_m_IsPressed() const;

 UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState __declspec(property(get=__get_m_FramePressState, put=__set_m_FramePressState))  m_FramePressState;

constexpr void __set_m_FramePressState(UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState value) ;

constexpr UnityEngine::EventSystems::UnityEngine__EventSystems__PointerEventData__FramePressState __get_m_FramePressState() const;

 float_t __declspec(property(get=__get_m_PressTime, put=__set_m_PressTime))  m_PressTime;

constexpr void __set_m_PressTime(float_t value) ;

constexpr float_t __get_m_PressTime() const;

 UnityEngine::EventSystems::RaycastResult __declspec(property(get=__get_m_PressRaycast, put=__set_m_PressRaycast))  m_PressRaycast;

constexpr void __set_m_PressRaycast(UnityEngine::EventSystems::RaycastResult value) ;

constexpr UnityEngine::EventSystems::RaycastResult __get_m_PressRaycast() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_PressObject, put=__set_m_PressObject))  m_PressObject;

constexpr void __set_m_PressObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_PressObject() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_RawPressObject, put=__set_m_RawPressObject))  m_RawPressObject;

constexpr void __set_m_RawPressObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_RawPressObject() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_LastPressObject, put=__set_m_LastPressObject))  m_LastPressObject;

constexpr void __set_m_LastPressObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_LastPressObject() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_DragObject, put=__set_m_DragObject))  m_DragObject;

constexpr void __set_m_DragObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_DragObject() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_PressPosition, put=__set_m_PressPosition))  m_PressPosition;

constexpr void __set_m_PressPosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_PressPosition() const;

 float_t __declspec(property(get=__get_m_ClickTime, put=__set_m_ClickTime))  m_ClickTime;

constexpr void __set_m_ClickTime(float_t value) ;

constexpr float_t __get_m_ClickTime() const;

 int32_t __declspec(property(get=__get_m_ClickCount, put=__set_m_ClickCount))  m_ClickCount;

constexpr void __set_m_ClickCount(int32_t value) ;

constexpr int32_t __get_m_ClickCount() const;

 bool __declspec(property(get=__get_m_Dragging, put=__set_m_Dragging))  m_Dragging;

constexpr void __set_m_Dragging(bool value) ;

constexpr bool __get_m_Dragging() const;

 bool __declspec(property(get=__get_m_ClickedOnSameGameObject, put=__set_m_ClickedOnSameGameObject))  m_ClickedOnSameGameObject;

constexpr void __set_m_ClickedOnSameGameObject(bool value) ;

constexpr bool __get_m_ClickedOnSameGameObject() const;

 bool __declspec(property(get=__get_m_IgnoreNextClick, put=__set_m_IgnoreNextClick))  m_IgnoreNextClick;

constexpr void __set_m_IgnoreNextClick(bool value) ;

constexpr bool __get_m_IgnoreNextClick() const;


// Properties

 bool __declspec(property(get=get_isPressed, put=set_isPressed))  isPressed;

 bool __declspec(property(get=get_ignoreNextClick, put=set_ignoreNextClick))  ignoreNextClick;

 float_t __declspec(property(get=get_pressTime, put=set_pressTime))  pressTime;

 bool __declspec(property(get=get_clickedOnSameGameObject, put=set_clickedOnSameGameObject))  clickedOnSameGameObject;

 bool __declspec(property(get=get_wasPressedThisFrame))  wasPressedThisFrame;

 bool __declspec(property(get=get_wasReleasedThisFrame))  wasReleasedThisFrame;


// Methods

/// @brief Method get_isPressed addr 0x2942f1c size 0x8 virtual false final false
 bool get_isPressed() ;

/// @brief Method set_isPressed addr 0x2942080 size 0x54 virtual false final false
 void set_isPressed(bool value) ;

/// @brief Method get_ignoreNextClick addr 0x2942f24 size 0x8 virtual false final false
 bool get_ignoreNextClick() ;

/// @brief Method set_ignoreNextClick addr 0x2942f2c size 0xc virtual false final false
 void set_ignoreNextClick(bool value) ;

/// @brief Method get_pressTime addr 0x2942f38 size 0x8 virtual false final false
 float_t get_pressTime() ;

/// @brief Method set_pressTime addr 0x2942f40 size 0x8 virtual false final false
 void set_pressTime(float_t value) ;

/// @brief Method get_clickedOnSameGameObject addr 0x2942f48 size 0x8 virtual false final false
 bool get_clickedOnSameGameObject() ;

/// @brief Method set_clickedOnSameGameObject addr 0x2942f50 size 0xc virtual false final false
 void set_clickedOnSameGameObject(bool value) ;

/// @brief Method get_wasPressedThisFrame addr 0x293ee04 size 0x10 virtual false final false
 bool get_wasPressedThisFrame() ;

/// @brief Method get_wasReleasedThisFrame addr 0x293e75c size 0x14 virtual false final false
 bool get_wasReleasedThisFrame() ;

/// @brief Method CopyPressStateTo addr 0x293d8d4 size 0xa0 virtual false final false
 void CopyPressStateTo(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method CopyPressStateFrom addr 0x293ee14 size 0x68 virtual false final false
 void CopyPressStateFrom(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnEndFrame addr 0x2942f10 size 0xc virtual false final false
 void OnEndFrame() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
// Type: UnityEngine.InputSystem.UI::PointerModel
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6463))
// CS Name: UnityEngine.InputSystem.UI.PointerModel
struct CORDL_TYPE PointerModel : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using ButtonState = UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState;

// Ctor Parameters [CppParam { name: "changedThisFrame", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "leftButton", ty: "UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState", modifiers: "", def_value: None }, CppParam { name: "rightButton", ty: "UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState", modifiers: "", def_value: None }, CppParam { name: "middleButton", ty: "UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState", modifiers: "", def_value: None }, CppParam { name: "eventData", ty: "UnityEngine::InputSystem::UI::ExtendedPointerEventData", modifiers: "", def_value: None }, CppParam { name: "m_ScreenPosition", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_ScrollDelta", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_WorldPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_WorldOrientation", ty: "UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Twist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Radius", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr PointerModel(bool changedThisFrame, UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState leftButton, UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState rightButton, UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState middleButton, UnityEngine::InputSystem::UI::ExtendedPointerEventData eventData, UnityEngine::Vector2 m_ScreenPosition, UnityEngine::Vector2 m_ScrollDelta, UnityEngine::Vector3 m_WorldPosition, UnityEngine::Quaternion m_WorldOrientation, float_t m_Pressure, float_t m_AzimuthAngle, float_t m_AltitudeAngle, float_t m_Twist, UnityEngine::Vector2 m_Radius) noexcept;


                    constexpr PointerModel(PointerModel const&) = default;
                    constexpr PointerModel(PointerModel&&) = default;
                    constexpr PointerModel& operator=(PointerModel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PointerModel& operator=(PointerModel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x208};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PointerModel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_changedThisFrame, put=__set_changedThisFrame))  changedThisFrame;

constexpr void __set_changedThisFrame(bool value) ;

constexpr bool __get_changedThisFrame() const;

 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState __declspec(property(get=__get_leftButton, put=__set_leftButton))  leftButton;

constexpr void __set_leftButton(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState value) ;

constexpr UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState __get_leftButton() const;

 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState __declspec(property(get=__get_rightButton, put=__set_rightButton))  rightButton;

constexpr void __set_rightButton(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState value) ;

constexpr UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState __get_rightButton() const;

 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState __declspec(property(get=__get_middleButton, put=__set_middleButton))  middleButton;

constexpr void __set_middleButton(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState value) ;

constexpr UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState __get_middleButton() const;

 UnityEngine::InputSystem::UI::ExtendedPointerEventData __declspec(property(get=__get_eventData, put=__set_eventData))  eventData;

constexpr void __set_eventData(UnityEngine::InputSystem::UI::ExtendedPointerEventData value) ;

constexpr UnityEngine::InputSystem::UI::ExtendedPointerEventData __get_eventData() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_ScreenPosition, put=__set_m_ScreenPosition))  m_ScreenPosition;

constexpr void __set_m_ScreenPosition(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_ScreenPosition() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_ScrollDelta, put=__set_m_ScrollDelta))  m_ScrollDelta;

constexpr void __set_m_ScrollDelta(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_ScrollDelta() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_WorldPosition, put=__set_m_WorldPosition))  m_WorldPosition;

constexpr void __set_m_WorldPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_WorldPosition() const;

 UnityEngine::Quaternion __declspec(property(get=__get_m_WorldOrientation, put=__set_m_WorldOrientation))  m_WorldOrientation;

constexpr void __set_m_WorldOrientation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_WorldOrientation() const;

 float_t __declspec(property(get=__get_m_Pressure, put=__set_m_Pressure))  m_Pressure;

constexpr void __set_m_Pressure(float_t value) ;

constexpr float_t __get_m_Pressure() const;

 float_t __declspec(property(get=__get_m_AzimuthAngle, put=__set_m_AzimuthAngle))  m_AzimuthAngle;

constexpr void __set_m_AzimuthAngle(float_t value) ;

constexpr float_t __get_m_AzimuthAngle() const;

 float_t __declspec(property(get=__get_m_AltitudeAngle, put=__set_m_AltitudeAngle))  m_AltitudeAngle;

constexpr void __set_m_AltitudeAngle(float_t value) ;

constexpr float_t __get_m_AltitudeAngle() const;

 float_t __declspec(property(get=__get_m_Twist, put=__set_m_Twist))  m_Twist;

constexpr void __set_m_Twist(float_t value) ;

constexpr float_t __get_m_Twist() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_Radius, put=__set_m_Radius))  m_Radius;

constexpr void __set_m_Radius(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Radius() const;


// Properties

 UnityEngine::InputSystem::UI::UIPointerType __declspec(property(get=get_pointerType))  pointerType;

 UnityEngine::Vector2 __declspec(property(get=get_screenPosition, put=set_screenPosition))  screenPosition;

 UnityEngine::Vector3 __declspec(property(get=get_worldPosition, put=set_worldPosition))  worldPosition;

 UnityEngine::Quaternion __declspec(property(get=get_worldOrientation, put=set_worldOrientation))  worldOrientation;

 UnityEngine::Vector2 __declspec(property(get=get_scrollDelta, put=set_scrollDelta))  scrollDelta;

 float_t __declspec(property(get=get_pressure, put=set_pressure))  pressure;

 float_t __declspec(property(get=get_azimuthAngle, put=set_azimuthAngle))  azimuthAngle;

 float_t __declspec(property(get=get_altitudeAngle, put=set_altitudeAngle))  altitudeAngle;

 float_t __declspec(property(get=get_twist, put=set_twist))  twist;

 UnityEngine::Vector2 __declspec(property(get=get_radius, put=set_radius))  radius;


// Methods

/// @brief Method get_pointerType addr 0x293d9c0 size 0x1c virtual false final false
 UnityEngine::InputSystem::UI::UIPointerType get_pointerType() ;

/// @brief Method get_screenPosition addr 0x2942df8 size 0xc virtual false final false
 UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method set_screenPosition addr 0x2941a48 size 0x40 virtual false final false
 void set_screenPosition(UnityEngine::Vector2 value) ;

/// @brief Method get_worldPosition addr 0x2942e04 size 0x10 virtual false final false
 UnityEngine::Vector3 get_worldPosition() ;

/// @brief Method set_worldPosition addr 0x294249c size 0x54 virtual false final false
 void set_worldPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_worldOrientation addr 0x2942e14 size 0x14 virtual false final false
 UnityEngine::Quaternion get_worldOrientation() ;

/// @brief Method set_worldOrientation addr 0x29423c0 size 0x58 virtual false final false
 void set_worldOrientation(UnityEngine::Quaternion value) ;

/// @brief Method get_scrollDelta addr 0x2942e28 size 0xc virtual false final false
 UnityEngine::Vector2 get_scrollDelta() ;

/// @brief Method set_scrollDelta addr 0x294229c size 0x40 virtual false final false
 void set_scrollDelta(UnityEngine::Vector2 value) ;

/// @brief Method get_pressure addr 0x2942e34 size 0x8 virtual false final false
 float_t get_pressure() ;

/// @brief Method set_pressure addr 0x2942e3c size 0x1c virtual false final false
 void set_pressure(float_t value) ;

/// @brief Method get_azimuthAngle addr 0x2942e58 size 0x8 virtual false final false
 float_t get_azimuthAngle() ;

/// @brief Method set_azimuthAngle addr 0x2942e60 size 0x1c virtual false final false
 void set_azimuthAngle(float_t value) ;

/// @brief Method get_altitudeAngle addr 0x2942e7c size 0x8 virtual false final false
 float_t get_altitudeAngle() ;

/// @brief Method set_altitudeAngle addr 0x2942e84 size 0x1c virtual false final false
 void set_altitudeAngle(float_t value) ;

/// @brief Method get_twist addr 0x2942ea0 size 0x8 virtual false final false
 float_t get_twist() ;

/// @brief Method set_twist addr 0x2942ea8 size 0x1c virtual false final false
 void set_twist(float_t value) ;

/// @brief Method get_radius addr 0x2942ec4 size 0xc virtual false final false
 UnityEngine::Vector2 get_radius() ;

/// @brief Method set_radius addr 0x2942ed0 size 0x40 virtual false final false
 void set_radius(UnityEngine::Vector2 value) ;

/// @brief Method .ctor addr 0x2941a88 size 0x6c virtual false final false
 void _ctor(UnityEngine::InputSystem::UI::ExtendedPointerEventData eventData) ;

/// @brief Method OnFrameFinished addr 0x29426a8 size 0x48 virtual false final false
 void OnFrameFinished() ;

/// @brief Method CopyTouchOrPenStateFrom addr 0x29426f0 size 0xc8 virtual false final false
 void CopyTouchOrPenStateFrom(UnityEngine::EventSystems::PointerEventData eventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UI::PointerModel, "UnityEngine.InputSystem.UI", "PointerModel");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__PointerModel__ButtonState, "UnityEngine.InputSystem.UI", "PointerModel/ButtonState");
