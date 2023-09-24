#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class LocalizationKeyAttribute;
}
// Type: ::LocalizationKeyAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15520))
// CS Name: LocalizationKeyAttribute
class CORDL_TYPE LocalizationKeyAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LocalizationKeyAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationKeyAttribute", modifiers: " const&", def_value: None }]
constexpr LocalizationKeyAttribute(LocalizationKeyAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationKeyAttribute", modifiers: "&&", def_value: None }]
constexpr LocalizationKeyAttribute(LocalizationKeyAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LocalizationKeyAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr LocalizationKeyAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LocalizationKeyAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LocalizationKeyAttribute& operator=(LocalizationKeyAttribute&& o) noexcept = default;
  constexpr LocalizationKeyAttribute& operator=(LocalizationKeyAttribute const& o) noexcept = default;
                


// Methods

static GlobalNamespace::LocalizationKeyAttribute New_ctor() ;

/// @brief Method .ctor addr 0x266f38c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LocalizationKeyAttribute);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizationKeyAttribute, "", "LocalizationKeyAttribute");
