#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine::UIElements {
class IMouseEventInternal;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class MouseEventBase_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class MouseEventBase_1<T>;
}
// Type: UnityEngine.UIElements::MouseEventBase`1
// Type: UnityEngine.UIElements::MouseEventBase`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7279), inst: 1631 }), TypeDefinitionIndex(TypeDefinitionIndex(7314))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7314), inst: 2 })
// CS Name: UnityEngine.UIElements.MouseEventBase`1
class CORDL_TYPE MouseEventBase_1<T> : public UnityEngine::UIElements::EventBase_1<T> {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IMouseEvent
constexpr operator  UnityEngine::UIElements::IMouseEvent() const noexcept;

/// @brief Convert operator to UnityEngine::UIElements::IMouseEventInternal
constexpr operator  UnityEngine::UIElements::IMouseEventInternal() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~MouseEventBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEventBase_1", modifiers: " const&", def_value: None }]
constexpr MouseEventBase_1(MouseEventBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MouseEventBase_1", modifiers: "&&", def_value: None }]
constexpr MouseEventBase_1(MouseEventBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MouseEventBase_1(void* ptr) noexcept : UnityEngine::UIElements::EventBase_1<T>(ptr) {
}


  constexpr MouseEventBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MouseEventBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MouseEventBase_1& operator=(MouseEventBase_1&& o) noexcept = default;
  constexpr MouseEventBase_1& operator=(MouseEventBase_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::EventModifiers __declspec(property(get=__get__modifiers_k__BackingField, put=__set__modifiers_k__BackingField))  _modifiers_k__BackingField;

constexpr void __set__modifiers_k__BackingField(UnityEngine::EventModifiers value) ;

constexpr UnityEngine::EventModifiers __get__modifiers_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__mousePosition_k__BackingField, put=__set__mousePosition_k__BackingField))  _mousePosition_k__BackingField;

constexpr void __set__mousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__mousePosition_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__localMousePosition_k__BackingField, put=__set__localMousePosition_k__BackingField))  _localMousePosition_k__BackingField;

constexpr void __set__localMousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__localMousePosition_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__mouseDelta_k__BackingField, put=__set__mouseDelta_k__BackingField))  _mouseDelta_k__BackingField;

constexpr void __set__mouseDelta_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__mouseDelta_k__BackingField() const;

 int32_t __declspec(property(get=__get__clickCount_k__BackingField, put=__set__clickCount_k__BackingField))  _clickCount_k__BackingField;

constexpr void __set__clickCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__clickCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__button_k__BackingField, put=__set__button_k__BackingField))  _button_k__BackingField;

constexpr void __set__button_k__BackingField(int32_t value) ;

constexpr int32_t __get__button_k__BackingField() const;

 int32_t __declspec(property(get=__get__pressedButtons_k__BackingField, put=__set__pressedButtons_k__BackingField))  _pressedButtons_k__BackingField;

constexpr void __set__pressedButtons_k__BackingField(int32_t value) ;

constexpr int32_t __get__pressedButtons_k__BackingField() const;

 bool __declspec(property(get=__get__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField, put=__set__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField))  _UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField;

constexpr void __set__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField(bool value) ;

constexpr bool __get__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField() const;

 bool __declspec(property(get=__get__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField, put=__set__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField))  _UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField;

constexpr void __set__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField(bool value) ;

constexpr bool __get__UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse_k__BackingField() const;

 UnityEngine::UIElements::IPointerEvent __declspec(property(get=__get__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField, put=__set__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField))  _UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField;

constexpr void __set__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField(UnityEngine::UIElements::IPointerEvent value) ;

constexpr UnityEngine::UIElements::IPointerEvent __get__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField() const;


// Properties

 UnityEngine::EventModifiers __declspec(property(get=get_modifiers, put=set_modifiers))  modifiers;

 UnityEngine::Vector2 __declspec(property(get=get_mousePosition, put=set_mousePosition))  mousePosition;

 UnityEngine::Vector2 __declspec(property(get=get_localMousePosition, put=set_localMousePosition))  localMousePosition;

 UnityEngine::Vector2 __declspec(property(get=get_mouseDelta, put=set_mouseDelta))  mouseDelta;

 int32_t __declspec(property(get=get_clickCount, put=set_clickCount))  clickCount;

 int32_t __declspec(property(get=get_button, put=set_button))  button;

 int32_t __declspec(property(get=get_pressedButtons, put=set_pressedButtons))  pressedButtons;

 bool __declspec(property(get=get_shiftKey))  shiftKey;

 bool __declspec(property(get=get_ctrlKey))  ctrlKey;

 bool __declspec(property(get=get_commandKey))  commandKey;

 bool __declspec(property(get=get_altKey))  altKey;

 bool __declspec(property(get=UnityEngine_UIElements_IMouseEventInternal_get_triggeredByOS, put=UnityEngine_UIElements_IMouseEventInternal_set_triggeredByOS))  UnityEngine_UIElements_IMouseEventInternal_triggeredByOS;

 bool __declspec(property(get=UnityEngine_UIElements_IMouseEventInternal_get_recomputeTopElementUnderMouse, put=UnityEngine_UIElements_IMouseEventInternal_set_recomputeTopElementUnderMouse))  UnityEngine_UIElements_IMouseEventInternal_recomputeTopElementUnderMouse;

 UnityEngine::UIElements::IPointerEvent __declspec(property(get=UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent, put=UnityEngine_UIElements_IMouseEventInternal_set_sourcePointerEvent))  UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent;

 UnityEngine::UIElements::IEventHandler __declspec(property(get=get_currentTarget, put=set_currentTarget))  currentTarget;


// Methods

/// @brief Method get_modifiers addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::EventModifiers get_modifiers() ;

/// @brief Method set_modifiers addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_modifiers(UnityEngine::EventModifiers value) ;

/// @brief Method get_mousePosition addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Vector2 get_mousePosition() ;

/// @brief Method set_mousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_mousePosition(UnityEngine::Vector2 value) ;

/// @brief Method get_localMousePosition addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Vector2 get_localMousePosition() ;

/// @brief Method set_localMousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_localMousePosition(UnityEngine::Vector2 value) ;

/// @brief Method get_mouseDelta addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::Vector2 get_mouseDelta() ;

/// @brief Method set_mouseDelta addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_mouseDelta(UnityEngine::Vector2 value) ;

/// @brief Method get_clickCount addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_clickCount() ;

/// @brief Method set_clickCount addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_clickCount(int32_t value) ;

/// @brief Method get_button addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_button() ;

/// @brief Method set_button addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_button(int32_t value) ;

/// @brief Method get_pressedButtons addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_pressedButtons() ;

/// @brief Method set_pressedButtons addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_pressedButtons(int32_t value) ;

/// @brief Method get_shiftKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_shiftKey() ;

/// @brief Method get_ctrlKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_ctrlKey() ;

/// @brief Method get_commandKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_commandKey() ;

/// @brief Method get_altKey addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_altKey() ;

/// @brief Method UnityEngine.UIElements.IMouseEventInternal.get_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final true
 bool UnityEngine_UIElements_IMouseEventInternal_get_triggeredByOS() ;

/// @brief Method UnityEngine.UIElements.IMouseEventInternal.set_triggeredByOS addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_IMouseEventInternal_set_triggeredByOS(bool value) ;

/// @brief Method UnityEngine.UIElements.IMouseEventInternal.get_recomputeTopElementUnderMouse addr 0x0 size 0xffffffffffffffff virtual true final true
 bool UnityEngine_UIElements_IMouseEventInternal_get_recomputeTopElementUnderMouse() ;

/// @brief Method UnityEngine.UIElements.IMouseEventInternal.set_recomputeTopElementUnderMouse addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_IMouseEventInternal_set_recomputeTopElementUnderMouse(bool value) ;

/// @brief Method UnityEngine.UIElements.IMouseEventInternal.get_sourcePointerEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::UIElements::IPointerEvent UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent() ;

/// @brief Method UnityEngine.UIElements.IMouseEventInternal.set_sourcePointerEvent addr 0x0 size 0xffffffffffffffff virtual true final true
 void UnityEngine_UIElements_IMouseEventInternal_set_sourcePointerEvent(UnityEngine::UIElements::IPointerEvent value) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init() ;

/// @brief Method LocalInit addr 0x0 size 0xffffffffffffffff virtual false final false
 void LocalInit() ;

/// @brief Method get_currentTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::UIElements::IEventHandler get_currentTarget() ;

/// @brief Method set_currentTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_currentTarget(UnityEngine::UIElements::IEventHandler value) ;

/// @brief Method PreDispatch addr 0x0 size 0xffffffffffffffff virtual true final false
 void PreDispatch(UnityEngine::UIElements::IPanel panel) ;

/// @brief Method PostDispatch addr 0x0 size 0xffffffffffffffff virtual true final false
 void PostDispatch(UnityEngine::UIElements::IPanel panel) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::Event systemEvent) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::UIElements::IMouseEvent triggerEvent, UnityEngine::Vector2 mousePosition, bool recomputeTopElementUnderMouse) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::UIElements::IMouseEvent triggerEvent) ;

/// @brief Method GetPooled addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetPooled(UnityEngine::UIElements::IPointerEvent pointerEvent) ;

// Ctor Parameters []
explicit MouseEventBase_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::MouseEventBase_1, "UnityEngine.UIElements", "MouseEventBase`1");
