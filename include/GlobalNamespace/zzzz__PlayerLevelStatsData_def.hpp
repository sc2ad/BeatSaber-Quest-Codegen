#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__RankModel__Rank;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
// Type: ::PlayerLevelStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4741))
// CS Name: PlayerLevelStatsData
class CORDL_TYPE PlayerLevelStatsData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PlayerLevelStatsData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLevelStatsData", modifiers: " const&", def_value: None }]
constexpr PlayerLevelStatsData(PlayerLevelStatsData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerLevelStatsData", modifiers: "&&", def_value: None }]
constexpr PlayerLevelStatsData(PlayerLevelStatsData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerLevelStatsData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerLevelStatsData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerLevelStatsData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerLevelStatsData& operator=(PlayerLevelStatsData&& o) noexcept = default;
  constexpr PlayerLevelStatsData& operator=(PlayerLevelStatsData const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__highScore, put=__set__highScore))  _highScore;

constexpr void __set__highScore(int32_t value) ;

constexpr int32_t __get__highScore() const;

 int32_t __declspec(property(get=__get__maxCombo, put=__set__maxCombo))  _maxCombo;

constexpr void __set__maxCombo(int32_t value) ;

constexpr int32_t __get__maxCombo() const;

 bool __declspec(property(get=__get__fullCombo, put=__set__fullCombo))  _fullCombo;

constexpr void __set__fullCombo(bool value) ;

constexpr bool __get__fullCombo() const;

 GlobalNamespace::GlobalNamespace__RankModel__Rank __declspec(property(get=__get__maxRank, put=__set__maxRank))  _maxRank;

constexpr void __set__maxRank(GlobalNamespace::GlobalNamespace__RankModel__Rank value) ;

constexpr GlobalNamespace::GlobalNamespace__RankModel__Rank __get__maxRank() const;

 bool __declspec(property(get=__get__validScore, put=__set__validScore))  _validScore;

constexpr void __set__validScore(bool value) ;

constexpr bool __get__validScore() const;

 int32_t __declspec(property(get=__get__playCount, put=__set__playCount))  _playCount;

constexpr void __set__playCount(int32_t value) ;

constexpr int32_t __get__playCount() const;

 ::StringW __declspec(property(get=__get__levelID, put=__set__levelID))  _levelID;

constexpr void __set__levelID(::StringW value) ;

constexpr ::StringW __get__levelID() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__difficulty, put=__set__difficulty))  _difficulty;

constexpr void __set__difficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__difficulty() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;


// Properties

 ::StringW __declspec(property(get=get_levelID))  levelID;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_difficulty))  difficulty;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_beatmapCharacteristic))  beatmapCharacteristic;

 int32_t __declspec(property(get=get_highScore))  highScore;

 int32_t __declspec(property(get=get_maxCombo))  maxCombo;

 bool __declspec(property(get=get_fullCombo))  fullCombo;

 GlobalNamespace::GlobalNamespace__RankModel__Rank __declspec(property(get=get_maxRank))  maxRank;

 bool __declspec(property(get=get_validScore))  validScore;

 int32_t __declspec(property(get=get_playCount))  playCount;


// Methods

/// @brief Method get_levelID addr 0x2226e64 size 0x8 virtual false final false
 ::StringW get_levelID() ;

/// @brief Method get_difficulty addr 0x2226e6c size 0x8 virtual false final false
 GlobalNamespace::BeatmapDifficulty get_difficulty() ;

/// @brief Method get_beatmapCharacteristic addr 0x2226e74 size 0x8 virtual false final false
 GlobalNamespace::BeatmapCharacteristicSO get_beatmapCharacteristic() ;

/// @brief Method get_highScore addr 0x2226e7c size 0x8 virtual false final false
 int32_t get_highScore() ;

/// @brief Method get_maxCombo addr 0x2226e84 size 0x8 virtual false final false
 int32_t get_maxCombo() ;

/// @brief Method get_fullCombo addr 0x2226e8c size 0x8 virtual false final false
 bool get_fullCombo() ;

/// @brief Method get_maxRank addr 0x2226e94 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__RankModel__Rank get_maxRank() ;

/// @brief Method get_validScore addr 0x2226e9c size 0x8 virtual false final false
 bool get_validScore() ;

/// @brief Method get_playCount addr 0x2226ea4 size 0x8 virtual false final false
 int32_t get_playCount() ;

static GlobalNamespace::PlayerLevelStatsData New_ctor(::StringW levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method .ctor addr 0x2226eac size 0x40 virtual false final false
 void _ctor(::StringW levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

static GlobalNamespace::PlayerLevelStatsData New_ctor(::StringW levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, int32_t highScore, int32_t maxCombo, bool fullCombo, GlobalNamespace::GlobalNamespace__RankModel__Rank maxRank, bool validScore, int32_t playCount) ;

/// @brief Method .ctor addr 0x2225c24 size 0x88 virtual false final false
 void _ctor(::StringW levelID, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, int32_t highScore, int32_t maxCombo, bool fullCombo, GlobalNamespace::GlobalNamespace__RankModel__Rank maxRank, bool validScore, int32_t playCount) ;

/// @brief Method UpdateScoreData addr 0x2226eec size 0x4c virtual false final false
 void UpdateScoreData(int32_t score, int32_t maxCombo, bool fullCombo, GlobalNamespace::GlobalNamespace__RankModel__Rank rank) ;

/// @brief Method IncreaseNumberOfGameplays addr 0x2226f38 size 0x10 virtual false final false
 void IncreaseNumberOfGameplays() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerLevelStatsData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerLevelStatsData, "", "PlayerLevelStatsData");
