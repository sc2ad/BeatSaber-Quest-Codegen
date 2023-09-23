#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class PlayerMissionStatsData;
}
namespace GlobalNamespace {
class MissionHelpSO;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerAgreements;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerData;
}
// Type: ::PlayerData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4737))
// CS Name: PlayerData
class CORDL_TYPE PlayerData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~PlayerData() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerData", modifiers: " const&", def_value: None }]
constexpr PlayerData(PlayerData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerData", modifiers: "&&", def_value: None }]
constexpr PlayerData(PlayerData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerData& operator=(PlayerData&& o) noexcept = default;
  constexpr PlayerData& operator=(PlayerData const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxGuestPlayers offset 0
static constexpr int32_t  kMaxGuestPlayers{10};

/// @brief Field kCurrentRegionVersion offset 0
static constexpr int32_t  kCurrentRegionVersion{1};

 ::StringW __declspec(property(get=__get__playerId_k__BackingField, put=__set__playerId_k__BackingField))  _playerId_k__BackingField;

constexpr void __set__playerId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__playerId_k__BackingField() const;

 ::StringW __declspec(property(get=__get__playerName_k__BackingField, put=__set__playerName_k__BackingField))  _playerName_k__BackingField;

constexpr void __set__playerName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__playerName_k__BackingField() const;

 bool __declspec(property(get=__get__shouldShowTutorialPrompt_k__BackingField, put=__set__shouldShowTutorialPrompt_k__BackingField))  _shouldShowTutorialPrompt_k__BackingField;

constexpr void __set__shouldShowTutorialPrompt_k__BackingField(bool value) ;

constexpr bool __get__shouldShowTutorialPrompt_k__BackingField() const;

 bool __declspec(property(get=__get__shouldShow360Warning_k__BackingField, put=__set__shouldShow360Warning_k__BackingField))  _shouldShow360Warning_k__BackingField;

constexpr void __set__shouldShow360Warning_k__BackingField(bool value) ;

constexpr bool __get__shouldShow360Warning_k__BackingField() const;

 bool __declspec(property(get=__get__agreedToEula_k__BackingField, put=__set__agreedToEula_k__BackingField))  _agreedToEula_k__BackingField;

constexpr void __set__agreedToEula_k__BackingField(bool value) ;

constexpr bool __get__agreedToEula_k__BackingField() const;

 bool __declspec(property(get=__get__didSelectLanguage_k__BackingField, put=__set__didSelectLanguage_k__BackingField))  _didSelectLanguage_k__BackingField;

constexpr void __set__didSelectLanguage_k__BackingField(bool value) ;

constexpr bool __get__didSelectLanguage_k__BackingField() const;

 bool __declspec(property(get=__get__agreedToMultiplayerDisclaimer_k__BackingField, put=__set__agreedToMultiplayerDisclaimer_k__BackingField))  _agreedToMultiplayerDisclaimer_k__BackingField;

constexpr void __set__agreedToMultiplayerDisclaimer_k__BackingField(bool value) ;

constexpr bool __get__agreedToMultiplayerDisclaimer_k__BackingField() const;

 bool __declspec(property(get=__get__avatarCreated_k__BackingField, put=__set__avatarCreated_k__BackingField))  _avatarCreated_k__BackingField;

constexpr void __set__avatarCreated_k__BackingField(bool value) ;

constexpr bool __get__avatarCreated_k__BackingField() const;

 int32_t __declspec(property(get=__get__didSelectRegionVersion_k__BackingField, put=__set__didSelectRegionVersion_k__BackingField))  _didSelectRegionVersion_k__BackingField;

constexpr void __set__didSelectRegionVersion_k__BackingField(int32_t value) ;

constexpr int32_t __get__didSelectRegionVersion_k__BackingField() const;

 GlobalNamespace::PlayerAgreements __declspec(property(get=__get__playerAgreements_k__BackingField, put=__set__playerAgreements_k__BackingField))  _playerAgreements_k__BackingField;

constexpr void __set__playerAgreements_k__BackingField(GlobalNamespace::PlayerAgreements value) ;

constexpr GlobalNamespace::PlayerAgreements __get__playerAgreements_k__BackingField() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__lastSelectedBeatmapDifficulty_k__BackingField, put=__set__lastSelectedBeatmapDifficulty_k__BackingField))  _lastSelectedBeatmapDifficulty_k__BackingField;

constexpr void __set__lastSelectedBeatmapDifficulty_k__BackingField(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get__lastSelectedBeatmapDifficulty_k__BackingField() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__lastSelectedBeatmapCharacteristic_k__BackingField, put=__set__lastSelectedBeatmapCharacteristic_k__BackingField))  _lastSelectedBeatmapCharacteristic_k__BackingField;

constexpr void __set__lastSelectedBeatmapCharacteristic_k__BackingField(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get__lastSelectedBeatmapCharacteristic_k__BackingField() const;

 GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers_k__BackingField, put=__set__gameplayModifiers_k__BackingField))  _gameplayModifiers_k__BackingField;

constexpr void __set__gameplayModifiers_k__BackingField(GlobalNamespace::GameplayModifiers value) ;

constexpr GlobalNamespace::GameplayModifiers __get__gameplayModifiers_k__BackingField() const;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=__get__playerSpecificSettings_k__BackingField, put=__set__playerSpecificSettings_k__BackingField))  _playerSpecificSettings_k__BackingField;

constexpr void __set__playerSpecificSettings_k__BackingField(GlobalNamespace::PlayerSpecificSettings value) ;

constexpr GlobalNamespace::PlayerSpecificSettings __get__playerSpecificSettings_k__BackingField() const;

 GlobalNamespace::PracticeSettings __declspec(property(get=__get__practiceSettings_k__BackingField, put=__set__practiceSettings_k__BackingField))  _practiceSettings_k__BackingField;

constexpr void __set__practiceSettings_k__BackingField(GlobalNamespace::PracticeSettings value) ;

constexpr GlobalNamespace::PracticeSettings __get__practiceSettings_k__BackingField() const;

 GlobalNamespace::PlayerAllOverallStatsData __declspec(property(get=__get__playerAllOverallStatsData_k__BackingField, put=__set__playerAllOverallStatsData_k__BackingField))  _playerAllOverallStatsData_k__BackingField;

constexpr void __set__playerAllOverallStatsData_k__BackingField(GlobalNamespace::PlayerAllOverallStatsData value) ;

constexpr GlobalNamespace::PlayerAllOverallStatsData __get__playerAllOverallStatsData_k__BackingField() const;

 System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData> __declspec(property(get=__get__levelsStatsData_k__BackingField, put=__set__levelsStatsData_k__BackingField))  _levelsStatsData_k__BackingField;

constexpr void __set__levelsStatsData_k__BackingField(System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData> __get__levelsStatsData_k__BackingField() const;

 System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData> __declspec(property(get=__get__missionsStatsData_k__BackingField, put=__set__missionsStatsData_k__BackingField))  _missionsStatsData_k__BackingField;

constexpr void __set__missionsStatsData_k__BackingField(System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData> __get__missionsStatsData_k__BackingField() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__showedMissionHelpIds_k__BackingField, put=__set__showedMissionHelpIds_k__BackingField))  _showedMissionHelpIds_k__BackingField;

constexpr void __set__showedMissionHelpIds_k__BackingField(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__showedMissionHelpIds_k__BackingField() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__guestPlayerNames_k__BackingField, put=__set__guestPlayerNames_k__BackingField))  _guestPlayerNames_k__BackingField;

constexpr void __set__guestPlayerNames_k__BackingField(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__guestPlayerNames_k__BackingField() const;

 GlobalNamespace::ColorSchemesSettings __declspec(property(get=__get__colorSchemesSettings_k__BackingField, put=__set__colorSchemesSettings_k__BackingField))  _colorSchemesSettings_k__BackingField;

constexpr void __set__colorSchemesSettings_k__BackingField(GlobalNamespace::ColorSchemesSettings value) ;

constexpr GlobalNamespace::ColorSchemesSettings __get__colorSchemesSettings_k__BackingField() const;

 GlobalNamespace::OverrideEnvironmentSettings __declspec(property(get=__get__overrideEnvironmentSettings_k__BackingField, put=__set__overrideEnvironmentSettings_k__BackingField))  _overrideEnvironmentSettings_k__BackingField;

constexpr void __set__overrideEnvironmentSettings_k__BackingField(GlobalNamespace::OverrideEnvironmentSettings value) ;

constexpr GlobalNamespace::OverrideEnvironmentSettings __get__overrideEnvironmentSettings_k__BackingField() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__favoritesLevelIds_k__BackingField, put=__set__favoritesLevelIds_k__BackingField))  _favoritesLevelIds_k__BackingField;

constexpr void __set__favoritesLevelIds_k__BackingField(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get__favoritesLevelIds_k__BackingField() const;

 GlobalNamespace::MultiplayerModeSettings __declspec(property(get=__get__multiplayerModeSettings_k__BackingField, put=__set__multiplayerModeSettings_k__BackingField))  _multiplayerModeSettings_k__BackingField;

constexpr void __set__multiplayerModeSettings_k__BackingField(GlobalNamespace::MultiplayerModeSettings value) ;

constexpr GlobalNamespace::MultiplayerModeSettings __get__multiplayerModeSettings_k__BackingField() const;

 int32_t __declspec(property(get=__get__currentDlcPromoDisplayCount_k__BackingField, put=__set__currentDlcPromoDisplayCount_k__BackingField))  _currentDlcPromoDisplayCount_k__BackingField;

constexpr void __set__currentDlcPromoDisplayCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__currentDlcPromoDisplayCount_k__BackingField() const;

 ::StringW __declspec(property(get=__get__currentDlcPromoId_k__BackingField, put=__set__currentDlcPromoId_k__BackingField))  _currentDlcPromoId_k__BackingField;

constexpr void __set__currentDlcPromoId_k__BackingField(::StringW value) ;

constexpr ::StringW __get__currentDlcPromoId_k__BackingField() const;

 System::Action __declspec(property(get=__get_favoriteLevelsSetDidChangeEvent, put=__set_favoriteLevelsSetDidChangeEvent))  favoriteLevelsSetDidChangeEvent;

constexpr void __set_favoriteLevelsSetDidChangeEvent(System::Action value) ;

constexpr System::Action __get_favoriteLevelsSetDidChangeEvent() const;

 System::Action __declspec(property(get=__get_didIncreaseNumberOfGameplaysEvent, put=__set_didIncreaseNumberOfGameplaysEvent))  didIncreaseNumberOfGameplaysEvent;

constexpr void __set_didIncreaseNumberOfGameplaysEvent(System::Action value) ;

constexpr System::Action __get_didIncreaseNumberOfGameplaysEvent() const;


// Properties

 ::StringW __declspec(property(get=get_playerId, put=set_playerId))  playerId;

 ::StringW __declspec(property(get=get_playerName, put=set_playerName))  playerName;

 bool __declspec(property(get=get_shouldShowTutorialPrompt, put=set_shouldShowTutorialPrompt))  shouldShowTutorialPrompt;

 bool __declspec(property(get=get_shouldShow360Warning, put=set_shouldShow360Warning))  shouldShow360Warning;

 bool __declspec(property(get=get_agreedToEula, put=set_agreedToEula))  agreedToEula;

 bool __declspec(property(get=get_didSelectLanguage, put=set_didSelectLanguage))  didSelectLanguage;

 bool __declspec(property(get=get_agreedToMultiplayerDisclaimer, put=set_agreedToMultiplayerDisclaimer))  agreedToMultiplayerDisclaimer;

 bool __declspec(property(get=get_avatarCreated, put=set_avatarCreated))  avatarCreated;

 int32_t __declspec(property(get=get_didSelectRegionVersion, put=set_didSelectRegionVersion))  didSelectRegionVersion;

 GlobalNamespace::PlayerAgreements __declspec(property(get=get_playerAgreements, put=set_playerAgreements))  playerAgreements;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=get_lastSelectedBeatmapDifficulty, put=set_lastSelectedBeatmapDifficulty))  lastSelectedBeatmapDifficulty;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=get_lastSelectedBeatmapCharacteristic, put=set_lastSelectedBeatmapCharacteristic))  lastSelectedBeatmapCharacteristic;

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers, put=set_gameplayModifiers))  gameplayModifiers;

 GlobalNamespace::PlayerSpecificSettings __declspec(property(get=get_playerSpecificSettings, put=set_playerSpecificSettings))  playerSpecificSettings;

 GlobalNamespace::PracticeSettings __declspec(property(get=get_practiceSettings, put=set_practiceSettings))  practiceSettings;

 GlobalNamespace::PlayerAllOverallStatsData __declspec(property(get=get_playerAllOverallStatsData, put=set_playerAllOverallStatsData))  playerAllOverallStatsData;

 System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData> __declspec(property(get=get_levelsStatsData, put=set_levelsStatsData))  levelsStatsData;

 System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData> __declspec(property(get=get_missionsStatsData, put=set_missionsStatsData))  missionsStatsData;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_showedMissionHelpIds, put=set_showedMissionHelpIds))  showedMissionHelpIds;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_guestPlayerNames, put=set_guestPlayerNames))  guestPlayerNames;

 GlobalNamespace::ColorSchemesSettings __declspec(property(get=get_colorSchemesSettings, put=set_colorSchemesSettings))  colorSchemesSettings;

 GlobalNamespace::OverrideEnvironmentSettings __declspec(property(get=get_overrideEnvironmentSettings, put=set_overrideEnvironmentSettings))  overrideEnvironmentSettings;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=get_favoritesLevelIds, put=set_favoritesLevelIds))  favoritesLevelIds;

 GlobalNamespace::MultiplayerModeSettings __declspec(property(get=get_multiplayerModeSettings, put=set_multiplayerModeSettings))  multiplayerModeSettings;

 int32_t __declspec(property(get=get_currentDlcPromoDisplayCount, put=set_currentDlcPromoDisplayCount))  currentDlcPromoDisplayCount;

 ::StringW __declspec(property(get=get_currentDlcPromoId, put=set_currentDlcPromoId))  currentDlcPromoId;


// Methods

/// @brief Method get_playerId addr 0x2220e74 size 0x8 virtual false final false
 ::StringW get_playerId() ;

/// @brief Method set_playerId addr 0x2220e7c size 0x8 virtual false final false
 void set_playerId(::StringW value) ;

/// @brief Method get_playerName addr 0x2220e84 size 0x8 virtual false final false
 ::StringW get_playerName() ;

/// @brief Method set_playerName addr 0x2220e8c size 0x8 virtual false final false
 void set_playerName(::StringW value) ;

/// @brief Method get_shouldShowTutorialPrompt addr 0x2220e94 size 0x8 virtual false final false
 bool get_shouldShowTutorialPrompt() ;

/// @brief Method set_shouldShowTutorialPrompt addr 0x2220e9c size 0xc virtual false final false
 void set_shouldShowTutorialPrompt(bool value) ;

/// @brief Method get_shouldShow360Warning addr 0x2220ea8 size 0x8 virtual false final false
 bool get_shouldShow360Warning() ;

/// @brief Method set_shouldShow360Warning addr 0x2220eb0 size 0xc virtual false final false
 void set_shouldShow360Warning(bool value) ;

/// @brief Method get_agreedToEula addr 0x2220ebc size 0x8 virtual false final false
 bool get_agreedToEula() ;

/// @brief Method set_agreedToEula addr 0x2220ec4 size 0xc virtual false final false
 void set_agreedToEula(bool value) ;

/// @brief Method get_didSelectLanguage addr 0x2220ed0 size 0x8 virtual false final false
 bool get_didSelectLanguage() ;

/// @brief Method set_didSelectLanguage addr 0x2220ed8 size 0xc virtual false final false
 void set_didSelectLanguage(bool value) ;

/// @brief Method get_agreedToMultiplayerDisclaimer addr 0x2220ee4 size 0x8 virtual false final false
 bool get_agreedToMultiplayerDisclaimer() ;

/// @brief Method set_agreedToMultiplayerDisclaimer addr 0x2220eec size 0xc virtual false final false
 void set_agreedToMultiplayerDisclaimer(bool value) ;

/// @brief Method get_avatarCreated addr 0x2220ef8 size 0x8 virtual false final false
 bool get_avatarCreated() ;

/// @brief Method set_avatarCreated addr 0x2220f00 size 0xc virtual false final false
 void set_avatarCreated(bool value) ;

/// @brief Method get_didSelectRegionVersion addr 0x2220f0c size 0x8 virtual false final false
 int32_t get_didSelectRegionVersion() ;

/// @brief Method set_didSelectRegionVersion addr 0x2220f14 size 0x8 virtual false final false
 void set_didSelectRegionVersion(int32_t value) ;

/// @brief Method get_playerAgreements addr 0x2220f1c size 0x8 virtual false final false
 GlobalNamespace::PlayerAgreements get_playerAgreements() ;

/// @brief Method set_playerAgreements addr 0x2220f24 size 0x8 virtual false final false
 void set_playerAgreements(GlobalNamespace::PlayerAgreements value) ;

/// @brief Method get_lastSelectedBeatmapDifficulty addr 0x2220f2c size 0x8 virtual false final false
 GlobalNamespace::BeatmapDifficulty get_lastSelectedBeatmapDifficulty() ;

/// @brief Method set_lastSelectedBeatmapDifficulty addr 0x2220f34 size 0x8 virtual false final false
 void set_lastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

/// @brief Method get_lastSelectedBeatmapCharacteristic addr 0x2220f3c size 0x8 virtual false final false
 GlobalNamespace::BeatmapCharacteristicSO get_lastSelectedBeatmapCharacteristic() ;

/// @brief Method set_lastSelectedBeatmapCharacteristic addr 0x2220f44 size 0x8 virtual false final false
 void set_lastSelectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

/// @brief Method get_gameplayModifiers addr 0x2220f4c size 0x8 virtual false final false
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

/// @brief Method set_gameplayModifiers addr 0x2220f54 size 0x8 virtual false final false
 void set_gameplayModifiers(GlobalNamespace::GameplayModifiers value) ;

/// @brief Method get_playerSpecificSettings addr 0x2220f5c size 0x8 virtual false final false
 GlobalNamespace::PlayerSpecificSettings get_playerSpecificSettings() ;

/// @brief Method set_playerSpecificSettings addr 0x2220f64 size 0x8 virtual false final false
 void set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings value) ;

/// @brief Method get_practiceSettings addr 0x2220f6c size 0x8 virtual false final false
 GlobalNamespace::PracticeSettings get_practiceSettings() ;

/// @brief Method set_practiceSettings addr 0x2220f74 size 0x8 virtual false final false
 void set_practiceSettings(GlobalNamespace::PracticeSettings value) ;

/// @brief Method get_playerAllOverallStatsData addr 0x2220f7c size 0x8 virtual false final false
 GlobalNamespace::PlayerAllOverallStatsData get_playerAllOverallStatsData() ;

/// @brief Method set_playerAllOverallStatsData addr 0x2220f84 size 0x8 virtual false final false
 void set_playerAllOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData value) ;

/// @brief Method get_levelsStatsData addr 0x2220f8c size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData> get_levelsStatsData() ;

/// @brief Method set_levelsStatsData addr 0x2220f94 size 0x8 virtual false final false
 void set_levelsStatsData(System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData> value) ;

/// @brief Method get_missionsStatsData addr 0x2220f9c size 0x8 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData> get_missionsStatsData() ;

/// @brief Method set_missionsStatsData addr 0x2220fa4 size 0x8 virtual false final false
 void set_missionsStatsData(System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData> value) ;

/// @brief Method get_showedMissionHelpIds addr 0x2220fac size 0x8 virtual false final false
 System::Collections::Generic::List_1<::StringW> get_showedMissionHelpIds() ;

/// @brief Method set_showedMissionHelpIds addr 0x2220fb4 size 0x8 virtual false final false
 void set_showedMissionHelpIds(System::Collections::Generic::List_1<::StringW> value) ;

/// @brief Method get_guestPlayerNames addr 0x2220fbc size 0x8 virtual false final false
 System::Collections::Generic::List_1<::StringW> get_guestPlayerNames() ;

/// @brief Method set_guestPlayerNames addr 0x2220fc4 size 0x8 virtual false final false
 void set_guestPlayerNames(System::Collections::Generic::List_1<::StringW> value) ;

/// @brief Method get_colorSchemesSettings addr 0x2220fcc size 0x8 virtual false final false
 GlobalNamespace::ColorSchemesSettings get_colorSchemesSettings() ;

/// @brief Method set_colorSchemesSettings addr 0x2220fd4 size 0x8 virtual false final false
 void set_colorSchemesSettings(GlobalNamespace::ColorSchemesSettings value) ;

/// @brief Method get_overrideEnvironmentSettings addr 0x2220fdc size 0x8 virtual false final false
 GlobalNamespace::OverrideEnvironmentSettings get_overrideEnvironmentSettings() ;

/// @brief Method set_overrideEnvironmentSettings addr 0x2220fe4 size 0x8 virtual false final false
 void set_overrideEnvironmentSettings(GlobalNamespace::OverrideEnvironmentSettings value) ;

/// @brief Method get_favoritesLevelIds addr 0x2220fec size 0x8 virtual false final false
 System::Collections::Generic::HashSet_1<::StringW> get_favoritesLevelIds() ;

/// @brief Method set_favoritesLevelIds addr 0x2220ff4 size 0x8 virtual false final false
 void set_favoritesLevelIds(System::Collections::Generic::HashSet_1<::StringW> value) ;

/// @brief Method get_multiplayerModeSettings addr 0x2220ffc size 0x8 virtual false final false
 GlobalNamespace::MultiplayerModeSettings get_multiplayerModeSettings() ;

/// @brief Method set_multiplayerModeSettings addr 0x2221004 size 0x8 virtual false final false
 void set_multiplayerModeSettings(GlobalNamespace::MultiplayerModeSettings value) ;

/// @brief Method get_currentDlcPromoDisplayCount addr 0x222100c size 0x8 virtual false final false
 int32_t get_currentDlcPromoDisplayCount() ;

/// @brief Method set_currentDlcPromoDisplayCount addr 0x2221014 size 0x8 virtual false final false
 void set_currentDlcPromoDisplayCount(int32_t value) ;

/// @brief Method get_currentDlcPromoId addr 0x222101c size 0x8 virtual false final false
 ::StringW get_currentDlcPromoId() ;

/// @brief Method set_currentDlcPromoId addr 0x2221024 size 0x8 virtual false final false
 void set_currentDlcPromoId(::StringW value) ;

/// @brief Method add_favoriteLevelsSetDidChangeEvent addr 0x222102c size 0x9c virtual false final false
 void add_favoriteLevelsSetDidChangeEvent(System::Action value) ;

/// @brief Method remove_favoriteLevelsSetDidChangeEvent addr 0x22210c8 size 0x9c virtual false final false
 void remove_favoriteLevelsSetDidChangeEvent(System::Action value) ;

/// @brief Method add_didIncreaseNumberOfGameplaysEvent addr 0x2221164 size 0x9c virtual false final false
 void add_didIncreaseNumberOfGameplaysEvent(System::Action value) ;

/// @brief Method remove_didIncreaseNumberOfGameplaysEvent addr 0x2221200 size 0x9c virtual false final false
 void remove_didIncreaseNumberOfGameplaysEvent(System::Action value) ;

// Ctor Parameters [CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lastSelectedBeatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "colorSchemesSettings", ty: "GlobalNamespace::ColorSchemesSettings", modifiers: "", def_value: None }, CppParam { name: "overrideEnvironmentSettings", ty: "GlobalNamespace::OverrideEnvironmentSettings", modifiers: "", def_value: None }]
explicit PlayerData(::StringW playerId, ::StringW playerName, GlobalNamespace::BeatmapCharacteristicSO lastSelectedBeatmapCharacteristic, GlobalNamespace::ColorSchemesSettings colorSchemesSettings, GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings) ;

/// @brief Method .ctor addr 0x222129c size 0x2d4 virtual false final false
 void _ctor(::StringW playerId, ::StringW playerName, GlobalNamespace::BeatmapCharacteristicSO lastSelectedBeatmapCharacteristic, GlobalNamespace::ColorSchemesSettings colorSchemesSettings, GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings) ;

// Ctor Parameters [CppParam { name: "playerId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "shouldShowTutorialPrompt", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "shouldShow360Warning", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "agreedToEula", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "didSelectLanguage", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "agreedToMultiplayerDisclaimer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "avatarCreated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "didSelectRegionVersion", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "playerAgreements", ty: "GlobalNamespace::PlayerAgreements", modifiers: "", def_value: None }, CppParam { name: "lastSelectedBeatmapDifficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "lastSelectedBeatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "gameplayModifiers", ty: "GlobalNamespace::GameplayModifiers", modifiers: "", def_value: None }, CppParam { name: "playerSpecificSettings", ty: "GlobalNamespace::PlayerSpecificSettings", modifiers: "", def_value: None }, CppParam { name: "practiceSettings", ty: "GlobalNamespace::PracticeSettings", modifiers: "", def_value: None }, CppParam { name: "playerAllOverallStatsData", ty: "GlobalNamespace::PlayerAllOverallStatsData", modifiers: "", def_value: None }, CppParam { name: "levelsStatsData", ty: "System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData>", modifiers: "", def_value: None }, CppParam { name: "missionsStatsData", ty: "System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData>", modifiers: "", def_value: None }, CppParam { name: "showedMissionHelpIds", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "guestPlayerNames", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "colorSchemesSettings", ty: "GlobalNamespace::ColorSchemesSettings", modifiers: "", def_value: None }, CppParam { name: "overrideEnvironmentSettings", ty: "GlobalNamespace::OverrideEnvironmentSettings", modifiers: "", def_value: None }, CppParam { name: "favoritesLevelIds", ty: "System::Collections::Generic::List_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "multiplayerModeSettings", ty: "GlobalNamespace::MultiplayerModeSettings", modifiers: "", def_value: None }, CppParam { name: "currentDlcPromoDisplayCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentDlcPromoId", ty: "::StringW", modifiers: "", def_value: None }]
explicit PlayerData(::StringW playerId, ::StringW playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool didSelectLanguage, bool agreedToMultiplayerDisclaimer, bool avatarCreated, int32_t didSelectRegionVersion, GlobalNamespace::PlayerAgreements playerAgreements, GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO lastSelectedBeatmapCharacteristic, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, GlobalNamespace::PlayerAllOverallStatsData playerAllOverallStatsData, System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData> levelsStatsData, System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData> missionsStatsData, System::Collections::Generic::List_1<::StringW> showedMissionHelpIds, System::Collections::Generic::List_1<::StringW> guestPlayerNames, GlobalNamespace::ColorSchemesSettings colorSchemesSettings, GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings, System::Collections::Generic::List_1<::StringW> favoritesLevelIds, GlobalNamespace::MultiplayerModeSettings multiplayerModeSettings, int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId) ;

/// @brief Method .ctor addr 0x2221570 size 0x1fc virtual false final false
 void _ctor(::StringW playerId, ::StringW playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool didSelectLanguage, bool agreedToMultiplayerDisclaimer, bool avatarCreated, int32_t didSelectRegionVersion, GlobalNamespace::PlayerAgreements playerAgreements, GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO lastSelectedBeatmapCharacteristic, GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::PlayerSpecificSettings playerSpecificSettings, GlobalNamespace::PracticeSettings practiceSettings, GlobalNamespace::PlayerAllOverallStatsData playerAllOverallStatsData, System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData> levelsStatsData, System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData> missionsStatsData, System::Collections::Generic::List_1<::StringW> showedMissionHelpIds, System::Collections::Generic::List_1<::StringW> guestPlayerNames, GlobalNamespace::ColorSchemesSettings colorSchemesSettings, GlobalNamespace::OverrideEnvironmentSettings overrideEnvironmentSettings, System::Collections::Generic::List_1<::StringW> favoritesLevelIds, GlobalNamespace::MultiplayerModeSettings multiplayerModeSettings, int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId) ;

/// @brief Method SetNewDlcPromo addr 0x222176c size 0xc virtual false final false
 void SetNewDlcPromo(::StringW dlcPromoId) ;

/// @brief Method IncreaseCurrentDlcPromoDisplayCount addr 0x2221778 size 0x10 virtual false final false
 void IncreaseCurrentDlcPromoDisplayCount() ;

/// @brief Method GetPlayerLevelStatsData addr 0x2221788 size 0x264 virtual false final false
 GlobalNamespace::PlayerLevelStatsData GetPlayerLevelStatsData(GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method GetPlayerLevelStatsData addr 0x22219ec size 0x28c virtual false final false
 GlobalNamespace::PlayerLevelStatsData GetPlayerLevelStatsData(::StringW levelId, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method GetPlayerMissionStatsData addr 0x2221c78 size 0x230 virtual false final false
 GlobalNamespace::PlayerMissionStatsData GetPlayerMissionStatsData(::StringW missionId) ;

/// @brief Method WasMissionHelpShowed addr 0x2221ea8 size 0x5c virtual false final false
 bool WasMissionHelpShowed(GlobalNamespace::MissionHelpSO missionHelp) ;

/// @brief Method MissionHelpWasShowed addr 0x2221f04 size 0xd8 virtual false final false
 void MissionHelpWasShowed(GlobalNamespace::MissionHelpSO missionHelp) ;

/// @brief Method IncreaseNumberOfGameplays addr 0x2221fdc size 0x40 virtual false final false
 void IncreaseNumberOfGameplays(GlobalNamespace::PlayerLevelStatsData playerLevelStats) ;

/// @brief Method IsLevelUserFavorite addr 0x222201c size 0xcc virtual false final false
 bool IsLevelUserFavorite(GlobalNamespace::IPreviewBeatmapLevel level) ;

/// @brief Method AddLevelToFavorites addr 0x22220e8 size 0x100 virtual false final false
 void AddLevelToFavorites(GlobalNamespace::IPreviewBeatmapLevel level) ;

/// @brief Method RemoveLevelFromFavorites addr 0x22221e8 size 0x100 virtual false final false
 void RemoveLevelFromFavorites(GlobalNamespace::IPreviewBeatmapLevel level) ;

/// @brief Method MarkTutorialAsShown addr 0x22222e8 size 0x8 virtual false final false
 void MarkTutorialAsShown() ;

/// @brief Method Mark360WarningAsShown addr 0x22222f0 size 0x8 virtual false final false
 void Mark360WarningAsShown() ;

/// @brief Method MarkEulaAsAgreed addr 0x22222f8 size 0x20 virtual false final false
 void MarkEulaAsAgreed() ;

/// @brief Method MarkLanguageAsSelected addr 0x2222318 size 0xc virtual false final false
 void MarkLanguageAsSelected() ;

/// @brief Method MarkRegionAsSelected addr 0x2222324 size 0x8 virtual false final false
 void MarkRegionAsSelected(int32_t version) ;

/// @brief Method MarkMultiplayerDisclaimerAsAgreed addr 0x222232c size 0xc virtual false final false
 void MarkMultiplayerDisclaimerAsAgreed() ;

/// @brief Method MarkPrivacyPolicyAsAgreed addr 0x2222338 size 0x20 virtual false final false
 void MarkPrivacyPolicyAsAgreed() ;

/// @brief Method MarkHealthAndSafetyAsAgreed addr 0x2222358 size 0x20 virtual false final false
 void MarkHealthAndSafetyAsAgreed() ;

/// @brief Method MarkAvatarCreated addr 0x2222378 size 0xc virtual false final false
 void MarkAvatarCreated() ;

/// @brief Method AddGuestPlayerName addr 0x2222384 size 0x158 virtual false final false
 void AddGuestPlayerName(::StringW guestPlayerName) ;

/// @brief Method DeleteAllGuestPlayers addr 0x22224dc size 0x70 virtual false final false
 void DeleteAllGuestPlayers() ;

/// @brief Method SetLastSelectedBeatmapDifficulty addr 0x222254c size 0x8 virtual false final false
 void SetLastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty beatmapDifficulty) ;

/// @brief Method SetLastSelectedBeatmapCharacteristic addr 0x2222554 size 0x8 virtual false final false
 void SetLastSelectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method SetGameplayModifiers addr 0x222255c size 0x8 virtual false final false
 void SetGameplayModifiers(GlobalNamespace::GameplayModifiers newGameplayModifiers) ;

/// @brief Method SetPlayerSpecificSettings addr 0x2222564 size 0x8 virtual false final false
 void SetPlayerSpecificSettings(GlobalNamespace::PlayerSpecificSettings newPlayerSpecificSettings) ;

/// @brief Method SetMultiplayerModeSettings addr 0x222256c size 0x8 virtual false final false
 void SetMultiplayerModeSettings(GlobalNamespace::MultiplayerModeSettings multiplayerModeSettings) ;

/// @brief Method DidSelectRegion addr 0x2222574 size 0x10 virtual false final false
 bool DidSelectRegion() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerData, "", "PlayerData");
