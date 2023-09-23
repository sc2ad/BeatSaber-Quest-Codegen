#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxIntSO_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataComboSO;
}
// Type: ::MultiplayerBadgeDataComboSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5204))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5199))
// CS Name: MultiplayerBadgeDataComboSO
class CORDL_TYPE MultiplayerBadgeDataComboSO : public GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerBadgeDataComboSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataComboSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgeDataComboSO(MultiplayerBadgeDataComboSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataComboSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgeDataComboSO(MultiplayerBadgeDataComboSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgeDataComboSO(void* ptr) noexcept : GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO(ptr) {
}


  constexpr MultiplayerBadgeDataComboSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgeDataComboSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgeDataComboSO& operator=(MultiplayerBadgeDataComboSO&& o) noexcept = default;
  constexpr MultiplayerBadgeDataComboSO& operator=(MultiplayerBadgeDataComboSO const& o) noexcept = default;
                


// Methods

/// @brief Method GetValue addr 0x20d8128 size 0x28 virtual true final false
 int32_t GetValue(GlobalNamespace::MultiplayerPlayerResultsData result) ;

// Ctor Parameters []
explicit MultiplayerBadgeDataComboSO() ;

/// @brief Method .ctor addr 0x20d8150 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerBadgeDataComboSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataComboSO, "", "MultiplayerBadgeDataComboSO");
