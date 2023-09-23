#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_normalizedStringV1Compat_def.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_tokenV1Compat;
}
// Type: System.Xml.Schema::Datatype_tokenV1Compat
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11595))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11597))
// CS Name: System.Xml.Schema.Datatype_tokenV1Compat
class CORDL_TYPE Datatype_tokenV1Compat : public System::Xml::Schema::Datatype_normalizedStringV1Compat {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_tokenV1Compat() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_tokenV1Compat", modifiers: " const&", def_value: None }]
constexpr Datatype_tokenV1Compat(Datatype_tokenV1Compat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_tokenV1Compat", modifiers: "&&", def_value: None }]
constexpr Datatype_tokenV1Compat(Datatype_tokenV1Compat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_tokenV1Compat(void* ptr) noexcept : System::Xml::Schema::Datatype_normalizedStringV1Compat(ptr) {
}


  constexpr Datatype_tokenV1Compat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_tokenV1Compat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_tokenV1Compat& operator=(Datatype_tokenV1Compat&& o) noexcept = default;
  constexpr Datatype_tokenV1Compat& operator=(Datatype_tokenV1Compat const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_TypeCode addr 0x2727d18 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

// Ctor Parameters []
explicit Datatype_tokenV1Compat() ;

/// @brief Method .ctor addr 0x2727d20 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_tokenV1Compat);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_tokenV1Compat, "System.Xml.Schema", "Datatype_tokenV1Compat");
