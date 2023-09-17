#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaInfo;
}
// Type: System.Xml.Schema::XmlSchemaInfo
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11671))
// CS Name: System.Xml.Schema.XmlSchemaInfo
class CORDL_TYPE XmlSchemaInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Xml::Schema::IXmlSchemaInfo
constexpr operator  ::System::Xml::Schema::IXmlSchemaInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~XmlSchemaInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInfo", modifiers: " const&", def_value: None }]
constexpr XmlSchemaInfo(XmlSchemaInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInfo", modifiers: "&&", def_value: None }]
constexpr XmlSchemaInfo(XmlSchemaInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlSchemaInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaInfo& operator=(XmlSchemaInfo&& o) noexcept = default;
  constexpr XmlSchemaInfo& operator=(XmlSchemaInfo const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_isDefault, put=__set_isDefault))  isDefault;

constexpr void __set_isDefault(bool value) ;

constexpr bool __get_isDefault() const;

 bool __declspec(property(get=__get_isNil, put=__set_isNil))  isNil;

constexpr void __set_isNil(bool value) ;

constexpr bool __get_isNil() const;

 ::System::Xml::Schema::XmlSchemaElement __declspec(property(get=__get_schemaElement, put=__set_schemaElement))  schemaElement;

constexpr void __set_schemaElement(::System::Xml::Schema::XmlSchemaElement value) ;

constexpr ::System::Xml::Schema::XmlSchemaElement __get_schemaElement() const;

 ::System::Xml::Schema::XmlSchemaAttribute __declspec(property(get=__get_schemaAttribute, put=__set_schemaAttribute))  schemaAttribute;

constexpr void __set_schemaAttribute(::System::Xml::Schema::XmlSchemaAttribute value) ;

constexpr ::System::Xml::Schema::XmlSchemaAttribute __get_schemaAttribute() const;

 ::System::Xml::Schema::XmlSchemaType __declspec(property(get=__get_schemaType, put=__set_schemaType))  schemaType;

constexpr void __set_schemaType(::System::Xml::Schema::XmlSchemaType value) ;

constexpr ::System::Xml::Schema::XmlSchemaType __get_schemaType() const;

 ::System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_memberType, put=__set_memberType))  memberType;

constexpr void __set_memberType(::System::Xml::Schema::XmlSchemaSimpleType value) ;

constexpr ::System::Xml::Schema::XmlSchemaSimpleType __get_memberType() const;

 ::System::Xml::Schema::XmlSchemaValidity __declspec(property(get=__get_validity, put=__set_validity))  validity;

constexpr void __set_validity(::System::Xml::Schema::XmlSchemaValidity value) ;

constexpr ::System::Xml::Schema::XmlSchemaValidity __get_validity() const;

 ::System::Xml::Schema::XmlSchemaContentType __declspec(property(get=__get_contentType, put=__set_contentType))  contentType;

constexpr void __set_contentType(::System::Xml::Schema::XmlSchemaContentType value) ;

constexpr ::System::Xml::Schema::XmlSchemaContentType __get_contentType() const;


// Properties

 ::System::Xml::Schema::XmlSchemaValidity __declspec(property(get=get_Validity))  Validity;

 bool __declspec(property(get=get_IsDefault))  IsDefault;

 bool __declspec(property(get=get_IsNil))  IsNil;

 ::System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=get_MemberType))  MemberType;

 ::System::Xml::Schema::XmlSchemaType __declspec(property(get=get_SchemaType))  SchemaType;

 ::System::Xml::Schema::XmlSchemaElement __declspec(property(get=get_SchemaElement))  SchemaElement;

 ::System::Xml::Schema::XmlSchemaAttribute __declspec(property(get=get_SchemaAttribute))  SchemaAttribute;


// Methods

// Ctor Parameters []
explicit XmlSchemaInfo() ;

/// @brief Method .ctor addr 0x27351f0 size 0x30 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "validity", ty: "::System::Xml::Schema::XmlSchemaValidity", modifiers: "", def_value: None }]
explicit XmlSchemaInfo(::System::Xml::Schema::XmlSchemaValidity validity) ;

/// @brief Method .ctor addr 0x273523c size 0x3c virtual false final false
 void _ctor(::System::Xml::Schema::XmlSchemaValidity validity) ;

/// @brief Method get_Validity addr 0x2735278 size 0x8 virtual true final true
 ::System::Xml::Schema::XmlSchemaValidity get_Validity() ;

/// @brief Method get_IsDefault addr 0x2735280 size 0x8 virtual true final true
 bool get_IsDefault() ;

/// @brief Method get_IsNil addr 0x2735288 size 0x8 virtual true final true
 bool get_IsNil() ;

/// @brief Method get_MemberType addr 0x2735290 size 0x8 virtual true final true
 ::System::Xml::Schema::XmlSchemaSimpleType get_MemberType() ;

/// @brief Method get_SchemaType addr 0x2735298 size 0x8 virtual true final true
 ::System::Xml::Schema::XmlSchemaType get_SchemaType() ;

/// @brief Method get_SchemaElement addr 0x27352a0 size 0x8 virtual true final true
 ::System::Xml::Schema::XmlSchemaElement get_SchemaElement() ;

/// @brief Method get_SchemaAttribute addr 0x27352a8 size 0x8 virtual true final true
 ::System::Xml::Schema::XmlSchemaAttribute get_SchemaAttribute() ;

/// @brief Method Clear addr 0x2735220 size 0x1c virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInfo, "System.Xml.Schema", "XmlSchemaInfo");
