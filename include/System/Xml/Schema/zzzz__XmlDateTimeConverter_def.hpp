#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
struct DateTimeOffset;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System {
struct DateTime;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlDateTimeConverter;
}
// Type: System.Xml.Schema::XmlDateTimeConverter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11690))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11693))
// CS Name: System.Xml.Schema.XmlDateTimeConverter
class CORDL_TYPE XmlDateTimeConverter : public System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlDateTimeConverter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDateTimeConverter", modifiers: " const&", def_value: None }]
constexpr XmlDateTimeConverter(XmlDateTimeConverter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDateTimeConverter", modifiers: "&&", def_value: None }]
constexpr XmlDateTimeConverter(XmlDateTimeConverter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlDateTimeConverter(void* ptr) noexcept : System::Xml::Schema::XmlBaseConverter(ptr) {
}


  constexpr XmlDateTimeConverter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlDateTimeConverter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlDateTimeConverter& operator=(XmlDateTimeConverter&& o) noexcept = default;
  constexpr XmlDateTimeConverter& operator=(XmlDateTimeConverter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "schemaType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }]
explicit XmlDateTimeConverter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method .ctor addr 0x27410e8 size 0x64 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method Create addr 0x2725da0 size 0x60 virtual false final false
static System::Xml::Schema::XmlValueConverter Create(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method ToDateTime addr 0x274114c size 0x74 virtual true final false
 System::DateTime ToDateTime(System::DateTimeOffset value) ;

/// @brief Method ToDateTime addr 0x27411c0 size 0x1b0 virtual true final false
 System::DateTime ToDateTime(::StringW value) ;

/// @brief Method ToDateTime addr 0x2741370 size 0x35c virtual true final false
 System::DateTime ToDateTime(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDateTimeOffset addr 0x27416cc size 0x28 virtual true final false
 System::DateTimeOffset ToDateTimeOffset(System::DateTime value) ;

/// @brief Method ToDateTimeOffset addr 0x27416f4 size 0x1b0 virtual true final false
 System::DateTimeOffset ToDateTimeOffset(::StringW value) ;

/// @brief Method ToDateTimeOffset addr 0x27418a4 size 0x360 virtual true final false
 System::DateTimeOffset ToDateTimeOffset(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x2741c04 size 0x160 virtual true final false
 ::StringW ToString(System::DateTime value) ;

/// @brief Method ToString addr 0x2741d64 size 0x1a8 virtual true final false
 ::StringW ToString(System::DateTimeOffset value) ;

/// @brief Method ToString addr 0x2741f0c size 0x358 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x2742264 size 0x394 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(System::DateTime value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x27425f8 size 0x3ac virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::StringW value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x27429a4 size 0x704 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlDateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlDateTimeConverter, "System.Xml.Schema", "XmlDateTimeConverter");
