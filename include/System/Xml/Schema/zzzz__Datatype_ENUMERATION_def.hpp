#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_NMTOKEN_def.hpp"
namespace {
namespace System::Xml {
struct XmlTokenizedType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_ENUMERATION;
}
// Type: System.Xml.Schema::Datatype_ENUMERATION
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11599))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11622))
// CS Name: System.Xml.Schema.Datatype_ENUMERATION
class CORDL_TYPE Datatype_ENUMERATION : public ::System::Xml::Schema::Datatype_NMTOKEN {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_ENUMERATION() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_ENUMERATION", modifiers: " const&", def_value: None }]
constexpr Datatype_ENUMERATION(Datatype_ENUMERATION const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_ENUMERATION", modifiers: "&&", def_value: None }]
constexpr Datatype_ENUMERATION(Datatype_ENUMERATION&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_ENUMERATION(void* ptr) noexcept : ::System::Xml::Schema::Datatype_NMTOKEN(ptr) {
}


  constexpr Datatype_ENUMERATION& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_ENUMERATION& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_ENUMERATION& operator=(Datatype_ENUMERATION&& o) noexcept = default;
  constexpr Datatype_ENUMERATION& operator=(Datatype_ENUMERATION const& o) noexcept = default;
                


// Properties

 ::System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;


// Methods

/// @brief Method get_TokenizedType addr 0x272ba50 size 0x8 virtual true final false
 ::System::Xml::XmlTokenizedType get_TokenizedType() ;

// Ctor Parameters []
explicit Datatype_ENUMERATION() ;

/// @brief Method .ctor addr 0x272ba58 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::Datatype_ENUMERATION);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_ENUMERATION, "System.Xml.Schema", "Datatype_ENUMERATION");
