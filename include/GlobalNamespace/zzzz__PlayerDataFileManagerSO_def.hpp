#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System {
class Version;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class PlayerSaveData;
}
namespace GlobalNamespace {
class EnvironmentsListSO;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class ColorSchemesListSO;
}
namespace GlobalNamespace {
class EnvironmentTypeSO;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataFileManagerSO;
}
// Type: ::PlayerDataFileManagerSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4738))
// CS Name: PlayerDataFileManagerSO
class CORDL_TYPE PlayerDataFileManagerSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~PlayerDataFileManagerSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileManagerSO", modifiers: " const&", def_value: None }]
constexpr PlayerDataFileManagerSO(PlayerDataFileManagerSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerDataFileManagerSO", modifiers: "&&", def_value: None }]
constexpr PlayerDataFileManagerSO(PlayerDataFileManagerSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerDataFileManagerSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PlayerDataFileManagerSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerDataFileManagerSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerDataFileManagerSO& operator=(PlayerDataFileManagerSO&& o) noexcept = default;
  constexpr PlayerDataFileManagerSO& operator=(PlayerDataFileManagerSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSchemesListSO __declspec(property(get=__get__defaultColorSchemes, put=__set__defaultColorSchemes))  _defaultColorSchemes;

constexpr void __set__defaultColorSchemes(GlobalNamespace::ColorSchemesListSO value) ;

constexpr GlobalNamespace::ColorSchemesListSO __get__defaultColorSchemes() const;

 GlobalNamespace::EnvironmentsListSO __declspec(property(get=__get__allEnvironmentInfos, put=__set__allEnvironmentInfos))  _allEnvironmentInfos;

constexpr void __set__allEnvironmentInfos(GlobalNamespace::EnvironmentsListSO value) ;

constexpr GlobalNamespace::EnvironmentsListSO __get__allEnvironmentInfos() const;

 GlobalNamespace::EnvironmentTypeSO __declspec(property(get=__get__normalEnvironmentType, put=__set__normalEnvironmentType))  _normalEnvironmentType;

constexpr void __set__normalEnvironmentType(GlobalNamespace::EnvironmentTypeSO value) ;

constexpr GlobalNamespace::EnvironmentTypeSO __get__normalEnvironmentType() const;

 GlobalNamespace::EnvironmentTypeSO __declspec(property(get=__get__a360DegreesEnvironmentType, put=__set__a360DegreesEnvironmentType))  _a360DegreesEnvironmentType;

constexpr void __set__a360DegreesEnvironmentType(GlobalNamespace::EnvironmentTypeSO value) ;

constexpr GlobalNamespace::EnvironmentTypeSO __get__a360DegreesEnvironmentType() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__defaultLastSelectedBeatmapCharacteristic, put=__set__defaultLastSelectedBeatmapCharacteristic))  _defaultLastSelectedBeatmapCharacteristic;

constexpr void __set__defaultLastSelectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__defaultLastSelectedBeatmapCharacteristic() const;

 ::StringW __declspec(property(get=__get__buildInSongPackSerializedName, put=__set__buildInSongPackSerializedName))  _buildInSongPackSerializedName;

constexpr void __set__buildInSongPackSerializedName(::StringW value) ;

constexpr ::StringW __get__buildInSongPackSerializedName() const;

 ::StringW __declspec(property(get=__get__allSongPackSerializedName, put=__set__allSongPackSerializedName))  _allSongPackSerializedName;

constexpr void __set__allSongPackSerializedName(::StringW value) ;

constexpr ::StringW __get__allSongPackSerializedName() const;

/// @brief Field kPlayerDataFileName offset 0
static constexpr ::ConstString  kPlayerDataFileName{u"PlayerData.dat"};

/// @brief Field kTempFileName offset 0
static constexpr ::ConstString  kTempFileName{u"PlayerData.dat.tmp"};

/// @brief Field kBackupFileName offset 0
static constexpr ::ConstString  kBackupFileName{u"PlayerData.dat.bak"};

static System::Version __declspec(property(get=__get__lastVersionWithoutSavedCustomColorSchemeBoostColors, put=__set__lastVersionWithoutSavedCustomColorSchemeBoostColors))  _lastVersionWithoutSavedCustomColorSchemeBoostColors;

static void __set__lastVersionWithoutSavedCustomColorSchemeBoostColors(System::Version value) ;

static System::Version __get__lastVersionWithoutSavedCustomColorSchemeBoostColors() ;

static System::Version __declspec(property(get=__get__eulaUpdateVersion, put=__set__eulaUpdateVersion))  _eulaUpdateVersion;

static void __set__eulaUpdateVersion(System::Version value) ;

static System::Version __get__eulaUpdateVersion() ;

static System::Version __declspec(property(get=__get__lastVersionWithoutArcsOptions, put=__set__lastVersionWithoutArcsOptions))  _lastVersionWithoutArcsOptions;

static void __set__lastVersionWithoutArcsOptions(System::Version value) ;

static System::Version __get__lastVersionWithoutArcsOptions() ;


// Methods

/// @brief Method Save addr 0x2222584 size 0x110c virtual false final false
 void Save(GlobalNamespace::ISaveData saveData, GlobalNamespace::PlayerData playerData) ;

/// @brief Method Load addr 0x22239ec size 0x104 virtual false final false
 GlobalNamespace::PlayerData Load(GlobalNamespace::ISaveData saveData, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

/// @brief Method LoadFromJSONString addr 0x2223af0 size 0x1cc virtual false final false
 GlobalNamespace::PlayerData LoadFromJSONString(::StringW jsonString, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

/// @brief Method LoadFromCurrentVersion addr 0x22248f4 size 0x1100 virtual false final false
 GlobalNamespace::PlayerData LoadFromCurrentVersion(GlobalNamespace::PlayerSaveData playerSaveData, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

/// @brief Method LoadFromVersionV1_0_1 addr 0x2223db0 size 0xb44 virtual false final false
 GlobalNamespace::PlayerData LoadFromVersionV1_0_1(GlobalNamespace::PlayerSaveDataV1_0_1 playerDataModelSaveData, GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

/// @brief Method CreateDefaultPlayerData addr 0x2223cbc size 0xf4 virtual false final false
 GlobalNamespace::PlayerData CreateDefaultPlayerData() ;

/// @brief Method GetLevelIdFromV_1_0_1LevelId addr 0x2226700 size 0x68 virtual false final false
static ::StringW GetLevelIdFromV_1_0_1LevelId(::StringW oldLevelId, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method GetBeatmapCharacteristicFromV_1_0_1LevelId addr 0x2226360 size 0x3a0 virtual false final false
static GlobalNamespace::BeatmapCharacteristicSO GetBeatmapCharacteristicFromV_1_0_1LevelId(GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection, ::StringW levelId) ;

/// @brief Method CreateDefaultOverrideEnvironmentSettings addr 0x2225d1c size 0xbc virtual false final false
 GlobalNamespace::OverrideEnvironmentSettings CreateDefaultOverrideEnvironmentSettings() ;

/// @brief Method GetEnvironmentInfoBySerializedName addr 0x22267a0 size 0x1c virtual false final false
 GlobalNamespace::EnvironmentInfoSO GetEnvironmentInfoBySerializedName(::StringW environmentName) ;

/// @brief Method LoadCorrectedSongPackMask addr 0x2225dd8 size 0x70 virtual false final false
 ::StringW LoadCorrectedSongPackMask(::ArrayW<uint8_t> songMaskPackBytes) ;

// Ctor Parameters []
explicit PlayerDataFileManagerSO() ;

/// @brief Method .ctor addr 0x22267bc size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerDataFileManagerSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerDataFileManagerSO, "", "PlayerDataFileManagerSO");
