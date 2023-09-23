#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_token_def.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
struct XmlTokenizedType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_NMTOKEN;
}
// Type: System.Xml.Schema::Datatype_NMTOKEN
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11596))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11599))
// CS Name: System.Xml.Schema.Datatype_NMTOKEN
class CORDL_TYPE Datatype_NMTOKEN : public System::Xml::Schema::Datatype_token {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_NMTOKEN() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_NMTOKEN", modifiers: " const&", def_value: None }]
constexpr Datatype_NMTOKEN(Datatype_NMTOKEN const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_NMTOKEN", modifiers: "&&", def_value: None }]
constexpr Datatype_NMTOKEN(Datatype_NMTOKEN&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_NMTOKEN(void* ptr) noexcept : System::Xml::Schema::Datatype_token(ptr) {
}


  constexpr Datatype_NMTOKEN& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_NMTOKEN& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_NMTOKEN& operator=(Datatype_NMTOKEN&& o) noexcept = default;
  constexpr Datatype_NMTOKEN& operator=(Datatype_NMTOKEN const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;


// Methods

/// @brief Method get_TypeCode addr 0x2727d30 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_TokenizedType addr 0x2727d38 size 0x8 virtual true final false
 System::Xml::XmlTokenizedType get_TokenizedType() ;

// Ctor Parameters []
explicit Datatype_NMTOKEN() ;

/// @brief Method .ctor addr 0x2727d40 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_NMTOKEN);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_NMTOKEN, "System.Xml.Schema", "Datatype_NMTOKEN");
