#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class TagPropertyAttribute;
}
// Type: ::TagPropertyAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13838))
// CS Name: TagPropertyAttribute
class CORDL_TYPE TagPropertyAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TagPropertyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TagPropertyAttribute", modifiers: " const&", def_value: None }]
constexpr TagPropertyAttribute(TagPropertyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TagPropertyAttribute", modifiers: "&&", def_value: None }]
constexpr TagPropertyAttribute(TagPropertyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TagPropertyAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr TagPropertyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TagPropertyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TagPropertyAttribute& operator=(TagPropertyAttribute&& o) noexcept = default;
  constexpr TagPropertyAttribute& operator=(TagPropertyAttribute const& o) noexcept = default;
                


// Methods

static GlobalNamespace::TagPropertyAttribute New_ctor() ;

/// @brief Method .ctor addr 0x1f7bde0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TagPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TagPropertyAttribute, "", "TagPropertyAttribute");
