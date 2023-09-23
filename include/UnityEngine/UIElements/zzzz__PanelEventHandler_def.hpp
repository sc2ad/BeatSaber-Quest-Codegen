#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerMoveHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IRuntimePanelComponent;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__PanelEventHandler__PointerEventType;
}
namespace UnityEngine::UIElements {
class PanelEventHandler;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__PanelEventHandler__PointerEvent;
}
// Type: ::PointerEventType
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13097))
// CS Name: UnityEngine.UIElements.PanelEventHandler::PointerEventType
struct CORDL_TYPE UnityEngine__UIElements__PanelEventHandler__PointerEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__PanelEventHandler__PointerEventType(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__PanelEventHandler__PointerEventType(UnityEngine__UIElements__PanelEventHandler__PointerEventType const&) = default;
                    constexpr UnityEngine__UIElements__PanelEventHandler__PointerEventType(UnityEngine__UIElements__PanelEventHandler__PointerEventType&&) = default;
                    constexpr UnityEngine__UIElements__PanelEventHandler__PointerEventType& operator=(UnityEngine__UIElements__PanelEventHandler__PointerEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__PanelEventHandler__PointerEventType& operator=(UnityEngine__UIElements__PanelEventHandler__PointerEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__PanelEventHandler__PointerEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__PanelEventHandler__PointerEventType_Unwrapped : int32_t {
__Default = 0,
__Down = 1,
__Up = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__PanelEventHandler__PointerEventType_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__PanelEventHandler__PointerEventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType const Default;

/// @brief Field Down offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType const Down;

/// @brief Field Up offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType const Up;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::PointerEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13098))
// CS Name: UnityEngine.UIElements.PanelEventHandler::PointerEvent
class CORDL_TYPE UnityEngine__UIElements__PanelEventHandler__PointerEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IPointerEvent
constexpr operator  UnityEngine::UIElements::IPointerEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UIElements__PanelEventHandler__PointerEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PanelEventHandler__PointerEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__PanelEventHandler__PointerEvent(UnityEngine__UIElements__PanelEventHandler__PointerEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PanelEventHandler__PointerEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__PanelEventHandler__PointerEvent(UnityEngine__UIElements__PanelEventHandler__PointerEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__PanelEventHandler__PointerEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__PanelEventHandler__PointerEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__PanelEventHandler__PointerEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__PanelEventHandler__PointerEvent& operator=(UnityEngine__UIElements__PanelEventHandler__PointerEvent&& o) noexcept = default;
  constexpr UnityEngine__UIElements__PanelEventHandler__PointerEvent& operator=(UnityEngine__UIElements__PanelEventHandler__PointerEvent const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__pointerId_k__BackingField, put=__set__pointerId_k__BackingField))  _pointerId_k__BackingField;

constexpr void __set__pointerId_k__BackingField(int32_t value) ;

constexpr int32_t __get__pointerId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__pointerType_k__BackingField, put=__set__pointerType_k__BackingField))  _pointerType_k__BackingField;

constexpr void __set__pointerType_k__BackingField(::StringW value) ;

constexpr ::StringW __get__pointerType_k__BackingField() const;

 bool __declspec(property(get=__get__isPrimary_k__BackingField, put=__set__isPrimary_k__BackingField))  _isPrimary_k__BackingField;

constexpr void __set__isPrimary_k__BackingField(bool value) ;

constexpr bool __get__isPrimary_k__BackingField() const;

 int32_t __declspec(property(get=__get__button_k__BackingField, put=__set__button_k__BackingField))  _button_k__BackingField;

constexpr void __set__button_k__BackingField(int32_t value) ;

constexpr int32_t __get__button_k__BackingField() const;

 int32_t __declspec(property(get=__get__pressedButtons_k__BackingField, put=__set__pressedButtons_k__BackingField))  _pressedButtons_k__BackingField;

constexpr void __set__pressedButtons_k__BackingField(int32_t value) ;

constexpr int32_t __get__pressedButtons_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__localPosition_k__BackingField, put=__set__localPosition_k__BackingField))  _localPosition_k__BackingField;

constexpr void __set__localPosition_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__localPosition_k__BackingField() const;

 UnityEngine::Vector3 __declspec(property(get=__get__deltaPosition_k__BackingField, put=__set__deltaPosition_k__BackingField))  _deltaPosition_k__BackingField;

constexpr void __set__deltaPosition_k__BackingField(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__deltaPosition_k__BackingField() const;

 float_t __declspec(property(get=__get__deltaTime_k__BackingField, put=__set__deltaTime_k__BackingField))  _deltaTime_k__BackingField;

constexpr void __set__deltaTime_k__BackingField(float_t value) ;

constexpr float_t __get__deltaTime_k__BackingField() const;

 int32_t __declspec(property(get=__get__clickCount_k__BackingField, put=__set__clickCount_k__BackingField))  _clickCount_k__BackingField;

constexpr void __set__clickCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__clickCount_k__BackingField() const;

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

 UnityEngine::Vector2 __declspec(property(get=__get__radius_k__BackingField, put=__set__radius_k__BackingField))  _radius_k__BackingField;

constexpr void __set__radius_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__radius_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__radiusVariance_k__BackingField, put=__set__radiusVariance_k__BackingField))  _radiusVariance_k__BackingField;

constexpr void __set__radiusVariance_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__radiusVariance_k__BackingField() const;

 UnityEngine::EventModifiers __declspec(property(get=__get__modifiers_k__BackingField, put=__set__modifiers_k__BackingField))  _modifiers_k__BackingField;

constexpr void __set__modifiers_k__BackingField(UnityEngine::EventModifiers value) ;

constexpr UnityEngine::EventModifiers __get__modifiers_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_pointerId, put=set_pointerId))  pointerId;

 ::StringW __declspec(property(get=get_pointerType, put=set_pointerType))  pointerType;

 bool __declspec(property(get=get_isPrimary, put=set_isPrimary))  isPrimary;

 int32_t __declspec(property(get=get_button, put=set_button))  button;

 int32_t __declspec(property(get=get_pressedButtons, put=set_pressedButtons))  pressedButtons;

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Vector3 __declspec(property(get=get_localPosition, put=set_localPosition))  localPosition;

 UnityEngine::Vector3 __declspec(property(get=get_deltaPosition, put=set_deltaPosition))  deltaPosition;

 float_t __declspec(property(get=get_deltaTime, put=set_deltaTime))  deltaTime;

 int32_t __declspec(property(get=get_clickCount, put=set_clickCount))  clickCount;

 float_t __declspec(property(get=get_pressure, put=set_pressure))  pressure;

 float_t __declspec(property(get=get_tangentialPressure, put=set_tangentialPressure))  tangentialPressure;

 float_t __declspec(property(get=get_altitudeAngle, put=set_altitudeAngle))  altitudeAngle;

 float_t __declspec(property(get=get_azimuthAngle, put=set_azimuthAngle))  azimuthAngle;

 float_t __declspec(property(get=get_twist, put=set_twist))  twist;

 UnityEngine::Vector2 __declspec(property(get=get_radius, put=set_radius))  radius;

 UnityEngine::Vector2 __declspec(property(get=get_radiusVariance, put=set_radiusVariance))  radiusVariance;

 UnityEngine::EventModifiers __declspec(property(get=get_modifiers, put=set_modifiers))  modifiers;

 bool __declspec(property(get=get_shiftKey))  shiftKey;

 bool __declspec(property(get=get_ctrlKey))  ctrlKey;

 bool __declspec(property(get=get_commandKey))  commandKey;

 bool __declspec(property(get=get_altKey))  altKey;

 bool __declspec(property(get=get_actionKey))  actionKey;


// Methods

/// @brief Method get_pointerId addr 0x2c1b890 size 0x8 virtual true final true
 int32_t get_pointerId() ;

/// @brief Method set_pointerId addr 0x2c1b898 size 0x8 virtual false final false
 void set_pointerId(int32_t value) ;

/// @brief Method get_pointerType addr 0x2c1b8a0 size 0x8 virtual true final true
 ::StringW get_pointerType() ;

/// @brief Method set_pointerType addr 0x2c1b8a8 size 0x8 virtual false final false
 void set_pointerType(::StringW value) ;

/// @brief Method get_isPrimary addr 0x2c1b8b0 size 0x8 virtual true final true
 bool get_isPrimary() ;

/// @brief Method set_isPrimary addr 0x2c1b8b8 size 0xc virtual false final false
 void set_isPrimary(bool value) ;

/// @brief Method get_button addr 0x2c1b8c4 size 0x8 virtual true final true
 int32_t get_button() ;

/// @brief Method set_button addr 0x2c1b8cc size 0x8 virtual false final false
 void set_button(int32_t value) ;

/// @brief Method get_pressedButtons addr 0x2c1b8d4 size 0x8 virtual true final true
 int32_t get_pressedButtons() ;

/// @brief Method set_pressedButtons addr 0x2c1b8dc size 0x8 virtual false final false
 void set_pressedButtons(int32_t value) ;

/// @brief Method get_position addr 0x2c1b8e4 size 0xc virtual true final true
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x2c1b8f0 size 0xc virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method get_localPosition addr 0x2c1b8fc size 0xc virtual true final true
 UnityEngine::Vector3 get_localPosition() ;

/// @brief Method set_localPosition addr 0x2c1b908 size 0xc virtual false final false
 void set_localPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_deltaPosition addr 0x2c1b914 size 0xc virtual true final true
 UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method set_deltaPosition addr 0x2c1b920 size 0xc virtual false final false
 void set_deltaPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_deltaTime addr 0x2c1b92c size 0x8 virtual true final true
 float_t get_deltaTime() ;

/// @brief Method set_deltaTime addr 0x2c1b934 size 0x8 virtual false final false
 void set_deltaTime(float_t value) ;

/// @brief Method get_clickCount addr 0x2c1b93c size 0x8 virtual true final true
 int32_t get_clickCount() ;

/// @brief Method set_clickCount addr 0x2c1b944 size 0x8 virtual false final false
 void set_clickCount(int32_t value) ;

/// @brief Method get_pressure addr 0x2c1b94c size 0x8 virtual true final true
 float_t get_pressure() ;

/// @brief Method set_pressure addr 0x2c1b954 size 0x8 virtual false final false
 void set_pressure(float_t value) ;

/// @brief Method get_tangentialPressure addr 0x2c1b95c size 0x8 virtual true final true
 float_t get_tangentialPressure() ;

/// @brief Method set_tangentialPressure addr 0x2c1b964 size 0x8 virtual false final false
 void set_tangentialPressure(float_t value) ;

/// @brief Method get_altitudeAngle addr 0x2c1b96c size 0x8 virtual true final true
 float_t get_altitudeAngle() ;

/// @brief Method set_altitudeAngle addr 0x2c1b974 size 0x8 virtual false final false
 void set_altitudeAngle(float_t value) ;

/// @brief Method get_azimuthAngle addr 0x2c1b97c size 0x8 virtual true final true
 float_t get_azimuthAngle() ;

/// @brief Method set_azimuthAngle addr 0x2c1b984 size 0x8 virtual false final false
 void set_azimuthAngle(float_t value) ;

/// @brief Method get_twist addr 0x2c1b98c size 0x8 virtual true final true
 float_t get_twist() ;

/// @brief Method set_twist addr 0x2c1b994 size 0x8 virtual false final false
 void set_twist(float_t value) ;

/// @brief Method get_radius addr 0x2c1b99c size 0x8 virtual true final true
 UnityEngine::Vector2 get_radius() ;

/// @brief Method set_radius addr 0x2c1b9a4 size 0x8 virtual false final false
 void set_radius(UnityEngine::Vector2 value) ;

/// @brief Method get_radiusVariance addr 0x2c1b9ac size 0x8 virtual true final true
 UnityEngine::Vector2 get_radiusVariance() ;

/// @brief Method set_radiusVariance addr 0x2c1b9b4 size 0x8 virtual false final false
 void set_radiusVariance(UnityEngine::Vector2 value) ;

/// @brief Method get_modifiers addr 0x2c1b9bc size 0x8 virtual true final true
 UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method set_modifiers addr 0x2c1b9c4 size 0x8 virtual false final false
 void set_modifiers(UnityEngine::EventModifiers value) ;

/// @brief Method get_shiftKey addr 0x2c1b9cc size 0xc virtual true final true
 bool get_shiftKey() ;

/// @brief Method get_ctrlKey addr 0x2c1b9d8 size 0xc virtual true final true
 bool get_ctrlKey() ;

/// @brief Method get_commandKey addr 0x2c1b9e4 size 0xc virtual true final true
 bool get_commandKey() ;

/// @brief Method get_altKey addr 0x2c1b9f0 size 0xc virtual true final true
 bool get_altKey() ;

/// @brief Method get_actionKey addr 0x2c1b9fc size 0x44 virtual true final true
 bool get_actionKey() ;

/// @brief Method Read addr 0x2c1b340 size 0x490 virtual false final false
 void Read(UnityEngine::UIElements::PanelEventHandler self, UnityEngine::EventSystems::PointerEventData eventData, UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType eventType) ;

/// @brief Method SetPosition addr 0x2c1b7d0 size 0x18 virtual false final false
 void SetPosition(UnityEngine::Vector3 positionOverride, UnityEngine::Vector3 deltaOverride) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__PanelEventHandler__PointerEvent() ;

/// @brief Method .ctor addr 0x2c1b880 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Read>g__InRange|82_0 addr 0x2c1ba40 size 0x1c virtual false final false
static bool _Read_g__InRange_82_0(int32_t i, int32_t start, int32_t count) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PanelEventHandler
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13099))
// CS Name: UnityEngine.UIElements.PanelEventHandler
class CORDL_TYPE PanelEventHandler : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using PointerEvent = UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent;

using PointerEventType = UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerMoveHandler
constexpr operator  UnityEngine::EventSystems::IPointerMoveHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerUpHandler
constexpr operator  UnityEngine::EventSystems::IPointerUpHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerDownHandler
constexpr operator  UnityEngine::EventSystems::IPointerDownHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISubmitHandler
constexpr operator  UnityEngine::EventSystems::ISubmitHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ICancelHandler
constexpr operator  UnityEngine::EventSystems::ICancelHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IMoveHandler
constexpr operator  UnityEngine::EventSystems::IMoveHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IScrollHandler
constexpr operator  UnityEngine::EventSystems::IScrollHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::ISelectHandler
constexpr operator  UnityEngine::EventSystems::ISelectHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IDeselectHandler
constexpr operator  UnityEngine::EventSystems::IDeselectHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr operator  UnityEngine::EventSystems::IPointerExitHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr operator  UnityEngine::EventSystems::IPointerEnterHandler() const noexcept;

/// @brief Convert operator to UnityEngine::UIElements::IRuntimePanelComponent
constexpr operator  UnityEngine::UIElements::IRuntimePanelComponent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PanelEventHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelEventHandler", modifiers: " const&", def_value: None }]
constexpr PanelEventHandler(PanelEventHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelEventHandler", modifiers: "&&", def_value: None }]
constexpr PanelEventHandler(PanelEventHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PanelEventHandler(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr PanelEventHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PanelEventHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PanelEventHandler& operator=(PanelEventHandler&& o) noexcept = default;
  constexpr PanelEventHandler& operator=(PanelEventHandler const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::BaseRuntimePanel __declspec(property(get=__get_m_Panel, put=__set_m_Panel))  m_Panel;

constexpr void __set_m_Panel(UnityEngine::UIElements::BaseRuntimePanel value) ;

constexpr UnityEngine::UIElements::BaseRuntimePanel __get_m_Panel() const;

 UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent __declspec(property(get=__get_m_PointerEvent, put=__set_m_PointerEvent))  m_PointerEvent;

constexpr void __set_m_PointerEvent(UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent __get_m_PointerEvent() const;

 bool __declspec(property(get=__get_m_Selecting, put=__set_m_Selecting))  m_Selecting;

constexpr void __set_m_Selecting(bool value) ;

constexpr bool __get_m_Selecting() const;

 UnityEngine::Event __declspec(property(get=__get_m_Event, put=__set_m_Event))  m_Event;

constexpr void __set_m_Event(UnityEngine::Event value) ;

constexpr UnityEngine::Event __get_m_Event() const;

static UnityEngine::EventModifiers __declspec(property(get=__get_s_Modifiers, put=__set_s_Modifiers))  s_Modifiers;

static void __set_s_Modifiers(UnityEngine::EventModifiers value) ;

static UnityEngine::EventModifiers __get_s_Modifiers() ;


// Properties

 UnityEngine::UIElements::IPanel __declspec(property(get=get_panel, put=set_panel))  panel;

 UnityEngine::GameObject __declspec(property(get=get_selectableGameObject))  selectableGameObject;

 UnityEngine::EventSystems::EventSystem __declspec(property(get=get_eventSystem))  eventSystem;


// Methods

/// @brief Method get_panel addr 0x2c19248 size 0x8 virtual true final true
 UnityEngine::UIElements::IPanel get_panel() ;

/// @brief Method set_panel addr 0x2c19250 size 0xa4 virtual true final true
 void set_panel(UnityEngine::UIElements::IPanel value) ;

/// @brief Method get_selectableGameObject addr 0x2c19674 size 0x18 virtual false final false
 UnityEngine::GameObject get_selectableGameObject() ;

/// @brief Method get_eventSystem addr 0x2c1968c size 0xd4 virtual false final false
 UnityEngine::EventSystems::EventSystem get_eventSystem() ;

/// @brief Method OnEnable addr 0x2c19760 size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c19768 size 0x4 virtual true final false
 void OnDisable() ;

/// @brief Method RegisterCallbacks addr 0x2c194b4 size 0x1c0 virtual false final false
 void RegisterCallbacks() ;

/// @brief Method UnregisterCallbacks addr 0x2c192f4 size 0x1c0 virtual false final false
 void UnregisterCallbacks() ;

/// @brief Method OnPanelDestroyed addr 0x2c19770 size 0x8 virtual false final false
 void OnPanelDestroyed() ;

/// @brief Method OnElementFocus addr 0x2c19778 size 0xbc virtual false final false
 void OnElementFocus(UnityEngine::UIElements::FocusEvent e) ;

/// @brief Method OnElementBlur addr 0x2c19860 size 0x4 virtual false final false
 void OnElementBlur(UnityEngine::UIElements::BlurEvent e) ;

/// @brief Method OnSelect addr 0x2c19864 size 0x78 virtual true final true
 void OnSelect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnDeselect addr 0x2c198dc size 0x14 virtual true final true
 void OnDeselect(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnPointerMove addr 0x2c198f0 size 0x1b0 virtual true final true
 void OnPointerMove(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerUp addr 0x2c19c40 size 0x220 virtual true final true
 void OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x2c19e60 size 0x288 virtual true final true
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerExit addr 0x2c1a0e8 size 0x2b4 virtual true final true
 void OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerEnter addr 0x2c1a39c size 0x54 virtual true final true
 void OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnSubmit addr 0x2c1a3f0 size 0x1b8 virtual true final true
 void OnSubmit(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnCancel addr 0x2c1a5a8 size 0x1b8 virtual true final true
 void OnCancel(UnityEngine::EventSystems::BaseEventData eventData) ;

/// @brief Method OnMove addr 0x2c1a760 size 0x18c virtual true final true
 void OnMove(UnityEngine::EventSystems::AxisEventData eventData) ;

/// @brief Method OnScroll addr 0x2c1a8ec size 0x1c0 virtual true final true
 void OnScroll(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method SendEvent addr 0x2c19bdc size 0x64 virtual false final false
 void SendEvent(UnityEngine::UIElements::EventBase e, UnityEngine::EventSystems::BaseEventData sourceEventData) ;

/// @brief Method SendEvent addr 0x2c1aaac size 0x60 virtual false final false
 void SendEvent(UnityEngine::UIElements::EventBase e, UnityEngine::Event sourceEvent) ;

/// @brief Method Update addr 0x2c1ab0c size 0xe0 virtual false final false
 void Update() ;

/// @brief Method LateUpdate addr 0x2c1ad34 size 0x8 virtual false final false
 void LateUpdate() ;

/// @brief Method ProcessImguiEvents addr 0x2c1abec size 0x148 virtual false final false
 void ProcessImguiEvents(bool isSelected) ;

/// @brief Method ProcessKeyboardEvent addr 0x2c1ad3c size 0x74 virtual false final false
 void ProcessKeyboardEvent(UnityEngine::Event e) ;

/// @brief Method ProcessTabEvent addr 0x2c1adb0 size 0x80 virtual false final false
 void ProcessTabEvent(UnityEngine::Event e) ;

/// @brief Method SendTabEvent addr 0x2c1b1c0 size 0x180 virtual false final false
 void SendTabEvent(UnityEngine::Event e, int32_t direction) ;

/// @brief Method SendKeyUpEvent addr 0x2c1ae30 size 0x1bc virtual false final false
 void SendKeyUpEvent(UnityEngine::Event e) ;

/// @brief Method SendKeyDownEvent addr 0x2c1afec size 0x1d4 virtual false final false
 void SendKeyDownEvent(UnityEngine::Event e) ;

/// @brief Method ReadPointerData addr 0x2c19aa0 size 0x13c virtual false final false
 bool ReadPointerData(UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent pe, UnityEngine::EventSystems::PointerEventData eventData, UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType eventType) ;

// Ctor Parameters []
explicit PanelEventHandler() ;

/// @brief Method .ctor addr 0x2c1b7e8 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEventType, "UnityEngine.UIElements", "PanelEventHandler/PointerEventType");
NEED_NO_BOX(UnityEngine::UIElements::PanelEventHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PanelEventHandler, "UnityEngine.UIElements", "PanelEventHandler");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__PanelEventHandler__PointerEvent, "UnityEngine.UIElements", "PanelEventHandler/PointerEvent");
