#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__BaseValidator_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml::Schema {
class SchemaAttDef;
}
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml::Schema {
class System__Xml__Schema__DtdValidator__NamespaceManager;
}
// Forward declare root types
namespace System::Xml::Schema {
class DtdValidator;
}
namespace System::Xml::Schema {
class System__Xml__Schema__DtdValidator__NamespaceManager;
}
// Type: ::NamespaceManager
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11512))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11626))
// CS Name: System.Xml.Schema.DtdValidator::NamespaceManager
class CORDL_TYPE System__Xml__Schema__DtdValidator__NamespaceManager : public System::Xml::XmlNamespaceManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~System__Xml__Schema__DtdValidator__NamespaceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Schema__DtdValidator__NamespaceManager", modifiers: " const&", def_value: None }]
constexpr System__Xml__Schema__DtdValidator__NamespaceManager(System__Xml__Schema__DtdValidator__NamespaceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__Schema__DtdValidator__NamespaceManager", modifiers: "&&", def_value: None }]
constexpr System__Xml__Schema__DtdValidator__NamespaceManager(System__Xml__Schema__DtdValidator__NamespaceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__DtdValidator__NamespaceManager(void* ptr) noexcept : System::Xml::XmlNamespaceManager(ptr) {
}


  constexpr System__Xml__Schema__DtdValidator__NamespaceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__Schema__DtdValidator__NamespaceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__Schema__DtdValidator__NamespaceManager& operator=(System__Xml__Schema__DtdValidator__NamespaceManager&& o) noexcept = default;
  constexpr System__Xml__Schema__DtdValidator__NamespaceManager& operator=(System__Xml__Schema__DtdValidator__NamespaceManager const& o) noexcept = default;
                


// Methods

/// @brief Method LookupNamespace addr 0x272cfc0 size 0x8 virtual true final false
 ::StringW LookupNamespace(::StringW prefix) ;

static System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager New_ctor() ;

/// @brief Method .ctor addr 0x272cfb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::DtdValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11535))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11627))
// CS Name: System.Xml.Schema.DtdValidator
class CORDL_TYPE DtdValidator : public System::Xml::Schema::BaseValidator {
public:
// Declarations
using NamespaceManager = System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DtdValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DtdValidator", modifiers: " const&", def_value: None }]
constexpr DtdValidator(DtdValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DtdValidator", modifiers: "&&", def_value: None }]
constexpr DtdValidator(DtdValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DtdValidator(void* ptr) noexcept : System::Xml::Schema::BaseValidator(ptr) {
}


  constexpr DtdValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DtdValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DtdValidator& operator=(DtdValidator&& o) noexcept = default;
  constexpr DtdValidator& operator=(DtdValidator const& o) noexcept = default;
                


// Fields

static System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager __declspec(property(get=__get_namespaceManager, put=__set_namespaceManager))  namespaceManager;

static void __set_namespaceManager(System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager value) ;

static System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager __get_namespaceManager() ;


// Methods

/// @brief Method SetDefaultTypedValue addr 0x272cb10 size 0x3dc virtual false final false
static void SetDefaultTypedValue(System::Xml::Schema::SchemaAttDef attdef, System::Xml::IDtdParserAdapter readerAdapter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::DtdValidator);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::DtdValidator, "System.Xml.Schema", "DtdValidator");
NEED_NO_BOX(System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__DtdValidator__NamespaceManager, "System.Xml.Schema", "DtdValidator/NamespaceManager");
