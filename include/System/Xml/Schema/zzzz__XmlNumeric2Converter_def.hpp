#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlNumeric2Converter;
}
// Type: System.Xml.Schema::XmlNumeric2Converter
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11690))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11692))
// CS Name: System.Xml.Schema.XmlNumeric2Converter
class CORDL_TYPE XmlNumeric2Converter : public System::Xml::Schema::XmlBaseConverter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlNumeric2Converter() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric2Converter", modifiers: " const&", def_value: None }]
constexpr XmlNumeric2Converter(XmlNumeric2Converter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlNumeric2Converter", modifiers: "&&", def_value: None }]
constexpr XmlNumeric2Converter(XmlNumeric2Converter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlNumeric2Converter(void* ptr) noexcept : System::Xml::Schema::XmlBaseConverter(ptr) {
}


  constexpr XmlNumeric2Converter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlNumeric2Converter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlNumeric2Converter& operator=(XmlNumeric2Converter&& o) noexcept = default;
  constexpr XmlNumeric2Converter& operator=(XmlNumeric2Converter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "schemaType", ty: "System::Xml::Schema::XmlSchemaType", modifiers: "", def_value: None }]
explicit XmlNumeric2Converter(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method .ctor addr 0x273f5e0 size 0x64 virtual false final false
 void _ctor(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method Create addr 0x27245dc size 0x60 virtual false final false
static System::Xml::Schema::XmlValueConverter Create(System::Xml::Schema::XmlSchemaType schemaType) ;

/// @brief Method ToDouble addr 0x273f644 size 0xd0 virtual true final false
 double_t ToDouble(::StringW value) ;

/// @brief Method ToDouble addr 0x273f714 size 0x340 virtual true final false
 double_t ToDouble(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x273fa54 size 0x8 virtual true final false
 float_t ToSingle(double_t value) ;

/// @brief Method ToSingle addr 0x273fa5c size 0xd0 virtual true final false
 float_t ToSingle(::StringW value) ;

/// @brief Method ToSingle addr 0x273fb2c size 0x348 virtual true final false
 float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToString addr 0x273fe74 size 0xb4 virtual true final false
 ::StringW ToString(double_t value) ;

/// @brief Method ToString addr 0x273ff28 size 0x88 virtual true final false
 ::StringW ToString(float_t value) ;

/// @brief Method ToString addr 0x273ffb0 size 0x358 virtual true final false
 ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x2740308 size 0x36c virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(double_t value, System::Type destinationType) ;

/// @brief Method ChangeType addr 0x2740674 size 0x3ac virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::StringW value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

/// @brief Method ChangeType addr 0x2740a20 size 0x6c8 virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type destinationType, System::Xml::IXmlNamespaceResolver nsResolver) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::XmlNumeric2Converter);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XmlNumeric2Converter, "System.Xml.Schema", "XmlNumeric2Converter");
