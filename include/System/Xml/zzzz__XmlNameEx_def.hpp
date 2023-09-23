#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlName_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class XmlName;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
// Forward declare root types
namespace System::Xml {
class XmlNameEx;
}
// Type: System.Xml::XmlNameEx
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11457))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11458))
// CS Name: System.Xml.XmlNameEx
class CORDL_TYPE XmlNameEx : public System::Xml::XmlName {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~XmlNameEx() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNameEx", modifiers: " const&", def_value: None }]
constexpr XmlNameEx(XmlNameEx const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNameEx", modifiers: "&&", def_value: None }]
constexpr XmlNameEx(XmlNameEx&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNameEx(void* ptr) noexcept : System::Xml::XmlName(ptr) {
}


  constexpr XmlNameEx& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNameEx& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNameEx& operator=(XmlNameEx&& o) noexcept = default;
  constexpr XmlNameEx& operator=(XmlNameEx const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(uint8_t value) ;

constexpr uint8_t __get_flags() const;

 System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_memberType, put=__set_memberType))  memberType;

constexpr void __set_memberType(System::Xml::Schema::XmlSchemaSimpleType value) ;

constexpr System::Xml::Schema::XmlSchemaSimpleType __get_memberType() const;

 System::Xml::Schema::XmlSchemaType __declspec(property(get=__get_schemaType, put=__set_schemaType))  schemaType;

constexpr void __set_schemaType(System::Xml::Schema::XmlSchemaType value) ;

constexpr System::Xml::Schema::XmlSchemaType __get_schemaType() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_decl, put=__set_decl))  decl;

constexpr void __set_decl(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_decl() const;


// Properties

 System::Xml::Schema::XmlSchemaValidity __declspec(property(get=get_Validity))  Validity;

 bool __declspec(property(get=get_IsDefault))  IsDefault;

 bool __declspec(property(get=get_IsNil))  IsNil;

 System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=get_MemberType))  MemberType;

 System::Xml::Schema::XmlSchemaType __declspec(property(get=get_SchemaType))  SchemaType;

 System::Xml::Schema::XmlSchemaElement __declspec(property(get=get_SchemaElement))  SchemaElement;

 System::Xml::Schema::XmlSchemaAttribute __declspec(property(get=get_SchemaAttribute))  SchemaAttribute;


// Methods

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ownerDoc", ty: "System::Xml::XmlDocument", modifiers: "", def_value: None }, CppParam { name: "next", ty: "System::Xml::XmlName", modifiers: "", def_value: None }, CppParam { name: "schemaInfo", ty: "System::Xml::Schema::IXmlSchemaInfo", modifiers: "", def_value: None }]
explicit XmlNameEx(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, System::Xml::XmlDocument ownerDoc, System::Xml::XmlName next, System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

/// @brief Method .ctor addr 0x26fa968 size 0x3cc virtual false final false
 void _ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, System::Xml::XmlDocument ownerDoc, System::Xml::XmlName next, System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

/// @brief Method get_Validity addr 0x26fae50 size 0x30 virtual true final false
 System::Xml::Schema::XmlSchemaValidity get_Validity() ;

/// @brief Method get_IsDefault addr 0x26fae80 size 0xc virtual true final false
 bool get_IsDefault() ;

/// @brief Method get_IsNil addr 0x26fae8c size 0xc virtual true final false
 bool get_IsNil() ;

/// @brief Method get_MemberType addr 0x26fae98 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaSimpleType get_MemberType() ;

/// @brief Method get_SchemaType addr 0x26faea0 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaType get_SchemaType() ;

/// @brief Method get_SchemaElement addr 0x26faea8 size 0x7c virtual true final false
 System::Xml::Schema::XmlSchemaElement get_SchemaElement() ;

/// @brief Method get_SchemaAttribute addr 0x26faf24 size 0x7c virtual true final false
 System::Xml::Schema::XmlSchemaAttribute get_SchemaAttribute() ;

/// @brief Method SetValidity addr 0x26fae04 size 0x14 virtual false final false
 void SetValidity(System::Xml::Schema::XmlSchemaValidity value) ;

/// @brief Method SetIsDefault addr 0x26fae18 size 0x1c virtual false final false
 void SetIsDefault(bool value) ;

/// @brief Method SetIsNil addr 0x26fae34 size 0x1c virtual false final false
 void SetIsNil(bool value) ;

/// @brief Method Equals addr 0x26fafa0 size 0x3d4 virtual true final false
 bool Equals(System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlNameEx);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlNameEx, "System.Xml", "XmlNameEx");
