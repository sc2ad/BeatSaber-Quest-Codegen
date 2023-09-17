#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System {
class Exception;
}
namespace System {
class Type;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
struct XmlTokenizedType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_NOTATION;
}
// Type: System.Xml.Schema::Datatype_NOTATION
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11605))
// CS Name: System.Xml.Schema.Datatype_NOTATION
class CORDL_TYPE Datatype_NOTATION : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_NOTATION() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_NOTATION", modifiers: " const&", def_value: None }]
constexpr Datatype_NOTATION(Datatype_NOTATION const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_NOTATION", modifiers: "&&", def_value: None }]
constexpr Datatype_NOTATION(Datatype_NOTATION&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_NOTATION(void* ptr) noexcept : ::System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_NOTATION& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_NOTATION& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_NOTATION& operator=(Datatype_NOTATION&& o) noexcept = default;
  constexpr Datatype_NOTATION& operator=(Datatype_NOTATION const& o) noexcept = default;
                


// Fields

static ::System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(::System::Type value) ;

static ::System::Type __get_atomicValueType() ;

static ::System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(::System::Type value) ;

static ::System::Type __get_listValueType() ;


// Properties

 ::System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 ::System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 ::System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;

 ::System::Type __declspec(property(get=get_ValueType))  ValueType;

 ::System::Type __declspec(property(get=get_ListValueType))  ListValueType;

 ::System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;


// Methods

/// @brief Method CreateValueConverter addr 0x2727e94 size 0xc virtual true final false
 ::System::Xml::Schema::XmlValueConverter CreateValueConverter(::System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method get_FacetsChecker addr 0x2727ea0 size 0x58 virtual true final false
 ::System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x2727ef8 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_TokenizedType addr 0x2727f00 size 0x8 virtual true final false
 ::System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method get_ValueType addr 0x2727f08 size 0x58 virtual true final false
 ::System::Type get_ValueType() ;

/// @brief Method get_ListValueType addr 0x2727f60 size 0x58 virtual true final false
 ::System::Type get_ListValueType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x2727fb8 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method TryParseValue addr 0x2727fc0 size 0x238 virtual true final false
 ::System::Exception TryParseValue(::StringW s, ::System::Xml::XmlNameTable nameTable, ::System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_NOTATION() ;

/// @brief Method .ctor addr 0x27281f8 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_NOTATION);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_NOTATION, "System.Xml.Schema", "Datatype_NOTATION");
