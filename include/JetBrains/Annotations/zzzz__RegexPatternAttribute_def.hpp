#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class RegexPatternAttribute;
}
// Type: JetBrains.Annotations::RegexPatternAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15733))
// CS Name: JetBrains.Annotations.RegexPatternAttribute
class CORDL_TYPE RegexPatternAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RegexPatternAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexPatternAttribute", modifiers: " const&", def_value: None }]
constexpr RegexPatternAttribute(RegexPatternAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexPatternAttribute", modifiers: "&&", def_value: None }]
constexpr RegexPatternAttribute(RegexPatternAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexPatternAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr RegexPatternAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexPatternAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexPatternAttribute& operator=(RegexPatternAttribute&& o) noexcept = default;
  constexpr RegexPatternAttribute& operator=(RegexPatternAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::RegexPatternAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d41278 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::RegexPatternAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RegexPatternAttribute, "JetBrains.Annotations", "RegexPatternAttribute");
