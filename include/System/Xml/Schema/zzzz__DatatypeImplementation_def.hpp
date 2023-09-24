#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
struct XmlSchemaDatatypeVariety;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
class IComparable;
}
// Forward declare root types
namespace System::Xml::Schema {
class DatatypeImplementation;
}
namespace System::Xml::Schema {
class System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap;
}
// Type: ::SchemaDatatypeMap
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11562))
// CS Name: System.Xml.Schema.DatatypeImplementation::SchemaDatatypeMap
class CORDL_TYPE System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap", modifiers: " const&", def_value: None }]
constexpr System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap(System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap", modifiers: "&&", def_value: None }]
constexpr System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap(System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap& operator=(System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap&& o) noexcept = default;
  constexpr System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap& operator=(System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(System::Xml::Schema::DatatypeImplementation value) ;

constexpr System::Xml::Schema::DatatypeImplementation __get_type() const;

 int32_t __declspec(property(get=__get_parentIndex, put=__set_parentIndex))  parentIndex;

constexpr void __set_parentIndex(int32_t value) ;

constexpr int32_t __get_parentIndex() const;


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 int32_t __declspec(property(get=get_ParentIndex))  ParentIndex;


// Methods

static System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap New_ctor(::StringW name, System::Xml::Schema::DatatypeImplementation type) ;

/// @brief Method .ctor addr 0x2720df0 size 0x2c virtual false final false
 void _ctor(::StringW name, System::Xml::Schema::DatatypeImplementation type) ;

static System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap New_ctor(::StringW name, System::Xml::Schema::DatatypeImplementation type, int32_t parentIndex) ;

/// @brief Method .ctor addr 0x2720e1c size 0x3c virtual false final false
 void _ctor(::StringW name, System::Xml::Schema::DatatypeImplementation type, int32_t parentIndex) ;

/// @brief Method op_Explicit addr 0x2721fdc size 0x18 virtual false final false
static System::Xml::Schema::DatatypeImplementation op_Explicit_System__Xml__Schema__DatatypeImplementation(System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap sdm) ;

/// @brief Method get_Name addr 0x2721ff4 size 0x8 virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_ParentIndex addr 0x2721ffc size 0x8 virtual false final false
 int32_t get_ParentIndex() ;

/// @brief Method CompareTo addr 0x2722004 size 0x70 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::DatatypeImplementation
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11665))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11563))
// CS Name: System.Xml.Schema.DatatypeImplementation
class CORDL_TYPE DatatypeImplementation : public System::Xml::Schema::XmlSchemaDatatype {
public:
// Declarations
using SchemaDatatypeMap = System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DatatypeImplementation() = default;

// Ctor Parameters [CppParam { name: "", ty: "DatatypeImplementation", modifiers: " const&", def_value: None }]
constexpr DatatypeImplementation(DatatypeImplementation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DatatypeImplementation", modifiers: "&&", def_value: None }]
constexpr DatatypeImplementation(DatatypeImplementation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DatatypeImplementation(void* ptr) noexcept : System::Xml::Schema::XmlSchemaDatatype(ptr) {
}


  constexpr DatatypeImplementation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DatatypeImplementation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DatatypeImplementation& operator=(DatatypeImplementation&& o) noexcept = default;
  constexpr DatatypeImplementation& operator=(DatatypeImplementation const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::XmlSchemaDatatypeVariety __declspec(property(get=__get_variety, put=__set_variety))  variety;

constexpr void __set_variety(System::Xml::Schema::XmlSchemaDatatypeVariety value) ;

constexpr System::Xml::Schema::XmlSchemaDatatypeVariety __get_variety() const;

 System::Xml::Schema::RestrictionFacets __declspec(property(get=__get_restriction, put=__set_restriction))  restriction;

constexpr void __set_restriction(System::Xml::Schema::RestrictionFacets value) ;

constexpr System::Xml::Schema::RestrictionFacets __get_restriction() const;

 System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_baseType, put=__set_baseType))  baseType;

constexpr void __set_baseType(System::Xml::Schema::DatatypeImplementation value) ;

constexpr System::Xml::Schema::DatatypeImplementation __get_baseType() const;

 System::Xml::Schema::XmlValueConverter __declspec(property(get=__get_valueConverter, put=__set_valueConverter))  valueConverter;

constexpr void __set_valueConverter(System::Xml::Schema::XmlValueConverter value) ;

constexpr System::Xml::Schema::XmlValueConverter __get_valueConverter() const;

 System::Xml::Schema::XmlSchemaType __declspec(property(get=__get_parentSchemaType, put=__set_parentSchemaType))  parentSchemaType;

constexpr void __set_parentSchemaType(System::Xml::Schema::XmlSchemaType value) ;

constexpr System::Xml::Schema::XmlSchemaType __get_parentSchemaType() const;

static System::Collections::Hashtable __declspec(property(get=__get_builtinTypes, put=__set_builtinTypes))  builtinTypes;

static void __set_builtinTypes(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_builtinTypes() ;

static ::ArrayW<System::Xml::Schema::XmlSchemaSimpleType> __declspec(property(get=__get_enumToTypeCode, put=__set_enumToTypeCode))  enumToTypeCode;

static void __set_enumToTypeCode(::ArrayW<System::Xml::Schema::XmlSchemaSimpleType> value) ;

static ::ArrayW<System::Xml::Schema::XmlSchemaSimpleType> __get_enumToTypeCode() ;

static System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_anySimpleType, put=__set_anySimpleType))  anySimpleType;

static void __set_anySimpleType(System::Xml::Schema::XmlSchemaSimpleType value) ;

static System::Xml::Schema::XmlSchemaSimpleType __get_anySimpleType() ;

static System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_anyAtomicType, put=__set_anyAtomicType))  anyAtomicType;

static void __set_anyAtomicType(System::Xml::Schema::XmlSchemaSimpleType value) ;

static System::Xml::Schema::XmlSchemaSimpleType __get_anyAtomicType() ;

static System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_untypedAtomicType, put=__set_untypedAtomicType))  untypedAtomicType;

static void __set_untypedAtomicType(System::Xml::Schema::XmlSchemaSimpleType value) ;

static System::Xml::Schema::XmlSchemaSimpleType __get_untypedAtomicType() ;

static System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_yearMonthDurationType, put=__set_yearMonthDurationType))  yearMonthDurationType;

static void __set_yearMonthDurationType(System::Xml::Schema::XmlSchemaSimpleType value) ;

static System::Xml::Schema::XmlSchemaSimpleType __get_yearMonthDurationType() ;

static System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_dayTimeDurationType, put=__set_dayTimeDurationType))  dayTimeDurationType;

static void __set_dayTimeDurationType(System::Xml::Schema::XmlSchemaSimpleType value) ;

static System::Xml::Schema::XmlSchemaSimpleType __get_dayTimeDurationType() ;

static System::Xml::XmlQualifiedName __declspec(property(get=__get_QnAnySimpleType, put=__set_QnAnySimpleType))  QnAnySimpleType;

static void __set_QnAnySimpleType(System::Xml::XmlQualifiedName value) ;

static System::Xml::XmlQualifiedName __get_QnAnySimpleType() ;

static System::Xml::XmlQualifiedName __declspec(property(get=__get_QnAnyType, put=__set_QnAnyType))  QnAnyType;

static void __set_QnAnyType(System::Xml::XmlQualifiedName value) ;

static System::Xml::XmlQualifiedName __get_QnAnyType() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_stringFacetsChecker, put=__set_stringFacetsChecker))  stringFacetsChecker;

static void __set_stringFacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_stringFacetsChecker() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_miscFacetsChecker, put=__set_miscFacetsChecker))  miscFacetsChecker;

static void __set_miscFacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_miscFacetsChecker() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_numeric2FacetsChecker, put=__set_numeric2FacetsChecker))  numeric2FacetsChecker;

static void __set_numeric2FacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_numeric2FacetsChecker() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_binaryFacetsChecker, put=__set_binaryFacetsChecker))  binaryFacetsChecker;

static void __set_binaryFacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_binaryFacetsChecker() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_dateTimeFacetsChecker, put=__set_dateTimeFacetsChecker))  dateTimeFacetsChecker;

static void __set_dateTimeFacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_dateTimeFacetsChecker() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_durationFacetsChecker, put=__set_durationFacetsChecker))  durationFacetsChecker;

static void __set_durationFacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_durationFacetsChecker() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_listFacetsChecker, put=__set_listFacetsChecker))  listFacetsChecker;

static void __set_listFacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_listFacetsChecker() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_qnameFacetsChecker, put=__set_qnameFacetsChecker))  qnameFacetsChecker;

static void __set_qnameFacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_qnameFacetsChecker() ;

static System::Xml::Schema::FacetsChecker __declspec(property(get=__get_unionFacetsChecker, put=__set_unionFacetsChecker))  unionFacetsChecker;

static void __set_unionFacetsChecker(System::Xml::Schema::FacetsChecker value) ;

static System::Xml::Schema::FacetsChecker __get_unionFacetsChecker() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_anySimpleType, put=__set_c_anySimpleType))  c_anySimpleType;

static void __set_c_anySimpleType(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_anySimpleType() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_anyURI, put=__set_c_anyURI))  c_anyURI;

static void __set_c_anyURI(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_anyURI() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_base64Binary, put=__set_c_base64Binary))  c_base64Binary;

static void __set_c_base64Binary(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_base64Binary() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_boolean, put=__set_c_boolean))  c_boolean;

static void __set_c_boolean(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_boolean() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_byte, put=__set_c_byte))  c_byte;

static void __set_c_byte(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_byte() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_char, put=__set_c_char))  c_char;

static void __set_c_char(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_char() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_date, put=__set_c_date))  c_date;

static void __set_c_date(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_date() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_dateTime, put=__set_c_dateTime))  c_dateTime;

static void __set_c_dateTime(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_dateTime() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_dateTimeNoTz, put=__set_c_dateTimeNoTz))  c_dateTimeNoTz;

static void __set_c_dateTimeNoTz(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_dateTimeNoTz() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_dateTimeTz, put=__set_c_dateTimeTz))  c_dateTimeTz;

static void __set_c_dateTimeTz(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_dateTimeTz() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_day, put=__set_c_day))  c_day;

static void __set_c_day(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_day() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_decimal, put=__set_c_decimal))  c_decimal;

static void __set_c_decimal(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_decimal() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_double, put=__set_c_double))  c_double;

static void __set_c_double(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_double() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_doubleXdr, put=__set_c_doubleXdr))  c_doubleXdr;

static void __set_c_doubleXdr(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_doubleXdr() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_duration, put=__set_c_duration))  c_duration;

static void __set_c_duration(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_duration() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_ENTITY, put=__set_c_ENTITY))  c_ENTITY;

static void __set_c_ENTITY(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_ENTITY() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_ENTITIES, put=__set_c_ENTITIES))  c_ENTITIES;

static void __set_c_ENTITIES(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_ENTITIES() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_ENUMERATION, put=__set_c_ENUMERATION))  c_ENUMERATION;

static void __set_c_ENUMERATION(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_ENUMERATION() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_fixed, put=__set_c_fixed))  c_fixed;

static void __set_c_fixed(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_fixed() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_float, put=__set_c_float))  c_float;

static void __set_c_float(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_float() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_floatXdr, put=__set_c_floatXdr))  c_floatXdr;

static void __set_c_floatXdr(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_floatXdr() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_hexBinary, put=__set_c_hexBinary))  c_hexBinary;

static void __set_c_hexBinary(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_hexBinary() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_ID, put=__set_c_ID))  c_ID;

static void __set_c_ID(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_ID() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_IDREF, put=__set_c_IDREF))  c_IDREF;

static void __set_c_IDREF(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_IDREF() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_IDREFS, put=__set_c_IDREFS))  c_IDREFS;

static void __set_c_IDREFS(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_IDREFS() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_int, put=__set_c_int))  c_int;

static void __set_c_int(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_int() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_integer, put=__set_c_integer))  c_integer;

static void __set_c_integer(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_integer() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_language, put=__set_c_language))  c_language;

static void __set_c_language(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_language() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_long, put=__set_c_long))  c_long;

static void __set_c_long(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_long() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_month, put=__set_c_month))  c_month;

static void __set_c_month(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_month() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_monthDay, put=__set_c_monthDay))  c_monthDay;

static void __set_c_monthDay(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_monthDay() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_Name, put=__set_c_Name))  c_Name;

static void __set_c_Name(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_Name() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_NCName, put=__set_c_NCName))  c_NCName;

static void __set_c_NCName(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_NCName() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_negativeInteger, put=__set_c_negativeInteger))  c_negativeInteger;

static void __set_c_negativeInteger(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_negativeInteger() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_NMTOKEN, put=__set_c_NMTOKEN))  c_NMTOKEN;

static void __set_c_NMTOKEN(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_NMTOKEN() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_NMTOKENS, put=__set_c_NMTOKENS))  c_NMTOKENS;

static void __set_c_NMTOKENS(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_NMTOKENS() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_nonNegativeInteger, put=__set_c_nonNegativeInteger))  c_nonNegativeInteger;

static void __set_c_nonNegativeInteger(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_nonNegativeInteger() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_nonPositiveInteger, put=__set_c_nonPositiveInteger))  c_nonPositiveInteger;

static void __set_c_nonPositiveInteger(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_nonPositiveInteger() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_normalizedString, put=__set_c_normalizedString))  c_normalizedString;

static void __set_c_normalizedString(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_normalizedString() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_NOTATION, put=__set_c_NOTATION))  c_NOTATION;

static void __set_c_NOTATION(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_NOTATION() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_positiveInteger, put=__set_c_positiveInteger))  c_positiveInteger;

static void __set_c_positiveInteger(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_positiveInteger() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_QName, put=__set_c_QName))  c_QName;

static void __set_c_QName(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_QName() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_QNameXdr, put=__set_c_QNameXdr))  c_QNameXdr;

static void __set_c_QNameXdr(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_QNameXdr() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_short, put=__set_c_short))  c_short;

static void __set_c_short(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_short() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_string, put=__set_c_string))  c_string;

static void __set_c_string(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_string() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_time, put=__set_c_time))  c_time;

static void __set_c_time(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_time() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_timeNoTz, put=__set_c_timeNoTz))  c_timeNoTz;

static void __set_c_timeNoTz(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_timeNoTz() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_timeTz, put=__set_c_timeTz))  c_timeTz;

static void __set_c_timeTz(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_timeTz() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_token, put=__set_c_token))  c_token;

static void __set_c_token(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_token() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_unsignedByte, put=__set_c_unsignedByte))  c_unsignedByte;

static void __set_c_unsignedByte(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_unsignedByte() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_unsignedInt, put=__set_c_unsignedInt))  c_unsignedInt;

static void __set_c_unsignedInt(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_unsignedInt() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_unsignedLong, put=__set_c_unsignedLong))  c_unsignedLong;

static void __set_c_unsignedLong(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_unsignedLong() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_unsignedShort, put=__set_c_unsignedShort))  c_unsignedShort;

static void __set_c_unsignedShort(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_unsignedShort() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_uuid, put=__set_c_uuid))  c_uuid;

static void __set_c_uuid(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_uuid() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_year, put=__set_c_year))  c_year;

static void __set_c_year(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_year() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_yearMonth, put=__set_c_yearMonth))  c_yearMonth;

static void __set_c_yearMonth(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_yearMonth() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_normalizedStringV1Compat, put=__set_c_normalizedStringV1Compat))  c_normalizedStringV1Compat;

static void __set_c_normalizedStringV1Compat(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_normalizedStringV1Compat() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_tokenV1Compat, put=__set_c_tokenV1Compat))  c_tokenV1Compat;

static void __set_c_tokenV1Compat(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_tokenV1Compat() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_anyAtomicType, put=__set_c_anyAtomicType))  c_anyAtomicType;

static void __set_c_anyAtomicType(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_anyAtomicType() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_dayTimeDuration, put=__set_c_dayTimeDuration))  c_dayTimeDuration;

static void __set_c_dayTimeDuration(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_dayTimeDuration() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_untypedAtomicType, put=__set_c_untypedAtomicType))  c_untypedAtomicType;

static void __set_c_untypedAtomicType(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_untypedAtomicType() ;

static System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_c_yearMonthDuration, put=__set_c_yearMonthDuration))  c_yearMonthDuration;

static void __set_c_yearMonthDuration(System::Xml::Schema::DatatypeImplementation value) ;

static System::Xml::Schema::DatatypeImplementation __get_c_yearMonthDuration() ;

static ::ArrayW<System::Xml::Schema::DatatypeImplementation> __declspec(property(get=__get_c_tokenizedTypes, put=__set_c_tokenizedTypes))  c_tokenizedTypes;

static void __set_c_tokenizedTypes(::ArrayW<System::Xml::Schema::DatatypeImplementation> value) ;

static ::ArrayW<System::Xml::Schema::DatatypeImplementation> __get_c_tokenizedTypes() ;

static ::ArrayW<System::Xml::Schema::DatatypeImplementation> __declspec(property(get=__get_c_tokenizedTypesXsd, put=__set_c_tokenizedTypesXsd))  c_tokenizedTypesXsd;

static void __set_c_tokenizedTypesXsd(::ArrayW<System::Xml::Schema::DatatypeImplementation> value) ;

static ::ArrayW<System::Xml::Schema::DatatypeImplementation> __get_c_tokenizedTypesXsd() ;

static ::ArrayW<System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap> __declspec(property(get=__get_c_XdrTypes, put=__set_c_XdrTypes))  c_XdrTypes;

static void __set_c_XdrTypes(::ArrayW<System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap> value) ;

static ::ArrayW<System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap> __get_c_XdrTypes() ;

static ::ArrayW<System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap> __declspec(property(get=__get_c_XsdTypes, put=__set_c_XsdTypes))  c_XsdTypes;

static void __set_c_XsdTypes(::ArrayW<System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap> value) ;

static ::ArrayW<System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap> __get_c_XsdTypes() ;


// Properties

static System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=get_AnySimpleType))  AnySimpleType;

static System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=get_UntypedAtomicType))  UntypedAtomicType;

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlValueConverter __declspec(property(get=get_ValueConverter))  ValueConverter;

 System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 System::Xml::Schema::XmlSchemaDatatypeVariety __declspec(property(get=get_Variety))  Variety;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 System::Xml::Schema::RestrictionFacets __declspec(property(get=get_Restriction))  Restriction;

 System::Type __declspec(property(get=get_ListValueType))  ListValueType;

 System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;


// Methods

/// @brief Method get_AnySimpleType addr 0x2721624 size 0x58 virtual false final false
static System::Xml::Schema::XmlSchemaSimpleType get_AnySimpleType() ;

/// @brief Method get_UntypedAtomicType addr 0x272167c size 0x58 virtual false final false
static System::Xml::Schema::XmlSchemaSimpleType get_UntypedAtomicType() ;

/// @brief Method FromXmlTokenizedType addr 0x27216d4 size 0x7c virtual false final false
static System::Xml::Schema::DatatypeImplementation FromXmlTokenizedType(System::Xml::XmlTokenizedType token) ;

/// @brief Method FromTypeName addr 0x2721750 size 0xc0 virtual false final false
static System::Xml::Schema::DatatypeImplementation FromTypeName(::StringW name) ;

/// @brief Method StartBuiltinType addr 0x2721810 size 0xd4 virtual false final false
static System::Xml::Schema::XmlSchemaSimpleType StartBuiltinType(System::Xml::XmlQualifiedName qname, System::Xml::Schema::XmlSchemaDatatype dataType) ;

/// @brief Method FinishBuiltinType addr 0x27218e4 size 0x1e4 virtual false final false
static void FinishBuiltinType(System::Xml::Schema::XmlSchemaSimpleType derivedType, System::Xml::Schema::XmlSchemaSimpleType baseType) ;

/// @brief Method CreateBuiltinTypes addr 0x2720e58 size 0x7cc virtual false final false
static void CreateBuiltinTypes() ;

/// @brief Method GetSimpleTypeFromTypeCode addr 0x2721ac8 size 0x7c virtual false final false
static System::Xml::Schema::XmlSchemaSimpleType GetSimpleTypeFromTypeCode(System::Xml::Schema::XmlTypeCode typeCode) ;

/// @brief Method DeriveByList addr 0x2720c68 size 0x188 virtual false final false
 System::Xml::Schema::XmlSchemaDatatype DeriveByList(int32_t minSize, System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method IsEqual addr 0x2721bb8 size 0x20 virtual true final false
 bool IsEqual(::bs_hook::Il2CppWrapperType o1, ::bs_hook::Il2CppWrapperType o2) ;

/// @brief Method CreateValueConverter addr 0x2721bd8 size 0x8 virtual true final false
 System::Xml::Schema::XmlValueConverter CreateValueConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method get_FacetsChecker addr 0x2721be0 size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_ValueConverter addr 0x2721c38 size 0x34 virtual true final false
 System::Xml::Schema::XmlValueConverter get_ValueConverter() ;

/// @brief Method get_TokenizedType addr 0x2721c6c size 0x8 virtual true final false
 System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method get_ValueType addr 0x2721c74 size 0x6c virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_Variety addr 0x2721ce0 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety() ;

/// @brief Method get_TypeCode addr 0x2721ce8 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_Restriction addr 0x2721cf0 size 0x8 virtual true final false
 System::Xml::Schema::RestrictionFacets get_Restriction() ;

/// @brief Method get_ListValueType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type get_ListValueType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x2721cf8 size 0x8 virtual true final false
 System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method ParseValue addr 0x2721d00 size 0x1f8 virtual true final false
 ::bs_hook::Il2CppWrapperType ParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr) ;

/// @brief Method GetTypeName addr 0x2721ef8 size 0x68 virtual false final false
 ::StringW GetTypeName() ;

/// @brief Method Compare addr 0x2721f60 size 0x74 virtual false final false
 int32_t Compare(::ArrayW<uint8_t> value1, ::ArrayW<uint8_t> value2) ;

static System::Xml::Schema::DatatypeImplementation New_ctor() ;

/// @brief Method .ctor addr 0x2721fd4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::DatatypeImplementation);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::DatatypeImplementation, "System.Xml.Schema", "DatatypeImplementation");
NEED_NO_BOX(System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__DatatypeImplementation__SchemaDatatypeMap, "System.Xml.Schema", "DatatypeImplementation/SchemaDatatypeMap");
