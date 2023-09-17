#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__TextField__TextInput;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__TextField__UxmlFactory;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__TextField__UxmlTraits;
}
// Type: ::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7194)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7194), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7154))
// CS Name: UnityEngine.UIElements.TextField::UxmlTraits
class CORDL_TYPE ____UnityEngine__UIElements__TextField__UxmlTraits : public ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~____UnityEngine__UIElements__TextField__UxmlTraits() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextField__UxmlTraits", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextField__UxmlTraits(____UnityEngine__UIElements__TextField__UxmlTraits const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextField__UxmlTraits", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextField__UxmlTraits(____UnityEngine__UIElements__TextField__UxmlTraits&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__TextField__UxmlTraits(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__UxmlTraits<::StringW>(ptr) {
}


  constexpr ____UnityEngine__UIElements__TextField__UxmlTraits& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextField__UxmlTraits& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextField__UxmlTraits& operator=(____UnityEngine__UIElements__TextField__UxmlTraits&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__TextField__UxmlTraits& operator=(____UnityEngine__UIElements__TextField__UxmlTraits const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::UxmlBoolAttributeDescription __declspec(property(get=__get_m_Multiline, put=__set_m_Multiline))  m_Multiline;

constexpr void __set_m_Multiline(::UnityEngine::UIElements::UxmlBoolAttributeDescription value) ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription __get_m_Multiline() const;


// Methods

/// @brief Method Init addr 0x2cb28b0 size 0x114 virtual true final false
 void Init(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::IUxmlAttributes bag, ::UnityEngine::UIElements::CreationContext cc) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__TextField__UxmlTraits() ;

/// @brief Method .ctor addr 0x2cb29c4 size 0xa0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextField
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7196)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7196), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7156))
// CS Name: UnityEngine.UIElements.TextField
class CORDL_TYPE TextField : public ::UnityEngine::UIElements::TextInputBaseField_1<::StringW> {
public:
// Declarations
using TextInput = ::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__TextInput;

using UxmlTraits = ::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__UxmlTraits;

using UxmlFactory = ::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__UxmlFactory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x420};

virtual ~TextField() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextField", modifiers: " const&", def_value: None }]
constexpr TextField(TextField const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextField", modifiers: "&&", def_value: None }]
constexpr TextField(TextField&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextField(void* ptr) noexcept : ::UnityEngine::UIElements::TextInputBaseField_1<::StringW>(ptr) {
}


  constexpr TextField& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextField& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextField& operator=(TextField&& o) noexcept = default;
  constexpr TextField& operator=(TextField const& o) noexcept = default;
                


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


// Properties

 ::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__TextInput __declspec(property(get=get_textInput))  textInput;

 bool __declspec(property(put=set_multiline))  multiline;

 ::StringW __declspec(property(get=get_value, put=set_value))  value;


// Methods

/// @brief Method get_textInput addr 0x2cb2194 size 0x84 virtual false final false
 ::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__TextInput get_textInput() ;

/// @brief Method set_multiline addr 0x2cb2218 size 0x20 virtual false final false
 void set_multiline(bool value) ;

// Ctor Parameters []
explicit TextField() ;

/// @brief Method .ctor addr 0x2cb2304 size 0x18 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }]
explicit TextField(::StringW label) ;

/// @brief Method .ctor addr 0x2cb231c size 0x14 virtual false final false
 void _ctor(::StringW label) ;

// Ctor Parameters [CppParam { name: "label", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "maxLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "multiline", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPasswordField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "maskChar", ty: "char16_t", modifiers: "", def_value: None }]
explicit TextField(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar) ;

/// @brief Method .ctor addr 0x2cb2330 size 0x1dc virtual false final false
 void _ctor(::StringW label, int32_t maxLength, bool multiline, bool isPasswordField, char16_t maskChar) ;

/// @brief Method get_value addr 0x2cb2554 size 0x48 virtual true final false
 ::StringW get_value() ;

/// @brief Method set_value addr 0x2cb259c size 0xa4 virtual true final false
 void set_value(::StringW value) ;

/// @brief Method SetValueWithoutNotify addr 0x2cb2640 size 0xa4 virtual true final false
 void SetValueWithoutNotify(::StringW newValue) ;

/// @brief Method OnViewDataReady addr 0x2cb26e4 size 0xb4 virtual true final false
 void OnViewDataReady() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::UxmlFactory
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7154)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7089), inst: 5108 }), TypeDefinitionIndex(TypeDefinitionIndex(7156)), TypeDefinitionIndex(TypeDefinitionIndex(7089))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7153))
// CS Name: UnityEngine.UIElements.TextField::UxmlFactory
class CORDL_TYPE ____UnityEngine__UIElements__TextField__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TextField,::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__UxmlTraits> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__TextField__UxmlFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextField__UxmlFactory", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextField__UxmlFactory(____UnityEngine__UIElements__TextField__UxmlFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextField__UxmlFactory", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextField__UxmlFactory(____UnityEngine__UIElements__TextField__UxmlFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__TextField__UxmlFactory(void* ptr) noexcept : ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TextField,::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__UxmlTraits>(ptr) {
}


  constexpr ____UnityEngine__UIElements__TextField__UxmlFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextField__UxmlFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextField__UxmlFactory& operator=(____UnityEngine__UIElements__TextField__UxmlFactory&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__TextField__UxmlFactory& operator=(____UnityEngine__UIElements__TextField__UxmlFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__TextField__UxmlFactory() ;

/// @brief Method .ctor addr 0x2cb2868 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::TextInput
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7195)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7195), inst: 380 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7155))
// CS Name: UnityEngine.UIElements.TextField::TextInput
class CORDL_TYPE ____UnityEngine__UIElements__TextField__TextInput : public ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x418};

virtual ~____UnityEngine__UIElements__TextField__TextInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextField__TextInput", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextField__TextInput(____UnityEngine__UIElements__TextField__TextInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__TextField__TextInput", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__TextField__TextInput(____UnityEngine__UIElements__TextField__TextInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__TextField__TextInput(void* ptr) noexcept : ::UnityEngine::UIElements::____UnityEngine__UIElements__TextInputBaseField_1__TextInputBase<::StringW>(ptr) {
}


  constexpr ____UnityEngine__UIElements__TextField__TextInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextField__TextInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__TextField__TextInput& operator=(____UnityEngine__UIElements__TextField__TextInput&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__TextField__TextInput& operator=(____UnityEngine__UIElements__TextField__TextInput const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_Multiline, put=__set_m_Multiline))  m_Multiline;

constexpr void __set_m_Multiline(bool value) ;

constexpr bool __get_m_Multiline() const;


// Properties

 ::UnityEngine::UIElements::TextField __declspec(property(get=get_parentTextField))  parentTextField;

 bool __declspec(property(get=get_multiline, put=set_multiline))  multiline;

 bool __declspec(property(put=set_isPasswordField))  isPasswordField;


// Methods

/// @brief Method get_parentTextField addr 0x2cb2a64 size 0x80 virtual false final false
 ::UnityEngine::UIElements::TextField get_parentTextField() ;

/// @brief Method get_multiline addr 0x2cb2ae4 size 0x8 virtual false final false
 bool get_multiline() ;

/// @brief Method set_multiline addr 0x2cb2238 size 0xcc virtual false final false
 void set_multiline(bool value) ;

/// @brief Method SetTextAlign addr 0x2cb2aec size 0xa0 virtual false final false
 void SetTextAlign() ;

/// @brief Method set_isPasswordField addr 0x2cb2b8c size 0x5c virtual true final false
 void set_isPasswordField(bool value) ;

/// @brief Method StringToValue addr 0x2cb2be8 size 0x8 virtual true final false
 ::StringW StringToValue(::StringW str) ;

/// @brief Method SyncTextEngine addr 0x2cb2bf0 size 0x90 virtual true final false
 void SyncTextEngine() ;

/// @brief Method ExecuteDefaultActionAtTarget addr 0x2cb2c80 size 0x730 virtual true final false
 void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase evt) ;

/// @brief Method ExecuteDefaultAction addr 0x2cb33b0 size 0x18c virtual true final false
 void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase evt) ;

// Ctor Parameters []
explicit ____UnityEngine__UIElements__TextField__TextInput() ;

/// @brief Method .ctor addr 0x2cb250c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::TextField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextField, "UnityEngine.UIElements", "TextField");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__TextInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__TextInput, "UnityEngine.UIElements", "TextField/TextInput");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__UxmlFactory, "UnityEngine.UIElements", "TextField/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__TextField__UxmlTraits, "UnityEngine.UIElements", "TextField/UxmlTraits");
