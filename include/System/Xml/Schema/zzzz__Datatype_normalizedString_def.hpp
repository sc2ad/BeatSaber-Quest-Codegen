#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_string_def.hpp"
namespace {
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_normalizedString;
}
// Type: System.Xml.Schema::Datatype_normalizedString
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11569))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11594))
// CS Name: System.Xml.Schema.Datatype_normalizedString
class CORDL_TYPE Datatype_normalizedString : public ::System::Xml::Schema::Datatype_string {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_normalizedString() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedString", modifiers: " const&", def_value: None }]
constexpr Datatype_normalizedString(Datatype_normalizedString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedString", modifiers: "&&", def_value: None }]
constexpr Datatype_normalizedString(Datatype_normalizedString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_normalizedString(void* ptr) noexcept : ::System::Xml::Schema::Datatype_string(ptr) {
}


  constexpr Datatype_normalizedString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_normalizedString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_normalizedString& operator=(Datatype_normalizedString&& o) noexcept = default;
  constexpr Datatype_normalizedString& operator=(Datatype_normalizedString const& o) noexcept = default;
                


// Properties

 ::System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 ::System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;


// Methods

/// @brief Method get_TypeCode addr 0x2727ce4 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x2727cec size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

// Ctor Parameters []
explicit Datatype_normalizedString() ;

/// @brief Method .ctor addr 0x2727cf4 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_normalizedString);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_normalizedString, "System.Xml.Schema", "Datatype_normalizedString");
