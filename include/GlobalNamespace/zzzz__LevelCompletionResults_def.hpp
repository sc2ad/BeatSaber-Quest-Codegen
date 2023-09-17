#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace System {
class IComparable;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__RankModel__Rank;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__LevelCompletionResults__LevelEndAction;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__LevelCompletionResults__LevelEndStateType;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Type: ::LevelEndStateType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15108))
// CS Name: LevelCompletionResults::LevelEndStateType
struct CORDL_TYPE ____GlobalNamespace__LevelCompletionResults__LevelEndStateType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndStateType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndStateType(____GlobalNamespace__LevelCompletionResults__LevelEndStateType const&) = default;
                    constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndStateType(____GlobalNamespace__LevelCompletionResults__LevelEndStateType&&) = default;
                    constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndStateType& operator=(____GlobalNamespace__LevelCompletionResults__LevelEndStateType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndStateType& operator=(____GlobalNamespace__LevelCompletionResults__LevelEndStateType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LevelCompletionResults__LevelEndStateType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__LevelCompletionResults__LevelEndStateType_Unwrapped : int32_t {
__Incomplete = 0,
__Cleared = 1,
__Failed = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__LevelCompletionResults__LevelEndStateType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__LevelCompletionResults__LevelEndStateType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Incomplete offset 0
static ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType const Incomplete;

/// @brief Field Cleared offset 0
static ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType const Cleared;

/// @brief Field Failed offset 0
static ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelEndAction
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15109))
// CS Name: LevelCompletionResults::LevelEndAction
struct CORDL_TYPE ____GlobalNamespace__LevelCompletionResults__LevelEndAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndAction(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndAction(____GlobalNamespace__LevelCompletionResults__LevelEndAction const&) = default;
                    constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndAction(____GlobalNamespace__LevelCompletionResults__LevelEndAction&&) = default;
                    constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndAction& operator=(____GlobalNamespace__LevelCompletionResults__LevelEndAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__LevelCompletionResults__LevelEndAction& operator=(____GlobalNamespace__LevelCompletionResults__LevelEndAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LevelCompletionResults__LevelEndAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__LevelCompletionResults__LevelEndAction_Unwrapped : int32_t {
__None = 0,
__Quit = 1,
__Restart = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__LevelCompletionResults__LevelEndAction_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__LevelCompletionResults__LevelEndAction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction const None;

/// @brief Field Quit offset 0
static ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction const Quit;

/// @brief Field Restart offset 0
static ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction const Restart;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelCompletionResults
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15110))
// CS Name: LevelCompletionResults
class CORDL_TYPE LevelCompletionResults : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LevelEndAction = ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction;

using LevelEndStateType = ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType;

/// @brief Convert operator to ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults>
constexpr operator  ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::LevelCompletionResults>() const noexcept;

/// @brief Convert operator to ::System::IComparable
constexpr operator  ::System::IComparable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~LevelCompletionResults() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: " const&", def_value: None }]
constexpr LevelCompletionResults(LevelCompletionResults const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResults", modifiers: "&&", def_value: None }]
constexpr LevelCompletionResults(LevelCompletionResults&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelCompletionResults(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LevelCompletionResults& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelCompletionResults& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelCompletionResults& operator=(LevelCompletionResults&& o) noexcept = default;
  constexpr LevelCompletionResults& operator=(LevelCompletionResults const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::GameplayModifiers __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers))  gameplayModifiers;

constexpr void __set_gameplayModifiers(::GlobalNamespace::GameplayModifiers value) ;

constexpr ::GlobalNamespace::GameplayModifiers __get_gameplayModifiers() const;

 int32_t __declspec(property(get=__get_modifiedScore, put=__set_modifiedScore))  modifiedScore;

constexpr void __set_modifiedScore(int32_t value) ;

constexpr int32_t __get_modifiedScore() const;

 int32_t __declspec(property(get=__get_multipliedScore, put=__set_multipliedScore))  multipliedScore;

constexpr void __set_multipliedScore(int32_t value) ;

constexpr int32_t __get_multipliedScore() const;

 ::GlobalNamespace::____GlobalNamespace__RankModel__Rank __declspec(property(get=__get_rank, put=__set_rank))  rank;

constexpr void __set_rank(::GlobalNamespace::____GlobalNamespace__RankModel__Rank value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__RankModel__Rank __get_rank() const;

 bool __declspec(property(get=__get_fullCombo, put=__set_fullCombo))  fullCombo;

constexpr void __set_fullCombo(bool value) ;

constexpr bool __get_fullCombo() const;

 float_t __declspec(property(get=__get_leftSaberMovementDistance, put=__set_leftSaberMovementDistance))  leftSaberMovementDistance;

constexpr void __set_leftSaberMovementDistance(float_t value) ;

constexpr float_t __get_leftSaberMovementDistance() const;

 float_t __declspec(property(get=__get_rightSaberMovementDistance, put=__set_rightSaberMovementDistance))  rightSaberMovementDistance;

constexpr void __set_rightSaberMovementDistance(float_t value) ;

constexpr float_t __get_rightSaberMovementDistance() const;

 float_t __declspec(property(get=__get_leftHandMovementDistance, put=__set_leftHandMovementDistance))  leftHandMovementDistance;

constexpr void __set_leftHandMovementDistance(float_t value) ;

constexpr float_t __get_leftHandMovementDistance() const;

 float_t __declspec(property(get=__get_rightHandMovementDistance, put=__set_rightHandMovementDistance))  rightHandMovementDistance;

constexpr void __set_rightHandMovementDistance(float_t value) ;

constexpr float_t __get_rightHandMovementDistance() const;

 ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType __declspec(property(get=__get_levelEndStateType, put=__set_levelEndStateType))  levelEndStateType;

constexpr void __set_levelEndStateType(::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType __get_levelEndStateType() const;

 ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction __declspec(property(get=__get_levelEndAction, put=__set_levelEndAction))  levelEndAction;

constexpr void __set_levelEndAction(::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction __get_levelEndAction() const;

 float_t __declspec(property(get=__get_energy, put=__set_energy))  energy;

constexpr void __set_energy(float_t value) ;

constexpr float_t __get_energy() const;

 int32_t __declspec(property(get=__get_goodCutsCount, put=__set_goodCutsCount))  goodCutsCount;

constexpr void __set_goodCutsCount(int32_t value) ;

constexpr int32_t __get_goodCutsCount() const;

 int32_t __declspec(property(get=__get_badCutsCount, put=__set_badCutsCount))  badCutsCount;

constexpr void __set_badCutsCount(int32_t value) ;

constexpr int32_t __get_badCutsCount() const;

 int32_t __declspec(property(get=__get_missedCount, put=__set_missedCount))  missedCount;

constexpr void __set_missedCount(int32_t value) ;

constexpr int32_t __get_missedCount() const;

 int32_t __declspec(property(get=__get_notGoodCount, put=__set_notGoodCount))  notGoodCount;

constexpr void __set_notGoodCount(int32_t value) ;

constexpr int32_t __get_notGoodCount() const;

 int32_t __declspec(property(get=__get_okCount, put=__set_okCount))  okCount;

constexpr void __set_okCount(int32_t value) ;

constexpr int32_t __get_okCount() const;

 int32_t __declspec(property(get=__get_maxCutScore, put=__set_maxCutScore))  maxCutScore;

constexpr void __set_maxCutScore(int32_t value) ;

constexpr int32_t __get_maxCutScore() const;

 int32_t __declspec(property(get=__get_totalCutScore, put=__set_totalCutScore))  totalCutScore;

constexpr void __set_totalCutScore(int32_t value) ;

constexpr int32_t __get_totalCutScore() const;

 int32_t __declspec(property(get=__get_goodCutsCountForNotesWithFullScoreScoringType, put=__set_goodCutsCountForNotesWithFullScoreScoringType))  goodCutsCountForNotesWithFullScoreScoringType;

constexpr void __set_goodCutsCountForNotesWithFullScoreScoringType(int32_t value) ;

constexpr int32_t __get_goodCutsCountForNotesWithFullScoreScoringType() const;

 float_t __declspec(property(get=__get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, put=__set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType))  averageCenterDistanceCutScoreForNotesWithFullScoreScoringType;

constexpr void __set_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType(float_t value) ;

constexpr float_t __get_averageCenterDistanceCutScoreForNotesWithFullScoreScoringType() const;

 float_t __declspec(property(get=__get_averageCutScoreForNotesWithFullScoreScoringType, put=__set_averageCutScoreForNotesWithFullScoreScoringType))  averageCutScoreForNotesWithFullScoreScoringType;

constexpr void __set_averageCutScoreForNotesWithFullScoreScoringType(float_t value) ;

constexpr float_t __get_averageCutScoreForNotesWithFullScoreScoringType() const;

 int32_t __declspec(property(get=__get_maxCombo, put=__set_maxCombo))  maxCombo;

constexpr void __set_maxCombo(int32_t value) ;

constexpr int32_t __get_maxCombo() const;

 float_t __declspec(property(get=__get_endSongTime, put=__set_endSongTime))  endSongTime;

constexpr void __set_endSongTime(float_t value) ;

constexpr float_t __get_endSongTime() const;


// Methods

// Ctor Parameters []
explicit LevelCompletionResults() ;

/// @brief Method .ctor addr 0x1215b64 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "gameplayModifiers", ty: "::GlobalNamespace::GameplayModifiers", modifiers: "", def_value: None }, CppParam { name: "modifiedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "multipliedScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rank", ty: "::GlobalNamespace::____GlobalNamespace__RankModel__Rank", modifiers: "", def_value: None }, CppParam { name: "fullCombo", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "leftSaberMovementDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightSaberMovementDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leftHandMovementDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightHandMovementDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "levelEndStateType", ty: "::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType", modifiers: "", def_value: None }, CppParam { name: "levelEndAction", ty: "::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction", modifiers: "", def_value: None }, CppParam { name: "energy", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "goodCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "badCutsCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "missedCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "notGoodCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "okCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCutScore", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "goodCutsCountForNotesWithFullScoreScoringType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "averageCenterDistanceCutScoreForNotesWithFullScoreScoringType", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "averageCutScoreForNotesWithFullScoreScoringType", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxCombo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "endSongTime", ty: "float_t", modifiers: "", def_value: None }]
explicit LevelCompletionResults(::GlobalNamespace::GameplayModifiers gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore, ::GlobalNamespace::____GlobalNamespace__RankModel__Rank rank, bool fullCombo, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance, ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType levelEndStateType, ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore, int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime) ;

/// @brief Method .ctor addr 0x1215b6c size 0x12c virtual false final false
 void _ctor(::GlobalNamespace::GameplayModifiers gameplayModifiers, int32_t modifiedScore, int32_t multipliedScore, ::GlobalNamespace::____GlobalNamespace__RankModel__Rank rank, bool fullCombo, float_t leftSaberMovementDistance, float_t rightSaberMovementDistance, float_t leftHandMovementDistance, float_t rightHandMovementDistance, ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType levelEndStateType, ::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction levelEndAction, float_t energy, int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCount, int32_t notGoodCount, int32_t okCount, int32_t maxCutScore, int32_t totalCutScore, int32_t goodCutsCountForNotesWithFullScoreScoringType, float_t averageCenterDistanceCutScoreForNotesWithFullScoreScoringType, float_t averageCutScoreForNotesWithFullScoreScoringType, int32_t maxCombo, float_t endSongTime) ;

/// @brief Method CompareTo addr 0x1215c98 size 0x124 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Serialize addr 0x1215dbc size 0x1d4 virtual true final true
 void Serialize(::LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method LiteNetLib.Utils.INetImmutableSerializable<LevelCompletionResults>.CreateFromSerializedData addr 0x1215fa0 size 0x8 virtual true final true
 ::GlobalNamespace::LevelCompletionResults LiteNetLib_Utils_INetImmutableSerializable_LevelCompletionResults__CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method CreateFromSerializedData addr 0x1215fa8 size 0x340 virtual false final false
static ::GlobalNamespace::LevelCompletionResults CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader reader) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndAction, "", "LevelCompletionResults/LevelEndAction");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LevelCompletionResults__LevelEndStateType, "", "LevelCompletionResults/LevelEndStateType");
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResults);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResults, "", "LevelCompletionResults");
