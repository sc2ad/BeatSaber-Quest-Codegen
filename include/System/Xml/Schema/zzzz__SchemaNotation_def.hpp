#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaNotation;
}
// Type: System.Xml.Schema::SchemaNotation
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11649))
// CS Name: System.Xml.Schema.SchemaNotation
class CORDL_TYPE SchemaNotation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SchemaNotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaNotation", modifiers: " const&", def_value: None }]
constexpr SchemaNotation(SchemaNotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SchemaNotation", modifiers: "&&", def_value: None }]
constexpr SchemaNotation(SchemaNotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SchemaNotation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SchemaNotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SchemaNotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SchemaNotation& operator=(SchemaNotation&& o) noexcept = default;
  constexpr SchemaNotation& operator=(SchemaNotation const& o) noexcept = default;
                


// Fields

 System::Xml::XmlQualifiedName __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(System::Xml::XmlQualifiedName value) ;

constexpr System::Xml::XmlQualifiedName __get_name() const;

 ::StringW __declspec(property(get=__get_systemLiteral, put=__set_systemLiteral))  systemLiteral;

constexpr void __set_systemLiteral(::StringW value) ;

constexpr ::StringW __get_systemLiteral() const;

 ::StringW __declspec(property(get=__get_pubid, put=__set_pubid))  pubid;

constexpr void __set_pubid(::StringW value) ;

constexpr ::StringW __get_pubid() const;


// Properties

 System::Xml::XmlQualifiedName __declspec(property(get=get_Name))  Name;

 ::StringW __declspec(property(get=get_SystemLiteral, put=set_SystemLiteral))  SystemLiteral;

 ::StringW __declspec(property(get=get_Pubid, put=set_Pubid))  Pubid;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "System::Xml::XmlQualifiedName", modifiers: "", def_value: None }]
explicit SchemaNotation(System::Xml::XmlQualifiedName name) ;

/// @brief Method .ctor addr 0x2732234 size 0x28 virtual false final false
 void _ctor(System::Xml::XmlQualifiedName name) ;

/// @brief Method get_Name addr 0x273225c size 0x8 virtual false final false
 System::Xml::XmlQualifiedName get_Name() ;

/// @brief Method get_SystemLiteral addr 0x2732264 size 0x8 virtual false final false
 ::StringW get_SystemLiteral() ;

/// @brief Method set_SystemLiteral addr 0x273226c size 0x8 virtual false final false
 void set_SystemLiteral(::StringW value) ;

/// @brief Method get_Pubid addr 0x2732274 size 0x8 virtual false final false
 ::StringW get_Pubid() ;

/// @brief Method set_Pubid addr 0x273227c size 0x8 virtual false final false
 void set_Pubid(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::SchemaNotation);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::SchemaNotation, "System.Xml.Schema", "SchemaNotation");
