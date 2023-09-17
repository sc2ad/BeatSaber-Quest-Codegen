#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class InstantHandleAttribute;
}
// Type: JetBrains.Annotations::InstantHandleAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15695))
// CS Name: JetBrains.Annotations.InstantHandleAttribute
class CORDL_TYPE InstantHandleAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InstantHandleAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantHandleAttribute", modifiers: " const&", def_value: None }]
constexpr InstantHandleAttribute(InstantHandleAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantHandleAttribute", modifiers: "&&", def_value: None }]
constexpr InstantHandleAttribute(InstantHandleAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstantHandleAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr InstantHandleAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstantHandleAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstantHandleAttribute& operator=(InstantHandleAttribute&& o) noexcept = default;
  constexpr InstantHandleAttribute& operator=(InstantHandleAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InstantHandleAttribute() ;

/// @brief Method .ctor addr 0x2d40e28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::InstantHandleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::InstantHandleAttribute, "JetBrains.Annotations", "InstantHandleAttribute");
