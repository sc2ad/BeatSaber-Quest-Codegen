#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class ProvidesContextAttribute;
}
// Type: JetBrains.Annotations::ProvidesContextAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15698))
// CS Name: JetBrains.Annotations.ProvidesContextAttribute
class CORDL_TYPE ProvidesContextAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProvidesContextAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProvidesContextAttribute", modifiers: " const&", def_value: None }]
constexpr ProvidesContextAttribute(ProvidesContextAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProvidesContextAttribute", modifiers: "&&", def_value: None }]
constexpr ProvidesContextAttribute(ProvidesContextAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProvidesContextAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ProvidesContextAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProvidesContextAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProvidesContextAttribute& operator=(ProvidesContextAttribute&& o) noexcept = default;
  constexpr ProvidesContextAttribute& operator=(ProvidesContextAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ProvidesContextAttribute() ;

/// @brief Method .ctor addr 0x2d40e78 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::ProvidesContextAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ProvidesContextAttribute, "JetBrains.Annotations", "ProvidesContextAttribute");
