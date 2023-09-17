#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class ItemNotNullAttribute;
}
// Type: JetBrains.Annotations::ItemNotNullAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15680))
// CS Name: JetBrains.Annotations.ItemNotNullAttribute
class CORDL_TYPE ItemNotNullAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ItemNotNullAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ItemNotNullAttribute", modifiers: " const&", def_value: None }]
constexpr ItemNotNullAttribute(ItemNotNullAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ItemNotNullAttribute", modifiers: "&&", def_value: None }]
constexpr ItemNotNullAttribute(ItemNotNullAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ItemNotNullAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ItemNotNullAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ItemNotNullAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ItemNotNullAttribute& operator=(ItemNotNullAttribute&& o) noexcept = default;
  constexpr ItemNotNullAttribute& operator=(ItemNotNullAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ItemNotNullAttribute() ;

/// @brief Method .ctor addr 0x2d40a6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::ItemNotNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ItemNotNullAttribute, "JetBrains.Annotations", "ItemNotNullAttribute");
