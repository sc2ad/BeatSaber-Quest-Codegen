#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct MultiplayerBadgeMinMax;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class MultiplayerBadgeAwardData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBadgeDataMinMaxIntSO;
}
// Type: ::MultiplayerBadgeDataMinMaxIntSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5208))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5204))
// CS Name: MultiplayerBadgeDataMinMaxIntSO
class CORDL_TYPE MultiplayerBadgeDataMinMaxIntSO : public ::GlobalNamespace::MultiplayerBadgeDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiplayerBadgeDataMinMaxIntSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataMinMaxIntSO", modifiers: " const&", def_value: None }]
constexpr MultiplayerBadgeDataMinMaxIntSO(MultiplayerBadgeDataMinMaxIntSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBadgeDataMinMaxIntSO", modifiers: "&&", def_value: None }]
constexpr MultiplayerBadgeDataMinMaxIntSO(MultiplayerBadgeDataMinMaxIntSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBadgeDataMinMaxIntSO(void* ptr) noexcept : ::GlobalNamespace::MultiplayerBadgeDataSO(ptr) {
}


  constexpr MultiplayerBadgeDataMinMaxIntSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBadgeDataMinMaxIntSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBadgeDataMinMaxIntSO& operator=(MultiplayerBadgeDataMinMaxIntSO&& o) noexcept = default;
  constexpr MultiplayerBadgeDataMinMaxIntSO& operator=(MultiplayerBadgeDataMinMaxIntSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerBadgeMinMax __declspec(property(get=__get__minMax, put=__set__minMax))  _minMax;

constexpr void __set__minMax(::GlobalNamespace::MultiplayerBadgeMinMax value) ;

constexpr ::GlobalNamespace::MultiplayerBadgeMinMax __get__minMax() const;

 float_t __declspec(property(get=__get__weightMultiplier, put=__set__weightMultiplier))  _weightMultiplier;

constexpr void __set__weightMultiplier(float_t value) ;

constexpr float_t __get__weightMultiplier() const;


// Methods

/// @brief Method CalculateBadgeData addr 0x20d91d0 size 0x14 virtual true final false
 ::GlobalNamespace::MultiplayerBadgeAwardData CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> resultsData, ::GlobalNamespace::PlayerDataModel playerDataModel, ::GlobalNamespace::IDifficultyBeatmap difficultyBeatmap, float_t randomMultiplier) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetValue(::GlobalNamespace::MultiplayerPlayerResultsData result) ;

/// @brief Method CalculateMax addr 0x20d91e4 size 0x584 virtual false final false
 ::GlobalNamespace::MultiplayerBadgeAwardData CalculateMax(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> resultsData, float_t randomMultiplier) ;

/// @brief Method CalculateMin addr 0x20d9768 size 0x584 virtual false final false
 ::GlobalNamespace::MultiplayerBadgeAwardData CalculateMin(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData> resultsData, float_t randomMultiplier) ;

// Ctor Parameters []
explicit MultiplayerBadgeDataMinMaxIntSO() ;

/// @brief Method .ctor addr 0x20d8160 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO, "", "MultiplayerBadgeDataMinMaxIntSO");
