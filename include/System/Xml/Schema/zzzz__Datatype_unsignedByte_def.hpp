#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_unsignedShort_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
class Type;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_unsignedByte;
}
// Type: System.Xml.Schema::Datatype_unsignedByte
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11616))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11617))
// CS Name: System.Xml.Schema.Datatype_unsignedByte
class CORDL_TYPE Datatype_unsignedByte : public ::System::Xml::Schema::Datatype_unsignedShort {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_unsignedByte() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_unsignedByte", modifiers: " const&", def_value: None }]
constexpr Datatype_unsignedByte(Datatype_unsignedByte const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_unsignedByte", modifiers: "&&", def_value: None }]
constexpr Datatype_unsignedByte(Datatype_unsignedByte&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_unsignedByte(void* ptr) noexcept : ::System::Xml::Schema::Datatype_unsignedShort(ptr) {
}


  constexpr Datatype_unsignedByte& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_unsignedByte& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_unsignedByte& operator=(Datatype_unsignedByte&& o) noexcept = default;
  constexpr Datatype_unsignedByte& operator=(Datatype_unsignedByte const& o) noexcept = default;
                


// Fields

static ::System::Type __declspec(property(get=__get_atomicValueType, put=__set_atomicValueType))  atomicValueType;

static void __set_atomicValueType(::System::Type value) ;

static ::System::Type __get_atomicValueType() ;

static ::System::Type __declspec(property(get=__get_listValueType, put=__set_listValueType))  listValueType;

static void __set_listValueType(::System::Type value) ;

static ::System::Type __get_listValueType() ;

static ::System::Xml::Schema::FacetsChecker __declspec(property(get=__get_numeric10FacetsChecker, put=__set_numeric10FacetsChecker))  numeric10FacetsChecker;

static void __set_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker value) ;

static ::System::Xml::Schema::FacetsChecker __get_numeric10FacetsChecker() ;


// Properties

 ::System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 ::System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 ::System::Type __declspec(property(get=get_ValueType))  ValueType;

 ::System::Type __declspec(property(get=get_ListValueType))  ListValueType;


// Methods

/// @brief Method get_FacetsChecker addr 0x272a9ec size 0x58 virtual true final false
 ::System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x272aa44 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method Compare addr 0x272aa4c size 0x94 virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method get_ValueType addr 0x272aae0 size 0x58 virtual true final false
 ::System::Type get_ValueType() ;

/// @brief Method get_ListValueType addr 0x272ab38 size 0x58 virtual true final false
 ::System::Type get_ListValueType() ;

/// @brief Method TryParseValue addr 0x272ab90 size 0x140 virtual true final false
 ::System::Exception TryParseValue(::StringW s, ::System::Xml::XmlNameTable nameTable, ::System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

// Ctor Parameters []
explicit Datatype_unsignedByte() ;

/// @brief Method .ctor addr 0x272acd0 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_unsignedByte);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_unsignedByte, "System.Xml.Schema", "Datatype_unsignedByte");
