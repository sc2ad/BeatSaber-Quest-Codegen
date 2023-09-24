#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_NCName_def.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
struct XmlTokenizedType;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_ENTITY;
}
// Type: System.Xml.Schema::Datatype_ENTITY
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11601))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11604))
// CS Name: System.Xml.Schema.Datatype_ENTITY
class CORDL_TYPE Datatype_ENTITY : public System::Xml::Schema::Datatype_NCName {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_ENTITY() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_ENTITY", modifiers: " const&", def_value: None }]
constexpr Datatype_ENTITY(Datatype_ENTITY const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_ENTITY", modifiers: "&&", def_value: None }]
constexpr Datatype_ENTITY(Datatype_ENTITY&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_ENTITY(void* ptr) noexcept : System::Xml::Schema::Datatype_NCName(ptr) {
}


  constexpr Datatype_ENTITY& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_ENTITY& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_ENTITY& operator=(Datatype_ENTITY&& o) noexcept = default;
  constexpr Datatype_ENTITY& operator=(Datatype_ENTITY const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;

 System::Xml::XmlTokenizedType __declspec(property(get=get_TokenizedType))  TokenizedType;


// Methods

/// @brief Method get_TypeCode addr 0x2727e80 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

/// @brief Method get_TokenizedType addr 0x2727e88 size 0x8 virtual true final false
 System::Xml::XmlTokenizedType get_TokenizedType() ;

static System::Xml::Schema::Datatype_ENTITY New_ctor() ;

/// @brief Method .ctor addr 0x2727e90 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_ENTITY);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_ENTITY, "System.Xml.Schema", "Datatype_ENTITY");
