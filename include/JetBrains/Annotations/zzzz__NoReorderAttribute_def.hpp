#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class NoReorderAttribute;
}
// Type: JetBrains.Annotations::NoReorderAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15734))
// CS Name: JetBrains.Annotations.NoReorderAttribute
class CORDL_TYPE NoReorderAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoReorderAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoReorderAttribute", modifiers: " const&", def_value: None }]
constexpr NoReorderAttribute(NoReorderAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoReorderAttribute", modifiers: "&&", def_value: None }]
constexpr NoReorderAttribute(NoReorderAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoReorderAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NoReorderAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoReorderAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoReorderAttribute& operator=(NoReorderAttribute&& o) noexcept = default;
  constexpr NoReorderAttribute& operator=(NoReorderAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NoReorderAttribute() ;

/// @brief Method .ctor addr 0x2d41280 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::NoReorderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::NoReorderAttribute, "JetBrains.Annotations", "NoReorderAttribute");
