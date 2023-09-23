#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Exception;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Xml::Schema {
class QNameFacetsChecker;
}
// Type: System.Xml.Schema::QNameFacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11634))
// CS Name: System.Xml.Schema.QNameFacetsChecker
class CORDL_TYPE QNameFacetsChecker : public System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~QNameFacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "QNameFacetsChecker", modifiers: " const&", def_value: None }]
constexpr QNameFacetsChecker(QNameFacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QNameFacetsChecker", modifiers: "&&", def_value: None }]
constexpr QNameFacetsChecker(QNameFacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QNameFacetsChecker(void* ptr) noexcept : System::Xml::Schema::FacetsChecker(ptr) {
}


  constexpr QNameFacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QNameFacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QNameFacetsChecker& operator=(QNameFacetsChecker&& o) noexcept = default;
  constexpr QNameFacetsChecker& operator=(QNameFacetsChecker const& o) noexcept = default;
                


// Methods

/// @brief Method CheckValueFacets addr 0x272f3b8 size 0x12c virtual true final false
 System::Exception CheckValueFacets(::bs_hook::Il2CppWrapperType value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272f4e4 size 0x1c4 virtual true final false
 System::Exception CheckValueFacets(System::Xml::XmlQualifiedName value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272f7b8 size 0x114 virtual true final false
 bool MatchEnumeration(::bs_hook::Il2CppWrapperType value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272f6a8 size 0x110 virtual false final false
 bool MatchEnumeration(System::Xml::XmlQualifiedName value, System::Collections::ArrayList enumeration) ;

// Ctor Parameters []
explicit QNameFacetsChecker() ;

/// @brief Method .ctor addr 0x272f8cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::QNameFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::QNameFacetsChecker, "System.Xml.Schema", "QNameFacetsChecker");
