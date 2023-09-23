#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__Foldout_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class UxmlChildElementDescription;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace GlobalNamespace {
class UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4;
}
namespace UIToolkitUtilities::Controls {
class TextInputFoldout;
}
namespace UIToolkitUtilities::Controls {
class UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory;
}
namespace UIToolkitUtilities::Controls {
class UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UIToolkitUtilities::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6821))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15950))
// CS Name: UIToolkitUtilities.Controls.TextInputFoldout::UxmlTraits
class CORDL_TYPE UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits : public UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits {
public:
// Declarations
using _get_uxmlChildElementsDescription_d__4 = GlobalNamespace::UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits(UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits(UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits(void* ptr) noexcept : UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__UxmlTraits(ptr) {
}


  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits& operator=(UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits&& o) noexcept = default;
  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits& operator=(UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get__textFieldText, put=__set__textFieldText))  _textFieldText;

constexpr void __set__textFieldText(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get__textFieldText() const;

 UnityEngine::UIElements::UxmlStringAttributeDescription __declspec(property(get=__get__suffix, put=__set__suffix))  _suffix;

constexpr void __set__suffix(UnityEngine::UIElements::UxmlStringAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlStringAttributeDescription __get__suffix() const;

 UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr UnityEngine::UIElements::UxmlBoolAttributeDescription __get__value() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> __declspec(property(get=get_uxmlChildElementsDescription))  uxmlChildElementsDescription;


// Methods

/// @brief Method get_uxmlChildElementsDescription addr 0x287d1a0 size 0x70 virtual true final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::UIElements::UxmlChildElementDescription> get_uxmlChildElementsDescription() ;

/// @brief Method Init addr 0x287d244 size 0x18c virtual true final false
 void Init(UnityEngine::UIElements::VisualElement ve, UnityEngine::UIElements::IUxmlAttributes bag, UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits() ;

/// @brief Method .ctor addr 0x287d3d0 size 0x124 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UIToolkitUtilities::Controls
// Type: UIToolkitUtilities.Controls::TextInputFoldout
namespace UIToolkitUtilities::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15951))
// CS Name: UIToolkitUtilities.Controls.TextInputFoldout
class CORDL_TYPE TextInputFoldout : public UnityEngine::UIElements::Foldout {
public:
// Declarations
using UxmlTraits = UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits;

using UxmlFactory = UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x3e0};

virtual ~TextInputFoldout() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInputFoldout", modifiers: " const&", def_value: None }]
constexpr TextInputFoldout(TextInputFoldout const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextInputFoldout", modifiers: "&&", def_value: None }]
constexpr TextInputFoldout(TextInputFoldout&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextInputFoldout(void* ptr) noexcept : UnityEngine::UIElements::Foldout(ptr) {
}


  constexpr TextInputFoldout& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextInputFoldout& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextInputFoldout& operator=(TextInputFoldout&& o) noexcept = default;
  constexpr TextInputFoldout& operator=(TextInputFoldout const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::TextField __declspec(property(get=__get_textField, put=__set_textField))  textField;

constexpr void __set_textField(UnityEngine::UIElements::TextField value) ;

constexpr UnityEngine::UIElements::TextField __get_textField() const;


// Properties

 ::StringW __declspec(property(get=get_suffix, put=set_suffix))  suffix;

 ::StringW __declspec(property(get=get_textFieldText, put=set_textFieldText))  textFieldText;


// Methods

/// @brief Method get_suffix addr 0x287cdb0 size 0x8 virtual false final false
 ::StringW get_suffix() ;

/// @brief Method set_suffix addr 0x287cdb8 size 0x8 virtual false final false
 void set_suffix(::StringW value) ;

/// @brief Method get_textFieldText addr 0x287cdc0 size 0x24 virtual false final false
 ::StringW get_textFieldText() ;

/// @brief Method set_textFieldText addr 0x287cde4 size 0x24 virtual false final false
 void set_textFieldText(::StringW value) ;

// Ctor Parameters []
explicit TextInputFoldout() ;

/// @brief Method .ctor addr 0x287ce08 size 0x2a0 virtual false final false
 void _ctor() ;

/// @brief Method RegisterTextFieldValueChangedCallback addr 0x287d0a8 size 0x58 virtual false final false
 void RegisterTextFieldValueChangedCallback(UnityEngine::UIElements::EventCallback_1<UnityEngine::UIElements::ChangeEvent_1<::StringW>> callback) ;

/// @brief Method UnregisterTextFieldValueChangedCallback addr 0x287d100 size 0x58 virtual false final false
 void UnregisterTextFieldValueChangedCallback(UnityEngine::UIElements::EventCallback_1<UnityEngine::UIElements::ChangeEvent_1<::StringW>> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UIToolkitUtilities::Controls
// Type: ::UxmlFactory
namespace UIToolkitUtilities::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15951)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5109 }), TypeDefinitionIndex(TypeDefinitionIndex(7089)), TypeDefinitionIndex(TypeDefinitionIndex(15950))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15948))
// CS Name: UIToolkitUtilities.Controls.TextInputFoldout::UxmlFactory
class CORDL_TYPE UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory : public UnityEngine::UIElements::UxmlFactory_2<UIToolkitUtilities::Controls::TextInputFoldout,UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory(UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory(UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory(void* ptr) noexcept : UnityEngine::UIElements::UxmlFactory_2<UIToolkitUtilities::Controls::TextInputFoldout,UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits>(ptr) {
}


  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory& operator=(UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory&& o) noexcept = default;
  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory& operator=(UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory() ;

/// @brief Method .ctor addr 0x287d158 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UIToolkitUtilities::Controls
// Type: ::<get_uxmlChildElementsDescription>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15949))
// CS Name: UIToolkitUtilities.Controls.TextInputFoldout::UxmlTraits::<get_uxmlChildElementsDescription>d__4
class CORDL_TYPE UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4 : public ::bs_hook::Il2CppWrapperType {
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
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4", modifiers: " const&", def_value: None }]
constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4(UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4", modifiers: "&&", def_value: None }]
constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4(UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4&& o) noexcept = default;
  constexpr UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4& operator=(UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4 const& o) noexcept = default;
                


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


// Properties

 UnityEngine::UIElements::UxmlChildElementDescription __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x287d210 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x287d4f4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x287d4f8 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.UIElements.UxmlChildElementDescription>.get_Current addr 0x287d510 size 0x8 virtual true final true
 UnityEngine::UIElements::UxmlChildElementDescription System_Collections_Generic_IEnumerator_UnityEngine_UIElements_UxmlChildElementDescription__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x287d518 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x287d558 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.UIElements.UxmlChildElementDescription>.GetEnumerator addr 0x287d560 size 0x98 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::UIElements::UxmlChildElementDescription> System_Collections_Generic_IEnumerable_UnityEngine_UIElements_UxmlChildElementDescription__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x287d5f8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits___get_uxmlChildElementsDescription_d__4, "UIToolkitUtilities.Controls", "TextInputFoldout/UxmlTraits/<get_uxmlChildElementsDescription>d__4");
NEED_NO_BOX(UIToolkitUtilities::Controls::TextInputFoldout);
DEFINE_IL2CPP_ARG_TYPE(UIToolkitUtilities::Controls::TextInputFoldout, "UIToolkitUtilities.Controls", "TextInputFoldout");
NEED_NO_BOX(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__TextInputFoldout__UxmlFactory, "UIToolkitUtilities.Controls", "TextInputFoldout/UxmlFactory");
NEED_NO_BOX(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(UIToolkitUtilities::Controls::UIToolkitUtilities__Controls__TextInputFoldout__UxmlTraits, "UIToolkitUtilities.Controls", "TextInputFoldout/UxmlTraits");
