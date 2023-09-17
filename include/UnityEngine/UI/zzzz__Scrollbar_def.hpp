#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
struct DrivenRectTransformTracker;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::UI {
struct ____UnityEngine__UI__Scrollbar__Axis;
}
namespace UnityEngine::UI {
struct ____UnityEngine__UI__Scrollbar__Direction;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::UI {
class ____UnityEngine__UI__Scrollbar__ScrollEvent;
}
namespace UnityEngine::UI {
class ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58;
}
// Type: ::Direction
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13047))
// CS Name: UnityEngine.UI.Scrollbar::Direction
struct CORDL_TYPE ____UnityEngine__UI__Scrollbar__Direction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__Scrollbar__Direction(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__Scrollbar__Direction(____UnityEngine__UI__Scrollbar__Direction const&) = default;
                    constexpr ____UnityEngine__UI__Scrollbar__Direction(____UnityEngine__UI__Scrollbar__Direction&&) = default;
                    constexpr ____UnityEngine__UI__Scrollbar__Direction& operator=(____UnityEngine__UI__Scrollbar__Direction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__Scrollbar__Direction& operator=(____UnityEngine__UI__Scrollbar__Direction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__Scrollbar__Direction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__Scrollbar__Direction_Unwrapped : int32_t {
__LeftToRight = 0,
__RightToLeft = 1,
__BottomToTop = 2,
__TopToBottom = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__Scrollbar__Direction_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__Scrollbar__Direction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeftToRight offset 0
static ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction const LeftToRight;

/// @brief Field RightToLeft offset 0
static ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction const RightToLeft;

/// @brief Field BottomToTop offset 0
static ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction const BottomToTop;

/// @brief Field TopToBottom offset 0
static ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction const TopToBottom;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::ScrollEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13048))
// CS Name: UnityEngine.UI.Scrollbar::ScrollEvent
class CORDL_TYPE ____UnityEngine__UI__Scrollbar__ScrollEvent : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__UI__Scrollbar__ScrollEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UI__Scrollbar__ScrollEvent", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UI__Scrollbar__ScrollEvent(____UnityEngine__UI__Scrollbar__ScrollEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UI__Scrollbar__ScrollEvent", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UI__Scrollbar__ScrollEvent(____UnityEngine__UI__Scrollbar__ScrollEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__Scrollbar__ScrollEvent(void* ptr) noexcept : ::UnityEngine::Events::UnityEvent_1<float_t>(ptr) {
}


  constexpr ____UnityEngine__UI__Scrollbar__ScrollEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UI__Scrollbar__ScrollEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UI__Scrollbar__ScrollEvent& operator=(____UnityEngine__UI__Scrollbar__ScrollEvent&& o) noexcept = default;
  constexpr ____UnityEngine__UI__Scrollbar__ScrollEvent& operator=(____UnityEngine__UI__Scrollbar__ScrollEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UI__Scrollbar__ScrollEvent() ;

/// @brief Method .ctor addr 0x2c07ef0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::Axis
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13049))
// CS Name: UnityEngine.UI.Scrollbar::Axis
struct CORDL_TYPE ____UnityEngine__UI__Scrollbar__Axis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UI__Scrollbar__Axis(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UI__Scrollbar__Axis(____UnityEngine__UI__Scrollbar__Axis const&) = default;
                    constexpr ____UnityEngine__UI__Scrollbar__Axis(____UnityEngine__UI__Scrollbar__Axis&&) = default;
                    constexpr ____UnityEngine__UI__Scrollbar__Axis& operator=(____UnityEngine__UI__Scrollbar__Axis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UI__Scrollbar__Axis& operator=(____UnityEngine__UI__Scrollbar__Axis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__Scrollbar__Axis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UI__Scrollbar__Axis_Unwrapped : int32_t {
__Horizontal = 0,
__Vertical = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UI__Scrollbar__Axis_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UI__Scrollbar__Axis_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Horizontal offset 0
static ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Axis const Horizontal;

/// @brief Field Vertical offset 0
static ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Axis const Vertical;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: ::<ClickRepeat>d__58
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13050))
// CS Name: UnityEngine.UI.Scrollbar::<ClickRepeat>d__58
class CORDL_TYPE ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____UnityEngine__UI__Scrollbar___ClickRepeat_d__58() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UI__Scrollbar___ClickRepeat_d__58", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58(____UnityEngine__UI__Scrollbar___ClickRepeat_d__58 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UI__Scrollbar___ClickRepeat_d__58", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58(____UnityEngine__UI__Scrollbar___ClickRepeat_d__58&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58& operator=(____UnityEngine__UI__Scrollbar___ClickRepeat_d__58&& o) noexcept = default;
  constexpr ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58& operator=(____UnityEngine__UI__Scrollbar___ClickRepeat_d__58 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::UnityEngine::UI::Scrollbar __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::UI::Scrollbar value) ;

constexpr ::UnityEngine::UI::Scrollbar __get___4__this() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_screenPosition, put=__set_screenPosition))  screenPosition;

constexpr void __set_screenPosition(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_screenPosition() const;

 ::UnityEngine::Camera __declspec(property(get=__get_camera, put=__set_camera))  camera;

constexpr void __set_camera(::UnityEngine::Camera value) ;

constexpr ::UnityEngine::Camera __get_camera() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__UI__Scrollbar___ClickRepeat_d__58(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2c08fc0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c09900 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c09904 size 0x274 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2c09b78 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c09b80 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c09bc0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::Scrollbar
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13051))
// CS Name: UnityEngine.UI.Scrollbar
class CORDL_TYPE Scrollbar : public ::UnityEngine::UI::Selectable {
public:
// Declarations
using _ClickRepeat_d__58 = ::UnityEngine::UI::____UnityEngine__UI__Scrollbar___ClickRepeat_d__58;

using Axis = ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Axis;

using ScrollEvent = ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__ScrollEvent;

using Direction = ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction;

/// @brief Convert operator to ::UnityEngine::EventSystems::IBeginDragHandler
constexpr operator  ::UnityEngine::EventSystems::IBeginDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IEventSystemHandler
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IDragHandler
constexpr operator  ::UnityEngine::EventSystems::IDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::EventSystems::IInitializePotentialDragHandler
constexpr operator  ::UnityEngine::EventSystems::IInitializePotentialDragHandler() const noexcept;

/// @brief Convert operator to ::UnityEngine::UI::ICanvasElement
constexpr operator  ::UnityEngine::UI::ICanvasElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x140};

virtual ~Scrollbar() = default;

// Ctor Parameters [CppParam { name: "", ty: "Scrollbar", modifiers: " const&", def_value: None }]
constexpr Scrollbar(Scrollbar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Scrollbar", modifiers: "&&", def_value: None }]
constexpr Scrollbar(Scrollbar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Scrollbar(void* ptr) noexcept : ::UnityEngine::UI::Selectable(ptr) {
}


  constexpr Scrollbar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Scrollbar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Scrollbar& operator=(Scrollbar&& o) noexcept = default;
  constexpr Scrollbar& operator=(Scrollbar const& o) noexcept = default;
                


// Fields

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_HandleRect, put=__set_m_HandleRect))  m_HandleRect;

constexpr void __set_m_HandleRect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_HandleRect() const;

 ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction __get_m_Direction() const;

 float_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(float_t value) ;

constexpr float_t __get_m_Value() const;

 float_t __declspec(property(get=__get_m_Size, put=__set_m_Size))  m_Size;

constexpr void __set_m_Size(float_t value) ;

constexpr float_t __get_m_Size() const;

 int32_t __declspec(property(get=__get_m_NumberOfSteps, put=__set_m_NumberOfSteps))  m_NumberOfSteps;

constexpr void __set_m_NumberOfSteps(int32_t value) ;

constexpr int32_t __get_m_NumberOfSteps() const;

 ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__ScrollEvent __declspec(property(get=__get_m_OnValueChanged, put=__set_m_OnValueChanged))  m_OnValueChanged;

constexpr void __set_m_OnValueChanged(::UnityEngine::UI::____UnityEngine__UI__Scrollbar__ScrollEvent value) ;

constexpr ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__ScrollEvent __get_m_OnValueChanged() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_ContainerRect, put=__set_m_ContainerRect))  m_ContainerRect;

constexpr void __set_m_ContainerRect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_ContainerRect() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_Offset, put=__set_m_Offset))  m_Offset;

constexpr void __set_m_Offset(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_Offset() const;

 ::UnityEngine::DrivenRectTransformTracker __declspec(property(get=__get_m_Tracker, put=__set_m_Tracker))  m_Tracker;

constexpr void __set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) ;

constexpr ::UnityEngine::DrivenRectTransformTracker __get_m_Tracker() const;

 ::UnityEngine::Coroutine __declspec(property(get=__get_m_PointerDownRepeat, put=__set_m_PointerDownRepeat))  m_PointerDownRepeat;

constexpr void __set_m_PointerDownRepeat(::UnityEngine::Coroutine value) ;

constexpr ::UnityEngine::Coroutine __get_m_PointerDownRepeat() const;

 bool __declspec(property(get=__get_isPointerDownAndNotDragging, put=__set_isPointerDownAndNotDragging))  isPointerDownAndNotDragging;

constexpr void __set_isPointerDownAndNotDragging(bool value) ;

constexpr bool __get_isPointerDownAndNotDragging() const;

 bool __declspec(property(get=__get_m_DelayedUpdateVisuals, put=__set_m_DelayedUpdateVisuals))  m_DelayedUpdateVisuals;

constexpr void __set_m_DelayedUpdateVisuals(bool value) ;

constexpr bool __get_m_DelayedUpdateVisuals() const;


// Properties

 ::UnityEngine::RectTransform __declspec(property(get=get_handleRect, put=set_handleRect))  handleRect;

 ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction __declspec(property(get=get_direction, put=set_direction))  direction;

 float_t __declspec(property(get=get_value, put=set_value))  value;

 float_t __declspec(property(get=get_size, put=set_size))  size;

 int32_t __declspec(property(get=get_numberOfSteps, put=set_numberOfSteps))  numberOfSteps;

 ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__ScrollEvent __declspec(property(get=get_onValueChanged, put=set_onValueChanged))  onValueChanged;

 float_t __declspec(property(get=get_stepSize))  stepSize;

 ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Axis __declspec(property(get=get_axis))  axis;

 bool __declspec(property(get=get_reverseValue))  reverseValue;


// Methods

/// @brief Method get_handleRect addr 0x2c07ab0 size 0x8 virtual false final false
 ::UnityEngine::RectTransform get_handleRect() ;

/// @brief Method set_handleRect addr 0x2c07ab8 size 0x7c virtual false final false
 void set_handleRect(::UnityEngine::RectTransform value) ;

/// @brief Method get_direction addr 0x2c07dac size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction get_direction() ;

/// @brief Method set_direction addr 0x2c07db4 size 0x74 virtual false final false
 void set_direction(::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction value) ;

// Ctor Parameters []
explicit Scrollbar() ;

/// @brief Method .ctor addr 0x2c07e28 size 0xc8 virtual false final false
 void _ctor() ;

/// @brief Method get_value addr 0x2c08050 size 0xb8 virtual false final false
 float_t get_value() ;

/// @brief Method set_value addr 0x2c08108 size 0x8 virtual false final false
 void set_value(float_t value) ;

/// @brief Method SetValueWithoutNotify addr 0x2c081d4 size 0x8 virtual true final false
 void SetValueWithoutNotify(float_t input) ;

/// @brief Method get_size addr 0x2c081dc size 0x8 virtual false final false
 float_t get_size() ;

/// @brief Method set_size addr 0x2c081e4 size 0x84 virtual false final false
 void set_size(float_t value) ;

/// @brief Method get_numberOfSteps addr 0x2c08268 size 0x8 virtual false final false
 int32_t get_numberOfSteps() ;

/// @brief Method set_numberOfSteps addr 0x2c08270 size 0x84 virtual false final false
 void set_numberOfSteps(int32_t value) ;

/// @brief Method get_onValueChanged addr 0x2c082f4 size 0x8 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__ScrollEvent get_onValueChanged() ;

/// @brief Method set_onValueChanged addr 0x2c082fc size 0x8 virtual false final false
 void set_onValueChanged(::UnityEngine::UI::____UnityEngine__UI__Scrollbar__ScrollEvent value) ;

/// @brief Method get_stepSize addr 0x2c08304 size 0x2c virtual false final false
 float_t get_stepSize() ;

/// @brief Method Rebuild addr 0x2c08330 size 0x4 virtual true final false
 void Rebuild(::UnityEngine::UI::CanvasUpdate executing) ;

/// @brief Method LayoutComplete addr 0x2c08334 size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2c08338 size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method OnEnable addr 0x2c0833c size 0x30 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c08614 size 0x20 virtual true final false
 void OnDisable() ;

/// @brief Method Update addr 0x2c0875c size 0x14 virtual true final false
 void Update() ;

/// @brief Method UpdateCachedReferences addr 0x2c07b34 size 0xe0 virtual false final false
 void UpdateCachedReferences() ;

/// @brief Method Set addr 0x2c08110 size 0xc4 virtual false final false
 void Set(float_t input, bool sendCallback) ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2c08770 size 0x38 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method get_axis addr 0x2c087a8 size 0x10 virtual false final false
 ::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Axis get_axis() ;

/// @brief Method get_reverseValue addr 0x2c087b8 size 0x14 virtual false final false
 bool get_reverseValue() ;

/// @brief Method UpdateVisuals addr 0x2c07c14 size 0x198 virtual false final false
 void UpdateVisuals() ;

/// @brief Method UpdateDrag addr 0x2c087cc size 0x264 virtual false final false
 void UpdateDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method DoUpdateDrag addr 0x2c08a30 size 0x64 virtual false final false
 void DoUpdateDrag(::UnityEngine::Vector2 handleCorner, float_t remainingSize) ;

/// @brief Method MayDrag addr 0x2c08a94 size 0x64 virtual false final false
 bool MayDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnBeginDrag addr 0x2c08af8 size 0x1bc virtual true final false
 void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnDrag addr 0x2c08cb4 size 0x90 virtual true final false
 void OnDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnPointerDown addr 0x2c08d44 size 0x80 virtual true final false
 void OnPointerDown(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method ClickRepeat addr 0x2c08f80 size 0x40 virtual false final false
 ::System::Collections::IEnumerator ClickRepeat(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method ClickRepeat addr 0x2c08ef4 size 0x8c virtual false final false
 ::System::Collections::IEnumerator ClickRepeat(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Camera camera) ;

/// @brief Method OnPointerUp addr 0x2c08fe8 size 0x18 virtual true final false
 void OnPointerUp(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method OnMove addr 0x2c09028 size 0x2c4 virtual true final false
 void OnMove(::UnityEngine::EventSystems::AxisEventData eventData) ;

/// @brief Method FindSelectableOnLeft addr 0x2c09378 size 0x24 virtual true final false
 ::UnityEngine::UI::Selectable FindSelectableOnLeft() ;

/// @brief Method FindSelectableOnRight addr 0x2c09474 size 0x24 virtual true final false
 ::UnityEngine::UI::Selectable FindSelectableOnRight() ;

/// @brief Method FindSelectableOnUp addr 0x2c09570 size 0x24 virtual true final false
 ::UnityEngine::UI::Selectable FindSelectableOnUp() ;

/// @brief Method FindSelectableOnDown addr 0x2c0966c size 0x24 virtual true final false
 ::UnityEngine::UI::Selectable FindSelectableOnDown() ;

/// @brief Method OnInitializePotentialDrag addr 0x2c09768 size 0x18 virtual true final false
 void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData eventData) ;

/// @brief Method SetDirection addr 0x2c09780 size 0x178 virtual false final false
 void SetDirection(::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction direction, bool includeRectLayouts) ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2c098f8 size 0x8 virtual true final true
 ::UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Axis, "UnityEngine.UI", "Scrollbar/Axis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__Scrollbar__Direction, "UnityEngine.UI", "Scrollbar/Direction");
NEED_NO_BOX(::UnityEngine::UI::Scrollbar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Scrollbar, "UnityEngine.UI", "Scrollbar");
NEED_NO_BOX(::UnityEngine::UI::____UnityEngine__UI__Scrollbar__ScrollEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__Scrollbar__ScrollEvent, "UnityEngine.UI", "Scrollbar/ScrollEvent");
NEED_NO_BOX(::UnityEngine::UI::____UnityEngine__UI__Scrollbar___ClickRepeat_d__58);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::____UnityEngine__UI__Scrollbar___ClickRepeat_d__58, "UnityEngine.UI", "Scrollbar/<ClickRepeat>d__58");
