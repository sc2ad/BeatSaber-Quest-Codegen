#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace JetBrains::Annotations {
class ItemCanBeNullAttribute;
}
// Type: JetBrains.Annotations::ItemCanBeNullAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15681))
// CS Name: JetBrains.Annotations.ItemCanBeNullAttribute
class CORDL_TYPE ItemCanBeNullAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ItemCanBeNullAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ItemCanBeNullAttribute", modifiers: " const&", def_value: None }]
constexpr ItemCanBeNullAttribute(ItemCanBeNullAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ItemCanBeNullAttribute", modifiers: "&&", def_value: None }]
constexpr ItemCanBeNullAttribute(ItemCanBeNullAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ItemCanBeNullAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ItemCanBeNullAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ItemCanBeNullAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ItemCanBeNullAttribute& operator=(ItemCanBeNullAttribute&& o) noexcept = default;
  constexpr ItemCanBeNullAttribute& operator=(ItemCanBeNullAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ItemCanBeNullAttribute() ;

/// @brief Method .ctor addr 0x2d40a74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def JetBrains::Annotations
} // end anonymous namespace
NEED_NO_BOX(::JetBrains::Annotations::ItemCanBeNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ItemCanBeNullAttribute, "JetBrains.Annotations", "ItemCanBeNullAttribute");
