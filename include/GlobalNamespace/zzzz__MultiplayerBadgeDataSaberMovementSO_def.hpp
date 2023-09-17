#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataSaberMovementSO;
}
// Type: ::MultiplayerBadgeDataSaberMovementSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5207))
// CS Name: MultiplayerBadgeDataSaberMovementSO
class CORDL_TYPE MultiplayerBadgeDataSaberMovementSO : public ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerBadgeDataSaberMovementSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSaberMovementSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgeDataSaberMovementSO(MultiplayerBadgeDataSaberMovementSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataSaberMovementSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgeDataSaberMovementSO(MultiplayerBadgeDataSaberMovementSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgeDataSaberMovementSO(void* ptr) noexcept : ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO(ptr) {
}


  constexpr MultiplayerBadgeDataSaberMovementSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgeDataSaberMovementSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgeDataSaberMovementSO& operator=(MultiplayerBadgeDataSaberMovementSO&& o) noexcept = default;
  constexpr MultiplayerBadgeDataSaberMovementSO& operator=(MultiplayerBadgeDataSaberMovementSO const& o) noexcept = default;
                


// Methods

/// @brief Method GetValue addr 0x20da298 size 0x2c virtual true final false
 float_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData result) ;

// Ctor Parameters []
explicit MultiplayerBadgeDataSaberMovementSO() ;

/// @brief Method .ctor addr 0x20da2c4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataSaberMovementSO, "", "MultiplayerBadgeDataSaberMovementSO");
