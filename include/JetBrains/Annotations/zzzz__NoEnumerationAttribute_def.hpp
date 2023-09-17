#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class NoEnumerationAttribute;
}
// Type: JetBrains.Annotations::NoEnumerationAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15732))
// CS Name: JetBrains.Annotations.NoEnumerationAttribute
class CORDL_TYPE NoEnumerationAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoEnumerationAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoEnumerationAttribute", modifiers: " const&", def_value: None }]
constexpr NoEnumerationAttribute(NoEnumerationAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoEnumerationAttribute", modifiers: "&&", def_value: None }]
constexpr NoEnumerationAttribute(NoEnumerationAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoEnumerationAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NoEnumerationAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoEnumerationAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoEnumerationAttribute& operator=(NoEnumerationAttribute&& o) noexcept = default;
  constexpr NoEnumerationAttribute& operator=(NoEnumerationAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NoEnumerationAttribute() ;

/// @brief Method .ctor addr 0x2d41270 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::NoEnumerationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::NoEnumerationAttribute, "JetBrains.Annotations", "NoEnumerationAttribute");
