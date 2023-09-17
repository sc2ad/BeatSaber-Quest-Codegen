#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class Scroller;
}
namespace UnityEngine::UIElements {
struct ScrollViewMode;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
struct ScrollerVisibility;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class WheelEvent;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__ScrollView__NestedInteractionKind;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__ScrollView__TouchScrollBehavior;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__ScrollView__TouchScrollingResult;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__ScrollView__UxmlFactory;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__ScrollView__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7140))
// CS Name: UnityEngine.UIElements.ScrollView::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__ScrollView__UxmlTraits : public ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~____UnityEngine__UIElements__ScrollView__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ScrollView__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__ScrollView__UxmlTraits(____UnityEngine__UIElements__ScrollView__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ScrollView__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__ScrollView__UxmlTraits(____UnityEngine__UIElements__ScrollView__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__ScrollView__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr ____UnityEngine__UIElements__ScrollView__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ScrollView__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ScrollView__UxmlTraits& operator=(____UnityEngine__UIElements__ScrollView__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__ScrollView__UxmlTraits& operator=(____UnityEngine__UIElements__ScrollView__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode> __declspec(property(get=__get_m_ScrollViewMode, put=__set_m_ScrollViewMode))  m_ScrollViewMode;

constexpr void __set_m_ScrollViewMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode> value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode> __get_m_ScrollViewMode() const;

 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind> __declspec(property(get=__get_m_NestedInteractionKind, put=__set_m_NestedInteractionKind))  m_NestedInteractionKind;

constexpr void __set_m_NestedInteractionKind(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind> value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind> __get_m_NestedInteractionKind() const;

 ::UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_ShowHorizontal, put=__set_m_ShowHorizontal))  m_ShowHorizontal;

constexpr void __set_m_ShowHorizontal(::UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_ShowHorizontal() const;

 ::UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_ShowVertical, put=__set_m_ShowVertical))  m_ShowVertical;

constexpr void __set_m_ShowVertical(::UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_ShowVertical() const;

 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> __declspec(property(get=__get_m_HorizontalScrollerVisibility, put=__set_m_HorizontalScrollerVisibility))  m_HorizontalScrollerVisibility;

constexpr void __set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> __get_m_HorizontalScrollerVisibility() const;

 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> __declspec(property(get=__get_m_VerticalScrollerVisibility, put=__set_m_VerticalScrollerVisibility))  m_VerticalScrollerVisibility;

constexpr void __set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility> __get_m_VerticalScrollerVisibility() const;

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_HorizontalPageSize, put=__set_m_HorizontalPageSize))  m_HorizontalPageSize;

constexpr void __set_m_HorizontalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_HorizontalPageSize() const;

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_VerticalPageSize, put=__set_m_VerticalPageSize))  m_VerticalPageSize;

constexpr void __set_m_VerticalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_VerticalPageSize() const;

 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior> __declspec(property(get=__get_m_TouchScrollBehavior, put=__set_m_TouchScrollBehavior))  m_TouchScrollBehavior;

constexpr void __set_m_TouchScrollBehavior(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior> value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior> __get_m_TouchScrollBehavior() const;

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_ScrollDecelerationRate, put=__set_m_ScrollDecelerationRate))  m_ScrollDecelerationRate;

constexpr void __set_m_ScrollDecelerationRate(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_ScrollDecelerationRate() const;

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_Elasticity, put=__set_m_Elasticity))  m_Elasticity;

constexpr void __set_m_Elasticity(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_Elasticity() const;


// Methods

/// @brief Method Init addr 0x2caffe0 size 0x390 virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__ScrollView__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cb0370 size 0x408 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ScrollView
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7144))
// CS Name: UnityEngine.UIElements.ScrollView
class CORDL_TYPE ScrollView : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
using TouchScrollingResult = ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult;

using NestedInteractionKind = ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind;

using TouchScrollBehavior = ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior;

using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x468};

virtual ~ScrollView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: " const&", def_value: None }]
constexpr ScrollView(ScrollView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "&&", def_value: None }]
constexpr ScrollView(ScrollView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScrollView(void* ptr) noexcept : ::UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr ScrollView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScrollView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScrollView& operator=(ScrollView&& o) noexcept = default;
  constexpr ScrollView& operator=(ScrollView const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::ScrollerVisibility __declspec(property(get=__get_m_HorizontalScrollerVisibility, put=__set_m_HorizontalScrollerVisibility))  m_HorizontalScrollerVisibility;

constexpr void __set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) ;

constexpr ::UnityEngine::UIElements::ScrollerVisibility __get_m_HorizontalScrollerVisibility() const;

 ::UnityEngine::UIElements::ScrollerVisibility __declspec(property(get=__get_m_VerticalScrollerVisibility, put=__set_m_VerticalScrollerVisibility))  m_VerticalScrollerVisibility;

constexpr void __set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) ;

constexpr ::UnityEngine::UIElements::ScrollerVisibility __get_m_VerticalScrollerVisibility() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_AttachedRootVisualContainer, put=__set_m_AttachedRootVisualContainer))  m_AttachedRootVisualContainer;

constexpr void __set_m_AttachedRootVisualContainer(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_AttachedRootVisualContainer() const;

 float_t __declspec(property(get=__get_m_SingleLineHeight, put=__set_m_SingleLineHeight))  m_SingleLineHeight;

constexpr void __set_m_SingleLineHeight(float_t value) ;

constexpr float_t __get_m_SingleLineHeight() const;

 float_t __declspec(property(get=__get_m_HorizontalPageSize, put=__set_m_HorizontalPageSize))  m_HorizontalPageSize;

constexpr void __set_m_HorizontalPageSize(float_t value) ;

constexpr float_t __get_m_HorizontalPageSize() const;

 float_t __declspec(property(get=__get_m_VerticalPageSize, put=__set_m_VerticalPageSize))  m_VerticalPageSize;

constexpr void __set_m_VerticalPageSize(float_t value) ;

constexpr float_t __get_m_VerticalPageSize() const;

static float_t __declspec(property(get=__get_k_DefaultScrollDecelerationRate, put=__set_k_DefaultScrollDecelerationRate))  k_DefaultScrollDecelerationRate;

static void __set_k_DefaultScrollDecelerationRate(float_t value) ;

static float_t __get_k_DefaultScrollDecelerationRate() ;

 float_t __declspec(property(get=__get_m_ScrollDecelerationRate, put=__set_m_ScrollDecelerationRate))  m_ScrollDecelerationRate;

constexpr void __set_m_ScrollDecelerationRate(float_t value) ;

constexpr float_t __get_m_ScrollDecelerationRate() const;

static float_t __declspec(property(get=__get_k_DefaultElasticity, put=__set_k_DefaultElasticity))  k_DefaultElasticity;

static void __set_k_DefaultElasticity(float_t value) ;

static float_t __get_k_DefaultElasticity() ;

 float_t __declspec(property(get=__get_m_Elasticity, put=__set_m_Elasticity))  m_Elasticity;

constexpr void __set_m_Elasticity(float_t value) ;

constexpr float_t __get_m_Elasticity() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior __declspec(property(get=__get_m_TouchScrollBehavior, put=__set_m_TouchScrollBehavior))  m_TouchScrollBehavior;

constexpr void __set_m_TouchScrollBehavior(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior __get_m_TouchScrollBehavior() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind __declspec(property(get=__get_m_NestedInteractionKind, put=__set_m_NestedInteractionKind))  m_NestedInteractionKind;

constexpr void __set_m_NestedInteractionKind(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind __get_m_NestedInteractionKind() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__contentViewport_k__BackingField, put=__set__contentViewport_k__BackingField))  _contentViewport_k__BackingField;

constexpr void __set__contentViewport_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__contentViewport_k__BackingField() const;

 ::UnityEngine::UIElements::Scroller __declspec(property(get=__get__horizontalScroller_k__BackingField, put=__set__horizontalScroller_k__BackingField))  _horizontalScroller_k__BackingField;

constexpr void __set__horizontalScroller_k__BackingField(::UnityEngine::UIElements::Scroller value) ;

constexpr ::UnityEngine::UIElements::Scroller __get__horizontalScroller_k__BackingField() const;

 ::UnityEngine::UIElements::Scroller __declspec(property(get=__get__verticalScroller_k__BackingField, put=__set__verticalScroller_k__BackingField))  _verticalScroller_k__BackingField;

constexpr void __set__verticalScroller_k__BackingField(::UnityEngine::UIElements::Scroller value) ;

constexpr ::UnityEngine::UIElements::Scroller __get__verticalScroller_k__BackingField() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_ContentContainer, put=__set_m_ContentContainer))  m_ContentContainer;

constexpr void __set_m_ContentContainer(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_ContentContainer() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_ContentAndVerticalScrollContainer, put=__set_m_ContentAndVerticalScrollContainer))  m_ContentAndVerticalScrollContainer;

constexpr void __set_m_ContentAndVerticalScrollContainer(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_ContentAndVerticalScrollContainer() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_viewportUssClassName, put=__set_viewportUssClassName))  viewportUssClassName;

static void __set_viewportUssClassName(::StringW value) ;

static ::StringW __get_viewportUssClassName() ;

static ::StringW __declspec(property(get=__get_contentAndVerticalScrollUssClassName, put=__set_contentAndVerticalScrollUssClassName))  contentAndVerticalScrollUssClassName;

static void __set_contentAndVerticalScrollUssClassName(::StringW value) ;

static ::StringW __get_contentAndVerticalScrollUssClassName() ;

static ::StringW __declspec(property(get=__get_contentUssClassName, put=__set_contentUssClassName))  contentUssClassName;

static void __set_contentUssClassName(::StringW value) ;

static ::StringW __get_contentUssClassName() ;

static ::StringW __declspec(property(get=__get_hScrollerUssClassName, put=__set_hScrollerUssClassName))  hScrollerUssClassName;

static void __set_hScrollerUssClassName(::StringW value) ;

static ::StringW __get_hScrollerUssClassName() ;

static ::StringW __declspec(property(get=__get_vScrollerUssClassName, put=__set_vScrollerUssClassName))  vScrollerUssClassName;

static void __set_vScrollerUssClassName(::StringW value) ;

static ::StringW __get_vScrollerUssClassName() ;

static ::StringW __declspec(property(get=__get_horizontalVariantUssClassName, put=__set_horizontalVariantUssClassName))  horizontalVariantUssClassName;

static void __set_horizontalVariantUssClassName(::StringW value) ;

static ::StringW __get_horizontalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_verticalVariantUssClassName, put=__set_verticalVariantUssClassName))  verticalVariantUssClassName;

static void __set_verticalVariantUssClassName(::StringW value) ;

static ::StringW __get_verticalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_verticalHorizontalVariantUssClassName, put=__set_verticalHorizontalVariantUssClassName))  verticalHorizontalVariantUssClassName;

static void __set_verticalHorizontalVariantUssClassName(::StringW value) ;

static ::StringW __get_verticalHorizontalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_scrollVariantUssClassName, put=__set_scrollVariantUssClassName))  scrollVariantUssClassName;

static void __set_scrollVariantUssClassName(::StringW value) ;

static ::StringW __get_scrollVariantUssClassName() ;

 ::UnityEngine::UIElements::ScrollViewMode __declspec(property(get=__get_m_Mode, put=__set_m_Mode))  m_Mode;

constexpr void __set_m_Mode(::UnityEngine::UIElements::ScrollViewMode value) ;

constexpr ::UnityEngine::UIElements::ScrollViewMode __get_m_Mode() const;

 int32_t __declspec(property(get=__get_m_ScrollingPointerId, put=__set_m_ScrollingPointerId))  m_ScrollingPointerId;

constexpr void __set_m_ScrollingPointerId(int32_t value) ;

constexpr int32_t __get_m_ScrollingPointerId() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_StartPosition, put=__set_m_StartPosition))  m_StartPosition;

constexpr void __set_m_StartPosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_StartPosition() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_PointerStartPosition, put=__set_m_PointerStartPosition))  m_PointerStartPosition;

constexpr void __set_m_PointerStartPosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_PointerStartPosition() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_Velocity, put=__set_m_Velocity))  m_Velocity;

constexpr void __set_m_Velocity(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_Velocity() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_SpringBackVelocity, put=__set_m_SpringBackVelocity))  m_SpringBackVelocity;

constexpr void __set_m_SpringBackVelocity(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_SpringBackVelocity() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_LowBounds, put=__set_m_LowBounds))  m_LowBounds;

constexpr void __set_m_LowBounds(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_LowBounds() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_HighBounds, put=__set_m_HighBounds))  m_HighBounds;

constexpr void __set_m_HighBounds(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_HighBounds() const;

 float_t __declspec(property(get=__get_m_LastVelocityLerpTime, put=__set_m_LastVelocityLerpTime))  m_LastVelocityLerpTime;

constexpr void __set_m_LastVelocityLerpTime(float_t value) ;

constexpr float_t __get_m_LastVelocityLerpTime() const;

 bool __declspec(property(get=__get_m_StartedMoving, put=__set_m_StartedMoving))  m_StartedMoving;

constexpr void __set_m_StartedMoving(bool value) ;

constexpr bool __get_m_StartedMoving() const;

 bool __declspec(property(get=__get_m_TouchStoppedVelocity, put=__set_m_TouchStoppedVelocity))  m_TouchStoppedVelocity;

constexpr void __set_m_TouchStoppedVelocity(bool value) ;

constexpr bool __get_m_TouchStoppedVelocity() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CapturedTarget, put=__set_m_CapturedTarget))  m_CapturedTarget;

constexpr void __set_m_CapturedTarget(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_CapturedTarget() const;

 ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent> __declspec(property(get=__get_m_CapturedTargetPointerMoveCallback, put=__set_m_CapturedTargetPointerMoveCallback))  m_CapturedTargetPointerMoveCallback;

constexpr void __set_m_CapturedTargetPointerMoveCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent> value) ;

constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent> __get_m_CapturedTargetPointerMoveCallback() const;

 ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent> __declspec(property(get=__get_m_CapturedTargetPointerUpCallback, put=__set_m_CapturedTargetPointerUpCallback))  m_CapturedTargetPointerUpCallback;

constexpr void __set_m_CapturedTargetPointerUpCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent> value) ;

constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent> __get_m_CapturedTargetPointerUpCallback() const;

 ::UnityEngine::UIElements::IVisualElementScheduledItem __declspec(property(get=__get_m_PostPointerUpAnimation, put=__set_m_PostPointerUpAnimation))  m_PostPointerUpAnimation;

constexpr void __set_m_PostPointerUpAnimation(::UnityEngine::UIElements::IVisualElementScheduledItem value) ;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem __get_m_PostPointerUpAnimation() const;


// Properties

 ::UnityEngine::UIElements::ScrollerVisibility __declspec(property(get=get_horizontalScrollerVisibility, put=set_horizontalScrollerVisibility))  horizontalScrollerVisibility;

 ::UnityEngine::UIElements::ScrollerVisibility __declspec(property(get=get_verticalScrollerVisibility, put=set_verticalScrollerVisibility))  verticalScrollerVisibility;

 bool __declspec(property(put=set_showHorizontal))  showHorizontal;

 bool __declspec(property(put=set_showVertical))  showVertical;

 bool __declspec(property(get=get_needsHorizontal))  needsHorizontal;

 bool __declspec(property(get=get_needsVertical))  needsVertical;

 bool __declspec(property(get=get_isVerticalScrollDisplayed))  isVerticalScrollDisplayed;

 bool __declspec(property(get=get_isHorizontalScrollDisplayed))  isHorizontalScrollDisplayed;

 ::UnityEngine::Vector2 __declspec(property(get=get_scrollOffset, put=set_scrollOffset))  scrollOffset;

 float_t __declspec(property(put=set_horizontalPageSize))  horizontalPageSize;

 float_t __declspec(property(put=set_verticalPageSize))  verticalPageSize;

 float_t __declspec(property(get=get_scrollableWidth))  scrollableWidth;

 float_t __declspec(property(get=get_scrollableHeight))  scrollableHeight;

 bool __declspec(property(get=get_hasInertia))  hasInertia;

 float_t __declspec(property(get=get_scrollDecelerationRate, put=set_scrollDecelerationRate))  scrollDecelerationRate;

 float_t __declspec(property(get=get_elasticity, put=set_elasticity))  elasticity;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior __declspec(property(get=get_touchScrollBehavior, put=set_touchScrollBehavior))  touchScrollBehavior;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind __declspec(property(get=get_nestedInteractionKind, put=set_nestedInteractionKind))  nestedInteractionKind;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_contentViewport, put=set_contentViewport))  contentViewport;

 ::UnityEngine::UIElements::Scroller __declspec(property(get=get_horizontalScroller, put=set_horizontalScroller))  horizontalScroller;

 ::UnityEngine::UIElements::Scroller __declspec(property(get=get_verticalScroller, put=set_verticalScroller))  verticalScroller;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_contentContainer))  contentContainer;

 ::UnityEngine::UIElements::ScrollViewMode __declspec(property(get=get_mode, put=set_mode))  mode;


// Methods

/// @brief Method get_horizontalScrollerVisibility addr 0x2ca9df8 size 0x8 virtual false final false
 ::UnityEngine::UIElements::ScrollerVisibility get_horizontalScrollerVisibility() ;

/// @brief Method set_horizontalScrollerVisibility addr 0x2ca9e00 size 0x8c virtual false final false
 void set_horizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) ;

/// @brief Method get_verticalScrollerVisibility addr 0x2caa424 size 0x8 virtual false final false
 ::UnityEngine::UIElements::ScrollerVisibility get_verticalScrollerVisibility() ;

/// @brief Method set_verticalScrollerVisibility addr 0x2caa42c size 0x90 virtual false final false
 void set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value) ;

/// @brief Method set_showHorizontal addr 0x2caa4bc size 0x1c virtual false final false
 void set_showHorizontal(bool value) ;

/// @brief Method set_showVertical addr 0x2caa4d8 size 0x1c virtual false final false
 void set_showVertical(bool value) ;

/// @brief Method get_needsHorizontal addr 0x2ca9e8c size 0x40 virtual false final false
 bool get_needsHorizontal() ;

/// @brief Method get_needsVertical addr 0x2ca9ecc size 0x40 virtual false final false
 bool get_needsVertical() ;

/// @brief Method get_isVerticalScrollDisplayed addr 0x2caa5fc size 0xc0 virtual false final false
 bool get_isVerticalScrollDisplayed() ;

/// @brief Method get_isHorizontalScrollDisplayed addr 0x2caa6bc size 0xc0 virtual false final false
 bool get_isHorizontalScrollDisplayed() ;

/// @brief Method get_scrollOffset addr 0x2caa77c size 0x48 virtual false final false
 ::UnityEngine::Vector2 get_scrollOffset() ;

/// @brief Method set_scrollOffset addr 0x2caa7c4 size 0x84 virtual false final false
 void set_scrollOffset(::UnityEngine::Vector2 value) ;

/// @brief Method set_horizontalPageSize addr 0x2caaab0 size 0x8 virtual false final false
 void set_horizontalPageSize(float_t value) ;

/// @brief Method set_verticalPageSize addr 0x2caacc4 size 0x8 virtual false final false
 void set_verticalPageSize(float_t value) ;

/// @brief Method get_scrollableWidth addr 0x2caa4f4 size 0x84 virtual false final false
 float_t get_scrollableWidth() ;

/// @brief Method get_scrollableHeight addr 0x2caa578 size 0x84 virtual false final false
 float_t get_scrollableHeight() ;

/// @brief Method get_hasInertia addr 0x2caaed8 size 0x10 virtual false final false
 bool get_hasInertia() ;

/// @brief Method get_scrollDecelerationRate addr 0x2caaee8 size 0x8 virtual false final false
 float_t get_scrollDecelerationRate() ;

/// @brief Method set_scrollDecelerationRate addr 0x2caaef0 size 0x10 virtual false final false
 void set_scrollDecelerationRate(float_t value) ;

/// @brief Method get_elasticity addr 0x2caaf00 size 0x8 virtual false final false
 float_t get_elasticity() ;

/// @brief Method set_elasticity addr 0x2caaf08 size 0x10 virtual false final false
 void set_elasticity(float_t value) ;

/// @brief Method get_touchScrollBehavior addr 0x2caaf18 size 0x8 virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior get_touchScrollBehavior() ;

/// @brief Method set_touchScrollBehavior addr 0x2caaf20 size 0x98 virtual false final false
 void set_touchScrollBehavior(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior value) ;

/// @brief Method get_nestedInteractionKind addr 0x2caafb8 size 0x8 virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind get_nestedInteractionKind() ;

/// @brief Method set_nestedInteractionKind addr 0x2caafc0 size 0x8 virtual false final false
 void set_nestedInteractionKind(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind value) ;

/// @brief Method OnHorizontalScrollDragElementChanged addr 0x2caafc8 size 0x94 virtual false final false
 void OnHorizontalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method OnVerticalScrollDragElementChanged addr 0x2cab05c size 0x94 virtual false final false
 void OnVerticalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method UpdateHorizontalSliderPageSize addr 0x2caaab8 size 0x20c virtual false final false
 void UpdateHorizontalSliderPageSize() ;

/// @brief Method UpdateVerticalSliderPageSize addr 0x2caaccc size 0x20c virtual false final false
 void UpdateVerticalSliderPageSize() ;

/// @brief Method UpdateContentViewTransform addr 0x2caa848 size 0x268 virtual false final false
 void UpdateContentViewTransform() ;

/// @brief Method ScrollTo addr 0x2cab0f0 size 0x188 virtual false final false
 void ScrollTo(::UnityEngine::UIElements::VisualElement child) ;

/// @brief Method GetXDeltaOffset addr 0x2cab4f0 size 0x278 virtual false final false
 float_t GetXDeltaOffset(::UnityEngine::UIElements::VisualElement child) ;

/// @brief Method GetYDeltaOffset addr 0x2cab278 size 0x278 virtual false final false
 float_t GetYDeltaOffset(::UnityEngine::UIElements::VisualElement child) ;

/// @brief Method GetDeltaDistance addr 0x2cab768 size 0x50 virtual false final false
 float_t GetDeltaDistance(float_t viewMin, float_t viewMax, float_t childBoundaryMin, float_t childBoundaryMax) ;

/// @brief Method get_contentViewport addr 0x2cab7b8 size 0x8 virtual false final false
 ::UnityEngine::UIElements::VisualElement get_contentViewport() ;

/// @brief Method set_contentViewport addr 0x2cab7c0 size 0x8 virtual false final false
 void set_contentViewport(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_horizontalScroller addr 0x2cab7c8 size 0x8 virtual false final false
 ::UnityEngine::UIElements::Scroller get_horizontalScroller() ;

/// @brief Method set_horizontalScroller addr 0x2cab7d0 size 0x8 virtual false final false
 void set_horizontalScroller(::UnityEngine::UIElements::Scroller value) ;

/// @brief Method get_verticalScroller addr 0x2cab7d8 size 0x8 virtual false final false
 ::UnityEngine::UIElements::Scroller get_verticalScroller() ;

/// @brief Method set_verticalScroller addr 0x2cab7e0 size 0x8 virtual false final false
 void set_verticalScroller(::UnityEngine::UIElements::Scroller value) ;

/// @brief Method get_contentContainer addr 0x2cab7e8 size 0x8 virtual true final false
 ::UnityEngine::UIElements::VisualElement get_contentContainer() ;

// Ctor Parameters []
explicit ScrollView() ;

/// @brief Method .ctor addr 0x2cab7f0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "scrollViewMode", ty: "::UnityEngine::UIElements::ScrollViewMode", modifiers: "", def_value: None }]
explicit ScrollView(::UnityEngine::UIElements::ScrollViewMode scrollViewMode) ;

/// @brief Method .ctor addr 0x2cab7f8 size 0xa00 virtual false final false
 void _ctor(::UnityEngine::UIElements::ScrollViewMode scrollViewMode) ;

/// @brief Method get_mode addr 0x2cac360 size 0x8 virtual false final false
 ::UnityEngine::UIElements::ScrollViewMode get_mode() ;

/// @brief Method set_mode addr 0x2cac368 size 0x14 virtual false final false
 void set_mode(::UnityEngine::UIElements::ScrollViewMode value) ;

/// @brief Method SetScrollViewMode addr 0x2cac1f8 size 0x168 virtual false final false
 void SetScrollViewMode(::UnityEngine::UIElements::ScrollViewMode mode) ;

/// @brief Method OnAttachToPanel addr 0x2cac37c size 0x46c virtual false final false
 void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent evt) ;

/// @brief Method OnDetachFromPanel addr 0x2cac8f4 size 0x460 virtual false final false
 void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent evt) ;

/// @brief Method OnPointerCapture addr 0x2cacd54 size 0xfc virtual false final false
 void OnPointerCapture(::UnityEngine::UIElements::PointerCaptureEvent evt) ;

/// @brief Method OnPointerCaptureOut addr 0x2cace50 size 0xc0 virtual false final false
 void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent evt) ;

/// @brief Method OnGeometryChanged addr 0x2cad1dc size 0x154 virtual false final false
 void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method ComputeElasticOffset addr 0x2cad330 size 0xec virtual false final false
static float_t ComputeElasticOffset(float_t deltaPointer, float_t initialScrollOffset, float_t lowLimit, float_t hardLowLimit, float_t highLimit, float_t hardHighLimit) ;

/// @brief Method ComputeInitialSpringBackVelocity addr 0x2cad41c size 0xfc virtual false final false
 void ComputeInitialSpringBackVelocity() ;

/// @brief Method SpringBack addr 0x2cad518 size 0x18c virtual false final false
 void SpringBack() ;

/// @brief Method ApplyScrollInertia addr 0x2cad6a4 size 0x1b8 virtual false final false
 void ApplyScrollInertia() ;

/// @brief Method PostPointerUpAnimation addr 0x2cad85c size 0x150 virtual false final false
 void PostPointerUpAnimation() ;

/// @brief Method OnPointerDown addr 0x2cad9ac size 0x238 virtual false final false
 void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent evt) ;

/// @brief Method OnPointerMove addr 0x2cadd20 size 0x1fc virtual false final false
 void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent evt) ;

/// @brief Method OnPointerCancel addr 0x2cae308 size 0x60 virtual false final false
 void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent evt) ;

/// @brief Method OnPointerUp addr 0x2cae368 size 0xa8 virtual false final false
 void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent evt) ;

/// @brief Method InitTouchScrolling addr 0x2cadbe4 size 0x13c virtual false final false
 void InitTouchScrolling(::UnityEngine::Vector2 position) ;

/// @brief Method ComputeTouchScrolling addr 0x2cadf1c size 0x3ec virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult ComputeTouchScrolling(::UnityEngine::Vector2 position) ;

/// @brief Method ApplyTouchScrolling addr 0x2cae410 size 0x214 virtual false final false
 bool ApplyTouchScrolling(::UnityEngine::Vector2 newScrollOffset) ;

/// @brief Method ReleaseScrolling addr 0x2cacf10 size 0x2cc virtual false final false
 bool ReleaseScrolling(int32_t pointerId, ::UnityEngine::UIElements::IEventHandler target) ;

/// @brief Method AdjustScrollers addr 0x2cae624 size 0x19c virtual false final false
 void AdjustScrollers() ;

/// @brief Method UpdateScrollers addr 0x2ca9f0c size 0x518 virtual false final false
 void UpdateScrollers(bool displayHorizontal, bool displayVertical) ;

/// @brief Method OnScrollersGeometryChanged addr 0x2cae7c0 size 0x1b0 virtual false final false
 void OnScrollersGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method OnScrollWheel addr 0x2cae970 size 0x38c virtual false final false
 void OnScrollWheel(::UnityEngine::UIElements::WheelEvent evt) ;

/// @brief Method OnRootCustomStyleResolved addr 0x2caecfc size 0x4 virtual false final false
 void OnRootCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent evt) ;

/// @brief Method ReadSingleLineHeight addr 0x2cac7e8 size 0x10c virtual false final false
 void ReadSingleLineHeight() ;

/// @brief Method <.ctor>b__103_0 addr 0x2caef38 size 0x30 virtual false final false
 void __ctor_b__103_0(float_t value) ;

/// @brief Method <.ctor>b__103_1 addr 0x2caef68 size 0x1030 virtual false final false
 void __ctor_b__103_1(float_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5101 }), TypeDefinitionIndex(TypeDefinitionIndex(7140)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(7144))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7139))
// CS Name: UnityEngine.UIElements.ScrollView::UxmlFactory
class CORDL_TYPE ____UnityEngine__UIElements__ScrollView__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ScrollView,::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__ScrollView__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ScrollView__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__ScrollView__UxmlFactory(____UnityEngine__UIElements__ScrollView__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__ScrollView__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__ScrollView__UxmlFactory(____UnityEngine__UIElements__ScrollView__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__ScrollView__UxmlFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ScrollView,::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits>(ptr) {
}


  constexpr ____UnityEngine__UIElements__ScrollView__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ScrollView__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__ScrollView__UxmlFactory& operator=(____UnityEngine__UIElements__ScrollView__UxmlFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__ScrollView__UxmlFactory& operator=(____UnityEngine__UIElements__ScrollView__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__ScrollView__UxmlFactory() ;

/// @brief Method .ctor addr 0x2caff98 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::TouchScrollBehavior
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7141))
// CS Name: UnityEngine.UIElements.ScrollView::TouchScrollBehavior
struct CORDL_TYPE ____UnityEngine__UIElements__ScrollView__TouchScrollBehavior : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollBehavior(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollBehavior(____UnityEngine__UIElements__ScrollView__TouchScrollBehavior const&) = default;
                    constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollBehavior(____UnityEngine__UIElements__ScrollView__TouchScrollBehavior&&) = default;
                    constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollBehavior& operator=(____UnityEngine__UIElements__ScrollView__TouchScrollBehavior const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollBehavior& operator=(____UnityEngine__UIElements__ScrollView__TouchScrollBehavior&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__ScrollView__TouchScrollBehavior(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UIElements__ScrollView__TouchScrollBehavior_Unwrapped : int32_t {
__Unrestricted = 0,
__Elastic = 1,
__Clamped = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UIElements__ScrollView__TouchScrollBehavior_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UIElements__ScrollView__TouchScrollBehavior_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unrestricted offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior const Unrestricted;

/// @brief Field Elastic offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior const Elastic;

/// @brief Field Clamped offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior const Clamped;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::NestedInteractionKind
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7142))
// CS Name: UnityEngine.UIElements.ScrollView::NestedInteractionKind
struct CORDL_TYPE ____UnityEngine__UIElements__ScrollView__NestedInteractionKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__ScrollView__NestedInteractionKind(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UIElements__ScrollView__NestedInteractionKind(____UnityEngine__UIElements__ScrollView__NestedInteractionKind const&) = default;
                    constexpr ____UnityEngine__UIElements__ScrollView__NestedInteractionKind(____UnityEngine__UIElements__ScrollView__NestedInteractionKind&&) = default;
                    constexpr ____UnityEngine__UIElements__ScrollView__NestedInteractionKind& operator=(____UnityEngine__UIElements__ScrollView__NestedInteractionKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__ScrollView__NestedInteractionKind& operator=(____UnityEngine__UIElements__ScrollView__NestedInteractionKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__ScrollView__NestedInteractionKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UIElements__ScrollView__NestedInteractionKind_Unwrapped : int32_t {
__Default = 0,
__StopScrolling = 1,
__ForwardScrolling = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UIElements__ScrollView__NestedInteractionKind_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UIElements__ScrollView__NestedInteractionKind_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Default offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind const Default;

/// @brief Field StopScrolling offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind const StopScrolling;

/// @brief Field ForwardScrolling offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind const ForwardScrolling;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::TouchScrollingResult
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7143))
// CS Name: UnityEngine.UIElements.ScrollView::TouchScrollingResult
struct CORDL_TYPE ____UnityEngine__UIElements__ScrollView__TouchScrollingResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollingResult(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollingResult(____UnityEngine__UIElements__ScrollView__TouchScrollingResult const&) = default;
                    constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollingResult(____UnityEngine__UIElements__ScrollView__TouchScrollingResult&&) = default;
                    constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollingResult& operator=(____UnityEngine__UIElements__ScrollView__TouchScrollingResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__ScrollView__TouchScrollingResult& operator=(____UnityEngine__UIElements__ScrollView__TouchScrollingResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__ScrollView__TouchScrollingResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UIElements__ScrollView__TouchScrollingResult_Unwrapped : int32_t {
__Apply = 0,
__Forward = 1,
__Block = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UIElements__ScrollView__TouchScrollingResult_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UIElements__ScrollView__TouchScrollingResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Apply offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult const Apply;

/// @brief Field Forward offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult const Forward;

/// @brief Field Block offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult const Block;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__NestedInteractionKind, "UnityEngine.UIElements", "ScrollView/NestedInteractionKind");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollBehavior, "UnityEngine.UIElements", "ScrollView/TouchScrollBehavior");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__TouchScrollingResult, "UnityEngine.UIElements", "ScrollView/TouchScrollingResult");
NEED_NO_BOX(::UnityEngine::UIElements::ScrollView);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ScrollView, "UnityEngine.UIElements", "ScrollView");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlFactory, "UnityEngine.UIElements", "ScrollView/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__ScrollView__UxmlTraits, "UnityEngine.UIElements", "ScrollView/UxmlTraits");
