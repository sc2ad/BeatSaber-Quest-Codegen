#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_NCName_def.hpp"
namespace {
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_IDREF;
}
// Type: System.Xml.Schema::Datatype_IDREF
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11603))
// CS Name: System.Xml.Schema.Datatype_IDREF
class CORDL_TYPE Datatype_IDREF : public ::System::Xml::Schema::Datatype_NCName {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_IDREF() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_IDREF", modifiers: " const&", def_value: None }]
constexpr Datatype_IDREF(Datatype_IDREF const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_IDREF", modifiers: "&&", def_value: None }]
constexpr Datatype_IDREF(Datatype_IDREF&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_IDREF(void* ptr) noexcept : ::System::Xml::Schema::Datatype_NCName(ptr) {
}


  constexpr Datatype_IDREF& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_IDREF& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_IDREF& operator=(Datatype_IDREF&& o) noexcept = default;
  constexpr Datatype_IDREF& operator=(Datatype_IDREF const& o) noexcept = default;
                


// Properties

 ::System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 ::System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;


// Methods

/// @brief Method get_TypeCode addr 0x2727e6c size 0x8 virtual true final false
 ::System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_TokenizedType addr 0x2727e74 size 0x8 virtual true final false
 ::System::Xml::XmlTokenizedType get_TokenizedType() ;

// Ctor Parameters []
explicit Datatype_IDREF() ;

/// @brief Method .ctor addr 0x2727e7c size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_IDREF);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_IDREF, "System.Xml.Schema", "Datatype_IDREF");
