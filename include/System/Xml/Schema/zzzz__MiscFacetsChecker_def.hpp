#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
namespace {
// Forward declare root types
namespace System::Xml::Schema {
class MiscFacetsChecker;
}
// Type: System.Xml.Schema::MiscFacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11628))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11635))
// CS Name: System.Xml.Schema.MiscFacetsChecker
class CORDL_TYPE MiscFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MiscFacetsChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscFacetsChecker", modifiers: " const&", def_value: None }]
constexpr MiscFacetsChecker(MiscFacetsChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MiscFacetsChecker", modifiers: "&&", def_value: None }]
constexpr MiscFacetsChecker(MiscFacetsChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MiscFacetsChecker(void* ptr) noexcept : ::System::Xml::Schema::FacetsChecker(ptr) {
}


  constexpr MiscFacetsChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MiscFacetsChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MiscFacetsChecker& operator=(MiscFacetsChecker&& o) noexcept = default;
  constexpr MiscFacetsChecker& operator=(MiscFacetsChecker const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MiscFacetsChecker() ;

/// @brief Method .ctor addr 0x272f8d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::MiscFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::MiscFacetsChecker, "System.Xml.Schema", "MiscFacetsChecker");
