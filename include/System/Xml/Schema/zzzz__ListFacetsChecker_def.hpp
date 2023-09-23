#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
class ListFacetsChecker;
}
// Type: System.Xml.Schema::ListFacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11637))
// CS Name: System.Xml.Schema.ListFacetsChecker
class CORDL_TYPE ListFacetsChecker : public System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ListFacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListFacetsChecker", modifiers: " const&", def_value: None }]
constexpr ListFacetsChecker(ListFacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListFacetsChecker", modifiers: "&&", def_value: None }]
constexpr ListFacetsChecker(ListFacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListFacetsChecker(void* ptr) noexcept : System::Xml::Schema::FacetsChecker(ptr) {
}


  constexpr ListFacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListFacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListFacetsChecker& operator=(ListFacetsChecker&& o) noexcept = default;
  constexpr ListFacetsChecker& operator=(ListFacetsChecker const& o) noexcept = default;
                


// Methods

/// @brief Method CheckValueFacets addr 0x272fcbc size 0x234 virtual true final false
 System::Exception CheckValueFacets(::bs_hook::Il2CppWrapperType value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272fef0 size 0xb4 virtual true final false
 bool MatchEnumeration(::bs_hook::Il2CppWrapperType value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlSchemaDatatype datatype) ;

// Ctor Parameters []
explicit ListFacetsChecker() ;

/// @brief Method .ctor addr 0x272ffa4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::ListFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::ListFacetsChecker, "System.Xml.Schema", "ListFacetsChecker");
