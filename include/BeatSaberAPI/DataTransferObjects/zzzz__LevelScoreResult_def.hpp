#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
struct ____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers;
}
namespace BeatSaberAPI::DataTransferObjects {
class LevelScoreResult;
}
// Type: ::GameplayModifiers
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6179))
// CS Name: BeatSaberAPI.DataTransferObjects.LevelScoreResult::GameplayModifiers
struct CORDL_TYPE ____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers(uint32_t value__) noexcept;


                    constexpr ____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers(____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const&) = default;
                    constexpr ____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers(____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers&&) = default;
                    constexpr ____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers& operator=(____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers& operator=(____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers_Unwrapped : uint32_t {
__None = 0u,
__InstaFail = 2u,
__FailOnSaberClash = 4u,
__FastNotes = 8u,
__DisappearingArrows = 16u,
__NoBombs = 32u,
__SongSpeedFaster = 64u,
__SongSpeedSlower = 128u,
__EnabledObstacleTypeFullHeightOnly = 256u,
__EnabledObstacleTypeNoObstacles = 512u,
__EnergyTypeBattery = 1024u,
__StrictAngles = 2048u,
__NoArrows = 4096u,
__GhostNotes = 8192u,
__NoFailOn0Energy = 16384u,
__SongSpeedSuperFast = 32768u,
__ProMode = 65536u,
__ZenMode = 131072u,
__SmallCubes = 262144u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers_Unwrapped () const noexcept {
return std::bit_cast<______BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field None offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const None;

/// @brief Field InstaFail offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const InstaFail;

/// @brief Field FailOnSaberClash offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const FailOnSaberClash;

/// @brief Field FastNotes offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const FastNotes;

/// @brief Field DisappearingArrows offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const DisappearingArrows;

/// @brief Field NoBombs offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const NoBombs;

/// @brief Field SongSpeedFaster offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const SongSpeedFaster;

/// @brief Field SongSpeedSlower offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const SongSpeedSlower;

/// @brief Field EnabledObstacleTypeFullHeightOnly offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const EnabledObstacleTypeFullHeightOnly;

/// @brief Field EnabledObstacleTypeNoObstacles offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const EnabledObstacleTypeNoObstacles;

/// @brief Field EnergyTypeBattery offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const EnergyTypeBattery;

/// @brief Field StrictAngles offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const StrictAngles;

/// @brief Field NoArrows offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const NoArrows;

/// @brief Field GhostNotes offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const GhostNotes;

/// @brief Field NoFailOn0Energy offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const NoFailOn0Energy;

/// @brief Field SongSpeedSuperFast offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const SongSpeedSuperFast;

/// @brief Field ProMode offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const ProMode;

/// @brief Field ZenMode offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const ZenMode;

/// @brief Field SmallCubes offset 0
static ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers const SmallCubes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
// Type: BeatSaberAPI.DataTransferObjects::LevelScoreResult
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6180))
// CS Name: BeatSaberAPI.DataTransferObjects.LevelScoreResult
class CORDL_TYPE LevelScoreResult : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using GameplayModifiers = ::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LevelScoreResult() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelScoreResult", modifiers: " const&", def_value: None }]
constexpr LevelScoreResult(LevelScoreResult const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelScoreResult", modifiers: "&&", def_value: None }]
constexpr LevelScoreResult(LevelScoreResult&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelScoreResult(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LevelScoreResult& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelScoreResult& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelScoreResult& operator=(LevelScoreResult&& o) noexcept = default;
  constexpr LevelScoreResult& operator=(LevelScoreResult const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_leaderboardId, put=__set_leaderboardId))  leaderboardId;

constexpr void __set_leaderboardId(::StringW value) ;

constexpr ::StringW __get_leaderboardId() const;

 int32_t __declspec(property(get=__get_multipliedScore, put=__set_multipliedScore))  multipliedScore;

constexpr void __set_multipliedScore(int32_t value) ;

constexpr int32_t __get_multipliedScore() const;

 int32_t __declspec(property(get=__get_modifiedScore, put=__set_modifiedScore))  modifiedScore;

constexpr void __set_modifiedScore(int32_t value) ;

constexpr int32_t __get_modifiedScore() const;

 bool __declspec(property(get=__get_fullCombo, put=__set_fullCombo))  fullCombo;

constexpr void __set_fullCombo(bool value) ;

constexpr bool __get_fullCombo() const;

 int32_t __declspec(property(get=__get_goodCutsCount, put=__set_goodCutsCount))  goodCutsCount;

constexpr void __set_goodCutsCount(int32_t value) ;

constexpr int32_t __get_goodCutsCount() const;

 int32_t __declspec(property(get=__get_badCutsCount, put=__set_badCutsCount))  badCutsCount;

constexpr void __set_badCutsCount(int32_t value) ;

constexpr int32_t __get_badCutsCount() const;

 int32_t __declspec(property(get=__get_missedCount, put=__set_missedCount))  missedCount;

constexpr void __set_missedCount(int32_t value) ;

constexpr int32_t __get_missedCount() const;

 int32_t __declspec(property(get=__get_maxCombo, put=__set_maxCombo))  maxCombo;

constexpr void __set_maxCombo(int32_t value) ;

constexpr int32_t __get_maxCombo() const;

 ::ArrayW<::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> __declspec(property(get=__get_gameplayModifiers, put=__set_gameplayModifiers))  gameplayModifiers;

constexpr void __set_gameplayModifiers(::ArrayW<::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> value) ;

constexpr ::ArrayW<::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers> __get_gameplayModifiers() const;

 ::StringW __declspec(property(get=__get_deviceModel, put=__set_deviceModel))  deviceModel;

constexpr void __set_deviceModel(::StringW value) ;

constexpr ::StringW __get_deviceModel() const;

 ::StringW __declspec(property(get=__get_extraDataBase64, put=__set_extraDataBase64))  extraDataBase64;

constexpr void __set_extraDataBase64(::StringW value) ;

constexpr ::StringW __get_extraDataBase64() const;


// Methods

// Ctor Parameters []
explicit LevelScoreResult() ;

/// @brief Method .ctor addr 0x21d7354 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BeatSaberAPI::DataTransferObjects
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::____BeatSaberAPI__DataTransferObjects__LevelScoreResult__GameplayModifiers, "BeatSaberAPI.DataTransferObjects", "LevelScoreResult/GameplayModifiers");
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::LevelScoreResult);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::LevelScoreResult, "BeatSaberAPI.DataTransferObjects", "LevelScoreResult");
