#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataFullComboSO;
}
// Type: ::MultiplayerBadgeDataFullComboSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5200))
// CS Name: MultiplayerBadgeDataFullComboSO
class CORDL_TYPE MultiplayerBadgeDataFullComboSO : public GlobalNamespace::MultiplayerBadgeDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerBadgeDataFullComboSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataFullComboSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgeDataFullComboSO(MultiplayerBadgeDataFullComboSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataFullComboSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgeDataFullComboSO(MultiplayerBadgeDataFullComboSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgeDataFullComboSO(void* ptr) noexcept : GlobalNamespace::MultiplayerBadgeDataSO(ptr) {
}


  constexpr MultiplayerBadgeDataFullComboSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgeDataFullComboSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgeDataFullComboSO& operator=(MultiplayerBadgeDataFullComboSO&& o) noexcept = default;
  constexpr MultiplayerBadgeDataFullComboSO& operator=(MultiplayerBadgeDataFullComboSO const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__weight, put=__set__weight))  _weight;

constexpr void __set__weight(float_t value) ;

constexpr float_t __get__weight() const;


// Methods

/// @brief Method CalculateBadgeData addr 0x20d8170 size 0x464 virtual true final false
 GlobalNamespace::MultiplayerBadgeAwardData CalculateBadgeData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerPlayerResultsData> resultsData, GlobalNamespace::PlayerDataModel playerDataModel, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, float_t randomMultiplier) ;

static GlobalNamespace::MultiplayerBadgeDataFullComboSO New_ctor() ;

/// @brief Method .ctor addr 0x20d8634 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerBadgeDataFullComboSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeDataFullComboSO, "", "MultiplayerBadgeDataFullComboSO");
