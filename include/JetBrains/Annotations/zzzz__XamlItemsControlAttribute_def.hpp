#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
// Forward declare root types
namespace JetBrains::Annotations {
class XamlItemsControlAttribute;
}
// Type: JetBrains.Annotations::XamlItemsControlAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15735))
// CS Name: JetBrains.Annotations.XamlItemsControlAttribute
class CORDL_TYPE XamlItemsControlAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XamlItemsControlAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XamlItemsControlAttribute", modifiers: " const&", def_value: None }]
constexpr XamlItemsControlAttribute(XamlItemsControlAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XamlItemsControlAttribute", modifiers: "&&", def_value: None }]
constexpr XamlItemsControlAttribute(XamlItemsControlAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XamlItemsControlAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr XamlItemsControlAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XamlItemsControlAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XamlItemsControlAttribute& operator=(XamlItemsControlAttribute&& o) noexcept = default;
  constexpr XamlItemsControlAttribute& operator=(XamlItemsControlAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit XamlItemsControlAttribute() ;

/// @brief Method .ctor addr 0x2d41288 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
NEED_NO_BOX(JetBrains::Annotations::XamlItemsControlAttribute);
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::XamlItemsControlAttribute, "JetBrains.Annotations", "XamlItemsControlAttribute");
