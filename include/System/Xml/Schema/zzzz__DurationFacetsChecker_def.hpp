#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System {
class Exception;
}
namespace System::Collections {
class ArrayList;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml::Schema {
class DurationFacetsChecker;
}
// Type: System.Xml.Schema::DurationFacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11631))
// CS Name: System.Xml.Schema.DurationFacetsChecker
class CORDL_TYPE DurationFacetsChecker : public System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DurationFacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "DurationFacetsChecker", modifiers: " const&", def_value: None }]
constexpr DurationFacetsChecker(DurationFacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DurationFacetsChecker", modifiers: "&&", def_value: None }]
constexpr DurationFacetsChecker(DurationFacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DurationFacetsChecker(void* ptr) noexcept : System::Xml::Schema::FacetsChecker(ptr) {
}


  constexpr DurationFacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DurationFacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DurationFacetsChecker& operator=(DurationFacetsChecker&& o) noexcept = default;
  constexpr DurationFacetsChecker& operator=(DurationFacetsChecker const& o) noexcept = default;
                


// Methods

/// @brief Method CheckValueFacets addr 0x272e2e4 size 0x114 virtual true final false
 System::Exception CheckValueFacets(::bs_hook::Il2CppWrapperType value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272e3f8 size 0x320 virtual true final false
 System::Exception CheckValueFacets(System::TimeSpan value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272e824 size 0x78 virtual true final false
 bool MatchEnumeration(::bs_hook::Il2CppWrapperType value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272e718 size 0x10c virtual false final false
 bool MatchEnumeration(System::TimeSpan value, System::Collections::ArrayList enumeration) ;

static System::Xml::Schema::DurationFacetsChecker New_ctor() ;

/// @brief Method .ctor addr 0x272e89c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::DurationFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::DurationFacetsChecker, "System.Xml.Schema", "DurationFacetsChecker");
