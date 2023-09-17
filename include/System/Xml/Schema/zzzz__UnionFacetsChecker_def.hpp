#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
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
class UnionFacetsChecker;
}
// Type: System.Xml.Schema::UnionFacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11638))
// CS Name: System.Xml.Schema.UnionFacetsChecker
class CORDL_TYPE UnionFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnionFacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnionFacetsChecker", modifiers: " const&", def_value: None }]
constexpr UnionFacetsChecker(UnionFacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnionFacetsChecker", modifiers: "&&", def_value: None }]
constexpr UnionFacetsChecker(UnionFacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnionFacetsChecker(void* ptr) noexcept : ::System::Xml::Schema::FacetsChecker(ptr) {
}


  constexpr UnionFacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnionFacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnionFacetsChecker& operator=(UnionFacetsChecker&& o) noexcept = default;
  constexpr UnionFacetsChecker& operator=(UnionFacetsChecker const& o) noexcept = default;
                


// Methods

/// @brief Method CheckValueFacets addr 0x272ffac size 0xf4 virtual true final false
 ::System::Exception CheckValueFacets(::bs_hook::Il2CppWrapperType value, ::System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x27300a0 size 0xb4 virtual true final false
 bool MatchEnumeration(::bs_hook::Il2CppWrapperType value, ::System::Collections::ArrayList enumeration, ::System::Xml::Schema::XmlSchemaDatatype datatype) ;

// Ctor Parameters []
explicit UnionFacetsChecker() ;

/// @brief Method .ctor addr 0x2730154 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::UnionFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::UnionFacetsChecker, "System.Xml.Schema", "UnionFacetsChecker");
