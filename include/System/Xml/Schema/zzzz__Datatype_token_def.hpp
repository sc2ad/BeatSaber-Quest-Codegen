#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_normalizedString_def.hpp"
namespace {
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_token;
}
// Type: System.Xml.Schema::Datatype_token
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11594))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11596))
// CS Name: System.Xml.Schema.Datatype_token
class CORDL_TYPE Datatype_token : public ::System::Xml::Schema::Datatype_normalizedString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_token() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_token", modifiers: " const&", def_value: None }]
constexpr Datatype_token(Datatype_token const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_token", modifiers: "&&", def_value: None }]
constexpr Datatype_token(Datatype_token&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_token(void* ptr) noexcept : ::System::Xml::Schema::Datatype_normalizedString(ptr) {
}


  constexpr Datatype_token& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_token& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_token& operator=(Datatype_token&& o) noexcept = default;
  constexpr Datatype_token& operator=(Datatype_token const& o) noexcept = default;
                


// Properties

 ::System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 ::System::Xml::Schema::XmlSchemaWhiteSpace __declspec(property(get=get_BuiltInWhitespaceFacet))  BuiltInWhitespaceFacet;


// Methods

/// @brief Method get_TypeCode addr 0x2727d04 size 0x8 virtual true final false
 ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_BuiltInWhitespaceFacet addr 0x2727d0c size 0x8 virtual true final false
 ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet() ;

// Ctor Parameters []
explicit Datatype_token() ;

/// @brief Method .ctor addr 0x2727d14 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_token);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_token, "System.Xml.Schema", "Datatype_token");
