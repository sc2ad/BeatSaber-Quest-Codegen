#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct ____UnityEngine__EventSystems__PointerEventData__FramePressState;
}
namespace UnityEngine::EventSystems {
struct ____UnityEngine__EventSystems__PointerEventData__InputButton;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Type: ::InputButton
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13105))
// CS Name: UnityEngine.EventSystems.PointerEventData::InputButton
struct CORDL_TYPE ____UnityEngine__EventSystems__PointerEventData__InputButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__EventSystems__PointerEventData__InputButton(int32_t value__) noexcept;


                    constexpr ____UnityEngine__EventSystems__PointerEventData__InputButton(____UnityEngine__EventSystems__PointerEventData__InputButton const&) = default;
                    constexpr ____UnityEngine__EventSystems__PointerEventData__InputButton(____UnityEngine__EventSystems__PointerEventData__InputButton&&) = default;
                    constexpr ____UnityEngine__EventSystems__PointerEventData__InputButton& operator=(____UnityEngine__EventSystems__PointerEventData__InputButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__EventSystems__PointerEventData__InputButton& operator=(____UnityEngine__EventSystems__PointerEventData__InputButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__EventSystems__PointerEventData__InputButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__EventSystems__PointerEventData__InputButton_Unwrapped : int32_t {
__Left = 0,
__Right = 1,
__Middle = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__EventSystems__PointerEventData__InputButton_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__EventSystems__PointerEventData__InputButton_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton const Left;

/// @brief Field Right offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton const Right;

/// @brief Field Middle offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton const Middle;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: ::FramePressState
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13106))
// CS Name: UnityEngine.EventSystems.PointerEventData::FramePressState
struct CORDL_TYPE ____UnityEngine__EventSystems__PointerEventData__FramePressState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__EventSystems__PointerEventData__FramePressState(int32_t value__) noexcept;


                    constexpr ____UnityEngine__EventSystems__PointerEventData__FramePressState(____UnityEngine__EventSystems__PointerEventData__FramePressState const&) = default;
                    constexpr ____UnityEngine__EventSystems__PointerEventData__FramePressState(____UnityEngine__EventSystems__PointerEventData__FramePressState&&) = default;
                    constexpr ____UnityEngine__EventSystems__PointerEventData__FramePressState& operator=(____UnityEngine__EventSystems__PointerEventData__FramePressState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__EventSystems__PointerEventData__FramePressState& operator=(____UnityEngine__EventSystems__PointerEventData__FramePressState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__EventSystems__PointerEventData__FramePressState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__EventSystems__PointerEventData__FramePressState_Unwrapped : int32_t {
__Pressed = 0,
__Released = 1,
__PressedAndReleased = 2,
__NotChanged = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__EventSystems__PointerEventData__FramePressState_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__EventSystems__PointerEventData__FramePressState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Pressed offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState const Pressed;

/// @brief Field Released offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState const Released;

/// @brief Field PressedAndReleased offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState const PressedAndReleased;

/// @brief Field NotChanged offset 0
static ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState const NotChanged;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::PointerEventData
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13104))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13107))
// CS Name: UnityEngine.EventSystems.PointerEventData
class CORDL_TYPE PointerEventData : public ::UnityEngine::EventSystems::BaseEventData {
public:
// Declarations
using FramePressState = ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState;

using InputButton = ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~PointerEventData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventData", modifiers: " const&", def_value: None }]
constexpr PointerEventData(PointerEventData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventData", modifiers: "&&", def_value: None }]
constexpr PointerEventData(PointerEventData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerEventData(void* ptr) noexcept : ::UnityEngine::EventSystems::BaseEventData(ptr) {
}


  constexpr PointerEventData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerEventData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerEventData& operator=(PointerEventData&& o) noexcept = default;
  constexpr PointerEventData& operator=(PointerEventData const& o) noexcept = default;
                


// Fields

 ::UnityEngine::GameObject __declspec(property(get=__get__pointerEnter_k__BackingField, put=__set__pointerEnter_k__BackingField))  _pointerEnter_k__BackingField;

constexpr void __set__pointerEnter_k__BackingField(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__pointerEnter_k__BackingField() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_m_PointerPress, put=__set_m_PointerPress))  m_PointerPress;

constexpr void __set_m_PointerPress(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_PointerPress() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__lastPress_k__BackingField, put=__set__lastPress_k__BackingField))  _lastPress_k__BackingField;

constexpr void __set__lastPress_k__BackingField(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__lastPress_k__BackingField() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__rawPointerPress_k__BackingField, put=__set__rawPointerPress_k__BackingField))  _rawPointerPress_k__BackingField;

constexpr void __set__rawPointerPress_k__BackingField(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__rawPointerPress_k__BackingField() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__pointerDrag_k__BackingField, put=__set__pointerDrag_k__BackingField))  _pointerDrag_k__BackingField;

constexpr void __set__pointerDrag_k__BackingField(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__pointerDrag_k__BackingField() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__pointerClick_k__BackingField, put=__set__pointerClick_k__BackingField))  _pointerClick_k__BackingField;

constexpr void __set__pointerClick_k__BackingField(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__pointerClick_k__BackingField() const;

 ::UnityEngine::EventSystems::RaycastResult __declspec(property(get=__get__pointerCurrentRaycast_k__BackingField, put=__set__pointerCurrentRaycast_k__BackingField))  _pointerCurrentRaycast_k__BackingField;

constexpr void __set__pointerCurrentRaycast_k__BackingField(::UnityEngine::EventSystems::RaycastResult value) ;

constexpr ::UnityEngine::EventSystems::RaycastResult __get__pointerCurrentRaycast_k__BackingField() const;

 ::UnityEngine::EventSystems::RaycastResult __declspec(property(get=__get__pointerPressRaycast_k__BackingField, put=__set__pointerPressRaycast_k__BackingField))  _pointerPressRaycast_k__BackingField;

constexpr void __set__pointerPressRaycast_k__BackingField(::UnityEngine::EventSystems::RaycastResult value) ;

constexpr ::UnityEngine::EventSystems::RaycastResult __get__pointerPressRaycast_k__BackingField() const;

 ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __declspec(property(get=__get_hovered, put=__set_hovered))  hovered;

constexpr void __set_hovered(::System::Collections::Generic::List_1<::UnityEngine::GameObject> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __get_hovered() const;

 bool __declspec(property(get=__get__eligibleForClick_k__BackingField, put=__set__eligibleForClick_k__BackingField))  _eligibleForClick_k__BackingField;

constexpr void __set__eligibleForClick_k__BackingField(bool value) ;

constexpr bool __get__eligibleForClick_k__BackingField() const;

 int32_t __declspec(property(get=__get__pointerId_k__BackingField, put=__set__pointerId_k__BackingField))  _pointerId_k__BackingField;

constexpr void __set__pointerId_k__BackingField(int32_t value) ;

constexpr int32_t __get__pointerId_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__position_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__delta_k__BackingField, put=__set__delta_k__BackingField))  _delta_k__BackingField;

constexpr void __set__delta_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__delta_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__pressPosition_k__BackingField, put=__set__pressPosition_k__BackingField))  _pressPosition_k__BackingField;

constexpr void __set__pressPosition_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__pressPosition_k__BackingField() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__worldPosition_k__BackingField, put=__set__worldPosition_k__BackingField))  _worldPosition_k__BackingField;

constexpr void __set__worldPosition_k__BackingField(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__worldPosition_k__BackingField() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__worldNormal_k__BackingField, put=__set__worldNormal_k__BackingField))  _worldNormal_k__BackingField;

constexpr void __set__worldNormal_k__BackingField(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__worldNormal_k__BackingField() const;

 float_t __declspec(property(get=__get__clickTime_k__BackingField, put=__set__clickTime_k__BackingField))  _clickTime_k__BackingField;

constexpr void __set__clickTime_k__BackingField(float_t value) ;

constexpr float_t __get__clickTime_k__BackingField() const;

 int32_t __declspec(property(get=__get__clickCount_k__BackingField, put=__set__clickCount_k__BackingField))  _clickCount_k__BackingField;

constexpr void __set__clickCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__clickCount_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__scrollDelta_k__BackingField, put=__set__scrollDelta_k__BackingField))  _scrollDelta_k__BackingField;

constexpr void __set__scrollDelta_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__scrollDelta_k__BackingField() const;

 bool __declspec(property(get=__get__useDragThreshold_k__BackingField, put=__set__useDragThreshold_k__BackingField))  _useDragThreshold_k__BackingField;

constexpr void __set__useDragThreshold_k__BackingField(bool value) ;

constexpr bool __get__useDragThreshold_k__BackingField() const;

 bool __declspec(property(get=__get__dragging_k__BackingField, put=__set__dragging_k__BackingField))  _dragging_k__BackingField;

constexpr void __set__dragging_k__BackingField(bool value) ;

constexpr bool __get__dragging_k__BackingField() const;

 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton __declspec(property(get=__get__button_k__BackingField, put=__set__button_k__BackingField))  _button_k__BackingField;

constexpr void __set__button_k__BackingField(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton value) ;

constexpr ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton __get__button_k__BackingField() const;

 float_t __declspec(property(get=__get__pressure_k__BackingField, put=__set__pressure_k__BackingField))  _pressure_k__BackingField;

constexpr void __set__pressure_k__BackingField(float_t value) ;

constexpr float_t __get__pressure_k__BackingField() const;

 float_t __declspec(property(get=__get__tangentialPressure_k__BackingField, put=__set__tangentialPressure_k__BackingField))  _tangentialPressure_k__BackingField;

constexpr void __set__tangentialPressure_k__BackingField(float_t value) ;

constexpr float_t __get__tangentialPressure_k__BackingField() const;

 float_t __declspec(property(get=__get__altitudeAngle_k__BackingField, put=__set__altitudeAngle_k__BackingField))  _altitudeAngle_k__BackingField;

constexpr void __set__altitudeAngle_k__BackingField(float_t value) ;

constexpr float_t __get__altitudeAngle_k__BackingField() const;

 float_t __declspec(property(get=__get__azimuthAngle_k__BackingField, put=__set__azimuthAngle_k__BackingField))  _azimuthAngle_k__BackingField;

constexpr void __set__azimuthAngle_k__BackingField(float_t value) ;

constexpr float_t __get__azimuthAngle_k__BackingField() const;

 float_t __declspec(property(get=__get__twist_k__BackingField, put=__set__twist_k__BackingField))  _twist_k__BackingField;

constexpr void __set__twist_k__BackingField(float_t value) ;

constexpr float_t __get__twist_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__radius_k__BackingField, put=__set__radius_k__BackingField))  _radius_k__BackingField;

constexpr void __set__radius_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__radius_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__radiusVariance_k__BackingField, put=__set__radiusVariance_k__BackingField))  _radiusVariance_k__BackingField;

constexpr void __set__radiusVariance_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__radiusVariance_k__BackingField() const;

 bool __declspec(property(get=__get__fullyExited_k__BackingField, put=__set__fullyExited_k__BackingField))  _fullyExited_k__BackingField;

constexpr void __set__fullyExited_k__BackingField(bool value) ;

constexpr bool __get__fullyExited_k__BackingField() const;

 bool __declspec(property(get=__get__reentered_k__BackingField, put=__set__reentered_k__BackingField))  _reentered_k__BackingField;

constexpr void __set__reentered_k__BackingField(bool value) ;

constexpr bool __get__reentered_k__BackingField() const;


// Properties

 ::UnityEngine::GameObject __declspec(property(get=get_pointerEnter, put=set_pointerEnter))  pointerEnter;

 ::UnityEngine::GameObject __declspec(property(get=get_lastPress, put=set_lastPress))  lastPress;

 ::UnityEngine::GameObject __declspec(property(get=get_rawPointerPress, put=set_rawPointerPress))  rawPointerPress;

 ::UnityEngine::GameObject __declspec(property(get=get_pointerDrag, put=set_pointerDrag))  pointerDrag;

 ::UnityEngine::GameObject __declspec(property(get=get_pointerClick, put=set_pointerClick))  pointerClick;

 ::UnityEngine::EventSystems::RaycastResult __declspec(property(get=get_pointerCurrentRaycast, put=set_pointerCurrentRaycast))  pointerCurrentRaycast;

 ::UnityEngine::EventSystems::RaycastResult __declspec(property(get=get_pointerPressRaycast, put=set_pointerPressRaycast))  pointerPressRaycast;

 bool __declspec(property(get=get_eligibleForClick, put=set_eligibleForClick))  eligibleForClick;

 int32_t __declspec(property(get=get_pointerId, put=set_pointerId))  pointerId;

 ::UnityEngine::Vector2 __declspec(property(get=get_position, put=set_position))  position;

 ::UnityEngine::Vector2 __declspec(property(get=get_delta, put=set_delta))  delta;

 ::UnityEngine::Vector2 __declspec(property(get=get_pressPosition, put=set_pressPosition))  pressPosition;

 ::UnityEngine::Vector3 __declspec(property(get=get_worldPosition, put=set_worldPosition))  worldPosition;

 ::UnityEngine::Vector3 __declspec(property(get=get_worldNormal, put=set_worldNormal))  worldNormal;

 float_t __declspec(property(get=get_clickTime, put=set_clickTime))  clickTime;

 int32_t __declspec(property(get=get_clickCount, put=set_clickCount))  clickCount;

 ::UnityEngine::Vector2 __declspec(property(get=get_scrollDelta, put=set_scrollDelta))  scrollDelta;

 bool __declspec(property(get=get_useDragThreshold, put=set_useDragThreshold))  useDragThreshold;

 bool __declspec(property(get=get_dragging, put=set_dragging))  dragging;

 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton __declspec(property(get=get_button, put=set_button))  button;

 float_t __declspec(property(get=get_pressure, put=set_pressure))  pressure;

 float_t __declspec(property(get=get_tangentialPressure, put=set_tangentialPressure))  tangentialPressure;

 float_t __declspec(property(get=get_altitudeAngle, put=set_altitudeAngle))  altitudeAngle;

 float_t __declspec(property(get=get_azimuthAngle, put=set_azimuthAngle))  azimuthAngle;

 float_t __declspec(property(get=get_twist, put=set_twist))  twist;

 ::UnityEngine::Vector2 __declspec(property(get=get_radius, put=set_radius))  radius;

 ::UnityEngine::Vector2 __declspec(property(get=get_radiusVariance, put=set_radiusVariance))  radiusVariance;

 bool __declspec(property(get=get_fullyExited, put=set_fullyExited))  fullyExited;

 bool __declspec(property(get=get_reentered, put=set_reentered))  reentered;

 ::UnityEngine::Camera __declspec(property(get=get_enterEventCamera))  enterEventCamera;

 ::UnityEngine::Camera __declspec(property(get=get_pressEventCamera))  pressEventCamera;

 ::UnityEngine::GameObject __declspec(property(get=get_pointerPress, put=set_pointerPress))  pointerPress;


// Methods

/// @brief Method get_pointerEnter addr 0x2c1c504 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_pointerEnter() ;

/// @brief Method set_pointerEnter addr 0x2c1c50c size 0x8 virtual false final false
 void set_pointerEnter(::UnityEngine::GameObject value) ;

/// @brief Method get_lastPress addr 0x2c1c514 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_lastPress() ;

/// @brief Method set_lastPress addr 0x2c1c51c size 0x8 virtual false final false
 void set_lastPress(::UnityEngine::GameObject value) ;

/// @brief Method get_rawPointerPress addr 0x2c1c524 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_rawPointerPress() ;

/// @brief Method set_rawPointerPress addr 0x2c1c52c size 0x8 virtual false final false
 void set_rawPointerPress(::UnityEngine::GameObject value) ;

/// @brief Method get_pointerDrag addr 0x2c1c534 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_pointerDrag() ;

/// @brief Method set_pointerDrag addr 0x2c1c53c size 0x8 virtual false final false
 void set_pointerDrag(::UnityEngine::GameObject value) ;

/// @brief Method get_pointerClick addr 0x2c1c544 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_pointerClick() ;

/// @brief Method set_pointerClick addr 0x2c1c54c size 0x8 virtual false final false
 void set_pointerClick(::UnityEngine::GameObject value) ;

/// @brief Method get_pointerCurrentRaycast addr 0x2c1c554 size 0x10 virtual false final false
 ::UnityEngine::EventSystems::RaycastResult get_pointerCurrentRaycast() ;

/// @brief Method set_pointerCurrentRaycast addr 0x2c1c564 size 0x18 virtual false final false
 void set_pointerCurrentRaycast(::UnityEngine::EventSystems::RaycastResult value) ;

/// @brief Method get_pointerPressRaycast addr 0x2c1c57c size 0x10 virtual false final false
 ::UnityEngine::EventSystems::RaycastResult get_pointerPressRaycast() ;

/// @brief Method set_pointerPressRaycast addr 0x2c1c58c size 0x18 virtual false final false
 void set_pointerPressRaycast(::UnityEngine::EventSystems::RaycastResult value) ;

/// @brief Method get_eligibleForClick addr 0x2c1c5a4 size 0x8 virtual false final false
 bool get_eligibleForClick() ;

/// @brief Method set_eligibleForClick addr 0x2c1c5ac size 0xc virtual false final false
 void set_eligibleForClick(bool value) ;

/// @brief Method get_pointerId addr 0x2c1c5b8 size 0x8 virtual false final false
 int32_t get_pointerId() ;

/// @brief Method set_pointerId addr 0x2c1c5c0 size 0x8 virtual false final false
 void set_pointerId(int32_t value) ;

/// @brief Method get_position addr 0x2c1c5c8 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_position() ;

/// @brief Method set_position addr 0x2c1c5d0 size 0x8 virtual false final false
 void set_position(::UnityEngine::Vector2 value) ;

/// @brief Method get_delta addr 0x2c1c5d8 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_delta() ;

/// @brief Method set_delta addr 0x2c1c5e0 size 0x8 virtual false final false
 void set_delta(::UnityEngine::Vector2 value) ;

/// @brief Method get_pressPosition addr 0x2c1c5e8 size 0xc virtual false final false
 ::UnityEngine::Vector2 get_pressPosition() ;

/// @brief Method set_pressPosition addr 0x2c1c5f4 size 0xc virtual false final false
 void set_pressPosition(::UnityEngine::Vector2 value) ;

/// @brief Method get_worldPosition addr 0x2c1c600 size 0x10 virtual false final false
 ::UnityEngine::Vector3 get_worldPosition() ;

/// @brief Method set_worldPosition addr 0x2c1c610 size 0x10 virtual false final false
 void set_worldPosition(::UnityEngine::Vector3 value) ;

/// @brief Method get_worldNormal addr 0x2c1c620 size 0x10 virtual false final false
 ::UnityEngine::Vector3 get_worldNormal() ;

/// @brief Method set_worldNormal addr 0x2c1c630 size 0x10 virtual false final false
 void set_worldNormal(::UnityEngine::Vector3 value) ;

/// @brief Method get_clickTime addr 0x2c1c640 size 0x8 virtual false final false
 float_t get_clickTime() ;

/// @brief Method set_clickTime addr 0x2c1c648 size 0x8 virtual false final false
 void set_clickTime(float_t value) ;

/// @brief Method get_clickCount addr 0x2c1c650 size 0x8 virtual false final false
 int32_t get_clickCount() ;

/// @brief Method set_clickCount addr 0x2c1c658 size 0x8 virtual false final false
 void set_clickCount(int32_t value) ;

/// @brief Method get_scrollDelta addr 0x2c1c660 size 0xc virtual false final false
 ::UnityEngine::Vector2 get_scrollDelta() ;

/// @brief Method set_scrollDelta addr 0x2c1c66c size 0xc virtual false final false
 void set_scrollDelta(::UnityEngine::Vector2 value) ;

/// @brief Method get_useDragThreshold addr 0x2c1c678 size 0x8 virtual false final false
 bool get_useDragThreshold() ;

/// @brief Method set_useDragThreshold addr 0x2c1c680 size 0xc virtual false final false
 void set_useDragThreshold(bool value) ;

/// @brief Method get_dragging addr 0x2c1c68c size 0x8 virtual false final false
 bool get_dragging() ;

/// @brief Method set_dragging addr 0x2c1c694 size 0xc virtual false final false
 void set_dragging(bool value) ;

/// @brief Method get_button addr 0x2c1c6a0 size 0x8 virtual false final false
 ::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton get_button() ;

/// @brief Method set_button addr 0x2c1c6a8 size 0x8 virtual false final false
 void set_button(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton value) ;

/// @brief Method get_pressure addr 0x2c1c6b0 size 0x8 virtual false final false
 float_t get_pressure() ;

/// @brief Method set_pressure addr 0x2c1c6b8 size 0x8 virtual false final false
 void set_pressure(float_t value) ;

/// @brief Method get_tangentialPressure addr 0x2c1c6c0 size 0x8 virtual false final false
 float_t get_tangentialPressure() ;

/// @brief Method set_tangentialPressure addr 0x2c1c6c8 size 0x8 virtual false final false
 void set_tangentialPressure(float_t value) ;

/// @brief Method get_altitudeAngle addr 0x2c1c6d0 size 0x8 virtual false final false
 float_t get_altitudeAngle() ;

/// @brief Method set_altitudeAngle addr 0x2c1c6d8 size 0x8 virtual false final false
 void set_altitudeAngle(float_t value) ;

/// @brief Method get_azimuthAngle addr 0x2c1c6e0 size 0x8 virtual false final false
 float_t get_azimuthAngle() ;

/// @brief Method set_azimuthAngle addr 0x2c1c6e8 size 0x8 virtual false final false
 void set_azimuthAngle(float_t value) ;

/// @brief Method get_twist addr 0x2c1c6f0 size 0x8 virtual false final false
 float_t get_twist() ;

/// @brief Method set_twist addr 0x2c1c6f8 size 0x8 virtual false final false
 void set_twist(float_t value) ;

/// @brief Method get_radius addr 0x2c1c700 size 0xc virtual false final false
 ::UnityEngine::Vector2 get_radius() ;

/// @brief Method set_radius addr 0x2c1c70c size 0xc virtual false final false
 void set_radius(::UnityEngine::Vector2 value) ;

/// @brief Method get_radiusVariance addr 0x2c1c718 size 0xc virtual false final false
 ::UnityEngine::Vector2 get_radiusVariance() ;

/// @brief Method set_radiusVariance addr 0x2c1c724 size 0xc virtual false final false
 void set_radiusVariance(::UnityEngine::Vector2 value) ;

/// @brief Method get_fullyExited addr 0x2c1c730 size 0x8 virtual false final false
 bool get_fullyExited() ;

/// @brief Method set_fullyExited addr 0x2c1c738 size 0xc virtual false final false
 void set_fullyExited(bool value) ;

/// @brief Method get_reentered addr 0x2c1c744 size 0x8 virtual false final false
 bool get_reentered() ;

/// @brief Method set_reentered addr 0x2c1c74c size 0xc virtual false final false
 void set_reentered(bool value) ;

// Ctor Parameters [CppParam { name: "eventSystem", ty: "::UnityEngine::EventSystems::EventSystem", modifiers: "", def_value: None }]
explicit PointerEventData(::UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method .ctor addr 0x2c1c758 size 0x12c virtual false final false
 void _ctor(::UnityEngine::EventSystems::EventSystem eventSystem) ;

/// @brief Method IsPointerMoving addr 0x2c1c884 size 0x1c virtual false final false
 bool IsPointerMoving() ;

/// @brief Method IsScrolling addr 0x2c1c8a0 size 0x20 virtual false final false
 bool IsScrolling() ;

/// @brief Method get_enterEventCamera addr 0x2c1c8c0 size 0x90 virtual false final false
 ::UnityEngine::Camera get_enterEventCamera() ;

/// @brief Method get_pressEventCamera addr 0x2c1c950 size 0x90 virtual false final false
 ::UnityEngine::Camera get_pressEventCamera() ;

/// @brief Method get_pointerPress addr 0x2c1c9e0 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_pointerPress() ;

/// @brief Method set_pointerPress addr 0x2c1c9e8 size 0x7c virtual false final false
 void set_pointerPress(::UnityEngine::GameObject value) ;

/// @brief Method ToString addr 0x2c1ca64 size 0x5e0 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__FramePressState, "UnityEngine.EventSystems", "PointerEventData/FramePressState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::____UnityEngine__EventSystems__PointerEventData__InputButton, "UnityEngine.EventSystems", "PointerEventData/InputButton");
NEED_NO_BOX(::UnityEngine::EventSystems::PointerEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerEventData, "UnityEngine.EventSystems", "PointerEventData");
