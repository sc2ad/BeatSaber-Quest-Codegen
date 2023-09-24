#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Schema {
struct XmlSchemaContentProcessing;
}
namespace System::Xml::Schema {
class NamespaceList;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAny;
}
// Type: System.Xml.Schema::XmlSchemaAny
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11676))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11657))
// CS Name: System.Xml.Schema.XmlSchemaAny
class CORDL_TYPE XmlSchemaAny : public System::Xml::Schema::XmlSchemaParticle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~XmlSchemaAny() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAny", modifiers: " const&", def_value: None }]
constexpr XmlSchemaAny(XmlSchemaAny const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAny", modifiers: "&&", def_value: None }]
constexpr XmlSchemaAny(XmlSchemaAny&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaAny(void* ptr) noexcept : System::Xml::Schema::XmlSchemaParticle(ptr) {
}


  constexpr XmlSchemaAny& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaAny& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaAny& operator=(XmlSchemaAny&& o) noexcept = default;
  constexpr XmlSchemaAny& operator=(XmlSchemaAny const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_ns, put=__set_ns))  ns;

constexpr void __set_ns(::StringW value) ;

constexpr ::StringW __get_ns() const;

 System::Xml::Schema::XmlSchemaContentProcessing __declspec(property(get=__get_processContents, put=__set_processContents))  processContents;

constexpr void __set_processContents(System::Xml::Schema::XmlSchemaContentProcessing value) ;

constexpr System::Xml::Schema::XmlSchemaContentProcessing __get_processContents() const;

 System::Xml::Schema::NamespaceList __declspec(property(get=__get_namespaceList, put=__set_namespaceList))  namespaceList;

constexpr void __set_namespaceList(System::Xml::Schema::NamespaceList value) ;

constexpr System::Xml::Schema::NamespaceList __get_namespaceList() const;


// Properties

 System::Xml::Schema::XmlSchemaContentProcessing __declspec(property(put=set_ProcessContents))  ProcessContents;

 System::Xml::Schema::NamespaceList __declspec(property(get=get_NamespaceList))  NamespaceList;


// Methods

/// @brief Method set_ProcessContents addr 0x2733768 size 0x8 virtual false final false
 void set_ProcessContents(System::Xml::Schema::XmlSchemaContentProcessing value) ;

/// @brief Method get_NamespaceList addr 0x2733770 size 0x8 virtual false final false
 System::Xml::Schema::NamespaceList get_NamespaceList() ;

/// @brief Method BuildNamespaceList addr 0x2733778 size 0x90 virtual false final false
 void BuildNamespaceList(::StringW targetNamespace) ;

static System::Xml::Schema::XmlSchemaAny New_ctor() ;

/// @brief Method .ctor addr 0x2733808 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaAny);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaAny, "System.Xml.Schema", "XmlSchemaAny");
