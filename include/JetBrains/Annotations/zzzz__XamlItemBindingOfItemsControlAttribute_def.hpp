#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class XamlItemBindingOfItemsControlAttribute;
}
// Type: JetBrains.Annotations::XamlItemBindingOfItemsControlAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15736))
// CS Name: JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute
class CORDL_TYPE XamlItemBindingOfItemsControlAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XamlItemBindingOfItemsControlAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XamlItemBindingOfItemsControlAttribute", modifiers: " const&", def_value: None }]
constexpr XamlItemBindingOfItemsControlAttribute(XamlItemBindingOfItemsControlAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XamlItemBindingOfItemsControlAttribute", modifiers: "&&", def_value: None }]
constexpr XamlItemBindingOfItemsControlAttribute(XamlItemBindingOfItemsControlAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XamlItemBindingOfItemsControlAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr XamlItemBindingOfItemsControlAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XamlItemBindingOfItemsControlAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XamlItemBindingOfItemsControlAttribute& operator=(XamlItemBindingOfItemsControlAttribute&& o) noexcept = default;
  constexpr XamlItemBindingOfItemsControlAttribute& operator=(XamlItemBindingOfItemsControlAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit XamlItemBindingOfItemsControlAttribute() ;

/// @brief Method .ctor addr 0x2d41290 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute, "JetBrains.Annotations", "XamlItemBindingOfItemsControlAttribute");
