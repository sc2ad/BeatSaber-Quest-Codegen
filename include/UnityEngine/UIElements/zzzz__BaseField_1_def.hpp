#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
template<typename T>
struct CustomStyleProperty_1;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
template<typename T>
class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TValueType>
class BaseField_1;
}
namespace UnityEngine::UIElements {
template<typename TValueType>
class ____UnityEngine__UIElements__BaseField_1__UxmlTraits;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueType>
class BaseField_1<TValueType>;
}
namespace UnityEngine::UIElements {
template<>
class BaseField_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::UIElements {
template<>
class BaseField_1<bool>;
}
namespace UnityEngine::UIElements {
template<>
class BaseField_1<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class BaseField_1<int32_t>;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::il2cpp_reference_type TValueType>
class ____UnityEngine__UIElements__BaseField_1__UxmlTraits<TValueType>;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__BaseField_1__UxmlTraits<::UnityEngine::Vector2>;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__BaseField_1__UxmlTraits<bool>;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__BaseField_1__UxmlTraits<float_t>;
}
namespace UnityEngine::UIElements {
template<>
class ____UnityEngine__UIElements__BaseField_1__UxmlTraits<int32_t>;
}
// Type: ::UxmlTraits
// Type: UnityEngine.UIElements::BaseField`1
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6885)), TypeDefinitionIndex(TypeDefinitionIndex(7227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 2 })
// CS Name: UnityEngine.UIElements.BaseField`1::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__BaseField_1__UxmlTraits<TValueType> : public ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__UIElements__BaseField_1__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Label, put=__set_m_Label))  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Label() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Collections::Generic::List_1<::StringW> ParseChoiceList(::StringW choicesFromBag) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6885)), TypeDefinitionIndex(TypeDefinitionIndex(7227))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 92 })
// CS Name: UnityEngine.UIElements.BaseField`1::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__BaseField_1__UxmlTraits<int32_t> : public ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__UIElements__BaseField_1__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Label, put=__set_m_Label))  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Label() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Collections::Generic::List_1<::StringW> ParseChoiceList(::StringW choicesFromBag) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7227)), TypeDefinitionIndex(TypeDefinitionIndex(6885))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 99 })
// CS Name: UnityEngine.UIElements.BaseField`1::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__BaseField_1__UxmlTraits<bool> : public ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__UIElements__BaseField_1__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Label, put=__set_m_Label))  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Label() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Collections::Generic::List_1<::StringW> ParseChoiceList(::StringW choicesFromBag) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7227)), TypeDefinitionIndex(TypeDefinitionIndex(6885))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 374 })
// CS Name: UnityEngine.UIElements.BaseField`1::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__BaseField_1__UxmlTraits<float_t> : public ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__UIElements__BaseField_1__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Label, put=__set_m_Label))  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Label() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Collections::Generic::List_1<::StringW> ParseChoiceList(::StringW choicesFromBag) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7227)), TypeDefinitionIndex(TypeDefinitionIndex(6885))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7227), inst: 393 })
// CS Name: UnityEngine.UIElements.BaseField`1::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__BaseField_1__UxmlTraits<::UnityEngine::Vector2> : public ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__UIElements__BaseField_1__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__BaseField_1__UxmlTraits& operator=(____UnityEngine__UIElements__BaseField_1__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Label, put=__set_m_Label))  m_Label;

constexpr void __set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Label() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__BaseField_1__UxmlTraits() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

/// @brief Method ParseChoiceList addr 0x0 size 0xffffffffffffffff virtual false final false
static ::System::Collections::Generic::List_1<::StringW> ParseChoiceList(::StringW choicesFromBag) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValueType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6886)), TypeDefinitionIndex(TypeDefinitionIndex(7228))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 2 })
// CS Name: UnityEngine.UIElements.BaseField`1
class CORDL_TYPE BaseField_1<TValueType> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<TValueType>;

/// @brief Convert operator to ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseField_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: " const&", def_value: None }]
constexpr BaseField_1(BaseField_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
constexpr BaseField_1(BaseField_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseField_1(void* ptr) noexcept : ::UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr BaseField_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseField_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseField_1& operator=(BaseField_1&& o) noexcept = default;
  constexpr BaseField_1& operator=(BaseField_1 const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_noLabelVariantUssClassName, put=__set_noLabelVariantUssClassName))  noLabelVariantUssClassName;

static void __set_noLabelVariantUssClassName(::StringW value) ;

static ::StringW __get_noLabelVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_labelDraggerVariantUssClassName, put=__set_labelDraggerVariantUssClassName))  labelDraggerVariantUssClassName;

static void __set_labelDraggerVariantUssClassName(::StringW value) ;

static ::StringW __get_labelDraggerVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueLabelUssClassName, put=__set_mixedValueLabelUssClassName))  mixedValueLabelUssClassName;

static void __set_mixedValueLabelUssClassName(::StringW value) ;

static ::StringW __get_mixedValueLabelUssClassName() ;

static ::StringW __declspec(property(get=__get_alignedFieldUssClassName, put=__set_alignedFieldUssClassName))  alignedFieldUssClassName;

static void __set_alignedFieldUssClassName(::StringW value) ;

static ::StringW __get_alignedFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_inspectorFieldUssClassName, put=__set_inspectorFieldUssClassName))  inspectorFieldUssClassName;

static void __set_inspectorFieldUssClassName(::StringW value) ;

static ::StringW __get_inspectorFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueString, put=__set_mixedValueString))  mixedValueString;

static void __set_mixedValueString(::StringW value) ;

static ::StringW __get_mixedValueString() ;

static ::UnityEngine::PropertyName __declspec(property(get=__get_serializedPropertyCopyName, put=__set_serializedPropertyCopyName))  serializedPropertyCopyName;

static void __set_serializedPropertyCopyName(::UnityEngine::PropertyName value) ;

static ::UnityEngine::PropertyName __get_serializedPropertyCopyName() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelWidthRatioProperty, put=__set_s_LabelWidthRatioProperty))  s_LabelWidthRatioProperty;

static void __set_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelWidthRatioProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelExtraPaddingProperty, put=__set_s_LabelExtraPaddingProperty))  s_LabelExtraPaddingProperty;

static void __set_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelExtraPaddingProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelBaseMinWidthProperty, put=__set_s_LabelBaseMinWidthProperty))  s_LabelBaseMinWidthProperty;

static void __set_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelBaseMinWidthProperty() ;

 float_t __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio))  m_LabelWidthRatio;

constexpr void __set_m_LabelWidthRatio(float_t value) ;

constexpr float_t __get_m_LabelWidthRatio() const;

 float_t __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding))  m_LabelExtraPadding;

constexpr void __set_m_LabelExtraPadding(float_t value) ;

constexpr float_t __get_m_LabelExtraPadding() const;

 float_t __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth))  m_LabelBaseMinWidth;

constexpr void __set_m_LabelBaseMinWidth(float_t value) ;

constexpr float_t __get_m_LabelBaseMinWidth() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput))  m_VisualInput;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_VisualInput() const;

 TValueType __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(TValueType value) ;

constexpr TValueType __get_m_Value() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField))  _labelElement_k__BackingField;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get__labelElement_k__BackingField() const;

 bool __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue))  m_ShowMixedValue;

constexpr void __set_m_ShowMixedValue(bool value) ;

constexpr bool __get_m_ShowMixedValue() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel))  m_MixedValueLabel;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get_m_MixedValueLabel() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement))  m_CachedInspectorElement;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_CachedInspectorElement() const;

 int32_t __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth))  m_CachedListAndFoldoutDepth;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t value) ;

constexpr int32_t __get_m_CachedListAndFoldoutDepth() const;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualInput, put=set_visualInput))  visualInput;

 TValueType __declspec(property(get=get_rawValue, put=set_rawValue))  rawValue;

 TValueType __declspec(property(get=get_value, put=set_value))  value;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_labelElement, put=set_labelElement))  labelElement;

 ::StringW __declspec(property(get=get_label, put=set_label))  label;

 bool __declspec(property(get=get_showMixedValue))  showMixedValue;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_mixedValueLabel))  mixedValueLabel;


// Methods

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_visualInput(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 TValueType get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rawValue(TValueType value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 TValueType get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(TValueType value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_labelElement(::UnityEngine::UIElements::Label value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_label(::StringW value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_mixedValueLabel() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "visualInput", ty: "::UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValueWithoutNotify(TValueType newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Rect GetTooltipRect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6886)), TypeDefinitionIndex(TypeDefinitionIndex(7228))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 92 })
// CS Name: UnityEngine.UIElements.BaseField`1
class CORDL_TYPE BaseField_1<int32_t> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<int32_t>;

/// @brief Convert operator to ::UnityEngine::UIElements::INotifyValueChanged_1<int32_t>
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<int32_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseField_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: " const&", def_value: None }]
constexpr BaseField_1(BaseField_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
constexpr BaseField_1(BaseField_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseField_1(void* ptr) noexcept : ::UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr BaseField_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseField_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseField_1& operator=(BaseField_1&& o) noexcept = default;
  constexpr BaseField_1& operator=(BaseField_1 const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_noLabelVariantUssClassName, put=__set_noLabelVariantUssClassName))  noLabelVariantUssClassName;

static void __set_noLabelVariantUssClassName(::StringW value) ;

static ::StringW __get_noLabelVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_labelDraggerVariantUssClassName, put=__set_labelDraggerVariantUssClassName))  labelDraggerVariantUssClassName;

static void __set_labelDraggerVariantUssClassName(::StringW value) ;

static ::StringW __get_labelDraggerVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueLabelUssClassName, put=__set_mixedValueLabelUssClassName))  mixedValueLabelUssClassName;

static void __set_mixedValueLabelUssClassName(::StringW value) ;

static ::StringW __get_mixedValueLabelUssClassName() ;

static ::StringW __declspec(property(get=__get_alignedFieldUssClassName, put=__set_alignedFieldUssClassName))  alignedFieldUssClassName;

static void __set_alignedFieldUssClassName(::StringW value) ;

static ::StringW __get_alignedFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_inspectorFieldUssClassName, put=__set_inspectorFieldUssClassName))  inspectorFieldUssClassName;

static void __set_inspectorFieldUssClassName(::StringW value) ;

static ::StringW __get_inspectorFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueString, put=__set_mixedValueString))  mixedValueString;

static void __set_mixedValueString(::StringW value) ;

static ::StringW __get_mixedValueString() ;

static ::UnityEngine::PropertyName __declspec(property(get=__get_serializedPropertyCopyName, put=__set_serializedPropertyCopyName))  serializedPropertyCopyName;

static void __set_serializedPropertyCopyName(::UnityEngine::PropertyName value) ;

static ::UnityEngine::PropertyName __get_serializedPropertyCopyName() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelWidthRatioProperty, put=__set_s_LabelWidthRatioProperty))  s_LabelWidthRatioProperty;

static void __set_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelWidthRatioProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelExtraPaddingProperty, put=__set_s_LabelExtraPaddingProperty))  s_LabelExtraPaddingProperty;

static void __set_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelExtraPaddingProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelBaseMinWidthProperty, put=__set_s_LabelBaseMinWidthProperty))  s_LabelBaseMinWidthProperty;

static void __set_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelBaseMinWidthProperty() ;

 float_t __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio))  m_LabelWidthRatio;

constexpr void __set_m_LabelWidthRatio(float_t value) ;

constexpr float_t __get_m_LabelWidthRatio() const;

 float_t __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding))  m_LabelExtraPadding;

constexpr void __set_m_LabelExtraPadding(float_t value) ;

constexpr float_t __get_m_LabelExtraPadding() const;

 float_t __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth))  m_LabelBaseMinWidth;

constexpr void __set_m_LabelBaseMinWidth(float_t value) ;

constexpr float_t __get_m_LabelBaseMinWidth() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput))  m_VisualInput;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_VisualInput() const;

 int32_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(int32_t value) ;

constexpr int32_t __get_m_Value() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField))  _labelElement_k__BackingField;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get__labelElement_k__BackingField() const;

 bool __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue))  m_ShowMixedValue;

constexpr void __set_m_ShowMixedValue(bool value) ;

constexpr bool __get_m_ShowMixedValue() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel))  m_MixedValueLabel;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get_m_MixedValueLabel() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement))  m_CachedInspectorElement;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_CachedInspectorElement() const;

 int32_t __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth))  m_CachedListAndFoldoutDepth;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t value) ;

constexpr int32_t __get_m_CachedListAndFoldoutDepth() const;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualInput, put=set_visualInput))  visualInput;

 int32_t __declspec(property(get=get_rawValue, put=set_rawValue))  rawValue;

 int32_t __declspec(property(get=get_value, put=set_value))  value;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_labelElement, put=set_labelElement))  labelElement;

 ::StringW __declspec(property(get=get_label, put=set_label))  label;

 bool __declspec(property(get=get_showMixedValue))  showMixedValue;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_mixedValueLabel))  mixedValueLabel;


// Methods

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_visualInput(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rawValue(int32_t value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(int32_t value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_labelElement(::UnityEngine::UIElements::Label value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_label(::StringW value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_mixedValueLabel() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "visualInput", ty: "::UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValueWithoutNotify(int32_t newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Rect GetTooltipRect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7228)), TypeDefinitionIndex(TypeDefinitionIndex(6886))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 99 })
// CS Name: UnityEngine.UIElements.BaseField`1
class CORDL_TYPE BaseField_1<bool> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<bool>;

/// @brief Convert operator to ::UnityEngine::UIElements::INotifyValueChanged_1<bool>
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<bool>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseField_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: " const&", def_value: None }]
constexpr BaseField_1(BaseField_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
constexpr BaseField_1(BaseField_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseField_1(void* ptr) noexcept : ::UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr BaseField_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseField_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseField_1& operator=(BaseField_1&& o) noexcept = default;
  constexpr BaseField_1& operator=(BaseField_1 const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_noLabelVariantUssClassName, put=__set_noLabelVariantUssClassName))  noLabelVariantUssClassName;

static void __set_noLabelVariantUssClassName(::StringW value) ;

static ::StringW __get_noLabelVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_labelDraggerVariantUssClassName, put=__set_labelDraggerVariantUssClassName))  labelDraggerVariantUssClassName;

static void __set_labelDraggerVariantUssClassName(::StringW value) ;

static ::StringW __get_labelDraggerVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueLabelUssClassName, put=__set_mixedValueLabelUssClassName))  mixedValueLabelUssClassName;

static void __set_mixedValueLabelUssClassName(::StringW value) ;

static ::StringW __get_mixedValueLabelUssClassName() ;

static ::StringW __declspec(property(get=__get_alignedFieldUssClassName, put=__set_alignedFieldUssClassName))  alignedFieldUssClassName;

static void __set_alignedFieldUssClassName(::StringW value) ;

static ::StringW __get_alignedFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_inspectorFieldUssClassName, put=__set_inspectorFieldUssClassName))  inspectorFieldUssClassName;

static void __set_inspectorFieldUssClassName(::StringW value) ;

static ::StringW __get_inspectorFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueString, put=__set_mixedValueString))  mixedValueString;

static void __set_mixedValueString(::StringW value) ;

static ::StringW __get_mixedValueString() ;

static ::UnityEngine::PropertyName __declspec(property(get=__get_serializedPropertyCopyName, put=__set_serializedPropertyCopyName))  serializedPropertyCopyName;

static void __set_serializedPropertyCopyName(::UnityEngine::PropertyName value) ;

static ::UnityEngine::PropertyName __get_serializedPropertyCopyName() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelWidthRatioProperty, put=__set_s_LabelWidthRatioProperty))  s_LabelWidthRatioProperty;

static void __set_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelWidthRatioProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelExtraPaddingProperty, put=__set_s_LabelExtraPaddingProperty))  s_LabelExtraPaddingProperty;

static void __set_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelExtraPaddingProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelBaseMinWidthProperty, put=__set_s_LabelBaseMinWidthProperty))  s_LabelBaseMinWidthProperty;

static void __set_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelBaseMinWidthProperty() ;

 float_t __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio))  m_LabelWidthRatio;

constexpr void __set_m_LabelWidthRatio(float_t value) ;

constexpr float_t __get_m_LabelWidthRatio() const;

 float_t __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding))  m_LabelExtraPadding;

constexpr void __set_m_LabelExtraPadding(float_t value) ;

constexpr float_t __get_m_LabelExtraPadding() const;

 float_t __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth))  m_LabelBaseMinWidth;

constexpr void __set_m_LabelBaseMinWidth(float_t value) ;

constexpr float_t __get_m_LabelBaseMinWidth() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput))  m_VisualInput;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_VisualInput() const;

 bool __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(bool value) ;

constexpr bool __get_m_Value() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField))  _labelElement_k__BackingField;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get__labelElement_k__BackingField() const;

 bool __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue))  m_ShowMixedValue;

constexpr void __set_m_ShowMixedValue(bool value) ;

constexpr bool __get_m_ShowMixedValue() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel))  m_MixedValueLabel;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get_m_MixedValueLabel() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement))  m_CachedInspectorElement;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_CachedInspectorElement() const;

 int32_t __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth))  m_CachedListAndFoldoutDepth;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t value) ;

constexpr int32_t __get_m_CachedListAndFoldoutDepth() const;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualInput, put=set_visualInput))  visualInput;

 bool __declspec(property(get=get_rawValue, put=set_rawValue))  rawValue;

 bool __declspec(property(get=get_value, put=set_value))  value;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_labelElement, put=set_labelElement))  labelElement;

 ::StringW __declspec(property(get=get_label, put=set_label))  label;

 bool __declspec(property(get=get_showMixedValue))  showMixedValue;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_mixedValueLabel))  mixedValueLabel;


// Methods

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_visualInput(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rawValue(bool value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(bool value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_labelElement(::UnityEngine::UIElements::Label value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_label(::StringW value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_mixedValueLabel() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "visualInput", ty: "::UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValueWithoutNotify(bool newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Rect GetTooltipRect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6886)), TypeDefinitionIndex(TypeDefinitionIndex(7228))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 374 })
// CS Name: UnityEngine.UIElements.BaseField`1
class CORDL_TYPE BaseField_1<float_t> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<float_t>;

/// @brief Convert operator to ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<float_t>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseField_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: " const&", def_value: None }]
constexpr BaseField_1(BaseField_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
constexpr BaseField_1(BaseField_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseField_1(void* ptr) noexcept : ::UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr BaseField_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseField_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseField_1& operator=(BaseField_1&& o) noexcept = default;
  constexpr BaseField_1& operator=(BaseField_1 const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_noLabelVariantUssClassName, put=__set_noLabelVariantUssClassName))  noLabelVariantUssClassName;

static void __set_noLabelVariantUssClassName(::StringW value) ;

static ::StringW __get_noLabelVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_labelDraggerVariantUssClassName, put=__set_labelDraggerVariantUssClassName))  labelDraggerVariantUssClassName;

static void __set_labelDraggerVariantUssClassName(::StringW value) ;

static ::StringW __get_labelDraggerVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueLabelUssClassName, put=__set_mixedValueLabelUssClassName))  mixedValueLabelUssClassName;

static void __set_mixedValueLabelUssClassName(::StringW value) ;

static ::StringW __get_mixedValueLabelUssClassName() ;

static ::StringW __declspec(property(get=__get_alignedFieldUssClassName, put=__set_alignedFieldUssClassName))  alignedFieldUssClassName;

static void __set_alignedFieldUssClassName(::StringW value) ;

static ::StringW __get_alignedFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_inspectorFieldUssClassName, put=__set_inspectorFieldUssClassName))  inspectorFieldUssClassName;

static void __set_inspectorFieldUssClassName(::StringW value) ;

static ::StringW __get_inspectorFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueString, put=__set_mixedValueString))  mixedValueString;

static void __set_mixedValueString(::StringW value) ;

static ::StringW __get_mixedValueString() ;

static ::UnityEngine::PropertyName __declspec(property(get=__get_serializedPropertyCopyName, put=__set_serializedPropertyCopyName))  serializedPropertyCopyName;

static void __set_serializedPropertyCopyName(::UnityEngine::PropertyName value) ;

static ::UnityEngine::PropertyName __get_serializedPropertyCopyName() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelWidthRatioProperty, put=__set_s_LabelWidthRatioProperty))  s_LabelWidthRatioProperty;

static void __set_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelWidthRatioProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelExtraPaddingProperty, put=__set_s_LabelExtraPaddingProperty))  s_LabelExtraPaddingProperty;

static void __set_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelExtraPaddingProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelBaseMinWidthProperty, put=__set_s_LabelBaseMinWidthProperty))  s_LabelBaseMinWidthProperty;

static void __set_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelBaseMinWidthProperty() ;

 float_t __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio))  m_LabelWidthRatio;

constexpr void __set_m_LabelWidthRatio(float_t value) ;

constexpr float_t __get_m_LabelWidthRatio() const;

 float_t __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding))  m_LabelExtraPadding;

constexpr void __set_m_LabelExtraPadding(float_t value) ;

constexpr float_t __get_m_LabelExtraPadding() const;

 float_t __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth))  m_LabelBaseMinWidth;

constexpr void __set_m_LabelBaseMinWidth(float_t value) ;

constexpr float_t __get_m_LabelBaseMinWidth() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput))  m_VisualInput;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_VisualInput() const;

 float_t __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(float_t value) ;

constexpr float_t __get_m_Value() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField))  _labelElement_k__BackingField;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get__labelElement_k__BackingField() const;

 bool __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue))  m_ShowMixedValue;

constexpr void __set_m_ShowMixedValue(bool value) ;

constexpr bool __get_m_ShowMixedValue() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel))  m_MixedValueLabel;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get_m_MixedValueLabel() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement))  m_CachedInspectorElement;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_CachedInspectorElement() const;

 int32_t __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth))  m_CachedListAndFoldoutDepth;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t value) ;

constexpr int32_t __get_m_CachedListAndFoldoutDepth() const;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualInput, put=set_visualInput))  visualInput;

 float_t __declspec(property(get=get_rawValue, put=set_rawValue))  rawValue;

 float_t __declspec(property(get=get_value, put=set_value))  value;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_labelElement, put=set_labelElement))  labelElement;

 ::StringW __declspec(property(get=get_label, put=set_label))  label;

 bool __declspec(property(get=get_showMixedValue))  showMixedValue;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_mixedValueLabel))  mixedValueLabel;


// Methods

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_visualInput(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rawValue(float_t value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(float_t value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_labelElement(::UnityEngine::UIElements::Label value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_label(::StringW value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_mixedValueLabel() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "visualInput", ty: "::UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValueWithoutNotify(float_t newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Rect GetTooltipRect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
namespace UnityEngine::UIElements {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7228)), TypeDefinitionIndex(TypeDefinitionIndex(6886))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7228), inst: 393 })
// CS Name: UnityEngine.UIElements.BaseField`1
class CORDL_TYPE BaseField_1<::UnityEngine::Vector2> : public ::UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits<::UnityEngine::Vector2>;

/// @brief Convert operator to ::UnityEngine::UIElements::INotifyValueChanged_1<::UnityEngine::Vector2>
constexpr operator  ::UnityEngine::UIElements::INotifyValueChanged_1<::UnityEngine::Vector2>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseField_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: " const&", def_value: None }]
constexpr BaseField_1(BaseField_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
constexpr BaseField_1(BaseField_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseField_1(void* ptr) noexcept : ::UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr BaseField_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseField_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseField_1& operator=(BaseField_1&& o) noexcept = default;
  constexpr BaseField_1& operator=(BaseField_1 const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

static ::StringW __declspec(property(get=__get_labelUssClassName, put=__set_labelUssClassName))  labelUssClassName;

static void __set_labelUssClassName(::StringW value) ;

static ::StringW __get_labelUssClassName() ;

static ::StringW __declspec(property(get=__get_inputUssClassName, put=__set_inputUssClassName))  inputUssClassName;

static void __set_inputUssClassName(::StringW value) ;

static ::StringW __get_inputUssClassName() ;

static ::StringW __declspec(property(get=__get_noLabelVariantUssClassName, put=__set_noLabelVariantUssClassName))  noLabelVariantUssClassName;

static void __set_noLabelVariantUssClassName(::StringW value) ;

static ::StringW __get_noLabelVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_labelDraggerVariantUssClassName, put=__set_labelDraggerVariantUssClassName))  labelDraggerVariantUssClassName;

static void __set_labelDraggerVariantUssClassName(::StringW value) ;

static ::StringW __get_labelDraggerVariantUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueLabelUssClassName, put=__set_mixedValueLabelUssClassName))  mixedValueLabelUssClassName;

static void __set_mixedValueLabelUssClassName(::StringW value) ;

static ::StringW __get_mixedValueLabelUssClassName() ;

static ::StringW __declspec(property(get=__get_alignedFieldUssClassName, put=__set_alignedFieldUssClassName))  alignedFieldUssClassName;

static void __set_alignedFieldUssClassName(::StringW value) ;

static ::StringW __get_alignedFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_inspectorFieldUssClassName, put=__set_inspectorFieldUssClassName))  inspectorFieldUssClassName;

static void __set_inspectorFieldUssClassName(::StringW value) ;

static ::StringW __get_inspectorFieldUssClassName() ;

static ::StringW __declspec(property(get=__get_mixedValueString, put=__set_mixedValueString))  mixedValueString;

static void __set_mixedValueString(::StringW value) ;

static ::StringW __get_mixedValueString() ;

static ::UnityEngine::PropertyName __declspec(property(get=__get_serializedPropertyCopyName, put=__set_serializedPropertyCopyName))  serializedPropertyCopyName;

static void __set_serializedPropertyCopyName(::UnityEngine::PropertyName value) ;

static ::UnityEngine::PropertyName __get_serializedPropertyCopyName() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelWidthRatioProperty, put=__set_s_LabelWidthRatioProperty))  s_LabelWidthRatioProperty;

static void __set_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelWidthRatioProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelExtraPaddingProperty, put=__set_s_LabelExtraPaddingProperty))  s_LabelExtraPaddingProperty;

static void __set_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelExtraPaddingProperty() ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __declspec(property(get=__get_s_LabelBaseMinWidthProperty, put=__set_s_LabelBaseMinWidthProperty))  s_LabelBaseMinWidthProperty;

static void __set_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value) ;

static ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> __get_s_LabelBaseMinWidthProperty() ;

 float_t __declspec(property(get=__get_m_LabelWidthRatio, put=__set_m_LabelWidthRatio))  m_LabelWidthRatio;

constexpr void __set_m_LabelWidthRatio(float_t value) ;

constexpr float_t __get_m_LabelWidthRatio() const;

 float_t __declspec(property(get=__get_m_LabelExtraPadding, put=__set_m_LabelExtraPadding))  m_LabelExtraPadding;

constexpr void __set_m_LabelExtraPadding(float_t value) ;

constexpr float_t __get_m_LabelExtraPadding() const;

 float_t __declspec(property(get=__get_m_LabelBaseMinWidth, put=__set_m_LabelBaseMinWidth))  m_LabelBaseMinWidth;

constexpr void __set_m_LabelBaseMinWidth(float_t value) ;

constexpr float_t __get_m_LabelBaseMinWidth() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_VisualInput, put=__set_m_VisualInput))  m_VisualInput;

constexpr void __set_m_VisualInput(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_VisualInput() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_m_Value, put=__set_m_Value))  m_Value;

constexpr void __set_m_Value(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_m_Value() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get__labelElement_k__BackingField, put=__set__labelElement_k__BackingField))  _labelElement_k__BackingField;

constexpr void __set__labelElement_k__BackingField(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get__labelElement_k__BackingField() const;

 bool __declspec(property(get=__get_m_ShowMixedValue, put=__set_m_ShowMixedValue))  m_ShowMixedValue;

constexpr void __set_m_ShowMixedValue(bool value) ;

constexpr bool __get_m_ShowMixedValue() const;

 ::UnityEngine::UIElements::Label __declspec(property(get=__get_m_MixedValueLabel, put=__set_m_MixedValueLabel))  m_MixedValueLabel;

constexpr void __set_m_MixedValueLabel(::UnityEngine::UIElements::Label value) ;

constexpr ::UnityEngine::UIElements::Label __get_m_MixedValueLabel() const;

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CachedInspectorElement, put=__set_m_CachedInspectorElement))  m_CachedInspectorElement;

constexpr void __set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_CachedInspectorElement() const;

 int32_t __declspec(property(get=__get_m_CachedListAndFoldoutDepth, put=__set_m_CachedListAndFoldoutDepth))  m_CachedListAndFoldoutDepth;

constexpr void __set_m_CachedListAndFoldoutDepth(int32_t value) ;

constexpr int32_t __get_m_CachedListAndFoldoutDepth() const;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualInput, put=set_visualInput))  visualInput;

 ::UnityEngine::Vector2 __declspec(property(get=get_rawValue, put=set_rawValue))  rawValue;

 ::UnityEngine::Vector2 __declspec(property(get=get_value, put=set_value))  value;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_labelElement, put=set_labelElement))  labelElement;

 ::StringW __declspec(property(get=get_label, put=set_label))  label;

 bool __declspec(property(get=get_showMixedValue))  showMixedValue;

 ::UnityEngine::UIElements::Label __declspec(property(get=get_mixedValueLabel))  mixedValueLabel;


// Methods

/// @brief Method get_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::VisualElement get_visualInput() ;

/// @brief Method set_visualInput addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_visualInput(::UnityEngine::UIElements::VisualElement value) ;

/// @brief Method get_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::Vector2 get_rawValue() ;

/// @brief Method set_rawValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_rawValue(::UnityEngine::Vector2 value) ;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector2 get_value() ;

/// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_value(::UnityEngine::Vector2 value) ;

/// @brief Method get_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_labelElement() ;

/// @brief Method set_labelElement addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_labelElement(::UnityEngine::UIElements::Label value) ;

/// @brief Method get_label addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW get_label() ;

/// @brief Method set_label addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_label(::StringW value) ;

/// @brief Method get_showMixedValue addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_showMixedValue() ;

/// @brief Method get_mixedValueLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 ::UnityEngine::UIElements::Label get_mixedValueLabel() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "visualInput", ty: "::UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }]
explicit BaseField_1(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW label, ::UnityEngine::UIElements::VisualElement visualInput) ;

/// @brief Method OnAttachToPanel addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent e) ;

/// @brief Method OnCustomStyleResolved addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent evt) ;

/// @brief Method OnInspectorFieldGeometryChanged addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent e) ;

/// @brief Method AlignLabel addr 0x0 size 0xffffffffffffffff virtual false final false
 void AlignLabel() ;

/// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
 void UpdateMixedValueContent() ;

/// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValueWithoutNotify(::UnityEngine::Vector2 newValue) ;

/// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnViewDataReady() ;

/// @brief Method GetTooltipRect addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Rect GetTooltipRect() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseField_1, "UnityEngine.UIElements", "BaseField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::____UnityEngine__UIElements__BaseField_1__UxmlTraits, "UnityEngine.UIElements", "BaseField`1/UxmlTraits");
