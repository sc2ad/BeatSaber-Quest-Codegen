#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
template<typename T>
class ClampedDragger_1;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__MinMaxSlider__DragState;
}
namespace UnityEngine::UIElements {
class MinMaxSlider;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7227)), TypeDefinitionIndex(TypeDefinitionIndex(10184)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 393 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7204))
// CS Name: UnityEngine.UIElements.MinMaxSlider::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits : public ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~____UnityEngine__UIElements__MinMaxSlider__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__MinMaxSlider__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits(____UnityEngine__UIElements__MinMaxSlider__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__MinMaxSlider__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits(____UnityEngine__UIElements__MinMaxSlider__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<::UnityEngine::Vector2>(ptr) {
}


  constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits& operator=(____UnityEngine__UIElements__MinMaxSlider__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits& operator=(____UnityEngine__UIElements__MinMaxSlider__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_MinValue, put=__set_m_MinValue))  m_MinValue;

constexpr void __set_m_MinValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_MinValue() const;

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_MaxValue, put=__set_m_MaxValue))  m_MaxValue;

constexpr void __set_m_MaxValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_MaxValue() const;

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_LowLimit, put=__set_m_LowLimit))  m_LowLimit;

constexpr void __set_m_LowLimit(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_LowLimit() const;

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_HighLimit, put=__set_m_HighLimit))  m_HighLimit;

constexpr void __set_m_HighLimit(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_HighLimit() const;


// Methods

/// @brief Method Init addr 0x2cc0770 size 0x1bc virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__MinMaxSlider__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cc092c size 0x170 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MinMaxSlider
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7228)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(10184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7206))
// CS Name: UnityEngine.UIElements.MinMaxSlider
class CORDL_TYPE MinMaxSlider : public ::UnityEngine::UIElements::BaseField_1<::UnityEngine::Vector2> {
public:
// Declarations
using DragState = ::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__DragState;

using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x468};

virtual ~MinMaxSlider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider", modifiers: " const&", def_value: None }]
constexpr MinMaxSlider(MinMaxSlider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider", modifiers: "&&", def_value: None }]
constexpr MinMaxSlider(MinMaxSlider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MinMaxSlider(void* ptr) noexcept : ::UnityEngine::UIElements::BaseField_1<::UnityEngine::Vector2>(ptr) {
}


  constexpr MinMaxSlider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MinMaxSlider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MinMaxSlider& operator=(MinMaxSlider&& o) noexcept = default;
  constexpr MinMaxSlider& operator=(MinMaxSlider const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragElement_k__BackingField, put=__set__dragElement_k__BackingField))  _dragElement_k__BackingField;

constexpr void __set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragElement_k__BackingField() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragMinThumb_k__BackingField, put=__set__dragMinThumb_k__BackingField))  _dragMinThumb_k__BackingField;

constexpr void __set__dragMinThumb_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragMinThumb_k__BackingField() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragMaxThumb_k__BackingField, put=__set__dragMaxThumb_k__BackingField))  _dragMaxThumb_k__BackingField;

constexpr void __set__dragMaxThumb_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragMaxThumb_k__BackingField() const;

 ::UnityEngine::UIElements::ClampedDragger_1<float_t> __declspec(property(get=__get__clampedDragger_k__BackingField, put=__set__clampedDragger_k__BackingField))  _clampedDragger_k__BackingField;

constexpr void __set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<float_t> value) ;

constexpr ::UnityEngine::UIElements::ClampedDragger_1<float_t> __get__clampedDragger_k__BackingField() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_DragElementStartPos, put=__set_m_DragElementStartPos))  m_DragElementStartPos;

constexpr void __set_m_DragElementStartPos(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_DragElementStartPos() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_ValueStartPos, put=__set_m_ValueStartPos))  m_ValueStartPos;

constexpr void __set_m_ValueStartPos(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_ValueStartPos() const;

 ::UnityEngine::Rect __declspec(property(get=__get_m_DragMinThumbRect, put=__set_m_DragMinThumbRect))  m_DragMinThumbRect;

constexpr void __set_m_DragMinThumbRect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_m_DragMinThumbRect() const;

 ::UnityEngine::Rect __declspec(property(get=__get_m_DragMaxThumbRect, put=__set_m_DragMaxThumbRect))  m_DragMaxThumbRect;

constexpr void __set_m_DragMaxThumbRect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_m_DragMaxThumbRect() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__DragState __declspec(property(get=__get_m_DragState, put=__set_m_DragState))  m_DragState;

constexpr void __set_m_DragState(::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__DragState value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__DragState __get_m_DragState() const;

 float_t __declspec(property(get=__get_m_MinLimit, put=__set_m_MinLimit))  m_MinLimit;

constexpr void __set_m_MinLimit(float_t value) ;

constexpr float_t __get_m_MinLimit() const;

 float_t __declspec(property(get=__get_m_MaxLimit, put=__set_m_MaxLimit))  m_MaxLimit;

constexpr void __set_m_MaxLimit(float_t value) ;

constexpr float_t __get_m_MaxLimit() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_trackerUssClassName, put=__set_trackerUssClassName))  trackerUssClassName;

static void __set_trackerUssClassName(::StringW value) ;

static ::StringW __get_trackerUssClassName() ;

static ::StringW __declspec(property(get=__get_draggerUssClassName, put=__set_draggerUssClassName))  draggerUssClassName;

static void __set_draggerUssClassName(::StringW value) ;

static ::StringW __get_draggerUssClassName() ;

static ::StringW __declspec(property(get=__get_minThumbUssClassName, put=__set_minThumbUssClassName))  minThumbUssClassName;

static void __set_minThumbUssClassName(::StringW value) ;

static ::StringW __get_minThumbUssClassName() ;

static ::StringW __declspec(property(get=__get_maxThumbUssClassName, put=__set_maxThumbUssClassName))  maxThumbUssClassName;

static void __set_maxThumbUssClassName(::StringW value) ;

static ::StringW __get_maxThumbUssClassName() ;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragElement, put=set_dragElement))  dragElement;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragMinThumb, put=set_dragMinThumb))  dragMinThumb;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragMaxThumb, put=set_dragMaxThumb))  dragMaxThumb;

 ::UnityEngine::UIElements::ClampedDragger_1<float_t> __declspec(property(get=get_clampedDragger, put=set_clampedDragger))  clampedDragger;

 float_t __declspec(property(get=get_minValue, put=set_minValue))  minValue;

 float_t __declspec(property(get=get_maxValue, put=set_maxValue))  maxValue;

 ::UnityEngine::Vector2 __declspec(property(get=get_value, put=set_value))  value;

 float_t __declspec(property(get=get_lowLimit, put=set_lowLimit))  lowLimit;

 float_t __declspec(property(get=get_highLimit, put=set_highLimit))  highLimit;


// Methods

/// @brief Method get_dragElement addr 0x2cbdb64 size 0x8 virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragElement() ;

/// @brief Method set_dragElement addr 0x2cbdb6c size 0x8 virtual false final false
 void set_dragElement(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_dragMinThumb addr 0x2cbdb74 size 0x8 virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragMinThumb() ;

/// @brief Method set_dragMinThumb addr 0x2cbdb7c size 0x8 virtual false final false
 void set_dragMinThumb(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_dragMaxThumb addr 0x2cbdb84 size 0x8 virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragMaxThumb() ;

/// @brief Method set_dragMaxThumb addr 0x2cbdb8c size 0x8 virtual false final false
 void set_dragMaxThumb(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_clampedDragger addr 0x2cbdb94 size 0x8 virtual false final false
 ::UnityEngine::UIElements::ClampedDragger_1<float_t> get_clampedDragger() ;

/// @brief Method set_clampedDragger addr 0x2cbdb9c size 0x8 virtual false final false
 void set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<float_t> value) ;

/// @brief Method get_minValue addr 0x2cbdba4 size 0x10 virtual false final false
 float_t get_minValue() ;

/// @brief Method set_minValue addr 0x2cbdbb4 size 0xa8 virtual false final false
 void set_minValue(float_t value) ;

/// @brief Method get_maxValue addr 0x2cbdc94 size 0x20 virtual false final false
 float_t get_maxValue() ;

/// @brief Method set_maxValue addr 0x2cbdcb4 size 0xa8 virtual false final false
 void set_maxValue(float_t value) ;

/// @brief Method get_value addr 0x2cbdd5c size 0x48 virtual true final false
 ::UnityEngine::Vector2 get_value() ;

/// @brief Method set_value addr 0x2cbdda4 size 0x8c virtual true final false
 void set_value(::UnityEngine::Vector2 value) ;

/// @brief Method SetValueWithoutNotify addr 0x2cbde30 size 0x94 virtual true final false
 void SetValueWithoutNotify(::UnityEngine::Vector2 newValue) ;

/// @brief Method get_lowLimit addr 0x2cbf3a0 size 0x8 virtual false final false
 float_t get_lowLimit() ;

/// @brief Method set_lowLimit addr 0x2cbf3a8 size 0x170 virtual false final false
 void set_lowLimit(float_t value) ;

/// @brief Method get_highLimit addr 0x2cbf518 size 0x8 virtual false final false
 float_t get_highLimit() ;

/// @brief Method set_highLimit addr 0x2cbf520 size 0x170 virtual false final false
 void set_highLimit(float_t value) ;

// Ctor Parameters []
explicit MinMaxSlider() ;

/// @brief Method .ctor addr 0x2cbf690 size 0x20 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "minValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minLimit", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLimit", ty: "float_t", modifiers: "", def_value: None }]
explicit MinMaxSlider(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit) ;

/// @brief Method .ctor addr 0x2cbf6b0 size 0x528 virtual false final false
 void _ctor(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit) ;

/// @brief Method ClampValues addr 0x2cbdc5c size 0x38 virtual false final false
 ::UnityEngine::Vector2 ClampValues(::UnityEngine::Vector2 valueToClamp) ;

/// @brief Method UpdateDragElementPosition addr 0x2cbfbd8 size 0x94 virtual false final false
 void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method UpdateDragElementPosition addr 0x2cbdec4 size 0x14dc virtual false final false
 void UpdateDragElementPosition() ;

/// @brief Method SliderLerpUnclamped addr 0x2cbfc7c size 0x10 virtual false final false
 float_t SliderLerpUnclamped(float_t a, float_t b, float_t interpolant) ;

/// @brief Method SliderNormalizeValue addr 0x2cbfc6c size 0x10 virtual false final false
 float_t SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue) ;

/// @brief Method ComputeValueFromPosition addr 0x2cbfc8c size 0x1c0 virtual false final false
 float_t ComputeValueFromPosition(float_t positionToConvert) ;

/// @brief Method ExecuteDefaultAction addr 0x2cbfe4c size 0x10c virtual true final false
 void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method SetSliderValueFromDrag addr 0x2cbff58 size 0x94 virtual false final false
 void SetSliderValueFromDrag() ;

/// @brief Method SetSliderValueFromClick addr 0x2cc0190 size 0x354 virtual false final false
 void SetSliderValueFromClick() ;

/// @brief Method ComputeValueDragStateNoThumb addr 0x2cc04e4 size 0xa0 virtual false final false
 void ComputeValueDragStateNoThumb(float_t lowLimitPosition, float_t highLimitPosition, float_t dragElementPos) ;

/// @brief Method ComputeValueFromDraggingThumb addr 0x2cbffec size 0x1a4 virtual false final false
 void ComputeValueFromDraggingThumb(float_t dragElementStartPos, float_t dragElementEndPos) ;

/// @brief Method UpdateMixedValueContent addr 0x2cc0584 size 0x4 virtual true final false
 void UpdateMixedValueContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7206)), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(7204)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5095 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7203))
// CS Name: UnityEngine.UIElements.MinMaxSlider::UxmlFactory
class CORDL_TYPE ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::MinMaxSlider,::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__MinMaxSlider__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__MinMaxSlider__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory(____UnityEngine__UIElements__MinMaxSlider__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__MinMaxSlider__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory(____UnityEngine__UIElements__MinMaxSlider__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::MinMaxSlider,::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__UxmlTraits>(ptr) {
}


  constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory& operator=(____UnityEngine__UIElements__MinMaxSlider__UxmlFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory& operator=(____UnityEngine__UIElements__MinMaxSlider__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__MinMaxSlider__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cc0728 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::DragState
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7205))
// CS Name: UnityEngine.UIElements.MinMaxSlider::DragState
struct CORDL_TYPE ____UnityEngine__UIElements__MinMaxSlider__DragState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__MinMaxSlider__DragState(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UIElements__MinMaxSlider__DragState(____UnityEngine__UIElements__MinMaxSlider__DragState const&) = default;
                    constexpr ____UnityEngine__UIElements__MinMaxSlider__DragState(____UnityEngine__UIElements__MinMaxSlider__DragState&&) = default;
                    constexpr ____UnityEngine__UIElements__MinMaxSlider__DragState& operator=(____UnityEngine__UIElements__MinMaxSlider__DragState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__MinMaxSlider__DragState& operator=(____UnityEngine__UIElements__MinMaxSlider__DragState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__MinMaxSlider__DragState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UIElements__MinMaxSlider__DragState_Unwrapped : int32_t {
__NoThumb = 0,
__MinThumb = 1,
__MiddleThumb = 2,
__MaxThumb = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UIElements__MinMaxSlider__DragState_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UIElements__MinMaxSlider__DragState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoThumb offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__DragState const NoThumb;

/// @brief Field MinThumb offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__DragState const MinThumb;

/// @brief Field MiddleThumb offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__DragState const MiddleThumb;

/// @brief Field MaxThumb offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__DragState const MaxThumb;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__DragState, "UnityEngine.UIElements", "MinMaxSlider/DragState");
NEED_NO_BOX(::UnityEngine::UIElements::MinMaxSlider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider, "UnityEngine.UIElements", "MinMaxSlider");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__UxmlFactory, "UnityEngine.UIElements", "MinMaxSlider/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__MinMaxSlider__UxmlTraits, "UnityEngine.UIElements", "MinMaxSlider/UxmlTraits");
