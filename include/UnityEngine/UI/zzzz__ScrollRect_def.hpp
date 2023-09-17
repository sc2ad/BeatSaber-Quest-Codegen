#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::UI {
class ILayoutGroup;
}
// Forward declare root types
namespace UnityEngine::UI {
struct ____UnityEngine__UI__ScrollRect__MovementType;
}
namespace UnityEngine::UI {
struct ____UnityEngine__UI__ScrollRect__ScrollbarVisibility;
}
namespace UnityEngine::UI {
class ScrollRect;
}
namespace UnityEngine::UI {
class ____UnityEngine__UI__ScrollRect__ScrollRectEvent;
}
// Type: ::MovementType
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13052))
// CS Name: UnityEngine.UI.ScrollRect::MovementType
struct CORDL_TYPE ____UnityEngine__UI__ScrollRect__MovementType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__ScrollRect__MovementType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__ScrollRect__MovementType(____UnityEngine__UI__ScrollRect__MovementType const&) = default;
                    constexpr ____UnityEngine__UI__ScrollRect__MovementType(____UnityEngine__UI__ScrollRect__MovementType&&) = default;
                    constexpr ____UnityEngine__UI__ScrollRect__MovementType& operator=(____UnityEngine__UI__ScrollRect__MovementType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__ScrollRect__MovementType& operator=(____UnityEngine__UI__ScrollRect__MovementType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__ScrollRect__MovementType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__ScrollRect__MovementType_Unwrapped : int32_t {
__Unrestricted = 0,
__Elastic = 1,
__Clamped = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__ScrollRect__MovementType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__ScrollRect__MovementType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unrestricted offset 0
static ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType const Unrestricted;

/// @brief Field Elastic offset 0
static ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType const Elastic;

/// @brief Field Clamped offset 0
static ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType const Clamped;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::ScrollbarVisibility
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13053))
// CS Name: UnityEngine.UI.ScrollRect::ScrollbarVisibility
struct CORDL_TYPE ____UnityEngine__UI__ScrollRect__ScrollbarVisibility : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__ScrollRect__ScrollbarVisibility(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__ScrollRect__ScrollbarVisibility(____UnityEngine__UI__ScrollRect__ScrollbarVisibility const&) = default;
                    constexpr ____UnityEngine__UI__ScrollRect__ScrollbarVisibility(____UnityEngine__UI__ScrollRect__ScrollbarVisibility&&) = default;
                    constexpr ____UnityEngine__UI__ScrollRect__ScrollbarVisibility& operator=(____UnityEngine__UI__ScrollRect__ScrollbarVisibility const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__ScrollRect__ScrollbarVisibility& operator=(____UnityEngine__UI__ScrollRect__ScrollbarVisibility&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__ScrollRect__ScrollbarVisibility(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__ScrollRect__ScrollbarVisibility_Unwrapped : int32_t {
__Permanent = 0,
__AutoHide = 1,
__AutoHideAndExpandViewport = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__ScrollRect__ScrollbarVisibility_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__ScrollRect__ScrollbarVisibility_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Permanent offset 0
static ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility const Permanent;

/// @brief Field AutoHide offset 0
static ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility const AutoHide;

/// @brief Field AutoHideAndExpandViewport offset 0
static ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility const AutoHideAndExpandViewport;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::ScrollRectEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(10184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13054))
// CS Name: UnityEngine.UI.ScrollRect::ScrollRectEvent
class CORDL_TYPE ____UnityEngine__UI__ScrollRect__ScrollRectEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__UI__ScrollRect__ScrollRectEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UI__ScrollRect__ScrollRectEvent", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UI__ScrollRect__ScrollRectEvent(____UnityEngine__UI__ScrollRect__ScrollRectEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UI__ScrollRect__ScrollRectEvent", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UI__ScrollRect__ScrollRectEvent(____UnityEngine__UI__ScrollRect__ScrollRectEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__ScrollRect__ScrollRectEvent(void* ptr) noexcept : ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>(ptr) {
}


  constexpr ____UnityEngine__UI__ScrollRect__ScrollRectEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UI__ScrollRect__ScrollRectEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UI__ScrollRect__ScrollRectEvent& operator=(____UnityEngine__UI__ScrollRect__ScrollRectEvent&& o) noexcept = default;
  constexpr ____UnityEngine__UI__ScrollRect__ScrollRectEvent& operator=(____UnityEngine__UI__ScrollRect__ScrollRectEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UI__ScrollRect__ScrollRectEvent() ;

/// @brief Method .ctor addr 0x2c0a380 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::ScrollRect
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13055))
// CS Name: UnityEngine.UI.ScrollRect
class CORDL_TYPE ScrollRect : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using ScrollRectEvent = ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollRectEvent;

using ScrollbarVisibility = ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility;

using MovementType = ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType;

/// @brief Convert operator to ::UnityEngine::EventSystems::IInitializePotentialDragHandler
constexpr operator  ::UnityEngine::EventSystems::IInitializePotentialDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IBeginDragHandler
constexpr operator  ::UnityEngine::EventSystems::IBeginDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEndDragHandler
constexpr operator  ::UnityEngine::EventSystems::IEndDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IDragHandler
constexpr operator  ::UnityEngine::EventSystems::IDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IScrollHandler
constexpr operator  ::UnityEngine::EventSystems::IScrollHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::UI::ICanvasElement
constexpr operator  ::UnityEngine::UI::ICanvasElement() const noexcept;

/// @brief Convert operator to ::UnityEngine::UI::ILayoutElement
constexpr operator  ::UnityEngine::UI::ILayoutElement() const noexcept;

/// @brief Convert operator to ::UnityEngine::UI::ILayoutGroup
constexpr operator  ::UnityEngine::UI::ILayoutGroup() const noexcept;

/// @brief Convert operator to ::UnityEngine::UI::ILayoutController
constexpr operator  ::UnityEngine::UI::ILayoutController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~ScrollRect() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollRect", modifiers: " const&", def_value: None }]
constexpr ScrollRect(ScrollRect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollRect", modifiers: "&&", def_value: None }]
constexpr ScrollRect(ScrollRect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScrollRect(void* ptr) noexcept : ::UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr ScrollRect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScrollRect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScrollRect& operator=(ScrollRect&& o) noexcept = default;
  constexpr ScrollRect& operator=(ScrollRect const& o) noexcept = default;
                


// Fields

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_Content, put=__set_m_Content))  m_Content;

constexpr void __set_m_Content(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_Content() const;

 bool __declspec(property(get=__get_m_Horizontal, put=__set_m_Horizontal))  m_Horizontal;

constexpr void __set_m_Horizontal(bool value) ;

constexpr bool __get_m_Horizontal() const;

 bool __declspec(property(get=__get_m_Vertical, put=__set_m_Vertical))  m_Vertical;

constexpr void __set_m_Vertical(bool value) ;

constexpr bool __get_m_Vertical() const;

 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType __declspec(property(get=__get_m_MovementType, put=__set_m_MovementType))  m_MovementType;

constexpr void __set_m_MovementType(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType __get_m_MovementType() const;

 float_t __declspec(property(get=__get_m_Elasticity, put=__set_m_Elasticity))  m_Elasticity;

constexpr void __set_m_Elasticity(float_t value) ;

constexpr float_t __get_m_Elasticity() const;

 bool __declspec(property(get=__get_m_Inertia, put=__set_m_Inertia))  m_Inertia;

constexpr void __set_m_Inertia(bool value) ;

constexpr bool __get_m_Inertia() const;

 float_t __declspec(property(get=__get_m_DecelerationRate, put=__set_m_DecelerationRate))  m_DecelerationRate;

constexpr void __set_m_DecelerationRate(float_t value) ;

constexpr float_t __get_m_DecelerationRate() const;

 float_t __declspec(property(get=__get_m_ScrollSensitivity, put=__set_m_ScrollSensitivity))  m_ScrollSensitivity;

constexpr void __set_m_ScrollSensitivity(float_t value) ;

constexpr float_t __get_m_ScrollSensitivity() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_Viewport, put=__set_m_Viewport))  m_Viewport;

constexpr void __set_m_Viewport(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_Viewport() const;

 ::UnityEngine::UI::Scrollbar __declspec(property(get=__get_m_HorizontalScrollbar, put=__set_m_HorizontalScrollbar))  m_HorizontalScrollbar;

constexpr void __set_m_HorizontalScrollbar(::UnityEngine::UI::Scrollbar value) ;

constexpr ::UnityEngine::UI::Scrollbar __get_m_HorizontalScrollbar() const;

 ::UnityEngine::UI::Scrollbar __declspec(property(get=__get_m_VerticalScrollbar, put=__set_m_VerticalScrollbar))  m_VerticalScrollbar;

constexpr void __set_m_VerticalScrollbar(::UnityEngine::UI::Scrollbar value) ;

constexpr ::UnityEngine::UI::Scrollbar __get_m_VerticalScrollbar() const;

 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility __declspec(property(get=__get_m_HorizontalScrollbarVisibility, put=__set_m_HorizontalScrollbarVisibility))  m_HorizontalScrollbarVisibility;

constexpr void __set_m_HorizontalScrollbarVisibility(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility __get_m_HorizontalScrollbarVisibility() const;

 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility __declspec(property(get=__get_m_VerticalScrollbarVisibility, put=__set_m_VerticalScrollbarVisibility))  m_VerticalScrollbarVisibility;

constexpr void __set_m_VerticalScrollbarVisibility(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility __get_m_VerticalScrollbarVisibility() const;

 float_t __declspec(property(get=__get_m_HorizontalScrollbarSpacing, put=__set_m_HorizontalScrollbarSpacing))  m_HorizontalScrollbarSpacing;

constexpr void __set_m_HorizontalScrollbarSpacing(float_t value) ;

constexpr float_t __get_m_HorizontalScrollbarSpacing() const;

 float_t __declspec(property(get=__get_m_VerticalScrollbarSpacing, put=__set_m_VerticalScrollbarSpacing))  m_VerticalScrollbarSpacing;

constexpr void __set_m_VerticalScrollbarSpacing(float_t value) ;

constexpr float_t __get_m_VerticalScrollbarSpacing() const;

 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollRectEvent __declspec(property(get=__get_m_OnValueChanged, put=__set_m_OnValueChanged))  m_OnValueChanged;

constexpr void __set_m_OnValueChanged(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollRectEvent value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollRectEvent __get_m_OnValueChanged() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_PointerStartLocalCursor, put=__set_m_PointerStartLocalCursor))  m_PointerStartLocalCursor;

constexpr void __set_m_PointerStartLocalCursor(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_PointerStartLocalCursor() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_ContentStartPosition, put=__set_m_ContentStartPosition))  m_ContentStartPosition;

constexpr void __set_m_ContentStartPosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_ContentStartPosition() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_ViewRect, put=__set_m_ViewRect))  m_ViewRect;

constexpr void __set_m_ViewRect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_ViewRect() const;

 ::UnityEngine::Bounds __declspec(property(get=__get_m_ContentBounds, put=__set_m_ContentBounds))  m_ContentBounds;

constexpr void __set_m_ContentBounds(::UnityEngine::Bounds value) ;

constexpr ::UnityEngine::Bounds __get_m_ContentBounds() const;

 ::UnityEngine::Bounds __declspec(property(get=__get_m_ViewBounds, put=__set_m_ViewBounds))  m_ViewBounds;

constexpr void __set_m_ViewBounds(::UnityEngine::Bounds value) ;

constexpr ::UnityEngine::Bounds __get_m_ViewBounds() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_Velocity, put=__set_m_Velocity))  m_Velocity;

constexpr void __set_m_Velocity(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_Velocity() const;

 bool __declspec(property(get=__get_m_Dragging, put=__set_m_Dragging))  m_Dragging;

constexpr void __set_m_Dragging(bool value) ;

constexpr bool __get_m_Dragging() const;

 bool __declspec(property(get=__get_m_Scrolling, put=__set_m_Scrolling))  m_Scrolling;

constexpr void __set_m_Scrolling(bool value) ;

constexpr bool __get_m_Scrolling() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_PrevPosition, put=__set_m_PrevPosition))  m_PrevPosition;

constexpr void __set_m_PrevPosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_PrevPosition() const;

 ::UnityEngine::Bounds __declspec(property(get=__get_m_PrevContentBounds, put=__set_m_PrevContentBounds))  m_PrevContentBounds;

constexpr void __set_m_PrevContentBounds(::UnityEngine::Bounds value) ;

constexpr ::UnityEngine::Bounds __get_m_PrevContentBounds() const;

 ::UnityEngine::Bounds __declspec(property(get=__get_m_PrevViewBounds, put=__set_m_PrevViewBounds))  m_PrevViewBounds;

constexpr void __set_m_PrevViewBounds(::UnityEngine::Bounds value) ;

constexpr ::UnityEngine::Bounds __get_m_PrevViewBounds() const;

 bool __declspec(property(get=__get_m_HasRebuiltLayout, put=__set_m_HasRebuiltLayout))  m_HasRebuiltLayout;

constexpr void __set_m_HasRebuiltLayout(bool value) ;

constexpr bool __get_m_HasRebuiltLayout() const;

 bool __declspec(property(get=__get_m_HSliderExpand, put=__set_m_HSliderExpand))  m_HSliderExpand;

constexpr void __set_m_HSliderExpand(bool value) ;

constexpr bool __get_m_HSliderExpand() const;

 bool __declspec(property(get=__get_m_VSliderExpand, put=__set_m_VSliderExpand))  m_VSliderExpand;

constexpr void __set_m_VSliderExpand(bool value) ;

constexpr bool __get_m_VSliderExpand() const;

 float_t __declspec(property(get=__get_m_HSliderHeight, put=__set_m_HSliderHeight))  m_HSliderHeight;

constexpr void __set_m_HSliderHeight(float_t value) ;

constexpr float_t __get_m_HSliderHeight() const;

 float_t __declspec(property(get=__get_m_VSliderWidth, put=__set_m_VSliderWidth))  m_VSliderWidth;

constexpr void __set_m_VSliderWidth(float_t value) ;

constexpr float_t __get_m_VSliderWidth() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_Rect, put=__set_m_Rect))  m_Rect;

constexpr void __set_m_Rect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_Rect() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_HorizontalScrollbarRect, put=__set_m_HorizontalScrollbarRect))  m_HorizontalScrollbarRect;

constexpr void __set_m_HorizontalScrollbarRect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_HorizontalScrollbarRect() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_VerticalScrollbarRect, put=__set_m_VerticalScrollbarRect))  m_VerticalScrollbarRect;

constexpr void __set_m_VerticalScrollbarRect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_VerticalScrollbarRect() const;

 ::UnityEngine::DrivenRectTransformTracker __declspec(property(get=__get_m_Tracker, put=__set_m_Tracker))  m_Tracker;

constexpr void __set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) ;

constexpr ::UnityEngine::DrivenRectTransformTracker __get_m_Tracker() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_m_Corners, put=__set_m_Corners))  m_Corners;

constexpr void __set_m_Corners(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_m_Corners() const;


// Properties

 ::UnityEngine::RectTransform __declspec(property(get=get_content, put=set_content))  content;

 bool __declspec(property(get=get_horizontal, put=set_horizontal))  horizontal;

 bool __declspec(property(get=get_vertical, put=set_vertical))  vertical;

 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType __declspec(property(get=get_movementType, put=set_movementType))  movementType;

 float_t __declspec(property(get=get_elasticity, put=set_elasticity))  elasticity;

 bool __declspec(property(get=get_inertia, put=set_inertia))  inertia;

 float_t __declspec(property(get=get_decelerationRate, put=set_decelerationRate))  decelerationRate;

 float_t __declspec(property(get=get_scrollSensitivity, put=set_scrollSensitivity))  scrollSensitivity;

 ::UnityEngine::RectTransform __declspec(property(get=get_viewport, put=set_viewport))  viewport;

 ::UnityEngine::UI::Scrollbar __declspec(property(get=get_horizontalScrollbar, put=set_horizontalScrollbar))  horizontalScrollbar;

 ::UnityEngine::UI::Scrollbar __declspec(property(get=get_verticalScrollbar, put=set_verticalScrollbar))  verticalScrollbar;

 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility __declspec(property(get=get_horizontalScrollbarVisibility, put=set_horizontalScrollbarVisibility))  horizontalScrollbarVisibility;

 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility __declspec(property(get=get_verticalScrollbarVisibility, put=set_verticalScrollbarVisibility))  verticalScrollbarVisibility;

 float_t __declspec(property(get=get_horizontalScrollbarSpacing, put=set_horizontalScrollbarSpacing))  horizontalScrollbarSpacing;

 float_t __declspec(property(get=get_verticalScrollbarSpacing, put=set_verticalScrollbarSpacing))  verticalScrollbarSpacing;

 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollRectEvent __declspec(property(get=get_onValueChanged, put=set_onValueChanged))  onValueChanged;

 ::UnityEngine::RectTransform __declspec(property(get=get_viewRect))  viewRect;

 ::UnityEngine::Vector2 __declspec(property(get=get_velocity, put=set_velocity))  velocity;

 ::UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;

 ::UnityEngine::Vector2 __declspec(property(get=get_normalizedPosition, put=set_normalizedPosition))  normalizedPosition;

 float_t __declspec(property(get=get_horizontalNormalizedPosition, put=set_horizontalNormalizedPosition))  horizontalNormalizedPosition;

 float_t __declspec(property(get=get_verticalNormalizedPosition, put=set_verticalNormalizedPosition))  verticalNormalizedPosition;

 bool __declspec(property(get=get_hScrollingNeeded))  hScrollingNeeded;

 bool __declspec(property(get=get_vScrollingNeeded))  vScrollingNeeded;

 float_t __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_preferredWidth))  preferredWidth;

 float_t __declspec(property(get=get_flexibleWidth))  flexibleWidth;

 float_t __declspec(property(get=get_minHeight))  minHeight;

 float_t __declspec(property(get=get_preferredHeight))  preferredHeight;

 float_t __declspec(property(get=get_flexibleHeight))  flexibleHeight;

 int32_t __declspec(property(get=get_layoutPriority))  layoutPriority;


// Methods

/// @brief Method get_content addr 0x2c09bc8 size 0x8 virtual false final false
 ::UnityEngine::RectTransform get_content() ;

/// @brief Method set_content addr 0x2c09bd0 size 0x8 virtual false final false
 void set_content(::UnityEngine::RectTransform value) ;

/// @brief Method get_horizontal addr 0x2c09bd8 size 0x8 virtual false final false
 bool get_horizontal() ;

/// @brief Method set_horizontal addr 0x2c09be0 size 0xc virtual false final false
 void set_horizontal(bool value) ;

/// @brief Method get_vertical addr 0x2c09bec size 0x8 virtual false final false
 bool get_vertical() ;

/// @brief Method set_vertical addr 0x2c09bf4 size 0xc virtual false final false
 void set_vertical(bool value) ;

/// @brief Method get_movementType addr 0x2c09c00 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType get_movementType() ;

/// @brief Method set_movementType addr 0x2c09c08 size 0x8 virtual false final false
 void set_movementType(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType value) ;

/// @brief Method get_elasticity addr 0x2c09c10 size 0x8 virtual false final false
 float_t get_elasticity() ;

/// @brief Method set_elasticity addr 0x2c09c18 size 0x8 virtual false final false
 void set_elasticity(float_t value) ;

/// @brief Method get_inertia addr 0x2c09c20 size 0x8 virtual false final false
 bool get_inertia() ;

/// @brief Method set_inertia addr 0x2c09c28 size 0xc virtual false final false
 void set_inertia(bool value) ;

/// @brief Method get_decelerationRate addr 0x2c09c34 size 0x8 virtual false final false
 float_t get_decelerationRate() ;

/// @brief Method set_decelerationRate addr 0x2c09c3c size 0x8 virtual false final false
 void set_decelerationRate(float_t value) ;

/// @brief Method get_scrollSensitivity addr 0x2c09c44 size 0x8 virtual false final false
 float_t get_scrollSensitivity() ;

/// @brief Method set_scrollSensitivity addr 0x2c09c4c size 0x8 virtual false final false
 void set_scrollSensitivity(float_t value) ;

/// @brief Method get_viewport addr 0x2c09c54 size 0x8 virtual false final false
 ::UnityEngine::RectTransform get_viewport() ;

/// @brief Method set_viewport addr 0x2c09c5c size 0x8 virtual false final false
 void set_viewport(::UnityEngine::RectTransform value) ;

/// @brief Method get_horizontalScrollbar addr 0x2c09d18 size 0x8 virtual false final false
 ::UnityEngine::UI::Scrollbar get_horizontalScrollbar() ;

/// @brief Method set_horizontalScrollbar addr 0x2c09d20 size 0x174 virtual false final false
 void set_horizontalScrollbar(::UnityEngine::UI::Scrollbar value) ;

/// @brief Method get_verticalScrollbar addr 0x2c09e94 size 0x8 virtual false final false
 ::UnityEngine::UI::Scrollbar get_verticalScrollbar() ;

/// @brief Method set_verticalScrollbar addr 0x2c09e9c size 0x174 virtual false final false
 void set_verticalScrollbar(::UnityEngine::UI::Scrollbar value) ;

/// @brief Method get_horizontalScrollbarVisibility addr 0x2c0a010 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility get_horizontalScrollbarVisibility() ;

/// @brief Method set_horizontalScrollbarVisibility addr 0x2c0a018 size 0x8 virtual false final false
 void set_horizontalScrollbarVisibility(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility value) ;

/// @brief Method get_verticalScrollbarVisibility addr 0x2c0a020 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility get_verticalScrollbarVisibility() ;

/// @brief Method set_verticalScrollbarVisibility addr 0x2c0a028 size 0x8 virtual false final false
 void set_verticalScrollbarVisibility(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility value) ;

/// @brief Method get_horizontalScrollbarSpacing addr 0x2c0a030 size 0x8 virtual false final false
 float_t get_horizontalScrollbarSpacing() ;

/// @brief Method set_horizontalScrollbarSpacing addr 0x2c0a038 size 0x8 virtual false final false
 void set_horizontalScrollbarSpacing(float_t value) ;

/// @brief Method get_verticalScrollbarSpacing addr 0x2c0a0c8 size 0x8 virtual false final false
 float_t get_verticalScrollbarSpacing() ;

/// @brief Method set_verticalScrollbarSpacing addr 0x2c0a0d0 size 0x8 virtual false final false
 void set_verticalScrollbarSpacing(float_t value) ;

/// @brief Method get_onValueChanged addr 0x2c0a0d8 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollRectEvent get_onValueChanged() ;

/// @brief Method set_onValueChanged addr 0x2c0a0e0 size 0x8 virtual false final false
 void set_onValueChanged(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollRectEvent value) ;

/// @brief Method get_viewRect addr 0x2c0a0e8 size 0xf0 virtual false final false
 ::UnityEngine::RectTransform get_viewRect() ;

/// @brief Method get_velocity addr 0x2c0a1d8 size 0x8 virtual false final false
 ::UnityEngine::Vector2 get_velocity() ;

/// @brief Method set_velocity addr 0x2c0a1e0 size 0x8 virtual false final false
 void set_velocity(::UnityEngine::Vector2 value) ;

/// @brief Method get_rectTransform addr 0x2c0a1e8 size 0x94 virtual false final false
 ::UnityEngine::RectTransform get_rectTransform() ;

// Ctor Parameters []
explicit ScrollRect() ;

/// @brief Method .ctor addr 0x2c0a27c size 0x104 virtual false final false
 void _ctor() ;

/// @brief Method Rebuild addr 0x2c0a3c8 size 0x88 virtual true final false
 void Rebuild(::UnityEngine::UI::CanvasUpdate executing) ;

/// @brief Method LayoutComplete addr 0x2c0af30 size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2c0af34 size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method UpdateCachedData addr 0x2c0a450 size 0x378 virtual false final false
 void UpdateCachedData() ;

/// @brief Method OnEnable addr 0x2c0af38 size 0x1ac virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c0b0e4 size 0x230 virtual true final false
 void OnDisable() ;

/// @brief Method IsActive addr 0x2c0b314 size 0x80 virtual true final false
 bool IsActive() ;

/// @brief Method EnsureLayoutHasRebuilt addr 0x2c0b394 size 0x74 virtual false final false
 void EnsureLayoutHasRebuilt() ;

/// @brief Method StopMovement addr 0x2c0b408 size 0x50 virtual true final false
 void StopMovement() ;

/// @brief Method OnScroll addr 0x2c0b458 size 0x178 virtual true final false
 void OnScroll(::UnityEngine::EventSystems::PointerEventData data) ;

/// @brief Method OnInitializePotentialDrag addr 0x2c0b600 size 0x60 virtual true final false
 void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnBeginDrag addr 0x2c0b660 size 0x128 virtual true final false
 void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnEndDrag addr 0x2c0b788 size 0x20 virtual true final false
 void OnEndDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x2c0b7a8 size 0x220 virtual true final false
 void OnDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method SetContentAnchoredPosition addr 0x2c0ba04 size 0xb4 virtual true final false
 void SetContentAnchoredPosition(::UnityEngine::Vector2 position) ;

/// @brief Method LateUpdate addr 0x2c0bab8 size 0x594 virtual true final false
 void LateUpdate() ;

/// @brief Method UpdatePrevData addr 0x2c0ae54 size 0xdc virtual false final false
 void UpdatePrevData() ;

/// @brief Method UpdateScrollbars addr 0x2c0ac7c size 0x1d8 virtual false final false
 void UpdateScrollbars(::UnityEngine::Vector2 offset) ;

/// @brief Method get_normalizedPosition addr 0x2c0c04c size 0x30 virtual false final false
 ::UnityEngine::Vector2 get_normalizedPosition() ;

/// @brief Method set_normalizedPosition addr 0x2c0c374 size 0x48 virtual false final false
 void set_normalizedPosition(::UnityEngine::Vector2 value) ;

/// @brief Method get_horizontalNormalizedPosition addr 0x2c0c0bc size 0x15c virtual false final false
 float_t get_horizontalNormalizedPosition() ;

/// @brief Method set_horizontalNormalizedPosition addr 0x2c0c3bc size 0x14 virtual false final false
 void set_horizontalNormalizedPosition(float_t value) ;

/// @brief Method get_verticalNormalizedPosition addr 0x2c0c218 size 0x15c virtual false final false
 float_t get_verticalNormalizedPosition() ;

/// @brief Method set_verticalNormalizedPosition addr 0x2c0c3d0 size 0x14 virtual false final false
 void set_verticalNormalizedPosition(float_t value) ;

/// @brief Method SetHorizontalNormalizedPosition addr 0x2c0c3e4 size 0x14 virtual false final false
 void SetHorizontalNormalizedPosition(float_t value) ;

/// @brief Method SetVerticalNormalizedPosition addr 0x2c0c3f8 size 0x14 virtual false final false
 void SetVerticalNormalizedPosition(float_t value) ;

/// @brief Method SetNormalizedPosition addr 0x2c0c40c size 0x2f8 virtual true final false
 void SetNormalizedPosition(float_t value, int32_t axis) ;

/// @brief Method RubberDelta addr 0x2c0b9c8 size 0x3c virtual false final false
static float_t RubberDelta(float_t overStretching, float_t viewSize) ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2c0c704 size 0x4 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method get_hScrollingNeeded addr 0x2c0c708 size 0x5c virtual false final false
 bool get_hScrollingNeeded() ;

/// @brief Method get_vScrollingNeeded addr 0x2c0c764 size 0x5c virtual false final false
 bool get_vScrollingNeeded() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2c0c7c0 size 0x4 virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2c0c7c4 size 0x4 virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method get_minWidth addr 0x2c0c7c8 size 0x8 virtual true final false
 float_t get_minWidth() ;

/// @brief Method get_preferredWidth addr 0x2c0c7d0 size 0x8 virtual true final false
 float_t get_preferredWidth() ;

/// @brief Method get_flexibleWidth addr 0x2c0c7d8 size 0x8 virtual true final false
 float_t get_flexibleWidth() ;

/// @brief Method get_minHeight addr 0x2c0c7e0 size 0x8 virtual true final false
 float_t get_minHeight() ;

/// @brief Method get_preferredHeight addr 0x2c0c7e8 size 0x8 virtual true final false
 float_t get_preferredHeight() ;

/// @brief Method get_flexibleHeight addr 0x2c0c7f0 size 0x8 virtual true final false
 float_t get_flexibleHeight() ;

/// @brief Method get_layoutPriority addr 0x2c0c7f8 size 0x8 virtual true final false
 int32_t get_layoutPriority() ;

/// @brief Method SetLayoutHorizontal addr 0x2c0c800 size 0x558 virtual true final false
 void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical addr 0x2c0ce54 size 0xdc virtual true final false
 void SetLayoutVertical() ;

/// @brief Method UpdateScrollbarVisibility addr 0x2c0c07c size 0x40 virtual false final false
 void UpdateScrollbarVisibility() ;

/// @brief Method UpdateOneScrollbarVisibility addr 0x2c0d184 size 0xf4 virtual false final false
static void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility scrollbarVisibility, ::UnityEngine::UI::Scrollbar scrollbar) ;

/// @brief Method UpdateScrollbarLayout addr 0x2c0cf30 size 0x254 virtual false final false
 void UpdateScrollbarLayout() ;

/// @brief Method UpdateBounds addr 0x2c0a7c8 size 0x4b4 virtual false final false
 void UpdateBounds() ;

/// @brief Method AdjustBounds addr 0x2c0d278 size 0xac virtual false final false
static void AdjustBounds(ByRef<::UnityEngine::Bounds> viewBounds, ByRef<::UnityEngine::Vector2> contentPivot, ByRef<::UnityEngine::Vector3> contentSize, ByRef<::UnityEngine::Vector3> contentPos) ;

/// @brief Method GetBounds addr 0x2c0cd58 size 0xfc virtual false final false
 ::UnityEngine::Bounds GetBounds() ;

/// @brief Method InternalGetBounds addr 0x2c0d324 size 0x158 virtual false final false
static ::UnityEngine::Bounds InternalGetBounds(::ArrayW<::UnityEngine::Vector3> corners, ByRef<::UnityEngine::Matrix4x4> viewWorldToLocalMatrix) ;

/// @brief Method CalculateOffset addr 0x2c0b5d0 size 0x30 virtual false final false
 ::UnityEngine::Vector2 CalculateOffset(::UnityEngine::Vector2 delta) ;

/// @brief Method InternalCalculateOffset addr 0x2c0d47c size 0x184 virtual false final false
static ::UnityEngine::Vector2 InternalCalculateOffset(ByRef<::UnityEngine::Bounds> viewBounds, ByRef<::UnityEngine::Bounds> contentBounds, bool horizontal, bool vertical, ::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType movementType, ByRef<::UnityEngine::Vector2> delta) ;

/// @brief Method SetDirty addr 0x2c0a040 size 0x88 virtual false final false
 void SetDirty() ;

/// @brief Method SetDirtyCaching addr 0x2c09c64 size 0xb4 virtual false final false
 void SetDirtyCaching() ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2c0d600 size 0x8 virtual true final true
 ::UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__MovementType, "UnityEngine.UI", "ScrollRect/MovementType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollbarVisibility, "UnityEngine.UI", "ScrollRect/ScrollbarVisibility");
NEED_NO_BOX(::UnityEngine::UI::ScrollRect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ScrollRect, "UnityEngine.UI", "ScrollRect");
NEED_NO_BOX(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollRectEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__ScrollRect__ScrollRectEvent, "UnityEngine.UI", "ScrollRect/ScrollRectEvent");
