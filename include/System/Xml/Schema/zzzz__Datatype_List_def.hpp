#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class DatatypeImplementation;
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
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_List;
}
// Type: System.Xml.Schema::Datatype_List
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11564))
// CS Name: System.Xml.Schema.Datatype_List
class CORDL_TYPE Datatype_List : public System::Xml::Schema::Datatype_anySimpleType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Datatype_List() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_List", modifiers: " const&", def_value: None }]
constexpr Datatype_List(Datatype_List const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_List", modifiers: "&&", def_value: None }]
constexpr Datatype_List(Datatype_List&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_List(void* ptr) noexcept : System::Xml::Schema::Datatype_anySimpleType(ptr) {
}


  constexpr Datatype_List& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_List& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_List& operator=(Datatype_List&& o) noexcept = default;
  constexpr Datatype_List& operator=(Datatype_List const& o) noexcept = default;
                


// Fields

 System::Xml::Schema::DatatypeImplementation __declspec(property(get=__get_itemType, put=__set_itemType))  itemType;

constexpr void __set_itemType(System::Xml::Schema::DatatypeImplementation value) ;

constexpr System::Xml::Schema::DatatypeImplementation __get_itemType() const;

 int32_t __declspec(property(get=__get_minListSize, put=__set_minListSize))  minListSize;

constexpr void __set_minListSize(int32_t value) ;

constexpr int32_t __get_minListSize() const;


// Properties

 System::Type __declspec(property(get=get_ValueType))  ValueType;

 System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;

 System::Type __declspec(property(get=get_ListValueType))  ListValueType;

 System::Xml::Schema::FacetsChecker __declspec(property(get=get_FacetsChecker))  FacetsChecker;

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method CreateValueConverter addr 0x2722074 size 0x2a4 virtual true final false
 System::Xml::Schema::XmlValueConverter CreateValueConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

// Ctor Parameters [CppParam { name: "type", ty: "System::Xml::Schema::DatatypeImplementation", modifiers: "", def_value: None }, CppParam { name: "minListSize", ty: "int32_t", modifiers: "", def_value: None }]
explicit Datatype_List(System::Xml::Schema::DatatypeImplementation type, int32_t minListSize) ;

/// @brief Method .ctor addr 0x2721b44 size 0x74 virtual false final false
 void _ctor(System::Xml::Schema::DatatypeImplementation type, int32_t minListSize) ;

/// @brief Method Compare addr 0x2722318 size 0x29c virtual true final false
 int32_t Compare(::bs_hook::Il2CppWrapperType value1, ::bs_hook::Il2CppWrapperType value2) ;

/// @brief Method get_ValueType addr 0x27225b4 size 0x10 virtual true final false
 System::Type get_ValueType() ;

/// @brief Method get_TokenizedType addr 0x27225c4 size 0x20 virtual true final false
 System::Xml::XmlTokenizedType get_TokenizedType() ;

/// @brief Method get_ListValueType addr 0x27225e4 size 0x24 virtual true final false
 System::Type get_ListValueType() ;

/// @brief Method get_FacetsChecker addr 0x2722608 size 0x58 virtual true final false
 System::Xml::Schema::FacetsChecker get_FacetsChecker() ;

/// @brief Method get_TypeCode addr 0x2722660 size 0x20 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method TryParseValue addr 0x2722680 size 0x1418 virtual true final false
 System::Exception TryParseValue(::StringW s, System::Xml::XmlNameTable nameTable, System::Xml::IXmlNamespaceResolver nsmgr, ByRef<::bs_hook::Il2CppWrapperType> typedValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_List);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_List, "System.Xml.Schema", "Datatype_List");
