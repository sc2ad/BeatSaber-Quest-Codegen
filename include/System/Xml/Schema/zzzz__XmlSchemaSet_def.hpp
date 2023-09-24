#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Xml {
class XmlNameTable;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class SchemaInfo;
}
namespace System::Xml::Schema {
class XmlSchemaCompilationSettings;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml::Schema {
class ValidationEventArgs;
}
namespace System::Xml::Schema {
class ValidationEventHandler;
}
namespace System::Collections {
class SortedList;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaSet;
}
// Type: System.Xml.Schema::XmlSchemaSet
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11678))
// CS Name: System.Xml.Schema.XmlSchemaSet
class CORDL_TYPE XmlSchemaSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~XmlSchemaSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSet", modifiers: " const&", def_value: None }]
constexpr XmlSchemaSet(XmlSchemaSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlSchemaSet", modifiers: "&&", def_value: None }]
constexpr XmlSchemaSet(XmlSchemaSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlSchemaSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlSchemaSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlSchemaSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlSchemaSet& operator=(XmlSchemaSet&& o) noexcept = default;
  constexpr XmlSchemaSet& operator=(XmlSchemaSet const& o) noexcept = default;
                


// Fields

 System::Xml::XmlNameTable __declspec(property(get=__get_nameTable, put=__set_nameTable))  nameTable;

constexpr void __set_nameTable(System::Xml::XmlNameTable value) ;

constexpr System::Xml::XmlNameTable __get_nameTable() const;

 System::Collections::SortedList __declspec(property(get=__get_schemas, put=__set_schemas))  schemas;

constexpr void __set_schemas(System::Collections::SortedList value) ;

constexpr System::Collections::SortedList __get_schemas() const;

 System::Xml::Schema::ValidationEventHandler __declspec(property(get=__get_internalEventHandler, put=__set_internalEventHandler))  internalEventHandler;

constexpr void __set_internalEventHandler(System::Xml::Schema::ValidationEventHandler value) ;

constexpr System::Xml::Schema::ValidationEventHandler __get_internalEventHandler() const;

 System::Xml::Schema::ValidationEventHandler __declspec(property(get=__get_eventHandler, put=__set_eventHandler))  eventHandler;

constexpr void __set_eventHandler(System::Xml::Schema::ValidationEventHandler value) ;

constexpr System::Xml::Schema::ValidationEventHandler __get_eventHandler() const;

 System::Collections::Hashtable __declspec(property(get=__get_schemaLocations, put=__set_schemaLocations))  schemaLocations;

constexpr void __set_schemaLocations(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_schemaLocations() const;

 System::Collections::Hashtable __declspec(property(get=__get_chameleonSchemas, put=__set_chameleonSchemas))  chameleonSchemas;

constexpr void __set_chameleonSchemas(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_chameleonSchemas() const;

 System::Collections::Hashtable __declspec(property(get=__get_targetNamespaces, put=__set_targetNamespaces))  targetNamespaces;

constexpr void __set_targetNamespaces(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_targetNamespaces() const;

 bool __declspec(property(get=__get_compileAll, put=__set_compileAll))  compileAll;

constexpr void __set_compileAll(bool value) ;

constexpr bool __get_compileAll() const;

 System::Xml::Schema::SchemaInfo __declspec(property(get=__get_cachedCompiledInfo, put=__set_cachedCompiledInfo))  cachedCompiledInfo;

constexpr void __set_cachedCompiledInfo(System::Xml::Schema::SchemaInfo value) ;

constexpr System::Xml::Schema::SchemaInfo __get_cachedCompiledInfo() const;

 System::Xml::XmlReaderSettings __declspec(property(get=__get_readerSettings, put=__set_readerSettings))  readerSettings;

constexpr void __set_readerSettings(System::Xml::XmlReaderSettings value) ;

constexpr System::Xml::XmlReaderSettings __get_readerSettings() const;

 System::Xml::Schema::XmlSchemaCompilationSettings __declspec(property(get=__get_compilationSettings, put=__set_compilationSettings))  compilationSettings;

constexpr void __set_compilationSettings(System::Xml::Schema::XmlSchemaCompilationSettings value) ;

constexpr System::Xml::Schema::XmlSchemaCompilationSettings __get_compilationSettings() const;


// Methods

static System::Xml::Schema::XmlSchemaSet New_ctor() ;

/// @brief Method .ctor addr 0x2735444 size 0x64 virtual false final false
 void _ctor() ;

static System::Xml::Schema::XmlSchemaSet New_ctor(System::Xml::XmlNameTable nameTable) ;

/// @brief Method .ctor addr 0x27354a8 size 0x288 virtual false final false
 void _ctor(System::Xml::XmlNameTable nameTable) ;

/// @brief Method InternalValidationCallback addr 0x2735730 size 0x44 virtual false final false
 void InternalValidationCallback(::bs_hook::Il2CppWrapperType sender, System::Xml::Schema::ValidationEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlSchemaSet);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlSchemaSet, "System.Xml.Schema", "XmlSchemaSet");
