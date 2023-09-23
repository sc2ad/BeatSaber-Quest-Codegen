#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Collections {
class ArrayList;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
class Numeric2FacetsChecker;
}
// Type: System.Xml.Schema::Numeric2FacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11630))
// CS Name: System.Xml.Schema.Numeric2FacetsChecker
class CORDL_TYPE Numeric2FacetsChecker : public System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Numeric2FacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "Numeric2FacetsChecker", modifiers: " const&", def_value: None }]
constexpr Numeric2FacetsChecker(Numeric2FacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Numeric2FacetsChecker", modifiers: "&&", def_value: None }]
constexpr Numeric2FacetsChecker(Numeric2FacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Numeric2FacetsChecker(void* ptr) noexcept : System::Xml::Schema::FacetsChecker(ptr) {
}


  constexpr Numeric2FacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Numeric2FacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Numeric2FacetsChecker& operator=(Numeric2FacetsChecker&& o) noexcept = default;
  constexpr Numeric2FacetsChecker& operator=(Numeric2FacetsChecker const& o) noexcept = default;
                


// Methods

/// @brief Method CheckValueFacets addr 0x272debc size 0x60 virtual true final false
 System::Exception CheckValueFacets(::bs_hook::Il2CppWrapperType value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272df1c size 0x280 virtual true final false
 System::Exception CheckValueFacets(double_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272e254 size 0x10 virtual true final false
 System::Exception CheckValueFacets(float_t value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272e264 size 0x78 virtual true final false
 bool MatchEnumeration(::bs_hook::Il2CppWrapperType value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272e19c size 0xb8 virtual false final false
 bool MatchEnumeration(double_t value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlValueConverter valueConverter) ;

// Ctor Parameters []
explicit Numeric2FacetsChecker() ;

/// @brief Method .ctor addr 0x272e2dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::Numeric2FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::Numeric2FacetsChecker, "System.Xml.Schema", "Numeric2FacetsChecker");
