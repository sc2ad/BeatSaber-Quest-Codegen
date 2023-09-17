#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SonyLevelProductsModelSO_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class PS4LevelProductsModelSO;
}
// Type: ::PS4LevelProductsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4679))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4638))
// CS Name: PS4LevelProductsModelSO
class CORDL_TYPE PS4LevelProductsModelSO : public ::GlobalNamespace::SonyLevelProductsModelSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PS4LevelProductsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4LevelProductsModelSO", modifiers: " const&", def_value: None }]
constexpr PS4LevelProductsModelSO(PS4LevelProductsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4LevelProductsModelSO", modifiers: "&&", def_value: None }]
constexpr PS4LevelProductsModelSO(PS4LevelProductsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4LevelProductsModelSO(void* ptr) noexcept : ::GlobalNamespace::SonyLevelProductsModelSO(ptr) {
}


  constexpr PS4LevelProductsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4LevelProductsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4LevelProductsModelSO& operator=(PS4LevelProductsModelSO&& o) noexcept = default;
  constexpr PS4LevelProductsModelSO& operator=(PS4LevelProductsModelSO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PS4LevelProductsModelSO() ;

/// @brief Method .ctor addr 0x221a4d8 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::PS4LevelProductsModelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4LevelProductsModelSO, "", "PS4LevelProductsModelSO");
