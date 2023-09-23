#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::UIElements {
class ITextElement;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
template<typename T>
class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TextElement__UxmlFactory;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__TextElement__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6885))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6899))
// CS Name: UnityEngine.UIElements.TextElement::UxmlTraits
class CORDL_TYPE UnityEngine__UIElements__TextElement__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__4 = GlobalNamespace::UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__UIElements__TextElement__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextElement__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TextElement__UxmlTraits(UnityEngine__UIElements__TextElement__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextElement__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TextElement__UxmlTraits(UnityEngine__UIElements__TextElement__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TextElement__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__BindableElement__UxmlTraits(ptr) {
}


  constexpr UnityEngine__UIElements__TextElement__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextElement__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextElement__UxmlTraits& operator=(UnityEngine__UIElements__TextElement__UxmlTraits&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TextElement__UxmlTraits& operator=(UnityEngine__UIElements__TextElement__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get_m_Text() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_EnableRichText, put=__set_m_EnableRichText))  m_EnableRichText;

constexpr void __set_m_EnableRichText(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_EnableRichText() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_DisplayTooltipWhenElided, put=__set_m_DisplayTooltipWhenElided))  m_DisplayTooltipWhenElided;

constexpr void __set_m_DisplayTooltipWhenElided(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_DisplayTooltipWhenElided() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x2c47ac8 size 0x64 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

/// @brief Method Init addr 0x2c47b70 size 0x18c virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UnityEngine__UIElements__TextElement__UxmlTraits() ;

/// @brief Method .ctor addr 0x2c47cfc size 0x120 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextElement
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6886))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6900))
// CS Name: UnityEngine.UIElements.TextElement
class CORDL_TYPE TextElement : public UnityEngine::UIElements::BindableElement {
public:
// Declarations
using UxmlTraits = UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits;

using UxmlFactory = UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlFactory;

/// @brief Convert operator to UnityEngine::UIElements::ITextElement
constexpr operator  UnityEngine::UIElements::ITextElement() const noexcept;

/// @brief Convert operator to UnityEngine::UIElements::INotifyValueChanged_1<::StringW>
constexpr operator  UnityEngine::UIElements::INotifyValueChanged_1<::StringW>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x478};

virtual ~TextElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: " const&", def_value: None }]
constexpr TextElement(TextElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: "&&", def_value: None }]
constexpr TextElement(TextElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextElement(void* ptr) noexcept : UnityEngine::UIElements::BindableElement(ptr) {
}


  constexpr TextElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextElement& operator=(TextElement&& o) noexcept = default;
  constexpr TextElement& operator=(TextElement const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ussClassName, put=__set_ussClassName))  ussClassName;

static void __set_ussClassName(::StringW value) ;

static ::StringW __get_ussClassName() ;

 UnityEngine::UIElements::ITextHandle __declspec(property(get=__get_m_TextHandle, put=__set_m_TextHandle))  m_TextHandle;

constexpr void __set_m_TextHandle(UnityEngine::UIElements::ITextHandle value) ;

constexpr UnityEngine::UIElements::ITextHandle __get_m_TextHandle() const;

static int32_t __declspec(property(get=__get_maxTextVertices, put=__set_maxTextVertices))  maxTextVertices;

static void __set_maxTextVertices(int32_t value) ;

static int32_t __get_maxTextVertices() ;

 ::StringW __declspec(property(get=__get_m_Text, put=__set_m_Text))  m_Text;

constexpr void __set_m_Text(::StringW value) ;

constexpr ::StringW __get_m_Text() const;

 bool __declspec(property(get=__get_m_EnableRichText, put=__set_m_EnableRichText))  m_EnableRichText;

constexpr void __set_m_EnableRichText(bool value) ;

constexpr bool __get_m_EnableRichText() const;

 bool __declspec(property(get=__get_m_DisplayTooltipWhenElided, put=__set_m_DisplayTooltipWhenElided))  m_DisplayTooltipWhenElided;

constexpr void __set_m_DisplayTooltipWhenElided(bool value) ;

constexpr bool __get_m_DisplayTooltipWhenElided() const;

 bool __declspec(property(get=__get__isElided_k__BackingField, put=__set__isElided_k__BackingField))  _isElided_k__BackingField;

constexpr void __set__isElided_k__BackingField(bool value) ;

constexpr bool __get__isElided_k__BackingField() const;

static ::StringW __declspec(property(get=__get_k_EllipsisText, put=__set_k_EllipsisText))  k_EllipsisText;

static void __set_k_EllipsisText(::StringW value) ;

static ::StringW __get_k_EllipsisText() ;

 bool __declspec(property(get=__get_m_WasElided, put=__set_m_WasElided))  m_WasElided;

constexpr void __set_m_WasElided(bool value) ;

constexpr bool __get_m_WasElided() const;

 bool __declspec(property(get=__get_m_UpdateTextParams, put=__set_m_UpdateTextParams))  m_UpdateTextParams;

constexpr void __set_m_UpdateTextParams(bool value) ;

constexpr bool __get_m_UpdateTextParams() const;

 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams __declspec(property(get=__get_m_TextParams, put=__set_m_TextParams))  m_TextParams;

constexpr void __set_m_TextParams(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams __get_m_TextParams() const;

 int32_t __declspec(property(get=__get_m_PreviousTextParamsHashCode, put=__set_m_PreviousTextParamsHashCode))  m_PreviousTextParamsHashCode;

constexpr void __set_m_PreviousTextParamsHashCode(int32_t value) ;

constexpr int32_t __get_m_PreviousTextParamsHashCode() const;


// Properties

 UnityEngine::UIElements::ITextHandle __declspec(property(get=get_textHandle, put=set_textHandle))  textHandle;

 ::StringW __declspec(property(get=get_text, put=set_text))  text;

 bool __declspec(property(get=get_enableRichText, put=set_enableRichText))  enableRichText;

 bool __declspec(property(get=get_displayTooltipWhenElided, put=set_displayTooltipWhenElided))  displayTooltipWhenElided;

 bool __declspec(property(get=get_isElided, put=set_isElided))  isElided;

 ::StringW __declspec(property(get=UnityEngine_UIElements_INotifyValueChanged_System_String__get_value, put=UnityEngine_UIElements_INotifyValueChanged_System_String__set_value))  UnityEngine_UIElements_INotifyValueChanged_System_String__value;


// Methods

// Ctor Parameters []
explicit TextElement() ;

/// @brief Method .ctor addr 0x2c467c8 size 0x1b8 virtual false final false
 void _ctor() ;

/// @brief Method get_textHandle addr 0x2c46980 size 0x8 virtual false final false
 UnityEngine::UIElements::ITextHandle get_textHandle() ;

/// @brief Method set_textHandle addr 0x2c46988 size 0x8 virtual false final false
 void set_textHandle(UnityEngine::UIElements::ITextHandle value) ;

/// @brief Method HandleEvent addr 0x2c46990 size 0x17c virtual true final false
 void HandleEvent(UnityEngine::UIElements::EventBase evt) ;

/// @brief Method OnGeometryChanged addr 0x2c46b0c size 0x4 virtual false final false
 void OnGeometryChanged(UnityEngine::UIElements::GeometryChangedEvent e) ;

/// @brief Method get_text addr 0x2c46c8c size 0x94 virtual true final false
 ::StringW get_text() ;

/// @brief Method set_text addr 0x2c46d20 size 0xa8 virtual true final false
 void set_text(::StringW value) ;

/// @brief Method get_enableRichText addr 0x2c46dc8 size 0x8 virtual false final false
 bool get_enableRichText() ;

/// @brief Method set_enableRichText addr 0x2c46dd0 size 0x20 virtual false final false
 void set_enableRichText(bool value) ;

/// @brief Method get_displayTooltipWhenElided addr 0x2c46df0 size 0x8 virtual false final false
 bool get_displayTooltipWhenElided() ;

/// @brief Method set_displayTooltipWhenElided addr 0x2c46df8 size 0x3c virtual false final false
 void set_displayTooltipWhenElided(bool value) ;

/// @brief Method get_isElided addr 0x2c46e34 size 0x8 virtual false final false
 bool get_isElided() ;

/// @brief Method set_isElided addr 0x2c46e3c size 0xc virtual false final false
 void set_isElided(bool value) ;

/// @brief Method OnGenerateVisualContent addr 0x2c46e48 size 0x120 virtual false final false
 void OnGenerateVisualContent(UnityEngine::UIElements::MeshGenerationContext mgc) ;

/// @brief Method ElideText addr 0x2c470fc size 0x4cc virtual false final false
 ::StringW ElideText(::StringW drawText, ::StringW ellipsisText, float_t width, UnityEngine::UIElements::TextOverflowPosition textOverflowPosition) ;

/// @brief Method UpdateTooltip addr 0x2c47090 size 0x6c virtual false final false
 void UpdateTooltip() ;

/// @brief Method UpdateVisibleText addr 0x2c46b10 size 0x17c virtual false final false
 void UpdateVisibleText() ;

/// @brief Method ShouldElide addr 0x2c46f68 size 0x68 virtual false final false
 bool ShouldElide() ;

/// @brief Method TextLibraryCanElide addr 0x2c46fd0 size 0xc0 virtual false final false
 bool TextLibraryCanElide() ;

/// @brief Method MeasureTextSize addr 0x2c475c8 size 0xc virtual false final false
 UnityEngine::Vector2 MeasureTextSize(::StringW textToMeasure, float_t width, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t height, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode heightMode) ;

/// @brief Method DoMeasure addr 0x2c475d4 size 0x60 virtual true final false
 UnityEngine::Vector2 DoMeasure(float_t desiredWidth, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t desiredHeight, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode heightMode) ;

/// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.get_value addr 0x2c47634 size 0x54 virtual true final true
 ::StringW UnityEngine_UIElements_INotifyValueChanged_System_String__get_value() ;

/// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.set_value addr 0x2c47688 size 0x2cc virtual true final true
 void UnityEngine_UIElements_INotifyValueChanged_System_String__set_value(::StringW value) ;

/// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.SetValueWithoutNotify addr 0x2c47954 size 0x6c virtual true final true
 void UnityEngine_UIElements_INotifyValueChanged_System_String__SetValueWithoutNotify(::StringW newValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(6899)), TypeDefinitionIndex(TypeDefinitionIndex(6900)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5107 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6897))
// CS Name: UnityEngine.UIElements.TextElement::UxmlFactory
class CORDL_TYPE UnityEngine__UIElements__TextElement__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::TextElement,UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__UIElements__TextElement__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextElement__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TextElement__UxmlFactory(UnityEngine__UIElements__TextElement__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextElement__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TextElement__UxmlFactory(UnityEngine__UIElements__TextElement__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TextElement__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UnityEngine::UIElements::TextElement,UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits>(ptr) {
}


  constexpr UnityEngine__UIElements__TextElement__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextElement__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextElement__UxmlFactory& operator=(UnityEngine__UIElements__TextElement__UxmlFactory&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TextElement__UxmlFactory& operator=(UnityEngine__UIElements__TextElement__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__UIElements__TextElement__UxmlFactory() ;

/// @brief Method .ctor addr 0x2c47a80 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::<get_uxmlChildElementsDescription>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6898))
// CS Name: UnityEngine.UIElements.TextElement::UxmlTraits::<get_uxmlChildElementsDescription>d__4
class CORDL_TYPE UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4(UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4(UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4&& o) noexcept = default;
  constexpr UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::UIElements::UxmlChildElementDescription value) ;

constexpr UnityEngine::UIElements::UxmlChildElementDescription __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits __get___4__this() const;


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2c47b2c size 0x44 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c47e1c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c47e20 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x2c47e38 size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c47e40 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c47e80 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x2c47e88 size 0xa0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c47f28 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__TextElement__UxmlTraits___get_uxmlChildElementsDescription_d__4, "UnityEngine.UIElements", "TextElement/UxmlTraits/<get_uxmlChildElementsDescription>d__4");
NEED_NO_BOX(UnityEngine::UIElements::TextElement);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TextElement, "UnityEngine.UIElements", "TextElement");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlFactory, "UnityEngine.UIElements", "TextElement/UxmlFactory");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__TextElement__UxmlTraits, "UnityEngine.UIElements", "TextElement/UxmlTraits");
