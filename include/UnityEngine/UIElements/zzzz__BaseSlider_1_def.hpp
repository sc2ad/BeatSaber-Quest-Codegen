#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
template<typename T>
class ClampedDragger_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TValueType>
class BaseSlider_1;
}
namespace UnityEngine::UIElements {
template<typename TValueType>
struct ____UnityEngine__UIElements__BaseSlider_1__SliderKey;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueType>
class BaseSlider_1<TValueType>;
}
namespace UnityEngine::UIElements {
template<>
class BaseSlider_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class BaseSlider_1<int32_t>;
}
// Type: ::SliderKey
namespace UnityEngine::UIElements {
// cpp template
template<typename TValueType>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7198))
// CS Name: UnityEngine.UIElements.BaseSlider`1::SliderKey
struct CORDL_TYPE ____UnityEngine__UIElements__BaseSlider_1__SliderKey : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseSlider_1__SliderKey(int32_t value__) noexcept;


                    constexpr ____UnityEngine__UIElements__BaseSlider_1__SliderKey(____UnityEngine__UIElements__BaseSlider_1__SliderKey const&) = default;
                    constexpr ____UnityEngine__UIElements__BaseSlider_1__SliderKey(____UnityEngine__UIElements__BaseSlider_1__SliderKey&&) = default;
                    constexpr ____UnityEngine__UIElements__BaseSlider_1__SliderKey& operator=(____UnityEngine__UIElements__BaseSlider_1__SliderKey const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__BaseSlider_1__SliderKey& operator=(____UnityEngine__UIElements__BaseSlider_1__SliderKey&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__BaseSlider_1__SliderKey(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__UIElements__BaseSlider_1__SliderKey_Unwrapped : int32_t {
__None = 0,
__Lowest = 1,
__LowerPage = 2,
__Lower = 3,
__Higher = 4,
__HigherPage = 5,
__Highest = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__UIElements__BaseSlider_1__SliderKey_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__UIElements__BaseSlider_1__SliderKey_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<TValueType> const None;

/// @brief Field Lowest offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<TValueType> const Lowest;

/// @brief Field LowerPage offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<TValueType> const LowerPage;

/// @brief Field Lower offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<TValueType> const Lower;

/// @brief Field Higher offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<TValueType> const Higher;

/// @brief Field HigherPage offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<TValueType> const HigherPage;

/// @brief Field Highest offset 0
static ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<TValueType> const Highest;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseSlider`1
// Type: UnityEngine.UIElements::BaseSlider`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7199)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 888 }), TypeDefinitionIndex(TypeDefinitionIndex(7228))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7199), inst: 2 })
// CS Name: UnityEngine.UIElements.BaseSlider`1
class CORDL_TYPE BaseSlider_1<TValueType> : public ::UnityEngine::UIElements::BaseField_1<TValueType> {
public:
// Declarations
using SliderKey = ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<TValueType>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BaseSlider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: " const&", def_value: None }]
constexpr BaseSlider_1(BaseSlider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: "&&", def_value: None }]
constexpr BaseSlider_1(BaseSlider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseSlider_1(void* ptr) noexcept : ::UnityEngine::UIElements::BaseField_1<TValueType>(ptr) {
}


  constexpr BaseSlider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseSlider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseSlider_1& operator=(BaseSlider_1&& o) noexcept = default;
  constexpr BaseSlider_1& operator=(BaseSlider_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragContainer_k__BackingField, put=__set__dragContainer_k__BackingField))  _dragContainer_k__BackingField;

constexpr void __set__dragContainer_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragContainer_k__BackingField() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragElement_k__BackingField, put=__set__dragElement_k__BackingField))  _dragElement_k__BackingField;

constexpr void __set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragElement_k__BackingField() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragBorderElement_k__BackingField, put=__set__dragBorderElement_k__BackingField))  _dragBorderElement_k__BackingField;

constexpr void __set__dragBorderElement_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragBorderElement_k__BackingField() const;

 ::UnityEngine::UIElements::TextField __declspec(property(get=__get__inputTextField_k__BackingField, put=__set__inputTextField_k__BackingField))  _inputTextField_k__BackingField;

constexpr void __set__inputTextField_k__BackingField(::UnityEngine::UIElements::TextField value) ;

constexpr ::UnityEngine::UIElements::TextField __get__inputTextField_k__BackingField() const;

 TValueType __declspec(property(get=__get_m_LowValue, put=__set_m_LowValue))  m_LowValue;

constexpr void __set_m_LowValue(TValueType value) ;

constexpr TValueType __get_m_LowValue() const;

 TValueType __declspec(property(get=__get_m_HighValue, put=__set_m_HighValue))  m_HighValue;

constexpr void __set_m_HighValue(TValueType value) ;

constexpr TValueType __get_m_HighValue() const;

 float_t __declspec(property(get=__get_m_PageSize, put=__set_m_PageSize))  m_PageSize;

constexpr void __set_m_PageSize(float_t value) ;

constexpr float_t __get_m_PageSize() const;

 bool __declspec(property(get=__get_m_ShowInputField, put=__set_m_ShowInputField))  m_ShowInputField;

constexpr void __set_m_ShowInputField(bool value) ;

constexpr bool __get_m_ShowInputField() const;

 bool __declspec(property(get=__get__clamped_k__BackingField, put=__set__clamped_k__BackingField))  _clamped_k__BackingField;

constexpr void __set__clamped_k__BackingField(bool value) ;

constexpr bool __get__clamped_k__BackingField() const;

 ::UnityEngine::UIElements::ClampedDragger_1<TValueType> __declspec(property(get=__get__clampedDragger_k__BackingField, put=__set__clampedDragger_k__BackingField))  _clampedDragger_k__BackingField;

constexpr void __set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<TValueType> value) ;

constexpr ::UnityEngine::UIElements::ClampedDragger_1<TValueType> __get__clampedDragger_k__BackingField() const;

 ::UnityEngine::Rect __declspec(property(get=__get_m_DragElementStartPos, put=__set_m_DragElementStartPos))  m_DragElementStartPos;

constexpr void __set_m_DragElementStartPos(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_m_DragElementStartPos() const;

 ::UnityEngine::UIElements::SliderDirection __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(::UnityEngine::UIElements::SliderDirection value) ;

constexpr ::UnityEngine::UIElements::SliderDirection __get_m_Direction() const;

 bool __declspec(property(get=__get_m_Inverted, put=__set_m_Inverted))  m_Inverted;

constexpr void __set_m_Inverted(bool value) ;

constexpr bool __get_m_Inverted() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_horizontalVariantUssClassName, put=__set_horizontalVariantUssClassName))  horizontalVariantUssClassName;

static void __set_horizontalVariantUssClassName(::StringW value) ;

static ::StringW __get_horizontalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_verticalVariantUssClassName, put=__set_verticalVariantUssClassName))  verticalVariantUssClassName;

static void __set_verticalVariantUssClassName(::StringW value) ;

static ::StringW __get_verticalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_dragContainerUssClassName, put=__set_dragContainerUssClassName))  dragContainerUssClassName;

static void __set_dragContainerUssClassName(::StringW value) ;

static ::StringW __get_dragContainerUssClassName() ;

static ::StringW __declspec(property(get=__get_trackerUssClassName, put=__set_trackerUssClassName))  trackerUssClassName;

static void __set_trackerUssClassName(::StringW value) ;

static ::StringW __get_trackerUssClassName() ;

static ::StringW __declspec(property(get=__get_draggerUssClassName, put=__set_draggerUssClassName))  draggerUssClassName;

static void __set_draggerUssClassName(::StringW value) ;

static ::StringW __get_draggerUssClassName() ;

static ::StringW __declspec(property(get=__get_draggerBorderUssClassName, put=__set_draggerBorderUssClassName))  draggerBorderUssClassName;

static void __set_draggerBorderUssClassName(::StringW value) ;

static ::StringW __get_draggerBorderUssClassName() ;

static ::StringW __declspec(property(get=__get_textFieldClassName, put=__set_textFieldClassName))  textFieldClassName;

static void __set_textFieldClassName(::StringW value) ;

static ::StringW __get_textFieldClassName() ;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragContainer, put=set_dragContainer))  dragContainer;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragElement, put=set_dragElement))  dragElement;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragBorderElement, put=set_dragBorderElement))  dragBorderElement;

 ::UnityEngine::UIElements::TextField __declspec(property(get=get_inputTextField, put=set_inputTextField))  inputTextField;

 TValueType __declspec(property(get=get_lowValue, put=set_lowValue))  lowValue;

 TValueType __declspec(property(get=get_highValue, put=set_highValue))  highValue;

 float_t __declspec(property(get=get_pageSize, put=set_pageSize))  pageSize;

 bool __declspec(property(get=get_showInputField, put=set_showInputField))  showInputField;

 bool __declspec(property(get=get_clamped, put=set_clamped))  clamped;

 ::UnityEngine::UIElements::ClampedDragger_1<TValueType> __declspec(property(get=get_clampedDragger, put=set_clampedDragger))  clampedDragger;

 TValueType __declspec(property(get=get_value, put=set_value))  value;

 ::UnityEngine::UIElements::SliderDirection __declspec(property(get=get_direction, put=set_direction))  direction;

 bool __declspec(property(get=get_inverted, put=set_inverted))  inverted;


// Methods

/// @brief Method get_dragContainer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragContainer() ;

/// @brief Method set_dragContainer addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragContainer(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_dragElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragElement() ;

/// @brief Method set_dragElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragElement(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_dragBorderElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragBorderElement() ;

/// @brief Method set_dragBorderElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragBorderElement(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_inputTextField addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::TextField get_inputTextField() ;

/// @brief Method set_inputTextField addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_inputTextField(::UnityEngine::UIElements::TextField value) ;

/// @brief Method get_lowValue addr 0x0 size 0xffffffffffffffff virtual false final false
 TValueType get_lowValue() ;

/// @brief Method set_lowValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_lowValue(TValueType value) ;

/// @brief Method get_highValue addr 0x0 size 0xffffffffffffffff virtual false final false
 TValueType get_highValue() ;

/// @brief Method set_highValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_highValue(TValueType value) ;

/// @brief Method SetHighValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetHighValueWithoutNotify(TValueType newHighValue) ;

/// @brief Method get_pageSize addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_pageSize() ;

/// @brief Method set_pageSize addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_pageSize(float_t value) ;

/// @brief Method get_showInputField addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_showInputField() ;

/// @brief Method set_showInputField addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_showInputField(bool value) ;

/// @brief Method get_clamped addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_clamped() ;

/// @brief Method set_clamped addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_clamped(bool value) ;

/// @brief Method get_clampedDragger addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::ClampedDragger_1<TValueType> get_clampedDragger() ;

/// @brief Method set_clampedDragger addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<TValueType> value) ;

/// @brief Method Clamp addr 0x0 size 0xffffffffffffffff virtual false final false
 TValueType Clamp(TValueType value, TValueType lowBound, TValueType highBound) ;

/// @brief Method GetClampedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 TValueType GetClampedValue(TValueType newValue) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 TValueType get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(TValueType value) ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValueWithoutNotify(TValueType newValue) ;

/// @brief Method get_direction addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::SliderDirection get_direction() ;

/// @brief Method set_direction addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_direction(::UnityEngine::UIElements::SliderDirection value) ;

/// @brief Method get_inverted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_inverted() ;

/// @brief Method set_inverted addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_inverted(bool value) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "start", ty: "TValueType", modifiers: "", def_value: None }, CppParam { name: "end", ty: "TValueType", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "::UnityEngine::UIElements::SliderDirection", modifiers: "", def_value: None }, CppParam { name: "pageSize", ty: "float_t", modifiers: "", def_value: None }]
explicit BaseSlider_1(::StringW label, TValueType start, TValueType end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label, TValueType start, TValueType end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method GetClosestPowerOfTen addr 0x0 size 0xffffffffffffffff virtual false final false
static float_t GetClosestPowerOfTen(float_t positiveNumber) ;

/// @brief Method RoundToMultipleOf addr 0x0 size 0xffffffffffffffff virtual false final false
static float_t RoundToMultipleOf(float_t value, float_t roundingValue) ;

/// @brief Method ClampValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClampValue() ;

/// @brief Method SliderLerpUnclamped addr 0x0 size 0xffffffffffffffff virtual true final false
 TValueType SliderLerpUnclamped(TValueType a, TValueType b, float_t interpolant) ;

/// @brief Method SliderNormalizeValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t SliderNormalizeValue(TValueType currentValue, TValueType lowerValue, TValueType higherValue) ;

/// @brief Method ParseStringToValue addr 0x0 size 0xffffffffffffffff virtual true final false
 TValueType ParseStringToValue(::StringW stringValue) ;

/// @brief Method ComputeValueFromKey addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeValueFromKey(::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<TValueType> sliderKey, bool isShift) ;

/// @brief Method SliderLerpDirectionalUnclamped addr 0x0 size 0xffffffffffffffff virtual false final false
 TValueType SliderLerpDirectionalUnclamped(TValueType a, TValueType b, float_t positionInterpolant) ;

/// @brief Method SetSliderValueFromDrag addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetSliderValueFromDrag() ;

/// @brief Method ComputeValueAndDirectionFromDrag addr 0x0 size 0xffffffffffffffff virtual false final false
 void ComputeValueAndDirectionFromDrag(float_t sliderLength, float_t dragElementLength, float_t dragElementPos) ;

/// @brief Method SetSliderValueFromClick addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetSliderValueFromClick() ;

/// @brief Method OnKeyDown addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method ComputeValueAndDirectionFromClick addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeValueAndDirectionFromClick(float_t sliderLength, float_t dragElementLength, float_t dragElementPos, float_t dragElementLastPos) ;

/// @brief Method AdjustDragElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void AdjustDragElement(float_t factor) ;

/// @brief Method UpdateDragElementPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnViewDataReady() ;

/// @brief Method SameValues addr 0x0 size 0xffffffffffffffff virtual false final false
 bool SameValues(float_t a, float_t b, float_t epsilon) ;

/// @brief Method UpdateDragElementPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateDragElementPosition() ;

/// @brief Method ExecuteDefaultAction addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method UpdateTextFieldVisibility addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateTextFieldVisibility() ;

/// @brief Method UpdateTextFieldValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateTextFieldValue() ;

/// @brief Method OnTextFieldFocusOut addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent evt) ;

/// @brief Method OnTextFieldValueChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnTextFieldValueChange(::UnityEngine::UIElements::ChangeEvent_1<::StringW> evt) ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateMixedValueContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseSlider`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7199)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 888 }), TypeDefinitionIndex(TypeDefinitionIndex(7228))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7199), inst: 92 })
// CS Name: UnityEngine.UIElements.BaseSlider`1
class CORDL_TYPE BaseSlider_1<int32_t> : public ::UnityEngine::UIElements::BaseField_1<int32_t> {
public:
// Declarations
using SliderKey = ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BaseSlider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: " const&", def_value: None }]
constexpr BaseSlider_1(BaseSlider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: "&&", def_value: None }]
constexpr BaseSlider_1(BaseSlider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseSlider_1(void* ptr) noexcept : ::UnityEngine::UIElements::BaseField_1<int32_t>(ptr) {
}


  constexpr BaseSlider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseSlider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseSlider_1& operator=(BaseSlider_1&& o) noexcept = default;
  constexpr BaseSlider_1& operator=(BaseSlider_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragContainer_k__BackingField, put=__set__dragContainer_k__BackingField))  _dragContainer_k__BackingField;

constexpr void __set__dragContainer_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragContainer_k__BackingField() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragElement_k__BackingField, put=__set__dragElement_k__BackingField))  _dragElement_k__BackingField;

constexpr void __set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragElement_k__BackingField() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragBorderElement_k__BackingField, put=__set__dragBorderElement_k__BackingField))  _dragBorderElement_k__BackingField;

constexpr void __set__dragBorderElement_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragBorderElement_k__BackingField() const;

 ::UnityEngine::UIElements::TextField __declspec(property(get=__get__inputTextField_k__BackingField, put=__set__inputTextField_k__BackingField))  _inputTextField_k__BackingField;

constexpr void __set__inputTextField_k__BackingField(::UnityEngine::UIElements::TextField value) ;

constexpr ::UnityEngine::UIElements::TextField __get__inputTextField_k__BackingField() const;

 int32_t __declspec(property(get=__get_m_LowValue, put=__set_m_LowValue))  m_LowValue;

constexpr void __set_m_LowValue(int32_t value) ;

constexpr int32_t __get_m_LowValue() const;

 int32_t __declspec(property(get=__get_m_HighValue, put=__set_m_HighValue))  m_HighValue;

constexpr void __set_m_HighValue(int32_t value) ;

constexpr int32_t __get_m_HighValue() const;

 float_t __declspec(property(get=__get_m_PageSize, put=__set_m_PageSize))  m_PageSize;

constexpr void __set_m_PageSize(float_t value) ;

constexpr float_t __get_m_PageSize() const;

 bool __declspec(property(get=__get_m_ShowInputField, put=__set_m_ShowInputField))  m_ShowInputField;

constexpr void __set_m_ShowInputField(bool value) ;

constexpr bool __get_m_ShowInputField() const;

 bool __declspec(property(get=__get__clamped_k__BackingField, put=__set__clamped_k__BackingField))  _clamped_k__BackingField;

constexpr void __set__clamped_k__BackingField(bool value) ;

constexpr bool __get__clamped_k__BackingField() const;

 ::UnityEngine::UIElements::ClampedDragger_1<int32_t> __declspec(property(get=__get__clampedDragger_k__BackingField, put=__set__clampedDragger_k__BackingField))  _clampedDragger_k__BackingField;

constexpr void __set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<int32_t> value) ;

constexpr ::UnityEngine::UIElements::ClampedDragger_1<int32_t> __get__clampedDragger_k__BackingField() const;

 ::UnityEngine::Rect __declspec(property(get=__get_m_DragElementStartPos, put=__set_m_DragElementStartPos))  m_DragElementStartPos;

constexpr void __set_m_DragElementStartPos(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_m_DragElementStartPos() const;

 ::UnityEngine::UIElements::SliderDirection __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(::UnityEngine::UIElements::SliderDirection value) ;

constexpr ::UnityEngine::UIElements::SliderDirection __get_m_Direction() const;

 bool __declspec(property(get=__get_m_Inverted, put=__set_m_Inverted))  m_Inverted;

constexpr void __set_m_Inverted(bool value) ;

constexpr bool __get_m_Inverted() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_horizontalVariantUssClassName, put=__set_horizontalVariantUssClassName))  horizontalVariantUssClassName;

static void __set_horizontalVariantUssClassName(::StringW value) ;

static ::StringW __get_horizontalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_verticalVariantUssClassName, put=__set_verticalVariantUssClassName))  verticalVariantUssClassName;

static void __set_verticalVariantUssClassName(::StringW value) ;

static ::StringW __get_verticalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_dragContainerUssClassName, put=__set_dragContainerUssClassName))  dragContainerUssClassName;

static void __set_dragContainerUssClassName(::StringW value) ;

static ::StringW __get_dragContainerUssClassName() ;

static ::StringW __declspec(property(get=__get_trackerUssClassName, put=__set_trackerUssClassName))  trackerUssClassName;

static void __set_trackerUssClassName(::StringW value) ;

static ::StringW __get_trackerUssClassName() ;

static ::StringW __declspec(property(get=__get_draggerUssClassName, put=__set_draggerUssClassName))  draggerUssClassName;

static void __set_draggerUssClassName(::StringW value) ;

static ::StringW __get_draggerUssClassName() ;

static ::StringW __declspec(property(get=__get_draggerBorderUssClassName, put=__set_draggerBorderUssClassName))  draggerBorderUssClassName;

static void __set_draggerBorderUssClassName(::StringW value) ;

static ::StringW __get_draggerBorderUssClassName() ;

static ::StringW __declspec(property(get=__get_textFieldClassName, put=__set_textFieldClassName))  textFieldClassName;

static void __set_textFieldClassName(::StringW value) ;

static ::StringW __get_textFieldClassName() ;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragContainer, put=set_dragContainer))  dragContainer;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragElement, put=set_dragElement))  dragElement;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragBorderElement, put=set_dragBorderElement))  dragBorderElement;

 ::UnityEngine::UIElements::TextField __declspec(property(get=get_inputTextField, put=set_inputTextField))  inputTextField;

 int32_t __declspec(property(get=get_lowValue, put=set_lowValue))  lowValue;

 int32_t __declspec(property(get=get_highValue, put=set_highValue))  highValue;

 float_t __declspec(property(get=get_pageSize, put=set_pageSize))  pageSize;

 bool __declspec(property(get=get_showInputField, put=set_showInputField))  showInputField;

 bool __declspec(property(get=get_clamped, put=set_clamped))  clamped;

 ::UnityEngine::UIElements::ClampedDragger_1<int32_t> __declspec(property(get=get_clampedDragger, put=set_clampedDragger))  clampedDragger;

 int32_t __declspec(property(get=get_value, put=set_value))  value;

 ::UnityEngine::UIElements::SliderDirection __declspec(property(get=get_direction, put=set_direction))  direction;

 bool __declspec(property(get=get_inverted, put=set_inverted))  inverted;


// Methods

/// @brief Method get_dragContainer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragContainer() ;

/// @brief Method set_dragContainer addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragContainer(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_dragElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragElement() ;

/// @brief Method set_dragElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragElement(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_dragBorderElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragBorderElement() ;

/// @brief Method set_dragBorderElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragBorderElement(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_inputTextField addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::TextField get_inputTextField() ;

/// @brief Method set_inputTextField addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_inputTextField(::UnityEngine::UIElements::TextField value) ;

/// @brief Method get_lowValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_lowValue() ;

/// @brief Method set_lowValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_lowValue(int32_t value) ;

/// @brief Method get_highValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_highValue() ;

/// @brief Method set_highValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_highValue(int32_t value) ;

/// @brief Method SetHighValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetHighValueWithoutNotify(int32_t newHighValue) ;

/// @brief Method get_pageSize addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_pageSize() ;

/// @brief Method set_pageSize addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_pageSize(float_t value) ;

/// @brief Method get_showInputField addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_showInputField() ;

/// @brief Method set_showInputField addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_showInputField(bool value) ;

/// @brief Method get_clamped addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_clamped() ;

/// @brief Method set_clamped addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_clamped(bool value) ;

/// @brief Method get_clampedDragger addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::ClampedDragger_1<int32_t> get_clampedDragger() ;

/// @brief Method set_clampedDragger addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<int32_t> value) ;

/// @brief Method Clamp addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t Clamp(int32_t value, int32_t lowBound, int32_t highBound) ;

/// @brief Method GetClampedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetClampedValue(int32_t newValue) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(int32_t value) ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValueWithoutNotify(int32_t newValue) ;

/// @brief Method get_direction addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::SliderDirection get_direction() ;

/// @brief Method set_direction addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_direction(::UnityEngine::UIElements::SliderDirection value) ;

/// @brief Method get_inverted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_inverted() ;

/// @brief Method set_inverted addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_inverted(bool value) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "::UnityEngine::UIElements::SliderDirection", modifiers: "", def_value: None }, CppParam { name: "pageSize", ty: "float_t", modifiers: "", def_value: None }]
explicit BaseSlider_1(::StringW label, int32_t start, int32_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label, int32_t start, int32_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method GetClosestPowerOfTen addr 0x0 size 0xffffffffffffffff virtual false final false
static float_t GetClosestPowerOfTen(float_t positiveNumber) ;

/// @brief Method RoundToMultipleOf addr 0x0 size 0xffffffffffffffff virtual false final false
static float_t RoundToMultipleOf(float_t value, float_t roundingValue) ;

/// @brief Method ClampValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClampValue() ;

/// @brief Method SliderLerpUnclamped addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t SliderLerpUnclamped(int32_t a, int32_t b, float_t interpolant) ;

/// @brief Method SliderNormalizeValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t SliderNormalizeValue(int32_t currentValue, int32_t lowerValue, int32_t higherValue) ;

/// @brief Method ParseStringToValue addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t ParseStringToValue(::StringW stringValue) ;

/// @brief Method ComputeValueFromKey addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeValueFromKey(::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<int32_t> sliderKey, bool isShift) ;

/// @brief Method SliderLerpDirectionalUnclamped addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t SliderLerpDirectionalUnclamped(int32_t a, int32_t b, float_t positionInterpolant) ;

/// @brief Method SetSliderValueFromDrag addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetSliderValueFromDrag() ;

/// @brief Method ComputeValueAndDirectionFromDrag addr 0x0 size 0xffffffffffffffff virtual false final false
 void ComputeValueAndDirectionFromDrag(float_t sliderLength, float_t dragElementLength, float_t dragElementPos) ;

/// @brief Method SetSliderValueFromClick addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetSliderValueFromClick() ;

/// @brief Method OnKeyDown addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method ComputeValueAndDirectionFromClick addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeValueAndDirectionFromClick(float_t sliderLength, float_t dragElementLength, float_t dragElementPos, float_t dragElementLastPos) ;

/// @brief Method AdjustDragElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void AdjustDragElement(float_t factor) ;

/// @brief Method UpdateDragElementPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnViewDataReady() ;

/// @brief Method SameValues addr 0x0 size 0xffffffffffffffff virtual false final false
 bool SameValues(float_t a, float_t b, float_t epsilon) ;

/// @brief Method UpdateDragElementPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateDragElementPosition() ;

/// @brief Method ExecuteDefaultAction addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method UpdateTextFieldVisibility addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateTextFieldVisibility() ;

/// @brief Method UpdateTextFieldValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateTextFieldValue() ;

/// @brief Method OnTextFieldFocusOut addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent evt) ;

/// @brief Method OnTextFieldValueChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnTextFieldValueChange(::UnityEngine::UIElements::ChangeEvent_1<::StringW> evt) ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateMixedValueContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseSlider`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7228)), TypeDefinitionIndex(TypeDefinitionIndex(7199)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 888 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7199), inst: 374 })
// CS Name: UnityEngine.UIElements.BaseSlider`1
class CORDL_TYPE BaseSlider_1<float_t> : public ::UnityEngine::UIElements::BaseField_1<float_t> {
public:
// Declarations
using SliderKey = ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<float_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~BaseSlider_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: " const&", def_value: None }]
constexpr BaseSlider_1(BaseSlider_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: "&&", def_value: None }]
constexpr BaseSlider_1(BaseSlider_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseSlider_1(void* ptr) noexcept : ::UnityEngine::UIElements::BaseField_1<float_t>(ptr) {
}


  constexpr BaseSlider_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseSlider_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseSlider_1& operator=(BaseSlider_1&& o) noexcept = default;
  constexpr BaseSlider_1& operator=(BaseSlider_1 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragContainer_k__BackingField, put=__set__dragContainer_k__BackingField))  _dragContainer_k__BackingField;

constexpr void __set__dragContainer_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragContainer_k__BackingField() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragElement_k__BackingField, put=__set__dragElement_k__BackingField))  _dragElement_k__BackingField;

constexpr void __set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragElement_k__BackingField() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get__dragBorderElement_k__BackingField, put=__set__dragBorderElement_k__BackingField))  _dragBorderElement_k__BackingField;

constexpr void __set__dragBorderElement_k__BackingField(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get__dragBorderElement_k__BackingField() const;

 ::UnityEngine::UIElements::TextField __declspec(property(get=__get__inputTextField_k__BackingField, put=__set__inputTextField_k__BackingField))  _inputTextField_k__BackingField;

constexpr void __set__inputTextField_k__BackingField(::UnityEngine::UIElements::TextField value) ;

constexpr ::UnityEngine::UIElements::TextField __get__inputTextField_k__BackingField() const;

 float_t __declspec(property(get=__get_m_LowValue, put=__set_m_LowValue))  m_LowValue;

constexpr void __set_m_LowValue(float_t value) ;

constexpr float_t __get_m_LowValue() const;

 float_t __declspec(property(get=__get_m_HighValue, put=__set_m_HighValue))  m_HighValue;

constexpr void __set_m_HighValue(float_t value) ;

constexpr float_t __get_m_HighValue() const;

 float_t __declspec(property(get=__get_m_PageSize, put=__set_m_PageSize))  m_PageSize;

constexpr void __set_m_PageSize(float_t value) ;

constexpr float_t __get_m_PageSize() const;

 bool __declspec(property(get=__get_m_ShowInputField, put=__set_m_ShowInputField))  m_ShowInputField;

constexpr void __set_m_ShowInputField(bool value) ;

constexpr bool __get_m_ShowInputField() const;

 bool __declspec(property(get=__get__clamped_k__BackingField, put=__set__clamped_k__BackingField))  _clamped_k__BackingField;

constexpr void __set__clamped_k__BackingField(bool value) ;

constexpr bool __get__clamped_k__BackingField() const;

 ::UnityEngine::UIElements::ClampedDragger_1<float_t> __declspec(property(get=__get__clampedDragger_k__BackingField, put=__set__clampedDragger_k__BackingField))  _clampedDragger_k__BackingField;

constexpr void __set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<float_t> value) ;

constexpr ::UnityEngine::UIElements::ClampedDragger_1<float_t> __get__clampedDragger_k__BackingField() const;

 ::UnityEngine::Rect __declspec(property(get=__get_m_DragElementStartPos, put=__set_m_DragElementStartPos))  m_DragElementStartPos;

constexpr void __set_m_DragElementStartPos(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_m_DragElementStartPos() const;

 ::UnityEngine::UIElements::SliderDirection __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(::UnityEngine::UIElements::SliderDirection value) ;

constexpr ::UnityEngine::UIElements::SliderDirection __get_m_Direction() const;

 bool __declspec(property(get=__get_m_Inverted, put=__set_m_Inverted))  m_Inverted;

constexpr void __set_m_Inverted(bool value) ;

constexpr bool __get_m_Inverted() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_horizontalVariantUssClassName, put=__set_horizontalVariantUssClassName))  horizontalVariantUssClassName;

static void __set_horizontalVariantUssClassName(::StringW value) ;

static ::StringW __get_horizontalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_verticalVariantUssClassName, put=__set_verticalVariantUssClassName))  verticalVariantUssClassName;

static void __set_verticalVariantUssClassName(::StringW value) ;

static ::StringW __get_verticalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_dragContainerUssClassName, put=__set_dragContainerUssClassName))  dragContainerUssClassName;

static void __set_dragContainerUssClassName(::StringW value) ;

static ::StringW __get_dragContainerUssClassName() ;

static ::StringW __declspec(property(get=__get_trackerUssClassName, put=__set_trackerUssClassName))  trackerUssClassName;

static void __set_trackerUssClassName(::StringW value) ;

static ::StringW __get_trackerUssClassName() ;

static ::StringW __declspec(property(get=__get_draggerUssClassName, put=__set_draggerUssClassName))  draggerUssClassName;

static void __set_draggerUssClassName(::StringW value) ;

static ::StringW __get_draggerUssClassName() ;

static ::StringW __declspec(property(get=__get_draggerBorderUssClassName, put=__set_draggerBorderUssClassName))  draggerBorderUssClassName;

static void __set_draggerBorderUssClassName(::StringW value) ;

static ::StringW __get_draggerBorderUssClassName() ;

static ::StringW __declspec(property(get=__get_textFieldClassName, put=__set_textFieldClassName))  textFieldClassName;

static void __set_textFieldClassName(::StringW value) ;

static ::StringW __get_textFieldClassName() ;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragContainer, put=set_dragContainer))  dragContainer;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragElement, put=set_dragElement))  dragElement;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_dragBorderElement, put=set_dragBorderElement))  dragBorderElement;

 ::UnityEngine::UIElements::TextField __declspec(property(get=get_inputTextField, put=set_inputTextField))  inputTextField;

 float_t __declspec(property(get=get_lowValue, put=set_lowValue))  lowValue;

 float_t __declspec(property(get=get_highValue, put=set_highValue))  highValue;

 float_t __declspec(property(get=get_pageSize, put=set_pageSize))  pageSize;

 bool __declspec(property(get=get_showInputField, put=set_showInputField))  showInputField;

 bool __declspec(property(get=get_clamped, put=set_clamped))  clamped;

 ::UnityEngine::UIElements::ClampedDragger_1<float_t> __declspec(property(get=get_clampedDragger, put=set_clampedDragger))  clampedDragger;

 float_t __declspec(property(get=get_value, put=set_value))  value;

 ::UnityEngine::UIElements::SliderDirection __declspec(property(get=get_direction, put=set_direction))  direction;

 bool __declspec(property(get=get_inverted, put=set_inverted))  inverted;


// Methods

/// @brief Method get_dragContainer addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragContainer() ;

/// @brief Method set_dragContainer addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragContainer(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_dragElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragElement() ;

/// @brief Method set_dragElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragElement(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_dragBorderElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_dragBorderElement() ;

/// @brief Method set_dragBorderElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_dragBorderElement(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_inputTextField addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::TextField get_inputTextField() ;

/// @brief Method set_inputTextField addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_inputTextField(::UnityEngine::UIElements::TextField value) ;

/// @brief Method get_lowValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_lowValue() ;

/// @brief Method set_lowValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_lowValue(float_t value) ;

/// @brief Method get_highValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_highValue() ;

/// @brief Method set_highValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_highValue(float_t value) ;

/// @brief Method SetHighValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetHighValueWithoutNotify(float_t newHighValue) ;

/// @brief Method get_pageSize addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_pageSize() ;

/// @brief Method set_pageSize addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_pageSize(float_t value) ;

/// @brief Method get_showInputField addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_showInputField() ;

/// @brief Method set_showInputField addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_showInputField(bool value) ;

/// @brief Method get_clamped addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_clamped() ;

/// @brief Method set_clamped addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_clamped(bool value) ;

/// @brief Method get_clampedDragger addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::ClampedDragger_1<float_t> get_clampedDragger() ;

/// @brief Method set_clampedDragger addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<float_t> value) ;

/// @brief Method Clamp addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t Clamp(float_t value, float_t lowBound, float_t highBound) ;

/// @brief Method GetClampedValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetClampedValue(float_t newValue) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(float_t value) ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValueWithoutNotify(float_t newValue) ;

/// @brief Method get_direction addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::SliderDirection get_direction() ;

/// @brief Method set_direction addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_direction(::UnityEngine::UIElements::SliderDirection value) ;

/// @brief Method get_inverted addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_inverted() ;

/// @brief Method set_inverted addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_inverted(bool value) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "start", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "::UnityEngine::UIElements::SliderDirection", modifiers: "", def_value: None }, CppParam { name: "pageSize", ty: "float_t", modifiers: "", def_value: None }]
explicit BaseSlider_1(::StringW label, float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label, float_t start, float_t end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize) ;

/// @brief Method GetClosestPowerOfTen addr 0x0 size 0xffffffffffffffff virtual false final false
static float_t GetClosestPowerOfTen(float_t positiveNumber) ;

/// @brief Method RoundToMultipleOf addr 0x0 size 0xffffffffffffffff virtual false final false
static float_t RoundToMultipleOf(float_t value, float_t roundingValue) ;

/// @brief Method ClampValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void ClampValue() ;

/// @brief Method SliderLerpUnclamped addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t SliderLerpUnclamped(float_t a, float_t b, float_t interpolant) ;

/// @brief Method SliderNormalizeValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue) ;

/// @brief Method ParseStringToValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ParseStringToValue(::StringW stringValue) ;

/// @brief Method ComputeValueFromKey addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeValueFromKey(::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey<float_t> sliderKey, bool isShift) ;

/// @brief Method SliderLerpDirectionalUnclamped addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t SliderLerpDirectionalUnclamped(float_t a, float_t b, float_t positionInterpolant) ;

/// @brief Method SetSliderValueFromDrag addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetSliderValueFromDrag() ;

/// @brief Method ComputeValueAndDirectionFromDrag addr 0x0 size 0xffffffffffffffff virtual false final false
 void ComputeValueAndDirectionFromDrag(float_t sliderLength, float_t dragElementLength, float_t dragElementPos) ;

/// @brief Method SetSliderValueFromClick addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetSliderValueFromClick() ;

/// @brief Method OnKeyDown addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent evt) ;

/// @brief Method ComputeValueAndDirectionFromClick addr 0x0 size 0xffffffffffffffff virtual true final false
 void ComputeValueAndDirectionFromClick(float_t sliderLength, float_t dragElementLength, float_t dragElementPos, float_t dragElementLastPos) ;

/// @brief Method AdjustDragElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void AdjustDragElement(float_t factor) ;

/// @brief Method UpdateDragElementPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent evt) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnViewDataReady() ;

/// @brief Method SameValues addr 0x0 size 0xffffffffffffffff virtual false final false
 bool SameValues(float_t a, float_t b, float_t epsilon) ;

/// @brief Method UpdateDragElementPosition addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateDragElementPosition() ;

/// @brief Method ExecuteDefaultAction addr 0x0 size 0xffffffffffffffff virtual true final false
 void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method UpdateTextFieldVisibility addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateTextFieldVisibility() ;

/// @brief Method UpdateTextFieldValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateTextFieldValue() ;

/// @brief Method OnTextFieldFocusOut addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent evt) ;

/// @brief Method OnTextFieldValueChange addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnTextFieldValueChange(::UnityEngine::UIElements::ChangeEvent_1<::StringW> evt) ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateMixedValueContent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseSlider_1, "UnityEngine.UIElements", "BaseSlider`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::____UnityEngine__UIElements__BaseSlider_1__SliderKey, "UnityEngine.UIElements", "BaseSlider`1/SliderKey");
