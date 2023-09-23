#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductsModelSO_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class PS5LevelProductsModelSO;
}
// Type: ::PS5LevelProductsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4679))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4650))
// CS Name: PS5LevelProductsModelSO
class CORDL_TYPE PS5LevelProductsModelSO : public GlobalNamespace::SonyLevelProductsModelSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PS5LevelProductsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5LevelProductsModelSO", modifiers: " const&", def_value: None }]
constexpr PS5LevelProductsModelSO(PS5LevelProductsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS5LevelProductsModelSO", modifiers: "&&", def_value: None }]
constexpr PS5LevelProductsModelSO(PS5LevelProductsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS5LevelProductsModelSO(void* ptr) noexcept : GlobalNamespace::SonyLevelProductsModelSO(ptr) {
}


  constexpr PS5LevelProductsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS5LevelProductsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS5LevelProductsModelSO& operator=(PS5LevelProductsModelSO&& o) noexcept = default;
  constexpr PS5LevelProductsModelSO& operator=(PS5LevelProductsModelSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PS5LevelProductsModelSO() ;

/// @brief Method .ctor addr 0x221a7f0 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS5LevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS5LevelProductsModelSO, "", "PS5LevelProductsModelSO");
