#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_float;
}
// Type: System.Xml.Schema::Datatype_float
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11571))
// CS Name: System.Xml.Schema.Datatype_float
class CORDL_TYPE Datatype_float : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_float() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_float", modifiers: " const&", def_value: None }]
constexpr Datatype_float(Datatype_float const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_float", modifiers: "&&", def_value: None }]
constexpr Datatype_float(Datatype_float&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_float(void* ptr) noexcept : ::System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_float& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_float& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_float& operator=(Datatype_float&& o) noexcept = default;
  constexpr Datatype_float& operator=(Datatype_float const& o) noexcept = default;
                


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

 ::System::Type __declspec(property(get=get_ValueType))  ValueType;

 ::System::Type __declspec(property(get=get_ListValueType))  ListValueType;

 ::System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;


// Methods

/// @brief Method CreateValueConverter addr 0x27245d4 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlValueConverter CreateValueConverter(::System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method get_FacetsChecker addr 0x272463c size 0x58 virtual true final false
 ::System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x2724694 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_ValueType addr 0x272469c size 0x58 virtual true final false
 ::System::Type get_ValueType() ;

/// @brief Method get_ListValueType addr 0x27246f4 size 0x58 virtual true final false
 ::System::Type get_ListValueType() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x272474c size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

/// @brief Method Compare addr 0x2724754 size 0x94 virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method TryParseValue addr 0x27247e8 size 0x140 virtual true final false
 ::System::Exception TryParseValue(::StringW s, ::System::Xml::XmlNameTable nameTable, ::System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_float() ;

/// @brief Method .ctor addr 0x2724928 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_float);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_float, "System.Xml.Schema", "Datatype_float");
