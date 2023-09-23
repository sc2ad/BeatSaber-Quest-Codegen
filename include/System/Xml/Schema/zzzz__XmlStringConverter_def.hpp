#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlStringConverter;
}
// Type: System.Xml.Schema::XmlStringConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11690))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11696))
// CS Name: System.Xml.Schema.XmlStringConverter
class CORDL_TYPE XmlStringConverter : public System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlStringConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlStringConverter", modifiers: " const&", def_value: None }]
constexpr XmlStringConverter(XmlStringConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlStringConverter", modifiers: "&&", def_value: None }]
constexpr XmlStringConverter(XmlStringConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlStringConverter(void* ptr) noexcept : System::Xml::Schema::XmlBaseConverter(ptr) {
}


  constexpr XmlStringConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlStringConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlStringConverter& operator=(XmlStringConverter&& o) noexcept = default;
  constexpr XmlStringConverter& operator=(XmlStringConverter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "schemaType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }]
explicit XmlStringConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method .ctor addr 0x2746e8c size 0x68 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method Create addr 0x2746ef4 size 0x60 virtual false final false
static System::Xml::Schema::XmlValueConverter Create(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method ToString addr 0x2746f54 size 0x210 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x2747164 size 0x29c virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::StringW value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x2747400 size 0x43c virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlStringConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlStringConverter, "System.Xml.Schema", "XmlStringConverter");
