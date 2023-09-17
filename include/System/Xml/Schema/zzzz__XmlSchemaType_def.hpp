#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
namespace {
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Type: System.Xml.Schema::XmlSchemaType
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11684))
// CS Name: System.Xml.Schema.XmlSchemaType
class CORDL_TYPE XmlSchemaType : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~XmlSchemaType() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaType", modifiers: " const&", def_value: None }]
constexpr XmlSchemaType(XmlSchemaType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaType", modifiers: "&&", def_value: None }]
constexpr XmlSchemaType(XmlSchemaType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaType(void* ptr) noexcept : ::System::Xml::Schema::XmlSchemaAnnotated(ptr) {
}


  constexpr XmlSchemaType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaType& operator=(XmlSchemaType&& o) noexcept = default;
  constexpr XmlSchemaType& operator=(XmlSchemaType const& o) noexcept = default;
                


// Fields

 ::System::Xml::Schema::XmlSchemaDerivationMethod __declspec(property(get=__get_final, put=__set_final))  final;

constexpr void __set_final(::System::Xml::Schema::XmlSchemaDerivationMethod value) ;

constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod __get_final() const;

 ::System::Xml::Schema::XmlSchemaDerivationMethod __declspec(property(get=__get_derivedBy, put=__set_derivedBy))  derivedBy;

constexpr void __set_derivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value) ;

constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod __get_derivedBy() const;

 ::System::Xml::Schema::XmlSchemaType __declspec(property(get=__get_baseSchemaType, put=__set_baseSchemaType))  baseSchemaType;

constexpr void __set_baseSchemaType(::System::Xml::Schema::XmlSchemaType value) ;

constexpr ::System::Xml::Schema::XmlSchemaType __get_baseSchemaType() const;

 ::System::Xml::Schema::XmlSchemaDatatype __declspec(property(get=__get_datatype, put=__set_datatype))  datatype;

constexpr void __set_datatype(::System::Xml::Schema::XmlSchemaDatatype value) ;

constexpr ::System::Xml::Schema::XmlSchemaDatatype __get_datatype() const;

 ::System::Xml::Schema::SchemaElementDecl __declspec(property(get=__get_elementDecl, put=__set_elementDecl))  elementDecl;

constexpr void __set_elementDecl(::System::Xml::Schema::SchemaElementDecl value) ;

constexpr ::System::Xml::Schema::SchemaElementDecl __get_elementDecl() const;

 ::System::Xml::XmlQualifiedName __declspec(property(get=__get_qname, put=__set_qname))  qname;

constexpr void __set_qname(::System::Xml::XmlQualifiedName value) ;

constexpr ::System::Xml::XmlQualifiedName __get_qname() const;

 ::System::Xml::Schema::XmlSchemaContentType __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(::System::Xml::Schema::XmlSchemaContentType value) ;

constexpr ::System::Xml::Schema::XmlSchemaContentType __get_contentType() const;


// Properties

 ::System::Xml::XmlQualifiedName __declspec(property(get=get_QualifiedName))  QualifiedName;

 ::System::Xml::Schema::XmlSchemaType __declspec(property(get=get_BaseXmlSchemaType))  BaseXmlSchemaType;

 ::System::Xml::Schema::XmlSchemaDatatype __declspec(property(get=get_Datatype))  Datatype;

 bool __declspec(property(put=set_IsMixed))  IsMixed;

 ::System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 ::System::Xml::Schema::XmlValueConverter __declspec(property(get=get_ValueConverter))  ValueConverter;

 ::System::Xml::Schema::SchemaElementDecl __declspec(property(get=get_ElementDecl, put=set_ElementDecl))  ElementDecl;


// Methods

/// @brief Method GetBuiltInSimpleType addr 0x2735944 size 0x58 virtual false final false
static ::System::Xml::Schema::XmlSchemaSimpleType GetBuiltInSimpleType(::System::Xml::Schema::XmlTypeCode typeCode) ;

/// @brief Method get_QualifiedName addr 0x273599c size 0x18 virtual false final false
 ::System::Xml::XmlQualifiedName get_QualifiedName() ;

/// @brief Method get_BaseXmlSchemaType addr 0x27359b4 size 0x8 virtual false final false
 ::System::Xml::Schema::XmlSchemaType get_BaseXmlSchemaType() ;

/// @brief Method get_Datatype addr 0x27359bc size 0x8 virtual false final false
 ::System::Xml::Schema::XmlSchemaDatatype get_Datatype() ;

/// @brief Method set_IsMixed addr 0x27359c4 size 0x4 virtual true final false
 void set_IsMixed(bool value) ;

/// @brief Method get_TypeCode addr 0x27328dc size 0xb4 virtual false final false
 ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_ValueConverter addr 0x2732f14 size 0x78 virtual false final false
 ::System::Xml::Schema::XmlValueConverter get_ValueConverter() ;

/// @brief Method SetQualifiedName addr 0x2733e94 size 0x24 virtual false final false
 void SetQualifiedName(::System::Xml::XmlQualifiedName value) ;

/// @brief Method SetBaseSchemaType addr 0x27359c8 size 0x8 virtual false final false
 void SetBaseSchemaType(::System::Xml::Schema::XmlSchemaType value) ;

/// @brief Method SetDerivedBy addr 0x27359d0 size 0x8 virtual false final false
 void SetDerivedBy(::System::Xml::Schema::XmlSchemaDerivationMethod value) ;

/// @brief Method SetDatatype addr 0x27359d8 size 0x8 virtual false final false
 void SetDatatype(::System::Xml::Schema::XmlSchemaDatatype value) ;

/// @brief Method get_ElementDecl addr 0x2733edc size 0x18 virtual false final false
 ::System::Xml::Schema::SchemaElementDecl get_ElementDecl() ;

/// @brief Method set_ElementDecl addr 0x2733eb8 size 0x24 virtual false final false
 void set_ElementDecl(::System::Xml::Schema::SchemaElementDecl value) ;

/// @brief Method SetContentType addr 0x27359e0 size 0x8 virtual false final false
 void SetContentType(::System::Xml::Schema::XmlSchemaContentType value) ;

// Ctor Parameters []
explicit XmlSchemaType() ;

/// @brief Method .ctor addr 0x2734310 size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaType, "System.Xml.Schema", "XmlSchemaType");
