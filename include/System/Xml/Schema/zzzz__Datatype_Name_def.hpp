#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__Datatype_token_def.hpp"
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_Name;
}
// Type: System.Xml.Schema::Datatype_Name
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11596))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11600))
// CS Name: System.Xml.Schema.Datatype_Name
class CORDL_TYPE Datatype_Name : public System::Xml::Schema::Datatype_token {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Datatype_Name() = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_Name", modifiers: " const&", def_value: None }]
constexpr Datatype_Name(Datatype_Name const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Datatype_Name", modifiers: "&&", def_value: None }]
constexpr Datatype_Name(Datatype_Name&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Datatype_Name(void* ptr) noexcept : System::Xml::Schema::Datatype_token(ptr) {
}


  constexpr Datatype_Name& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Datatype_Name& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Datatype_Name& operator=(Datatype_Name&& o) noexcept = default;
  constexpr Datatype_Name& operator=(Datatype_Name const& o) noexcept = default;
                


// Properties

 System::Xml::Schema::XmlTypeCode __declspec(property(get=get_TypeCode))  TypeCode;


// Methods

/// @brief Method get_TypeCode addr 0x2727d44 size 0x8 virtual true final false
 System::Xml::Schema::XmlTypeCode get_TypeCode() ;

// Ctor Parameters []
explicit Datatype_Name() ;

/// @brief Method .ctor addr 0x2727d4c size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Datatype_Name);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Datatype_Name, "System.Xml.Schema", "Datatype_Name");
