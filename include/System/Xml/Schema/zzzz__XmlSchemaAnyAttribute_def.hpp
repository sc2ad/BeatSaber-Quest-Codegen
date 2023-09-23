#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Xml::Schema {
struct XmlSchemaContentProcessing;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
// Type: System.Xml.Schema::XmlSchemaAnyAttribute
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11658))
// CS Name: System.Xml.Schema.XmlSchemaAnyAttribute
class CORDL_TYPE XmlSchemaAnyAttribute : public System::Xml::Schema::XmlSchemaAnnotated {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlSchemaAnyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnyAttribute", modifiers: " const&", def_value: None }]
constexpr XmlSchemaAnyAttribute(XmlSchemaAnyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnyAttribute", modifiers: "&&", def_value: None }]
constexpr XmlSchemaAnyAttribute(XmlSchemaAnyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaAnyAttribute(void* ptr) noexcept : System::Xml::Schema::XmlSchemaAnnotated(ptr) {
}


  constexpr XmlSchemaAnyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaAnyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaAnyAttribute& operator=(XmlSchemaAnyAttribute&& o) noexcept = default;
  constexpr XmlSchemaAnyAttribute& operator=(XmlSchemaAnyAttribute const& o) noexcept = default;
                


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


// Methods

/// @brief Method set_ProcessContents addr 0x27338d0 size 0x8 virtual false final false
 void set_ProcessContents(System::Xml::Schema::XmlSchemaContentProcessing value) ;

/// @brief Method BuildNamespaceList addr 0x27338d8 size 0x90 virtual false final false
 void BuildNamespaceList(::StringW targetNamespace) ;

// Ctor Parameters []
explicit XmlSchemaAnyAttribute() ;

/// @brief Method .ctor addr 0x2733968 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaAnyAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaAnyAttribute, "System.Xml.Schema", "XmlSchemaAnyAttribute");
