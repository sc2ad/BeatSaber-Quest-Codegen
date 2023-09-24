#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security {
class System__Security__SecurityElement__SecurityAttribute;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Security {
class SecurityElement;
}
namespace System::Security {
class System__Security__SecurityElement__SecurityAttribute;
}
// Type: ::SecurityAttribute
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2883))
// CS Name: System.Security.SecurityElement::SecurityAttribute
class CORDL_TYPE System__Security__SecurityElement__SecurityAttribute : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Security__SecurityElement__SecurityAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__SecurityElement__SecurityAttribute", modifiers: " const&", def_value: None }]
constexpr System__Security__SecurityElement__SecurityAttribute(System__Security__SecurityElement__SecurityAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Security__SecurityElement__SecurityAttribute", modifiers: "&&", def_value: None }]
constexpr System__Security__SecurityElement__SecurityAttribute(System__Security__SecurityElement__SecurityAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Security__SecurityElement__SecurityAttribute(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Security__SecurityElement__SecurityAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Security__SecurityElement__SecurityAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Security__SecurityElement__SecurityAttribute& operator=(System__Security__SecurityElement__SecurityAttribute&& o) noexcept = default;
  constexpr System__Security__SecurityElement__SecurityAttribute& operator=(System__Security__SecurityElement__SecurityAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 ::StringW __declspec(property(get=__get__value, put=__set__value))  _value;

constexpr void __set__value(::StringW value) ;

constexpr ::StringW __get__value() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_Value))  Value;


// Methods

static System::Security::System__Security__SecurityElement__SecurityAttribute New_ctor(::StringW name, ::StringW value) ;

/// @brief Method .ctor addr 0x22e7390 size 0x164 virtual false final false
 void _ctor(::StringW name, ::StringW value) ;

/// @brief Method get_Name addr 0x22e8398 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_Value addr 0x22e83a0 size 0x8 virtual false final false
 ::StringW get_Value() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
// Type: System.Security::SecurityElement
namespace System::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2884))
// CS Name: System.Security.SecurityElement
class CORDL_TYPE SecurityElement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SecurityAttribute = System::Security::System__Security__SecurityElement__SecurityAttribute;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SecurityElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityElement", modifiers: " const&", def_value: None }]
constexpr SecurityElement(SecurityElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityElement", modifiers: "&&", def_value: None }]
constexpr SecurityElement(SecurityElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityElement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecurityElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityElement& operator=(SecurityElement&& o) noexcept = default;
  constexpr SecurityElement& operator=(SecurityElement const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 ::StringW __declspec(property(get=__get_tag, put=__set_tag))  tag;

constexpr void __set_tag(::StringW value) ;

constexpr ::StringW __get_tag() const;

 System::Collections::ArrayList __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_attributes() const;

 System::Collections::ArrayList __declspec(property(get=__get_children, put=__set_children))  children;

constexpr void __set_children(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_children() const;

static ::ArrayW<char16_t> __declspec(property(get=__get_invalid_tag_chars, put=__set_invalid_tag_chars))  invalid_tag_chars;

static void __set_invalid_tag_chars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_invalid_tag_chars() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_invalid_text_chars, put=__set_invalid_text_chars))  invalid_text_chars;

static void __set_invalid_text_chars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_invalid_text_chars() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_invalid_attr_name_chars, put=__set_invalid_attr_name_chars))  invalid_attr_name_chars;

static void __set_invalid_attr_name_chars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_invalid_attr_name_chars() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_invalid_attr_value_chars, put=__set_invalid_attr_value_chars))  invalid_attr_value_chars;

static void __set_invalid_attr_value_chars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_invalid_attr_value_chars() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_invalid_chars, put=__set_invalid_chars))  invalid_chars;

static void __set_invalid_chars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_invalid_chars() ;


// Properties

 System::Collections::ArrayList __declspec(property(get=get_Children))  Children;

 ::StringW __declspec(property(get=get_Tag))  Tag;

 ::StringW __declspec(property(put=set_Text))  Text;

 ::StringW __declspec(property(put=set_m_strText))  m_strText;


// Methods

static System::Security::SecurityElement New_ctor(::StringW tag) ;

/// @brief Method .ctor addr 0x22e4c64 size 0x8 virtual false final false
 void _ctor(::StringW tag) ;

static System::Security::SecurityElement New_ctor(::StringW tag, ::StringW text) ;

/// @brief Method .ctor addr 0x22e6b50 size 0x150 virtual false final false
 void _ctor(::StringW tag, ::StringW text) ;

/// @brief Method get_Children addr 0x22e6e18 size 0x8 virtual false final false
 System::Collections::ArrayList get_Children() ;

/// @brief Method get_Tag addr 0x22e6e20 size 0x8 virtual false final false
 ::StringW get_Tag() ;

/// @brief Method set_Text addr 0x22e6d1c size 0xfc virtual false final false
 void set_Text(::StringW value) ;

/// @brief Method AddAttribute addr 0x22e4c6c size 0x1ac virtual false final false
 void AddAttribute(::StringW name, ::StringW value) ;

/// @brief Method AddChild addr 0x22e4e18 size 0xd0 virtual false final false
 void AddChild(System::Security::SecurityElement child) ;

/// @brief Method Escape addr 0x22e74f4 size 0x1ec virtual false final false
static ::StringW Escape(::StringW str) ;

/// @brief Method Unescape addr 0x22e6ea4 size 0x1dc virtual false final false
static ::StringW Unescape(::StringW str) ;

/// @brief Method IsValidAttributeName addr 0x22e76e0 size 0x7c virtual false final false
static bool IsValidAttributeName(::StringW name) ;

/// @brief Method IsValidAttributeValue addr 0x22e775c size 0x7c virtual false final false
static bool IsValidAttributeValue(::StringW value) ;

/// @brief Method IsValidTag addr 0x22e6ca0 size 0x7c virtual false final false
static bool IsValidTag(::StringW tag) ;

/// @brief Method IsValidText addr 0x22e6e28 size 0x7c virtual false final false
static bool IsValidText(::StringW text) ;

/// @brief Method SearchForChildByTag addr 0x22e77d8 size 0x128 virtual false final false
 System::Security::SecurityElement SearchForChildByTag(::StringW tag) ;

/// @brief Method ToString addr 0x22e7900 size 0x88 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToXml addr 0x22e7988 size 0x64c virtual false final false
 void ToXml(ByRef<System::Text::StringBuilder> s, int32_t level) ;

/// @brief Method GetAttribute addr 0x22e7080 size 0x310 virtual false final false
 System::Security::System__Security__SecurityElement__SecurityAttribute GetAttribute(::StringW name) ;

/// @brief Method set_m_strText addr 0x22e7fd4 size 0x8 virtual false final false
 void set_m_strText(::StringW value) ;

/// @brief Method SearchForTextOfLocalName addr 0x22e7fdc size 0x23c virtual false final false
 ::StringW SearchForTextOfLocalName(::StringW strLocalName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security
NEED_NO_BOX(System::Security::SecurityElement);
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityElement, "System.Security", "SecurityElement");
NEED_NO_BOX(System::Security::System__Security__SecurityElement__SecurityAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Security::System__Security__SecurityElement__SecurityAttribute, "System.Security", "SecurityElement/SecurityAttribute");
