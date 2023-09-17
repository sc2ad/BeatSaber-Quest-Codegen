#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IPointerEventInternal;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class PointerEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class PointerEventBase_1<T>;
}
// Type: UnityEngine.UIElements::PointerEventBase`1
// Type: UnityEngine.UIElements::PointerEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1635 }), TypeDefinitionIndex(TypeDefinitionIndex(7279)), TypeDefinitionIndex(TypeDefinitionIndex(7297))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7297), inst: 2 })
// CS Name: UnityEngine.UIElements.PointerEventBase`1
class CORDL_TYPE PointerEventBase_1<T> : public ::UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IPointerEvent
constexpr operator  ::UnityEngine::UIElements::IPointerEvent() const noexcept;

/// @brief Convert operator to ::UnityEngine::UIElements::IPointerEventInternal
constexpr operator  ::UnityEngine::UIElements::IPointerEventInternal() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PointerEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventBase_1", modifiers: " const&", def_value: None }]
constexpr PointerEventBase_1(PointerEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerEventBase_1", modifiers: "&&", def_value: None }]
constexpr PointerEventBase_1(PointerEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerEventBase_1(void* ptr) noexcept : ::UnityEngine::UIElements::EventBase_1<T>(ptr) {
}


  constexpr PointerEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerEventBase_1& operator=(PointerEventBase_1&& o) noexcept = default;
  constexpr PointerEventBase_1& operator=(PointerEventBase_1 const& o) noexcept = default;
                


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

 ::UnityEngine::Vector3 __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__position_k__BackingField() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__localPosition_k__BackingField, put=__set__localPosition_k__BackingField))  _localPosition_k__BackingField;

constexpr void __set__localPosition_k__BackingField(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__localPosition_k__BackingField() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__deltaPosition_k__BackingField, put=__set__deltaPosition_k__BackingField))  _deltaPosition_k__BackingField;

constexpr void __set__deltaPosition_k__BackingField(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__deltaPosition_k__BackingField() const;

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

 ::UnityEngine::Vector2 __declspec(property(get=__get__radius_k__BackingField, put=__set__radius_k__BackingField))  _radius_k__BackingField;

constexpr void __set__radius_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__radius_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__radiusVariance_k__BackingField, put=__set__radiusVariance_k__BackingField))  _radiusVariance_k__BackingField;

constexpr void __set__radiusVariance_k__BackingField(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__radiusVariance_k__BackingField() const;

 ::UnityEngine::EventModifiers __declspec(property(get=__get__modifiers_k__BackingField, put=__set__modifiers_k__BackingField))  _modifiers_k__BackingField;

constexpr void __set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) ;

constexpr ::UnityEngine::EventModifiers __get__modifiers_k__BackingField() const;

 bool __declspec(property(get=__get__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField, put=__set__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField))  _UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField;

constexpr void __set__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField(bool value) ;

constexpr bool __get__UnityEngine_UIElements_IPointerEventInternal_triggeredByOS_k__BackingField() const;

 bool __declspec(property(get=__get__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField, put=__set__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField))  _UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField;

constexpr void __set__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField(bool value) ;

constexpr bool __get__UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_pointerId, put=set_pointerId))  pointerId;

 ::StringW __declspec(property(get=get_pointerType, put=set_pointerType))  pointerType;

 bool __declspec(property(get=get_isPrimary, put=set_isPrimary))  isPrimary;

 int32_t __declspec(property(get=get_button, put=set_button))  button;

 int32_t __declspec(property(get=get_pressedButtons, put=set_pressedButtons))  pressedButtons;

 ::UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 ::UnityEngine::Vector3 __declspec(property(get=get_localPosition, put=set_localPosition))  localPosition;

 ::UnityEngine::Vector3 __declspec(property(get=get_deltaPosition, put=set_deltaPosition))  deltaPosition;

 float_t __declspec(property(get=get_deltaTime, put=set_deltaTime))  deltaTime;

 int32_t __declspec(property(get=get_clickCount, put=set_clickCount))  clickCount;

 float_t __declspec(property(get=get_pressure, put=set_pressure))  pressure;

 float_t __declspec(property(get=get_tangentialPressure, put=set_tangentialPressure))  tangentialPressure;

 float_t __declspec(property(get=get_altitudeAngle, put=set_altitudeAngle))  altitudeAngle;

 float_t __declspec(property(get=get_azimuthAngle, put=set_azimuthAngle))  azimuthAngle;

 float_t __declspec(property(get=get_twist, put=set_twist))  twist;

 ::UnityEngine::Vector2 __declspec(property(get=get_radius, put=set_radius))  radius;

 ::UnityEngine::Vector2 __declspec(property(get=get_radiusVariance, put=set_radiusVariance))  radiusVariance;

 ::UnityEngine::EventModifiers __declspec(property(get=get_modifiers, put=set_modifiers))  modifiers;

 bool __declspec(property(get=get_shiftKey))  shiftKey;

 bool __declspec(property(get=get_ctrlKey))  ctrlKey;

 bool __declspec(property(get=get_commandKey))  commandKey;

 bool __declspec(property(get=get_altKey))  altKey;

 bool __declspec(property(get=get_actionKey))  actionKey;

 bool __declspec(property(get=UnityEngine_UIElements_IPointerEventInternal_get_triggeredByOS, put=UnityEngine_UIElements_IPointerEventInternal_set_triggeredByOS))  UnityEngine_UIElements_IPointerEventInternal_triggeredByOS;

 bool __declspec(property(get=UnityEngine_UIElements_IPointerEventInternal_get_recomputeTopElementUnderPointer, put=UnityEngine_UIElements_IPointerEventInternal_set_recomputeTopElementUnderPointer))  UnityEngine_UIElements_IPointerEventInternal_recomputeTopElementUnderPointer;

 ::UnityEngine::UIElements::IEventHandler __declspec(property(get=get_currentTarget, put=set_currentTarget))  currentTarget;


// Methods

/// @brief Method get_pointerId addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_pointerId() ;

/// @brief Method set_pointerId addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_pointerId(int32_t value) ;

/// @brief Method get_pointerType addr 0x0 size 0xffffffffffffffff virtual true final true
 ::StringW get_pointerType() ;

/// @brief Method set_pointerType addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_pointerType(::StringW value) ;

/// @brief Method get_isPrimary addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_isPrimary() ;

/// @brief Method set_isPrimary addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_isPrimary(bool value) ;

/// @brief Method get_button addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_button() ;

/// @brief Method set_button addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_button(int32_t value) ;

/// @brief Method get_pressedButtons addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_pressedButtons() ;

/// @brief Method set_pressedButtons addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_pressedButtons(int32_t value) ;

/// @brief Method get_position addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_position(::UnityEngine::Vector3 value) ;

/// @brief Method get_localPosition addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::Vector3 get_localPosition() ;

/// @brief Method set_localPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_localPosition(::UnityEngine::Vector3 value) ;

/// @brief Method get_deltaPosition addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::Vector3 get_deltaPosition() ;

/// @brief Method set_deltaPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_deltaPosition(::UnityEngine::Vector3 value) ;

/// @brief Method get_deltaTime addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_deltaTime() ;

/// @brief Method set_deltaTime addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_deltaTime(float_t value) ;

/// @brief Method get_clickCount addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_clickCount() ;

/// @brief Method set_clickCount addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_clickCount(int32_t value) ;

/// @brief Method get_pressure addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_pressure() ;

/// @brief Method set_pressure addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_pressure(float_t value) ;

/// @brief Method get_tangentialPressure addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_tangentialPressure() ;

/// @brief Method set_tangentialPressure addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_tangentialPressure(float_t value) ;

/// @brief Method get_altitudeAngle addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_altitudeAngle() ;

/// @brief Method set_altitudeAngle addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_altitudeAngle(float_t value) ;

/// @brief Method get_azimuthAngle addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_azimuthAngle() ;

/// @brief Method set_azimuthAngle addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_azimuthAngle(float_t value) ;

/// @brief Method get_twist addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t get_twist() ;

/// @brief Method set_twist addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_twist(float_t value) ;

/// @brief Method get_radius addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::Vector2 get_radius() ;

/// @brief Method set_radius addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_radius(::UnityEngine::Vector2 value) ;

/// @brief Method get_radiusVariance addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::Vector2 get_radiusVariance() ;

/// @brief Method set_radiusVariance addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_radiusVariance(::UnityEngine::Vector2 value) ;

/// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final true
 ::UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method set_modifiers addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_modifiers(::UnityEngine::EventModifiers value) ;

/// @brief Method get_shiftKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_shiftKey() ;

/// @brief Method get_ctrlKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_ctrlKey() ;

/// @brief Method get_commandKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_commandKey() ;

/// @brief Method get_altKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_altKey() ;

/// @brief Method get_actionKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_actionKey() ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.get_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final true
 bool UnityEngine_UIElements_IPointerEventInternal_get_triggeredByOS() ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.set_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_IPointerEventInternal_set_triggeredByOS(bool value) ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.get_recomputeTopElementUnderPointer addr 0x0 size 0xffffffffffffffff virtual true final true
 bool UnityEngine_UIElements_IPointerEventInternal_get_recomputeTopElementUnderPointer() ;

/// @brief Method UnityEngine.UIElements.IPointerEventInternal.set_recomputeTopElementUnderPointer addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_IPointerEventInternal_set_recomputeTopElementUnderPointer(bool value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method get_currentTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::UIElements::IEventHandler get_currentTarget() ;

/// @brief Method set_currentTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_currentTarget(::UnityEngine::UIElements::IEventHandler value) ;

/// @brief Method IsMouse addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsMouse(::UnityEngine::Event systemEvent) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(::UnityEngine::Event systemEvent) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(::UnityEngine::Touch touch, ::UnityEngine::EventModifiers modifiers) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(::UnityEngine::UIElements::IPointerEvent triggerEvent, ::UnityEngine::Vector2 position, int32_t pointerId) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(::UnityEngine::UIElements::IPointerEvent triggerEvent) ;

/// @brief Method PreDispatch addr 0x0 size 0xffffffffffffffff virtual true final false
 void PreDispatch(::UnityEngine::UIElements::IPanel panel) ;

/// @brief Method PostDispatch addr 0x0 size 0xffffffffffffffff virtual true final false
 void PostDispatch(::UnityEngine::UIElements::IPanel panel) ;

// Ctor Parameters []
explicit PointerEventBase_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::PointerEventBase_1, "UnityEngine.UIElements", "PointerEventBase`1");
