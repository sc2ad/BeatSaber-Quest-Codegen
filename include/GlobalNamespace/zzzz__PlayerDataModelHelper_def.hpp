#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataModelHelper;
}
// Type: ::PlayerDataModelHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4740))
// CS Name: PlayerDataModelHelper
class CORDL_TYPE PlayerDataModelHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlayerDataModelHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataModelHelper", modifiers: " const&", def_value: None }]
constexpr PlayerDataModelHelper(PlayerDataModelHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataModelHelper", modifiers: "&&", def_value: None }]
constexpr PlayerDataModelHelper(PlayerDataModelHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerDataModelHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerDataModelHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerDataModelHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerDataModelHelper& operator=(PlayerDataModelHelper&& o) noexcept = default;
  constexpr PlayerDataModelHelper& operator=(PlayerDataModelHelper const& o) noexcept = default;
                


// Methods

/// @brief Method ToPlayerAllOverallStatsData addr 0x2225b4c size 0xd8 virtual false final false
static GlobalNamespace::PlayerAllOverallStatsData ToPlayerAllOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData playerAllOverallStatsData) ;

/// @brief Method ToPlayerAllOverallStatsData addr 0x222626c size 0xf4 virtual false final false
static GlobalNamespace::PlayerAllOverallStatsData ToPlayerAllOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData playerAllOverallStatsData) ;

/// @brief Method ToPlayerOverallStats addr 0x22269d0 size 0xf8 virtual false final false
static GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData ToPlayerOverallStats(GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData playerAllOverallStatsData) ;

/// @brief Method ToPlayerOverallStats addr 0x2226ac8 size 0xf8 virtual false final false
static GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData ToPlayerOverallStats(GlobalNamespace::GlobalNamespace__PlayerSaveDataV1_0_1__PlayerOverallStatsData playerAllOverallStatsData) ;

/// @brief Method ToPlayerAllOverallStatsData addr 0x2223778 size 0xcc virtual false final false
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerAllOverallStatsData ToPlayerAllOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData playerAllOverallStatsData) ;

/// @brief Method ToPlayerOverallStatsData addr 0x2226c80 size 0xec virtual false final false
static GlobalNamespace::GlobalNamespace__PlayerSaveData__PlayerOverallStatsData ToPlayerOverallStatsData(GlobalNamespace::GlobalNamespace__PlayerAllOverallStatsData__PlayerOverallStatsData playerOverallStatsData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerDataModelHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataModelHelper, "", "PlayerDataModelHelper");
