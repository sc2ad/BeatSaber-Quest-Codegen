#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__DatatypeImplementation_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Exception;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_anySimpleType;
}
// Type: System.Xml.Schema::Datatype_anySimpleType
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11563))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11566))
// CS Name: System.Xml.Schema.Datatype_anySimpleType
class CORDL_TYPE Datatype_anySimpleType : public System::Xml::Schema::DatatypeImplementation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_anySimpleType() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_anySimpleType", modifiers: " const&", def_value: None }]
constexpr Datatype_anySimpleType(Datatype_anySimpleType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_anySimpleType", modifiers: "&&", def_value: None }]
constexpr Datatype_anySimpleType(Datatype_anySimpleType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_anySimpleType(void* ptr) noexcept : System::Xml::Schema::DatatypeImplementation(ptr) {
}


  constexpr Datatype_anySimpleType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_anySimpleType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_anySimpleType& operator=(Datatype_anySimpleType&& o) noexcept = default;
  constexpr Datatype_anySimpleType& operator=(Datatype_anySimpleType const& o) noexcept = default;
                


// Fields

static System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(System::Type value) ;

static System::Type __get_atomicValueType() ;

static System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(System::Type value) ;

static System::Type __get_listValueType() ;


// Properties

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 System::Type __declspec(property(get=get_ListValueType))  ListValueType;

 System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;

 System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;


// Methods

/// @brief Method CreateValueConverter addr 0x2723bd4 size 0x58 virtual true final false
 System::Xml::Schema::XmlValueConverter CreateValueConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method get_FacetsChecker addr 0x2723c2c size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_ValueType addr 0x2723c84 size 0x58 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_TypeCode addr 0x2723cdc size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_ListValueType addr 0x2723ce4 size 0x58 virtual true final false
 System::Type get_ListValueType() ;

/// @brief Method get_TokenizedType addr 0x2723d3c size 0x8 virtual true final false
 System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x2723d44 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method Compare addr 0x2723d4c size 0x58 virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method TryParseValue addr 0x2723da4 size 0x24 virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_anySimpleType() ;

/// @brief Method .ctor addr 0x2723dc8 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_anySimpleType);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_anySimpleType, "System.Xml.Schema", "Datatype_anySimpleType");
