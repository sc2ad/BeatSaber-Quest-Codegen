#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class CanBeNullAttribute;
}
// Type: JetBrains.Annotations::CanBeNullAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15678))
// CS Name: JetBrains.Annotations.CanBeNullAttribute
class CORDL_TYPE CanBeNullAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CanBeNullAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "CanBeNullAttribute", modifiers: " const&", def_value: None }]
constexpr CanBeNullAttribute(CanBeNullAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CanBeNullAttribute", modifiers: "&&", def_value: None }]
constexpr CanBeNullAttribute(CanBeNullAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CanBeNullAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr CanBeNullAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CanBeNullAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CanBeNullAttribute& operator=(CanBeNullAttribute&& o) noexcept = default;
  constexpr CanBeNullAttribute& operator=(CanBeNullAttribute const& o) noexcept = default;
                


// Methods

static JetBrains::Annotations::CanBeNullAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2d40a5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::CanBeNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::CanBeNullAttribute, "JetBrains.Annotations", "CanBeNullAttribute");
