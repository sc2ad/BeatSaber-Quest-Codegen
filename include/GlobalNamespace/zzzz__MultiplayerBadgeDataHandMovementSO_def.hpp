#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataHandMovementSO;
}
// Type: ::MultiplayerBadgeDataHandMovementSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5202))
// CS Name: MultiplayerBadgeDataHandMovementSO
class CORDL_TYPE MultiplayerBadgeDataHandMovementSO : public GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerBadgeDataHandMovementSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataHandMovementSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgeDataHandMovementSO(MultiplayerBadgeDataHandMovementSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataHandMovementSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgeDataHandMovementSO(MultiplayerBadgeDataHandMovementSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgeDataHandMovementSO(void* ptr) noexcept : GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO(ptr) {
}


  constexpr MultiplayerBadgeDataHandMovementSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgeDataHandMovementSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgeDataHandMovementSO& operator=(MultiplayerBadgeDataHandMovementSO&& o) noexcept = default;
  constexpr MultiplayerBadgeDataHandMovementSO& operator=(MultiplayerBadgeDataHandMovementSO const& o) noexcept = default;
                


// Methods

/// @brief Method GetValue addr 0x20d8684 size 0x2c virtual true final false
 float_t GetValue(GlobalNamespace::MultiplayerPlayerResultsData result) ;

// Ctor Parameters []
explicit MultiplayerBadgeDataHandMovementSO() ;

/// @brief Method .ctor addr 0x20d86b0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerBadgeDataHandMovementSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataHandMovementSO, "", "MultiplayerBadgeDataHandMovementSO");
