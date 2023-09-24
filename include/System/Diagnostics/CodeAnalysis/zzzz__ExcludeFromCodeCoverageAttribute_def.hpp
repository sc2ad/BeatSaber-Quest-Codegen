#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace System::Diagnostics::CodeAnalysis {
class ExcludeFromCodeCoverageAttribute;
}
// Type: System.Diagnostics.CodeAnalysis::ExcludeFromCodeCoverageAttribute
namespace System::Diagnostics::CodeAnalysis {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7813))
// CS Name: System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute
class CORDL_TYPE ExcludeFromCodeCoverageAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExcludeFromCodeCoverageAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromCodeCoverageAttribute", modifiers: " const&", def_value: None }]
constexpr ExcludeFromCodeCoverageAttribute(ExcludeFromCodeCoverageAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromCodeCoverageAttribute", modifiers: "&&", def_value: None }]
constexpr ExcludeFromCodeCoverageAttribute(ExcludeFromCodeCoverageAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExcludeFromCodeCoverageAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr ExcludeFromCodeCoverageAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExcludeFromCodeCoverageAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExcludeFromCodeCoverageAttribute& operator=(ExcludeFromCodeCoverageAttribute&& o) noexcept = default;
  constexpr ExcludeFromCodeCoverageAttribute& operator=(ExcludeFromCodeCoverageAttribute const& o) noexcept = default;
                


// Methods

static System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute New_ctor() ;

/// @brief Method .ctor addr 0x27e1bac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics::CodeAnalysis
NEED_NO_BOX(System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::CodeAnalysis::ExcludeFromCodeCoverageAttribute, "System.Diagnostics.CodeAnalysis", "ExcludeFromCodeCoverageAttribute");
