#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__Clickable_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
template<typename T>
struct UnityEngine__UIElements__ClampedDragger_1__DragDirection;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
template<typename TValueType>
class BaseSlider_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class ClampedDragger_1;
}
namespace UnityEngine::UIElements {
template<typename T>
struct UnityEngine__UIElements__ClampedDragger_1__DragDirection;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type T>
class ClampedDragger_1<T>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
class ClampedDragger_1<T>;
}
namespace UnityEngine::UIElements {
template<>
class ClampedDragger_1<float_t>;
}
// Type: ::DragDirection
namespace UnityEngine::UIElements {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6873))
// CS Name: UnityEngine.UIElements.ClampedDragger`1::DragDirection
struct CORDL_TYPE UnityEngine__UIElements__ClampedDragger_1__DragDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__ClampedDragger_1__DragDirection(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__ClampedDragger_1__DragDirection(UnityEngine__UIElements__ClampedDragger_1__DragDirection const&) = default;
                    constexpr UnityEngine__UIElements__ClampedDragger_1__DragDirection(UnityEngine__UIElements__ClampedDragger_1__DragDirection&&) = default;
                    constexpr UnityEngine__UIElements__ClampedDragger_1__DragDirection& operator=(UnityEngine__UIElements__ClampedDragger_1__DragDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__ClampedDragger_1__DragDirection& operator=(UnityEngine__UIElements__ClampedDragger_1__DragDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__ClampedDragger_1__DragDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__ClampedDragger_1__DragDirection_Unwrapped : int32_t {
__None = 0,
__LowToHigh = 1,
__HighToLow = 2,
__Free = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__ClampedDragger_1__DragDirection_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__ClampedDragger_1__DragDirection_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> const None;

/// @brief Field LowToHigh offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> const LowToHigh;

/// @brief Field HighToLow offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> const HighToLow;

/// @brief Field Free offset 0
static UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> const Free;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ClampedDragger`1
// Type: UnityEngine.UIElements::ClampedDragger`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6892)), TypeDefinitionIndex(TypeDefinitionIndex(6874))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6874), inst: 374 })
// CS Name: UnityEngine.UIElements.ClampedDragger`1
class CORDL_TYPE ClampedDragger_1<float_t> : public UnityEngine::UIElements::Clickable {
public:
// Declarations
using DragDirection = UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ClampedDragger_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClampedDragger_1", modifiers: " const&", def_value: None }]
constexpr ClampedDragger_1(ClampedDragger_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClampedDragger_1", modifiers: "&&", def_value: None }]
constexpr ClampedDragger_1(ClampedDragger_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClampedDragger_1(void* ptr) noexcept : UnityEngine::UIElements::Clickable(ptr) {
}


  constexpr ClampedDragger_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClampedDragger_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClampedDragger_1& operator=(ClampedDragger_1&& o) noexcept = default;
  constexpr ClampedDragger_1& operator=(ClampedDragger_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_dragging, put=__set_dragging))  dragging;

constexpr void __set_dragging(System::Action value) ;

constexpr System::Action __get_dragging() const;

 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> __declspec(property(get=__get__dragDirection_k__BackingField, put=__set__dragDirection_k__BackingField))  _dragDirection_k__BackingField;

constexpr void __set__dragDirection_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> __get__dragDirection_k__BackingField() const;

 UnityEngine::UIElements::BaseSlider_1<float_t> __declspec(property(get=__get__slider_k__BackingField, put=__set__slider_k__BackingField))  _slider_k__BackingField;

constexpr void __set__slider_k__BackingField(UnityEngine::UIElements::BaseSlider_1<float_t> value) ;

constexpr UnityEngine::UIElements::BaseSlider_1<float_t> __get__slider_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__startMousePosition_k__BackingField, put=__set__startMousePosition_k__BackingField))  _startMousePosition_k__BackingField;

constexpr void __set__startMousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__startMousePosition_k__BackingField() const;


// Properties

 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> __declspec(property(get=get_dragDirection, put=set_dragDirection))  dragDirection;

 UnityEngine::UIElements::BaseSlider_1<float_t> __declspec(property(put=set_slider))  slider;

 UnityEngine::Vector2 __declspec(property(get=get_startMousePosition, put=set_startMousePosition))  startMousePosition;

 UnityEngine::Vector2 __declspec(property(get=get_delta))  delta;


// Methods

/// @brief Method add_dragging addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_dragging(System::Action value) ;

/// @brief Method remove_dragging addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_dragging(System::Action value) ;

/// @brief Method get_dragDirection addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> get_dragDirection() ;

/// @brief Method set_dragDirection addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragDirection(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<float_t> value) ;

/// @brief Method set_slider addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_slider(UnityEngine::UIElements::BaseSlider_1<float_t> value) ;

/// @brief Method get_startMousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_startMousePosition() ;

/// @brief Method set_startMousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_startMousePosition(UnityEngine::Vector2 value) ;

/// @brief Method get_delta addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_delta() ;

static UnityEngine::UIElements::ClampedDragger_1<float_t> New_ctor(UnityEngine::UIElements::BaseSlider_1<float_t> slider, System::Action clickHandler, System::Action dragHandler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::BaseSlider_1<float_t> slider, System::Action clickHandler, System::Action dragHandler) ;

/// @brief Method ProcessDownEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessDownEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition, int32_t pointerId) ;

/// @brief Method ProcessMoveEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessMoveEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ClampedDragger`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6874)), TypeDefinitionIndex(TypeDefinitionIndex(6892))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6874), inst: 92 })
// CS Name: UnityEngine.UIElements.ClampedDragger`1
class CORDL_TYPE ClampedDragger_1<T> : public UnityEngine::UIElements::Clickable {
public:
// Declarations
using DragDirection = UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ClampedDragger_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClampedDragger_1", modifiers: " const&", def_value: None }]
constexpr ClampedDragger_1(ClampedDragger_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClampedDragger_1", modifiers: "&&", def_value: None }]
constexpr ClampedDragger_1(ClampedDragger_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClampedDragger_1(void* ptr) noexcept : UnityEngine::UIElements::Clickable(ptr) {
}


  constexpr ClampedDragger_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClampedDragger_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClampedDragger_1& operator=(ClampedDragger_1&& o) noexcept = default;
  constexpr ClampedDragger_1& operator=(ClampedDragger_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_dragging, put=__set_dragging))  dragging;

constexpr void __set_dragging(System::Action value) ;

constexpr System::Action __get_dragging() const;

 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> __declspec(property(get=__get__dragDirection_k__BackingField, put=__set__dragDirection_k__BackingField))  _dragDirection_k__BackingField;

constexpr void __set__dragDirection_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> __get__dragDirection_k__BackingField() const;

 UnityEngine::UIElements::BaseSlider_1<T> __declspec(property(get=__get__slider_k__BackingField, put=__set__slider_k__BackingField))  _slider_k__BackingField;

constexpr void __set__slider_k__BackingField(UnityEngine::UIElements::BaseSlider_1<T> value) ;

constexpr UnityEngine::UIElements::BaseSlider_1<T> __get__slider_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__startMousePosition_k__BackingField, put=__set__startMousePosition_k__BackingField))  _startMousePosition_k__BackingField;

constexpr void __set__startMousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__startMousePosition_k__BackingField() const;


// Properties

 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> __declspec(property(get=get_dragDirection, put=set_dragDirection))  dragDirection;

 UnityEngine::UIElements::BaseSlider_1<T> __declspec(property(put=set_slider))  slider;

 UnityEngine::Vector2 __declspec(property(get=get_startMousePosition, put=set_startMousePosition))  startMousePosition;

 UnityEngine::Vector2 __declspec(property(get=get_delta))  delta;


// Methods

/// @brief Method add_dragging addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_dragging(System::Action value) ;

/// @brief Method remove_dragging addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_dragging(System::Action value) ;

/// @brief Method get_dragDirection addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> get_dragDirection() ;

/// @brief Method set_dragDirection addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragDirection(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> value) ;

/// @brief Method set_slider addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_slider(UnityEngine::UIElements::BaseSlider_1<T> value) ;

/// @brief Method get_startMousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_startMousePosition() ;

/// @brief Method set_startMousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_startMousePosition(UnityEngine::Vector2 value) ;

/// @brief Method get_delta addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_delta() ;

static UnityEngine::UIElements::ClampedDragger_1<T> New_ctor(UnityEngine::UIElements::BaseSlider_1<T> slider, System::Action clickHandler, System::Action dragHandler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::BaseSlider_1<T> slider, System::Action clickHandler, System::Action dragHandler) ;

/// @brief Method ProcessDownEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessDownEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition, int32_t pointerId) ;

/// @brief Method ProcessMoveEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessMoveEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::ClampedDragger`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6874)), TypeDefinitionIndex(TypeDefinitionIndex(6892))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6874), inst: 2 })
// CS Name: UnityEngine.UIElements.ClampedDragger`1
class CORDL_TYPE ClampedDragger_1<T> : public UnityEngine::UIElements::Clickable {
public:
// Declarations
using DragDirection = UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ClampedDragger_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClampedDragger_1", modifiers: " const&", def_value: None }]
constexpr ClampedDragger_1(ClampedDragger_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClampedDragger_1", modifiers: "&&", def_value: None }]
constexpr ClampedDragger_1(ClampedDragger_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClampedDragger_1(void* ptr) noexcept : UnityEngine::UIElements::Clickable(ptr) {
}


  constexpr ClampedDragger_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClampedDragger_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClampedDragger_1& operator=(ClampedDragger_1&& o) noexcept = default;
  constexpr ClampedDragger_1& operator=(ClampedDragger_1 const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_dragging, put=__set_dragging))  dragging;

constexpr void __set_dragging(System::Action value) ;

constexpr System::Action __get_dragging() const;

 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> __declspec(property(get=__get__dragDirection_k__BackingField, put=__set__dragDirection_k__BackingField))  _dragDirection_k__BackingField;

constexpr void __set__dragDirection_k__BackingField(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> __get__dragDirection_k__BackingField() const;

 UnityEngine::UIElements::BaseSlider_1<T> __declspec(property(get=__get__slider_k__BackingField, put=__set__slider_k__BackingField))  _slider_k__BackingField;

constexpr void __set__slider_k__BackingField(UnityEngine::UIElements::BaseSlider_1<T> value) ;

constexpr UnityEngine::UIElements::BaseSlider_1<T> __get__slider_k__BackingField() const;

 UnityEngine::Vector2 __declspec(property(get=__get__startMousePosition_k__BackingField, put=__set__startMousePosition_k__BackingField))  _startMousePosition_k__BackingField;

constexpr void __set__startMousePosition_k__BackingField(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__startMousePosition_k__BackingField() const;


// Properties

 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> __declspec(property(get=get_dragDirection, put=set_dragDirection))  dragDirection;

 UnityEngine::UIElements::BaseSlider_1<T> __declspec(property(put=set_slider))  slider;

 UnityEngine::Vector2 __declspec(property(get=get_startMousePosition, put=set_startMousePosition))  startMousePosition;

 UnityEngine::Vector2 __declspec(property(get=get_delta))  delta;


// Methods

/// @brief Method add_dragging addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_dragging(System::Action value) ;

/// @brief Method remove_dragging addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_dragging(System::Action value) ;

/// @brief Method get_dragDirection addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> get_dragDirection() ;

/// @brief Method set_dragDirection addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragDirection(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection<T> value) ;

/// @brief Method set_slider addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_slider(UnityEngine::UIElements::BaseSlider_1<T> value) ;

/// @brief Method get_startMousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_startMousePosition() ;

/// @brief Method set_startMousePosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_startMousePosition(UnityEngine::Vector2 value) ;

/// @brief Method get_delta addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector2 get_delta() ;

static UnityEngine::UIElements::ClampedDragger_1<T> New_ctor(UnityEngine::UIElements::BaseSlider_1<T> slider, System::Action clickHandler, System::Action dragHandler) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::UIElements::BaseSlider_1<T> slider, System::Action clickHandler, System::Action dragHandler) ;

/// @brief Method ProcessDownEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessDownEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition, int32_t pointerId) ;

/// @brief Method ProcessMoveEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessMoveEvent(UnityEngine::UIElements::EventBase evt, UnityEngine::Vector2 localPosition) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::UIElements::ClampedDragger_1, "UnityEngine.UIElements", "ClampedDragger`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::UIElements::UnityEngine__UIElements__ClampedDragger_1__DragDirection, "UnityEngine.UIElements", "ClampedDragger`1/DragDirection");
