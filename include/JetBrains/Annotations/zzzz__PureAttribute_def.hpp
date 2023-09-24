#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class PureAttribute;
}
// Type: JetBrains.Annotations::PureAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15696))
// CS Name: JetBrains.Annotations.PureAttribute
class CORDL_TYPE PureAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PureAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "PureAttribute", modifiers: " const&", def_value: None }]
constexpr PureAttribute(PureAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PureAttribute", modifiers: "&&", def_value: None }]
constexpr PureAttribute(PureAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PureAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr PureAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PureAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PureAttribute& operator=(PureAttribute&& o) noexcept = default;
  constexpr PureAttribute& operator=(PureAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::PureAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d40e30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::PureAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PureAttribute, "JetBrains.Annotations", "PureAttribute");
