#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Slider__Axis;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Slider__SliderEvent;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Slider__Direction;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace UnityEngine::UI {
struct UnityEngine__UI__Slider__Axis;
}
namespace UnityEngine::UI {
struct UnityEngine__UI__Slider__Direction;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::UI {
class UnityEngine__UI__Slider__SliderEvent;
}
// Type: ::Direction
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13060))
// CS Name: UnityEngine.UI.Slider::Direction
struct CORDL_TYPE UnityEngine__UI__Slider__Direction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Slider__Direction(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Slider__Direction(UnityEngine__UI__Slider__Direction const&) = default;
                    constexpr UnityEngine__UI__Slider__Direction(UnityEngine__UI__Slider__Direction&&) = default;
                    constexpr UnityEngine__UI__Slider__Direction& operator=(UnityEngine__UI__Slider__Direction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Slider__Direction& operator=(UnityEngine__UI__Slider__Direction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Slider__Direction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Slider__Direction_Unwrapped : int32_t {
__LeftToRight = 0,
__RightToLeft = 1,
__BottomToTop = 2,
__TopToBottom = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Slider__Direction_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Slider__Direction_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeftToRight offset 0
static UnityEngine::UI::UnityEngine__UI__Slider__Direction const LeftToRight;

/// @brief Field RightToLeft offset 0
static UnityEngine::UI::UnityEngine__UI__Slider__Direction const RightToLeft;

/// @brief Field BottomToTop offset 0
static UnityEngine::UI::UnityEngine__UI__Slider__Direction const BottomToTop;

/// @brief Field TopToBottom offset 0
static UnityEngine::UI::UnityEngine__UI__Slider__Direction const TopToBottom;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::SliderEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 374 }), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13061))
// CS Name: UnityEngine.UI.Slider::SliderEvent
class CORDL_TYPE UnityEngine__UI__Slider__SliderEvent : public UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__Slider__SliderEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Slider__SliderEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__Slider__SliderEvent(UnityEngine__UI__Slider__SliderEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__Slider__SliderEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__Slider__SliderEvent(UnityEngine__UI__Slider__SliderEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Slider__SliderEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<float_t>(ptr) {
}


  constexpr UnityEngine__UI__Slider__SliderEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__Slider__SliderEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__Slider__SliderEvent& operator=(UnityEngine__UI__Slider__SliderEvent&& o) noexcept = default;
  constexpr UnityEngine__UI__Slider__SliderEvent& operator=(UnityEngine__UI__Slider__SliderEvent const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent New_ctor() ;

/// @brief Method .ctor addr 0x2c0fcd0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Axis
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13062))
// CS Name: UnityEngine.UI.Slider::Axis
struct CORDL_TYPE UnityEngine__UI__Slider__Axis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UI__Slider__Axis(int32_t value__) noexcept;


                    constexpr UnityEngine__UI__Slider__Axis(UnityEngine__UI__Slider__Axis const&) = default;
                    constexpr UnityEngine__UI__Slider__Axis(UnityEngine__UI__Slider__Axis&&) = default;
                    constexpr UnityEngine__UI__Slider__Axis& operator=(UnityEngine__UI__Slider__Axis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UI__Slider__Axis& operator=(UnityEngine__UI__Slider__Axis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__Slider__Axis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UI__Slider__Axis_Unwrapped : int32_t {
__Horizontal = 0,
__Vertical = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UI__Slider__Axis_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UI__Slider__Axis_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Horizontal offset 0
static UnityEngine::UI::UnityEngine__UI__Slider__Axis const Horizontal;

/// @brief Field Vertical offset 0
static UnityEngine::UI::UnityEngine__UI__Slider__Axis const Vertical;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Slider
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13063))
// CS Name: UnityEngine.UI.Slider
class CORDL_TYPE Slider : public UnityEngine::UI::Selectable {
public:
// Declarations
using Axis = UnityEngine::UI::UnityEngine__UI__Slider__Axis;

using SliderEvent = UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent;

using Direction = UnityEngine::UI::UnityEngine__UI__Slider__Direction;

/// @brief Convert operator to UnityEngine::EventSystems::IDragHandler
constexpr operator  UnityEngine::EventSystems::IDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to UnityEngine::EventSystems::IInitializePotentialDragHandler
constexpr operator  UnityEngine::EventSystems::IInitializePotentialDragHandler() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ICanvasElement
constexpr operator  UnityEngine::UI::ICanvasElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~Slider() = default;

// Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: " const&", def_value: None }]
constexpr Slider(Slider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "&&", def_value: None }]
constexpr Slider(Slider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Slider(void* ptr) noexcept : UnityEngine::UI::Selectable(ptr) {
}


  constexpr Slider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Slider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Slider& operator=(Slider&& o) noexcept = default;
  constexpr Slider& operator=(Slider const& o) noexcept = default;
                


// Fields

 UnityEngine::RectTransform __declspec(property(get=__get_m_FillRect, put=__set_m_FillRect))  m_FillRect;

constexpr void __set_m_FillRect(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_FillRect() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_HandleRect, put=__set_m_HandleRect))  m_HandleRect;

constexpr void __set_m_HandleRect(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_HandleRect() const;

 UnityEngine::UI::UnityEngine__UI__Slider__Direction __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(UnityEngine::UI::UnityEngine__UI__Slider__Direction value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Slider__Direction __get_m_Direction() const;

 float_t __declspec(property(get=__get_m_MinValue, put=__set_m_MinValue))  m_MinValue;

constexpr void __set_m_MinValue(float_t value) ;

constexpr float_t __get_m_MinValue() const;

 float_t __declspec(property(get=__get_m_MaxValue, put=__set_m_MaxValue))  m_MaxValue;

constexpr void __set_m_MaxValue(float_t value) ;

constexpr float_t __get_m_MaxValue() const;

 bool __declspec(property(get=__get_m_WholeNumbers, put=__set_m_WholeNumbers))  m_WholeNumbers;

constexpr void __set_m_WholeNumbers(bool value) ;

constexpr bool __get_m_WholeNumbers() const;

 float_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(float_t value) ;

constexpr float_t __get_m_Value() const;

 UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent __declspec(property(get=__get_m_OnValueChanged, put=__set_m_OnValueChanged))  m_OnValueChanged;

constexpr void __set_m_OnValueChanged(UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent value) ;

constexpr UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent __get_m_OnValueChanged() const;

 UnityEngine::UI::Image __declspec(property(get=__get_m_FillImage, put=__set_m_FillImage))  m_FillImage;

constexpr void __set_m_FillImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get_m_FillImage() const;

 UnityEngine::Transform __declspec(property(get=__get_m_FillTransform, put=__set_m_FillTransform))  m_FillTransform;

constexpr void __set_m_FillTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_m_FillTransform() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_FillContainerRect, put=__set_m_FillContainerRect))  m_FillContainerRect;

constexpr void __set_m_FillContainerRect(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_FillContainerRect() const;

 UnityEngine::Transform __declspec(property(get=__get_m_HandleTransform, put=__set_m_HandleTransform))  m_HandleTransform;

constexpr void __set_m_HandleTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_m_HandleTransform() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_HandleContainerRect, put=__set_m_HandleContainerRect))  m_HandleContainerRect;

constexpr void __set_m_HandleContainerRect(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_HandleContainerRect() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_Offset, put=__set_m_Offset))  m_Offset;

constexpr void __set_m_Offset(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Offset() const;

 UnityEngine::DrivenRectTransformTracker __declspec(property(get=__get_m_Tracker, put=__set_m_Tracker))  m_Tracker;

constexpr void __set_m_Tracker(UnityEngine::DrivenRectTransformTracker value) ;

constexpr UnityEngine::DrivenRectTransformTracker __get_m_Tracker() const;

 bool __declspec(property(get=__get_m_DelayedUpdateVisuals, put=__set_m_DelayedUpdateVisuals))  m_DelayedUpdateVisuals;

constexpr void __set_m_DelayedUpdateVisuals(bool value) ;

constexpr bool __get_m_DelayedUpdateVisuals() const;


// Properties

 UnityEngine::RectTransform __declspec(property(get=get_fillRect, put=set_fillRect))  fillRect;

 UnityEngine::RectTransform __declspec(property(get=get_handleRect, put=set_handleRect))  handleRect;

 UnityEngine::UI::UnityEngine__UI__Slider__Direction __declspec(property(get=get_direction, put=set_direction))  direction;

 float_t __declspec(property(get=get_minValue, put=set_minValue))  minValue;

 float_t __declspec(property(get=get_maxValue, put=set_maxValue))  maxValue;

 bool __declspec(property(get=get_wholeNumbers, put=set_wholeNumbers))  wholeNumbers;

 float_t __declspec(property(get=get_value, put=set_value))  value;

 float_t __declspec(property(get=get_normalizedValue, put=set_normalizedValue))  normalizedValue;

 UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent __declspec(property(get=get_onValueChanged, put=set_onValueChanged))  onValueChanged;

 float_t __declspec(property(get=get_stepSize))  stepSize;

 UnityEngine::UI::UnityEngine__UI__Slider__Axis __declspec(property(get=get_axis))  axis;

 bool __declspec(property(get=get_reverseValue))  reverseValue;


// Methods

/// @brief Method get_fillRect addr 0x2c0f114 size 0x8 virtual false final false
 UnityEngine::RectTransform get_fillRect() ;

/// @brief Method set_fillRect addr 0x2c0f11c size 0x7c virtual false final false
 void set_fillRect(UnityEngine::RectTransform value) ;

/// @brief Method get_handleRect addr 0x2c0f724 size 0x8 virtual false final false
 UnityEngine::RectTransform get_handleRect() ;

/// @brief Method set_handleRect addr 0x2c0f72c size 0x7c virtual false final false
 void set_handleRect(UnityEngine::RectTransform value) ;

/// @brief Method get_direction addr 0x2c0f7a8 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Slider__Direction get_direction() ;

/// @brief Method set_direction addr 0x2c0f7b0 size 0x74 virtual false final false
 void set_direction(UnityEngine::UI::UnityEngine__UI__Slider__Direction value) ;

/// @brief Method get_minValue addr 0x2c0f824 size 0x8 virtual false final false
 float_t get_minValue() ;

/// @brief Method set_minValue addr 0x2c0f82c size 0x90 virtual false final false
 void set_minValue(float_t value) ;

/// @brief Method get_maxValue addr 0x2c0f8bc size 0x8 virtual false final false
 float_t get_maxValue() ;

/// @brief Method set_maxValue addr 0x2c0f8c4 size 0x90 virtual false final false
 void set_maxValue(float_t value) ;

/// @brief Method get_wholeNumbers addr 0x2c0f954 size 0x8 virtual false final false
 bool get_wholeNumbers() ;

/// @brief Method set_wholeNumbers addr 0x2c0f95c size 0x90 virtual false final false
 void set_wholeNumbers(bool value) ;

/// @brief Method get_value addr 0x2c0f9ec size 0xa0 virtual true final false
 float_t get_value() ;

/// @brief Method set_value addr 0x2c0fa8c size 0x14 virtual true final false
 void set_value(float_t value) ;

/// @brief Method SetValueWithoutNotify addr 0x2c0faa0 size 0x14 virtual true final false
 void SetValueWithoutNotify(float_t input) ;

/// @brief Method get_normalizedValue addr 0x2c0fab4 size 0xe4 virtual false final false
 float_t get_normalizedValue() ;

/// @brief Method set_normalizedValue addr 0x2c0fb98 size 0x38 virtual false final false
 void set_normalizedValue(float_t value) ;

/// @brief Method get_onValueChanged addr 0x2c0fbd0 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent get_onValueChanged() ;

/// @brief Method set_onValueChanged addr 0x2c0fbd8 size 0x8 virtual false final false
 void set_onValueChanged(UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent value) ;

/// @brief Method get_stepSize addr 0x2c0fbe0 size 0x2c virtual false final false
 float_t get_stepSize() ;

static UnityEngine::UI::Slider New_ctor() ;

/// @brief Method .ctor addr 0x2c0fc0c size 0xc4 virtual false final false
 void _ctor() ;

/// @brief Method Rebuild addr 0x2c0fd18 size 0x4 virtual true final false
 void Rebuild(UnityEngine::UI::CanvasUpdate executing) ;

/// @brief Method LayoutComplete addr 0x2c0fd1c size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2c0fd20 size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method OnEnable addr 0x2c0fd24 size 0x3c virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c0fd60 size 0x20 virtual true final false
 void OnDisable() ;

/// @brief Method Update addr 0x2c0fd80 size 0x40 virtual true final false
 void Update() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2c0fdc0 size 0x1f0 virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method UpdateCachedReferences addr 0x2c0f198 size 0x2a4 virtual false final false
 void UpdateCachedReferences() ;

/// @brief Method ClampValue addr 0x2c0ffb0 size 0xb4 virtual false final false
 float_t ClampValue(float_t input) ;

/// @brief Method Set addr 0x2c10088 size 0xc4 virtual true final false
 void Set(float_t input, bool sendCallback) ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2c1014c size 0x38 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method get_axis addr 0x2c10078 size 0x10 virtual false final false
 UnityEngine::UI::UnityEngine__UI__Slider__Axis get_axis() ;

/// @brief Method get_reverseValue addr 0x2c10064 size 0x14 virtual false final false
 bool get_reverseValue() ;

/// @brief Method UpdateVisuals addr 0x2c0f43c size 0x2e8 virtual false final false
 void UpdateVisuals() ;

/// @brief Method UpdateDrag addr 0x2c10184 size 0x238 virtual false final false
 void UpdateDrag(UnityEngine::EventSystems::PointerEventData eventData, UnityEngine::Camera cam) ;

/// @brief Method MayDrag addr 0x2c103bc size 0x64 virtual false final false
 bool MayDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x2c10420 size 0x1b8 virtual true final false
 void OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x2c105d8 size 0x50 virtual true final false
 void OnDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnMove addr 0x2c10628 size 0x24c virtual true final false
 void OnMove(UnityEngine::EventSystems::AxisEventData eventData) ;

/// @brief Method FindSelectableOnLeft addr 0x2c10874 size 0x24 virtual true final false
 UnityEngine::UI::Selectable FindSelectableOnLeft() ;

/// @brief Method FindSelectableOnRight addr 0x2c10898 size 0x24 virtual true final false
 UnityEngine::UI::Selectable FindSelectableOnRight() ;

/// @brief Method FindSelectableOnUp addr 0x2c108bc size 0x24 virtual true final false
 UnityEngine::UI::Selectable FindSelectableOnUp() ;

/// @brief Method FindSelectableOnDown addr 0x2c108e0 size 0x24 virtual true final false
 UnityEngine::UI::Selectable FindSelectableOnDown() ;

/// @brief Method OnInitializePotentialDrag addr 0x2c10904 size 0x18 virtual true final false
 void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method SetDirection addr 0x2c1091c size 0x178 virtual false final false
 void SetDirection(UnityEngine::UI::UnityEngine__UI__Slider__Direction direction, bool includeRectLayouts) ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2c10a94 size 0x8 virtual true final true
 UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Slider__Axis, "UnityEngine.UI", "Slider/Axis");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Slider__Direction, "UnityEngine.UI", "Slider/Direction");
NEED_NO_BOX(UnityEngine::UI::Slider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Slider, "UnityEngine.UI", "Slider");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__Slider__SliderEvent, "UnityEngine.UI", "Slider/SliderEvent");
