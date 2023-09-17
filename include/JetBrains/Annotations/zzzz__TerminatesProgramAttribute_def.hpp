#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class TerminatesProgramAttribute;
}
// Type: JetBrains.Annotations::TerminatesProgramAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15730))
// CS Name: JetBrains.Annotations.TerminatesProgramAttribute
class CORDL_TYPE TerminatesProgramAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TerminatesProgramAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TerminatesProgramAttribute", modifiers: " const&", def_value: None }]
constexpr TerminatesProgramAttribute(TerminatesProgramAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TerminatesProgramAttribute", modifiers: "&&", def_value: None }]
constexpr TerminatesProgramAttribute(TerminatesProgramAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TerminatesProgramAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr TerminatesProgramAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TerminatesProgramAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TerminatesProgramAttribute& operator=(TerminatesProgramAttribute&& o) noexcept = default;
  constexpr TerminatesProgramAttribute& operator=(TerminatesProgramAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit TerminatesProgramAttribute() ;

/// @brief Method .ctor addr 0x2d41260 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::TerminatesProgramAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::TerminatesProgramAttribute, "JetBrains.Annotations", "TerminatesProgramAttribute");
