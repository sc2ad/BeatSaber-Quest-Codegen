#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
// Forward declare root types
namespace System::Xml {
class XmlName;
}
// Type: System.Xml::XmlName
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11457))
// CS Name: System.Xml.XmlName
class CORDL_TYPE XmlName : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Xml::Schema::IXmlSchemaInfo
constexpr operator  ::System::Xml::Schema::IXmlSchemaInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~XmlName() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlName", modifiers: " const&", def_value: None }]
constexpr XmlName(XmlName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlName", modifiers: "&&", def_value: None }]
constexpr XmlName(XmlName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlName(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlName& operator=(XmlName&& o) noexcept = default;
  constexpr XmlName& operator=(XmlName const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_prefix, put=__set_prefix))  prefix;

constexpr void __set_prefix(::StringW value) ;

constexpr ::StringW __get_prefix() const;

 ::StringW __declspec(property(get=__get_localName, put=__set_localName))  localName;

constexpr void __set_localName(::StringW value) ;

constexpr ::StringW __get_localName() const;

 ::StringW __declspec(property(get=__get_ns, put=__set_ns))  ns;

constexpr void __set_ns(::StringW value) ;

constexpr ::StringW __get_ns() const;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 int32_t __declspec(property(get=__get_hashCode, put=__set_hashCode))  hashCode;

constexpr void __set_hashCode(int32_t value) ;

constexpr int32_t __get_hashCode() const;

 ::System::Xml::XmlDocument __declspec(property(get=__get_ownerDoc, put=__set_ownerDoc))  ownerDoc;

constexpr void __set_ownerDoc(::System::Xml::XmlDocument value) ;

constexpr ::System::Xml::XmlDocument __get_ownerDoc() const;

 ::System::Xml::XmlName __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(::System::Xml::XmlName value) ;

constexpr ::System::Xml::XmlName __get_next() const;


// Properties

 ::StringW __declspec(property(get=get_LocalName))  LocalName;

 ::StringW __declspec(property(get=get_NamespaceURI))  NamespaceURI;

 ::StringW __declspec(property(get=get_Prefix))  Prefix;

 int32_t __declspec(property(get=get_HashCode))  HashCode;

 ::System::Xml::XmlDocument __declspec(property(get=get_OwnerDocument))  OwnerDocument;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::System::Xml::Schema::XmlSchemaValidity __declspec(property(get=get_Validity))  Validity;

 bool __declspec(property(get=get_IsDefault))  IsDefault;

 bool __declspec(property(get=get_IsNil))  IsNil;

 ::System::Xml::Schema::XmlSchemaSimpleType __declspec(property(get=get_MemberType))  MemberType;

 ::System::Xml::Schema::XmlSchemaType __declspec(property(get=get_SchemaType))  SchemaType;

 ::System::Xml::Schema::XmlSchemaElement __declspec(property(get=get_SchemaElement))  SchemaElement;

 ::System::Xml::Schema::XmlSchemaAttribute __declspec(property(get=get_SchemaAttribute))  SchemaAttribute;


// Methods

/// @brief Method Create addr 0x26fa81c size 0xf4 virtual false final false
static ::System::Xml::XmlName Create(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument ownerDoc, ::System::Xml::XmlName next, ::System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

// Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "localName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ns", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ownerDoc", ty: "::System::Xml::XmlDocument", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::System::Xml::XmlName", modifiers: "", def_value: None }]
explicit XmlName(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument ownerDoc, ::System::Xml::XmlName next) ;

/// @brief Method .ctor addr 0x26fa910 size 0x58 virtual false final false
 void _ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument ownerDoc, ::System::Xml::XmlName next) ;

/// @brief Method get_LocalName addr 0x26fad34 size 0x8 virtual false final false
 ::StringW get_LocalName() ;

/// @brief Method get_NamespaceURI addr 0x26fad3c size 0x8 virtual false final false
 ::StringW get_NamespaceURI() ;

/// @brief Method get_Prefix addr 0x26fad44 size 0x8 virtual false final false
 ::StringW get_Prefix() ;

/// @brief Method get_HashCode addr 0x26fad4c size 0x8 virtual false final false
 int32_t get_HashCode() ;

/// @brief Method get_OwnerDocument addr 0x26fad54 size 0x8 virtual false final false
 ::System::Xml::XmlDocument get_OwnerDocument() ;

/// @brief Method get_Name addr 0x26f5014 size 0x1ac virtual false final false
 ::StringW get_Name() ;

/// @brief Method get_Validity addr 0x26fad5c size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaValidity get_Validity() ;

/// @brief Method get_IsDefault addr 0x26fad64 size 0x8 virtual true final false
 bool get_IsDefault() ;

/// @brief Method get_IsNil addr 0x26fad6c size 0x8 virtual true final false
 bool get_IsNil() ;

/// @brief Method get_MemberType addr 0x26fad74 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaSimpleType get_MemberType() ;

/// @brief Method get_SchemaType addr 0x26fad7c size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaType get_SchemaType() ;

/// @brief Method get_SchemaElement addr 0x26fad84 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaElement get_SchemaElement() ;

/// @brief Method get_SchemaAttribute addr 0x26fad8c size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaAttribute get_SchemaAttribute() ;

/// @brief Method Equals addr 0x26fad94 size 0xc virtual true final false
 bool Equals(::System::Xml::Schema::IXmlSchemaInfo schemaInfo) ;

/// @brief Method GetHashCode addr 0x26fada0 size 0x64 virtual false final false
static int32_t GetHashCode(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::XmlName);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlName, "System.Xml", "XmlName");
