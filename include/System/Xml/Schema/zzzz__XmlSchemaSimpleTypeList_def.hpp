#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleTypeContent_def.hpp"
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSimpleTypeList;
}
// Type: System.Xml.Schema::XmlSchemaSimpleTypeList
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11680))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11681))
// CS Name: System.Xml.Schema.XmlSchemaSimpleTypeList
class CORDL_TYPE XmlSchemaSimpleTypeList : public System::Xml::Schema::XmlSchemaSimpleTypeContent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlSchemaSimpleTypeList() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeList", modifiers: " const&", def_value: None }]
constexpr XmlSchemaSimpleTypeList(XmlSchemaSimpleTypeList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSimpleTypeList", modifiers: "&&", def_value: None }]
constexpr XmlSchemaSimpleTypeList(XmlSchemaSimpleTypeList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaSimpleTypeList(void* ptr) noexcept : System::Xml::Schema::XmlSchemaSimpleTypeContent(ptr) {
}


  constexpr XmlSchemaSimpleTypeList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaSimpleTypeList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaSimpleTypeList& operator=(XmlSchemaSimpleTypeList&& o) noexcept = default;
  constexpr XmlSchemaSimpleTypeList& operator=(XmlSchemaSimpleTypeList const& o) noexcept = default;
                


// Fields

 System::Xml::XmlQualifiedName __declspec(property(get=__get_itemTypeName, put=__set_itemTypeName))  itemTypeName;

constexpr void __set_itemTypeName(System::Xml::XmlQualifiedName value) ;

constexpr System::Xml::XmlQualifiedName __get_itemTypeName() const;

 System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_itemType, put=__set_itemType))  itemType;

constexpr void __set_itemType(System::Xml::Schema::XmlSchemaSimpleType value) ;

constexpr System::Xml::Schema::XmlSchemaSimpleType __get_itemType() const;

 System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=__get_baseItemType, put=__set_baseItemType))  baseItemType;

constexpr void __set_baseItemType(System::Xml::Schema::XmlSchemaSimpleType value) ;

constexpr System::Xml::Schema::XmlSchemaSimpleType __get_baseItemType() const;


// Properties

 System::Xml::Schema::XmlSchemaSimpleType __declspec(property(put=set_ItemType))  ItemType;

 System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=get_BaseItemType, put=set_BaseItemType))  BaseItemType;


// Methods

/// @brief Method set_ItemType addr 0x2735790 size 0x8 virtual false final false
 void set_ItemType(System::Xml::Schema::XmlSchemaSimpleType value) ;

/// @brief Method get_BaseItemType addr 0x2735798 size 0x8 virtual false final false
 System::Xml::Schema::XmlSchemaSimpleType get_BaseItemType() ;

/// @brief Method set_BaseItemType addr 0x27357a0 size 0x8 virtual false final false
 void set_BaseItemType(System::Xml::Schema::XmlSchemaSimpleType value) ;

static System::Xml::Schema::XmlSchemaSimpleTypeList New_ctor() ;

/// @brief Method .ctor addr 0x27357a8 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaSimpleTypeList);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaSimpleTypeList, "System.Xml.Schema", "XmlSchemaSimpleTypeList");
