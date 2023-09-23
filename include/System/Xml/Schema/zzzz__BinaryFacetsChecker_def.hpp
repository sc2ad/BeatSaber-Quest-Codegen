#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
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
class BinaryFacetsChecker;
}
// Type: System.Xml.Schema::BinaryFacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11636))
// CS Name: System.Xml.Schema.BinaryFacetsChecker
class CORDL_TYPE BinaryFacetsChecker : public System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BinaryFacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryFacetsChecker", modifiers: " const&", def_value: None }]
constexpr BinaryFacetsChecker(BinaryFacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BinaryFacetsChecker", modifiers: "&&", def_value: None }]
constexpr BinaryFacetsChecker(BinaryFacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BinaryFacetsChecker(void* ptr) noexcept : System::Xml::Schema::FacetsChecker(ptr) {
}


  constexpr BinaryFacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BinaryFacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BinaryFacetsChecker& operator=(BinaryFacetsChecker&& o) noexcept = default;
  constexpr BinaryFacetsChecker& operator=(BinaryFacetsChecker const& o) noexcept = default;
                


// Methods

/// @brief Method CheckValueFacets addr 0x272f8dc size 0x90 virtual true final false
 System::Exception CheckValueFacets(::bs_hook::Il2CppWrapperType value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method CheckValueFacets addr 0x272f96c size 0x1b0 virtual true final false
 System::Exception CheckValueFacets(::ArrayW<uint8_t> value, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272fc30 size 0x84 virtual true final false
 bool MatchEnumeration(::bs_hook::Il2CppWrapperType value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlSchemaDatatype datatype) ;

/// @brief Method MatchEnumeration addr 0x272fb1c size 0x114 virtual false final false
 bool MatchEnumeration(::ArrayW<uint8_t> value, System::Collections::ArrayList enumeration, System::Xml::Schema::XmlSchemaDatatype datatype) ;

// Ctor Parameters []
explicit BinaryFacetsChecker() ;

/// @brief Method .ctor addr 0x272fcb4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
NEED_NO_BOX(System::Xml::Schema::BinaryFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::BinaryFacetsChecker, "System.Xml.Schema", "BinaryFacetsChecker");
