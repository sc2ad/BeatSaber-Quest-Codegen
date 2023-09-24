#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace System::Xml::Schema {
class XmlSchemaElement;
}
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
class XmlSchemaSimpleType;
}
// Forward declare root types
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
// Type: System.Xml.Schema::IXmlSchemaInfo
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11639))
// CS Name: System.Xml.Schema.IXmlSchemaInfo
class CORDL_TYPE IXmlSchemaInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IXmlSchemaInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IXmlSchemaInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Xml::Schema::XmlSchemaValidity __declspec(property(get=get_Validity))  Validity;

 bool __declspec(property(get=get_IsDefault))  IsDefault;

 bool __declspec(property(get=get_IsNil))  IsNil;

 System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=get_MemberType))  MemberType;

 System::Xml::Schema::XmlSchemaType __declspec(property(get=get_SchemaType))  SchemaType;

 System::Xml::Schema::XmlSchemaElement __declspec(property(get=get_SchemaElement))  SchemaElement;

 System::Xml::Schema::XmlSchemaAttribute __declspec(property(get=get_SchemaAttribute))  SchemaAttribute;


// Methods

/// @brief Method get_Validity addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::XmlSchemaValidity get_Validity() ;

/// @brief Method get_IsDefault addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsDefault() ;

/// @brief Method get_IsNil addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsNil() ;

/// @brief Method get_MemberType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::XmlSchemaSimpleType get_MemberType() ;

/// @brief Method get_SchemaType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::XmlSchemaType get_SchemaType() ;

/// @brief Method get_SchemaElement addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::XmlSchemaElement get_SchemaElement() ;

/// @brief Method get_SchemaAttribute addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::XmlSchemaAttribute get_SchemaAttribute() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::IXmlSchemaInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::IXmlSchemaInfo, "System.Xml.Schema", "IXmlSchemaInfo");
