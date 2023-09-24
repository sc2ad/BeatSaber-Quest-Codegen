#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class NotNullAttribute;
}
// Type: JetBrains.Annotations::NotNullAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9968))
// CS Name: JetBrains.Annotations.NotNullAttribute
class CORDL_TYPE NotNullAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NotNullAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: " const&", def_value: None }]
constexpr NotNullAttribute(NotNullAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "&&", def_value: None }]
constexpr NotNullAttribute(NotNullAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NotNullAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr NotNullAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NotNullAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NotNullAttribute& operator=(NotNullAttribute&& o) noexcept = default;
  constexpr NotNullAttribute& operator=(NotNullAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::NotNullAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2b28af0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::NotNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::NotNullAttribute, "JetBrains.Annotations", "NotNullAttribute");
