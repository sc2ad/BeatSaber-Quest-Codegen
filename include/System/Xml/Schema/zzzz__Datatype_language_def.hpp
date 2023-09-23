#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_token_def.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_language;
}
// Type: System.Xml.Schema::Datatype_language
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11596))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11598))
// CS Name: System.Xml.Schema.Datatype_language
class CORDL_TYPE Datatype_language : public System::Xml::Schema::Datatype_token {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_language() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_language", modifiers: " const&", def_value: None }]
constexpr Datatype_language(Datatype_language const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_language", modifiers: "&&", def_value: None }]
constexpr Datatype_language(Datatype_language&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_language(void* ptr) noexcept : System::Xml::Schema::Datatype_token(ptr) {
}


  constexpr Datatype_language& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_language& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_language& operator=(Datatype_language&& o) noexcept = default;
  constexpr Datatype_language& operator=(Datatype_language const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_TypeCode addr 0x2727d24 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

// Ctor Parameters []
explicit Datatype_language() ;

/// @brief Method .ctor addr 0x2727d2c size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_language);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_language, "System.Xml.Schema", "Datatype_language");
