#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UIElements {
class RepeatButton;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
class Slider;
}
namespace System {
template<typename T>
class Action_1;
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
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
class ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5;
}
namespace UnityEngine::UIElements {
class Scroller;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__Scroller__UxmlFactory;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__Scroller__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7159))
// CS Name: UnityEngine.UIElements.Scroller::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__Scroller__UxmlTraits : public ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__5 = ::GlobalNamespace::______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~____UnityEngine__UIElements__Scroller__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__Scroller__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__Scroller__UxmlTraits(____UnityEngine__UIElements__Scroller__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__Scroller__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__Scroller__UxmlTraits(____UnityEngine__UIElements__Scroller__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__Scroller__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr ____UnityEngine__UIElements__Scroller__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__Scroller__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__Scroller__UxmlTraits& operator=(____UnityEngine__UIElements__Scroller__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__Scroller__UxmlTraits& operator=(____UnityEngine__UIElements__Scroller__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_LowValue, put=__set_m_LowValue))  m_LowValue;

constexpr void __set_m_LowValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_LowValue() const;

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_HighValue, put=__set_m_HighValue))  m_HighValue;

constexpr void __set_m_HighValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_HighValue() const;

 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection> __declspec(property(get=__get_m_Direction, put=__set_m_Direction))  m_Direction;

constexpr void __set_m_Direction(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection> value) ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::SliderDirection> __get_m_Direction() const;

 ::UnityEngine::UIElements::UxmlFloatAttributeDescription __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(::UnityEngine::UIElements::UxmlFloatAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription __get_m_Value() const;


// Properties

 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x2cb4300 size 0x64 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

/// @brief Method Init addr 0x2cb43a8 size 0x1ec virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__Scroller__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cb4594 size 0x25c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Scroller
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7160))
// CS Name: UnityEngine.UIElements.Scroller
class CORDL_TYPE Scroller : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3d0};

virtual ~Scroller() = default;

// Ctor Parameters [CppParam { name: "", ty: "Scroller", modifiers: " const&", def_value: None }]
constexpr Scroller(Scroller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Scroller", modifiers: "&&", def_value: None }]
constexpr Scroller(Scroller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Scroller(void* ptr) noexcept : ::UnityEngine::UIElements::VisualElement(ptr) {
}


  constexpr Scroller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Scroller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Scroller& operator=(Scroller&& o) noexcept = default;
  constexpr Scroller& operator=(Scroller const& o) noexcept = default;
                


// Fields

 ::System::Action_1<float_t> __declspec(property(get=__get_valueChanged, put=__set_valueChanged))  valueChanged;

constexpr void __set_valueChanged(::System::Action_1<float_t> value) ;

constexpr ::System::Action_1<float_t> __get_valueChanged() const;

 ::UnityEngine::UIElements::Slider __declspec(property(get=__get__slider_k__BackingField, put=__set__slider_k__BackingField))  _slider_k__BackingField;

constexpr void __set__slider_k__BackingField(::UnityEngine::UIElements::Slider value) ;

constexpr ::UnityEngine::UIElements::Slider __get__slider_k__BackingField() const;

 ::UnityEngine::UIElements::RepeatButton __declspec(property(get=__get__lowButton_k__BackingField, put=__set__lowButton_k__BackingField))  _lowButton_k__BackingField;

constexpr void __set__lowButton_k__BackingField(::UnityEngine::UIElements::RepeatButton value) ;

constexpr ::UnityEngine::UIElements::RepeatButton __get__lowButton_k__BackingField() const;

 ::UnityEngine::UIElements::RepeatButton __declspec(property(get=__get__highButton_k__BackingField, put=__set__highButton_k__BackingField))  _highButton_k__BackingField;

constexpr void __set__highButton_k__BackingField(::UnityEngine::UIElements::RepeatButton value) ;

constexpr ::UnityEngine::UIElements::RepeatButton __get__highButton_k__BackingField() const;

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_horizontalVariantUssClassName, put=__set_horizontalVariantUssClassName))  horizontalVariantUssClassName;

static void __set_horizontalVariantUssClassName(::StringW value) ;

static ::StringW __get_horizontalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_verticalVariantUssClassName, put=__set_verticalVariantUssClassName))  verticalVariantUssClassName;

static void __set_verticalVariantUssClassName(::StringW value) ;

static ::StringW __get_verticalVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_sliderUssClassName, put=__set_sliderUssClassName))  sliderUssClassName;

static void __set_sliderUssClassName(::StringW value) ;

static ::StringW __get_sliderUssClassName() ;

static ::StringW __declspec(property(get=__get_lowButtonUssClassName, put=__set_lowButtonUssClassName))  lowButtonUssClassName;

static void __set_lowButtonUssClassName(::StringW value) ;

static ::StringW __get_lowButtonUssClassName() ;

static ::StringW __declspec(property(get=__get_highButtonUssClassName, put=__set_highButtonUssClassName))  highButtonUssClassName;

static void __set_highButtonUssClassName(::StringW value) ;

static ::StringW __get_highButtonUssClassName() ;


// Properties

 ::UnityEngine::UIElements::Slider __declspec(property(get=get_slider, put=set_slider))  slider;

 ::UnityEngine::UIElements::RepeatButton __declspec(property(get=get_lowButton, put=set_lowButton))  lowButton;

 ::UnityEngine::UIElements::RepeatButton __declspec(property(get=get_highButton, put=set_highButton))  highButton;

 float_t __declspec(property(get=get_value, put=set_value))  value;

 float_t __declspec(property(get=get_lowValue, put=set_lowValue))  lowValue;

 float_t __declspec(property(get=get_highValue, put=set_highValue))  highValue;

 ::UnityEngine::UIElements::SliderDirection __declspec(property(put=set_direction))  direction;


// Methods

/// @brief Method add_valueChanged addr 0x2cb353c size 0xb4 virtual false final false
 void add_valueChanged(::System::Action_1<float_t> value) ;

/// @brief Method remove_valueChanged addr 0x2cb35f0 size 0xb4 virtual false final false
 void remove_valueChanged(::System::Action_1<float_t> value) ;

/// @brief Method get_slider addr 0x2cb36a4 size 0x8 virtual false final false
 ::UnityEngine::UIElements::Slider get_slider() ;

/// @brief Method set_slider addr 0x2cb36ac size 0x8 virtual false final false
 void set_slider(::UnityEngine::UIElements::Slider value) ;

/// @brief Method get_lowButton addr 0x2cb36b4 size 0x8 virtual false final false
 ::UnityEngine::UIElements::RepeatButton get_lowButton() ;

/// @brief Method set_lowButton addr 0x2cb36bc size 0x8 virtual false final false
 void set_lowButton(::UnityEngine::UIElements::RepeatButton value) ;

/// @brief Method get_highButton addr 0x2cb36c4 size 0x8 virtual false final false
 ::UnityEngine::UIElements::RepeatButton get_highButton() ;

/// @brief Method set_highButton addr 0x2cb36cc size 0x8 virtual false final false
 void set_highButton(::UnityEngine::UIElements::RepeatButton value) ;

/// @brief Method get_value addr 0x2cb36d4 size 0x24 virtual false final false
 float_t get_value() ;

/// @brief Method set_value addr 0x2cb36f8 size 0x24 virtual false final false
 void set_value(float_t value) ;

/// @brief Method get_lowValue addr 0x2cb371c size 0x50 virtual false final false
 float_t get_lowValue() ;

/// @brief Method set_lowValue addr 0x2cb376c size 0x60 virtual false final false
 void set_lowValue(float_t value) ;

/// @brief Method get_highValue addr 0x2cb37cc size 0x50 virtual false final false
 float_t get_highValue() ;

/// @brief Method set_highValue addr 0x2cb381c size 0x60 virtual false final false
 void set_highValue(float_t value) ;

/// @brief Method set_direction addr 0x2cb387c size 0x1fc virtual false final false
 void set_direction(::UnityEngine::UIElements::SliderDirection value) ;

// Ctor Parameters []
explicit Scroller() ;

/// @brief Method .ctor addr 0x2cb3a78 size 0x14 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "lowValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "highValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "valueChanged", ty: "::System::Action_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "::UnityEngine::UIElements::SliderDirection", modifiers: "", def_value: None }]
explicit Scroller(float_t lowValue, float_t highValue, ::System::Action_1<float_t> valueChanged, ::UnityEngine::UIElements::SliderDirection direction) ;

/// @brief Method .ctor addr 0x2cb3a8c size 0x3a8 virtual false final false
 void _ctor(float_t lowValue, float_t highValue, ::System::Action_1<float_t> valueChanged, ::UnityEngine::UIElements::SliderDirection direction) ;

/// @brief Method Adjust addr 0x2cb3e34 size 0x78 virtual false final false
 void Adjust(float_t factor) ;

/// @brief Method OnSliderValueChange addr 0x2cb3eac size 0x9c virtual false final false
 void OnSliderValueChange(::UnityEngine::UIElements::ChangeEvent_1<float_t> evt) ;

/// @brief Method ScrollPageUp addr 0x2cb3f48 size 0x8 virtual false final false
 void ScrollPageUp() ;

/// @brief Method ScrollPageDown addr 0x2cb4048 size 0x8 virtual false final false
 void ScrollPageDown() ;

/// @brief Method ScrollPageUp addr 0x2cb3f50 size 0xf8 virtual false final false
 void ScrollPageUp(float_t factor) ;

/// @brief Method ScrollPageDown addr 0x2cb4050 size 0xf8 virtual false final false
 void ScrollPageDown(float_t factor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7089)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5102 }), TypeDefinitionIndex(TypeDefinitionIndex(7160)), TypeDefinitionIndex(TypeDefinitionIndex(7159))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7157))
// CS Name: UnityEngine.UIElements.Scroller::UxmlFactory
class CORDL_TYPE ____UnityEngine__UIElements__Scroller__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Scroller,::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__Scroller__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__Scroller__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__Scroller__UxmlFactory(____UnityEngine__UIElements__Scroller__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__Scroller__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__Scroller__UxmlFactory(____UnityEngine__UIElements__Scroller__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__Scroller__UxmlFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::Scroller,::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlTraits>(ptr) {
}


  constexpr ____UnityEngine__UIElements__Scroller__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__Scroller__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__Scroller__UxmlFactory& operator=(____UnityEngine__UIElements__Scroller__UxmlFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__Scroller__UxmlFactory& operator=(____UnityEngine__UIElements__Scroller__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__Scroller__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cb42b8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_uxmlChildElementsDescription>d__5
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7158))
// CS Name: UnityEngine.UIElements.Scroller::UxmlTraits::<get_uxmlChildElementsDescription>d__5
class CORDL_TYPE ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5() = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5", modifiers: " const&", def_value: None }]
constexpr ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5(______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5", modifiers: "&&", def_value: None }]
constexpr ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5(______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5&& o) noexcept = default;
  constexpr ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5& operator=(______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::UnityEngine::UIElements::UxmlChildElementDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlChildElementDescription __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlTraits value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlTraits __get___4__this() const;


// Properties

 ::UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2cb4364 size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2cb47f0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2cb47f4 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2cb480c size 0x8 virtual true final true
 ::UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2cb4814 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2cb4854 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2cb485c size 0xa0 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2cb48fc size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______UnityEngine__UIElements__Scroller__UxmlTraits___get_uxmlChildElementsDescription_d__5, "UnityEngine.UIElements", "Scroller/UxmlTraits/<get_uxmlChildElementsDescription>d__5");
NEED_NO_BOX(::UnityEngine::UIElements::Scroller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scroller, "UnityEngine.UIElements", "Scroller");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlFactory, "UnityEngine.UIElements", "Scroller/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__Scroller__UxmlTraits, "UnityEngine.UIElements", "Scroller/UxmlTraits");
