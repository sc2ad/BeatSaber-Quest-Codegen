#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_string_def.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_normalizedStringV1Compat;
}
// Type: System.Xml.Schema::Datatype_normalizedStringV1Compat
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11569))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11595))
// CS Name: System.Xml.Schema.Datatype_normalizedStringV1Compat
class CORDL_TYPE Datatype_normalizedStringV1Compat : public System::Xml::Schema::Datatype_string {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_normalizedStringV1Compat() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedStringV1Compat", modifiers: " const&", def_value: None }]
constexpr Datatype_normalizedStringV1Compat(Datatype_normalizedStringV1Compat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_normalizedStringV1Compat", modifiers: "&&", def_value: None }]
constexpr Datatype_normalizedStringV1Compat(Datatype_normalizedStringV1Compat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_normalizedStringV1Compat(void* ptr) noexcept : System::Xml::Schema::Datatype_string(ptr) {
}


  constexpr Datatype_normalizedStringV1Compat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_normalizedStringV1Compat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_normalizedStringV1Compat& operator=(Datatype_normalizedStringV1Compat&& o) noexcept = default;
  constexpr Datatype_normalizedStringV1Compat& operator=(Datatype_normalizedStringV1Compat const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_TypeCode addr 0x2727cf8 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

// Ctor Parameters []
explicit Datatype_normalizedStringV1Compat() ;

/// @brief Method .ctor addr 0x2727d00 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_normalizedStringV1Compat);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_normalizedStringV1Compat, "System.Xml.Schema", "Datatype_normalizedStringV1Compat");
