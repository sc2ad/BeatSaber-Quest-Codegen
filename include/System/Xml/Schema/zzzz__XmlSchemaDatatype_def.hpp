#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
struct XmlSchemaDatatypeVariety;
}
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System {
class Type;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
// Type: System.Xml.Schema::XmlSchemaDatatype
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11665))
// CS Name: System.Xml.Schema.XmlSchemaDatatype
class CORDL_TYPE XmlSchemaDatatype : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XmlSchemaDatatype() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaDatatype", modifiers: " const&", def_value: None }]
constexpr XmlSchemaDatatype(XmlSchemaDatatype const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaDatatype", modifiers: "&&", def_value: None }]
constexpr XmlSchemaDatatype(XmlSchemaDatatype&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaDatatype(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlSchemaDatatype& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaDatatype& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaDatatype& operator=(XmlSchemaDatatype&& o) noexcept = default;
  constexpr XmlSchemaDatatype& operator=(XmlSchemaDatatype const& o) noexcept = default;
                


// Properties

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;

 System::Xml::Schema::XmlSchemaDatatypeVariety __declspec(property(get=get_Variety))  Variety;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 System::Xml::Schema::XmlValueConverter __declspec(property(get=get_ValueConverter))  ValueConverter;

 System::Xml::Schema::RestrictionFacets __declspec(property(get=get_Restriction))  Restriction;

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;

 ::StringW __declspec(property(get=get_TypeCodeString))  TypeCodeString;


// Methods

/// @brief Method get_ValueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_TokenizedType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method ParseValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr) ;

/// @brief Method get_Variety addr 0x2734410 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety() ;

/// @brief Method get_TypeCode addr 0x2734418 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_ValueConverter addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::XmlValueConverter get_ValueConverter() ;

/// @brief Method get_Restriction addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::RestrictionFacets get_Restriction() ;

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method TryParseValue addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

/// @brief Method get_FacetsChecker addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method IsEqual addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsEqual(::bs_hook::Il2CppWrapperType o1, ::bs_hook::Il2CppWrapperType o2) ;

/// @brief Method get_TypeCodeString addr 0x272d9b8 size 0x128 virtual false final false
 ::StringW get_TypeCodeString() ;

/// @brief Method TypeCodeToString addr 0x2734420 size 0x4ac virtual false final false
 ::StringW TypeCodeToString(System::Xml::Schema::XmlTypeCode typeCode) ;

/// @brief Method FromXmlTokenizedType addr 0x2730cec size 0x58 virtual false final false
static System::Xml::Schema::XmlSchemaDatatype FromXmlTokenizedType(System::Xml::XmlTokenizedType token) ;

// Ctor Parameters []
explicit XmlSchemaDatatype() ;

/// @brief Method .ctor addr 0x27348cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaDatatype);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaDatatype, "System.Xml.Schema", "XmlSchemaDatatype");
