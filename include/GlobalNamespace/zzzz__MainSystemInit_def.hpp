#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class PS5NetworkPlayerModel;
}
namespace GlobalNamespace {
class EnvironmentAudioEffectsPlayer;
}
namespace GlobalNamespace {
class PS4LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class PlatformLeaderboardsModel;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class PS5PlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class SkinColorSetSO;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
namespace GlobalNamespace {
class AlwaysOwnedContentContainerSO;
}
namespace GlobalNamespace {
class LeaderboardScoreUploader;
}
namespace GlobalNamespace {
class EnvironmentCommandLineArgsProvider;
}
namespace GlobalNamespace {
class MockPlayersModel;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelSO;
}
namespace GlobalNamespace {
class PS5ActivityIdsModelSO;
}
namespace GlobalNamespace {
class RecordingToolInstallerSO;
}
namespace GlobalNamespace {
class BeatmapLevelsPromoDataSO;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace GlobalNamespace {
class OculusNetworkPlayerModel;
}
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
namespace GlobalNamespace {
class MultiplayerSessionManager;
}
namespace GlobalNamespace {
class VoipManager;
}
namespace GlobalNamespace {
class DevicelessVRHelper;
}
namespace GlobalNamespace {
class CampaignProgressModel;
}
namespace GlobalNamespace {
class CachedMediaAsyncLoader;
}
namespace GlobalNamespace {
class PS4PlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class CoroutineStarter;
}
namespace GlobalNamespace {
class SteamNetworkPlayerModel;
}
namespace GlobalNamespace {
class LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class PSVRHelper;
}
namespace GlobalNamespace {
class AchievementsModelSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class CustomLevelLoader;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class OculusLevelProductsModelSO;
}
namespace GlobalNamespace {
class NetworkConfigSO;
}
namespace GlobalNamespace {
class RichPresenceManager;
}
namespace GlobalNamespace {
class AchievementIdsModelSO;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
class LocalNetworkPlayerModel;
}
namespace GlobalNamespace {
class PS4NetworkPlayerModel;
}
namespace GlobalNamespace {
class TimeHelper;
}
namespace GlobalNamespace {
class ExternalCamerasManager;
}
namespace GlobalNamespace {
class BloomPrePassLightsUpdateSystem;
}
namespace GlobalNamespace {
class SteamLevelProductsModelSO;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelSO;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class TestPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class NetworkPlayerEntitlementChecker;
}
namespace GlobalNamespace {
class AvatarPartsModelSO;
}
namespace GlobalNamespace {
class OculusVRHelper;
}
namespace GlobalNamespace {
class SteamPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class SonyAchievementIdsModelSO;
}
namespace GlobalNamespace {
class OculusPlatformAdditionalContentModel;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class AvatarDataModel;
}
namespace GlobalNamespace {
class PS5LevelProductsModelSO;
}
namespace GlobalNamespace {
class PS5LeaderboardIdsModelSO;
}
namespace GlobalNamespace {
class UnityXRHelper;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace GlobalNamespace {
class PSVR2Helper;
}
namespace GlobalNamespace {
class PS4LevelProductsModelSO;
}
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSystemInit;
}
// Type: ::MainSystemInit
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4021))
// CS Name: MainSystemInit
class CORDL_TYPE MainSystemInit : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x280};

virtual ~MainSystemInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSystemInit", modifiers: " const&", def_value: None }]
constexpr MainSystemInit(MainSystemInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSystemInit", modifiers: "&&", def_value: None }]
constexpr MainSystemInit(MainSystemInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainSystemInit(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MainSystemInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainSystemInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainSystemInit& operator=(MainSystemInit&& o) noexcept = default;
  constexpr MainSystemInit& operator=(MainSystemInit const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(GlobalNamespace::MainSettingsModelSO value) ;

constexpr GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 GlobalNamespace::AudioManagerSO __declspec(property(get=__get__audioManager, put=__set__audioManager))  _audioManager;

constexpr void __set__audioManager(GlobalNamespace::AudioManagerSO value) ;

constexpr GlobalNamespace::AudioManagerSO __get__audioManager() const;

 GlobalNamespace::PerceivedLoudnessPerLevelSO __declspec(property(get=__get__perceivedLoudnessPerLevel, put=__set__perceivedLoudnessPerLevel))  _perceivedLoudnessPerLevel;

constexpr void __set__perceivedLoudnessPerLevel(GlobalNamespace::PerceivedLoudnessPerLevelSO value) ;

constexpr GlobalNamespace::PerceivedLoudnessPerLevelSO __get__perceivedLoudnessPerLevel() const;

 GlobalNamespace::RelativeSfxVolumePerLevelSO __declspec(property(get=__get__relativeSfxVolumePerLevel, put=__set__relativeSfxVolumePerLevel))  _relativeSfxVolumePerLevel;

constexpr void __set__relativeSfxVolumePerLevel(GlobalNamespace::RelativeSfxVolumePerLevelSO value) ;

constexpr GlobalNamespace::RelativeSfxVolumePerLevelSO __get__relativeSfxVolumePerLevel() const;

 GlobalNamespace::AvatarDataModel __declspec(property(get=__get__avatarDataModel, put=__set__avatarDataModel))  _avatarDataModel;

constexpr void __set__avatarDataModel(GlobalNamespace::AvatarDataModel value) ;

constexpr GlobalNamespace::AvatarDataModel __get__avatarDataModel() const;

 GlobalNamespace::AvatarPartsModelSO __declspec(property(get=__get__avatarPartsModel, put=__set__avatarPartsModel))  _avatarPartsModel;

constexpr void __set__avatarPartsModel(GlobalNamespace::AvatarPartsModelSO value) ;

constexpr GlobalNamespace::AvatarPartsModelSO __get__avatarPartsModel() const;

 GlobalNamespace::SkinColorSetSO __declspec(property(get=__get__skinColorSet, put=__set__skinColorSet))  _skinColorSet;

constexpr void __set__skinColorSet(GlobalNamespace::SkinColorSetSO value) ;

constexpr GlobalNamespace::SkinColorSetSO __get__skinColorSet() const;

 GlobalNamespace::MirrorRendererGraphicsSettingsPresets __declspec(property(get=__get__mirrorRendererGraphicsSettingsPresets, put=__set__mirrorRendererGraphicsSettingsPresets))  _mirrorRendererGraphicsSettingsPresets;

constexpr void __set__mirrorRendererGraphicsSettingsPresets(GlobalNamespace::MirrorRendererGraphicsSettingsPresets value) ;

constexpr GlobalNamespace::MirrorRendererGraphicsSettingsPresets __get__mirrorRendererGraphicsSettingsPresets() const;

 GlobalNamespace::MainEffectGraphicsSettingsPresetsSO __declspec(property(get=__get__mainEffectGraphicsSettingsPresets, put=__set__mainEffectGraphicsSettingsPresets))  _mainEffectGraphicsSettingsPresets;

constexpr void __set__mainEffectGraphicsSettingsPresets(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO value) ;

constexpr GlobalNamespace::MainEffectGraphicsSettingsPresetsSO __get__mainEffectGraphicsSettingsPresets() const;

 GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO __declspec(property(get=__get__bloomPrePassGraphicsSettingsPresets, put=__set__bloomPrePassGraphicsSettingsPresets))  _bloomPrePassGraphicsSettingsPresets;

constexpr void __set__bloomPrePassGraphicsSettingsPresets(GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO value) ;

constexpr GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO __get__bloomPrePassGraphicsSettingsPresets() const;

 GlobalNamespace::MirrorRendererSO __declspec(property(get=__get__mirrorRenderer, put=__set__mirrorRenderer))  _mirrorRenderer;

constexpr void __set__mirrorRenderer(GlobalNamespace::MirrorRendererSO value) ;

constexpr GlobalNamespace::MirrorRendererSO __get__mirrorRenderer() const;

 GlobalNamespace::MainEffectContainerSO __declspec(property(get=__get__mainEffectContainer, put=__set__mainEffectContainer))  _mainEffectContainer;

constexpr void __set__mainEffectContainer(GlobalNamespace::MainEffectContainerSO value) ;

constexpr GlobalNamespace::MainEffectContainerSO __get__mainEffectContainer() const;

 GlobalNamespace::BloomPrePassEffectContainerSO __declspec(property(get=__get__bloomPrePassEffectContainer, put=__set__bloomPrePassEffectContainer))  _bloomPrePassEffectContainer;

constexpr void __set__bloomPrePassEffectContainer(GlobalNamespace::BloomPrePassEffectContainerSO value) ;

constexpr GlobalNamespace::BloomPrePassEffectContainerSO __get__bloomPrePassEffectContainer() const;

 GlobalNamespace::SongPackMaskModelSO __declspec(property(get=__get__songPackMaskModel, put=__set__songPackMaskModel))  _songPackMaskModel;

constexpr void __set__songPackMaskModel(GlobalNamespace::SongPackMaskModelSO value) ;

constexpr GlobalNamespace::SongPackMaskModelSO __get__songPackMaskModel() const;

 GlobalNamespace::AppStaticSettingsSO __declspec(property(get=__get__appStaticSettings, put=__set__appStaticSettings))  _appStaticSettings;

constexpr void __set__appStaticSettings(GlobalNamespace::AppStaticSettingsSO value) ;

constexpr GlobalNamespace::AppStaticSettingsSO __get__appStaticSettings() const;

 GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData))  _standardLevelScenesTransitionSetupData;

constexpr void __set__standardLevelScenesTransitionSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__standardLevelScenesTransitionSetupData() const;

 GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__missionLevelScenesTransitionSetupData, put=__set__missionLevelScenesTransitionSetupData))  _missionLevelScenesTransitionSetupData;

constexpr void __set__missionLevelScenesTransitionSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__missionLevelScenesTransitionSetupData() const;

 GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __declspec(property(get=__get__multiplayerLevelScenesTransitionSetupData, put=__set__multiplayerLevelScenesTransitionSetupData))  _multiplayerLevelScenesTransitionSetupData;

constexpr void __set__multiplayerLevelScenesTransitionSetupData(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __get__multiplayerLevelScenesTransitionSetupData() const;

 GlobalNamespace::TimeHelper __declspec(property(get=__get__timeHelperPrefab, put=__set__timeHelperPrefab))  _timeHelperPrefab;

constexpr void __set__timeHelperPrefab(GlobalNamespace::TimeHelper value) ;

constexpr GlobalNamespace::TimeHelper __get__timeHelperPrefab() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModelPrefab, put=__set__playerDataModelPrefab))  _playerDataModelPrefab;

constexpr void __set__playerDataModelPrefab(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModelPrefab() const;

 GlobalNamespace::CampaignProgressModel __declspec(property(get=__get__campaignProgressModelPrefab, put=__set__campaignProgressModelPrefab))  _campaignProgressModelPrefab;

constexpr void __set__campaignProgressModelPrefab(GlobalNamespace::CampaignProgressModel value) ;

constexpr GlobalNamespace::CampaignProgressModel __get__campaignProgressModelPrefab() const;

 GlobalNamespace::BeatmapLevelsModel __declspec(property(get=__get__beatmapLevelsModelPrefab, put=__set__beatmapLevelsModelPrefab))  _beatmapLevelsModelPrefab;

constexpr void __set__beatmapLevelsModelPrefab(GlobalNamespace::BeatmapLevelsModel value) ;

constexpr GlobalNamespace::BeatmapLevelsModel __get__beatmapLevelsModelPrefab() const;

 GlobalNamespace::CustomLevelLoader __declspec(property(get=__get__customLevelLoaderPrefab, put=__set__customLevelLoaderPrefab))  _customLevelLoaderPrefab;

constexpr void __set__customLevelLoaderPrefab(GlobalNamespace::CustomLevelLoader value) ;

constexpr GlobalNamespace::CustomLevelLoader __get__customLevelLoaderPrefab() const;

 GlobalNamespace::CachedMediaAsyncLoader __declspec(property(get=__get__cachedMediaAsyncLoaderPrefab, put=__set__cachedMediaAsyncLoaderPrefab))  _cachedMediaAsyncLoaderPrefab;

constexpr void __set__cachedMediaAsyncLoaderPrefab(GlobalNamespace::CachedMediaAsyncLoader value) ;

constexpr GlobalNamespace::CachedMediaAsyncLoader __get__cachedMediaAsyncLoaderPrefab() const;

 GlobalNamespace::ExternalCamerasManager __declspec(property(get=__get__externalCamerasManagerPrefab, put=__set__externalCamerasManagerPrefab))  _externalCamerasManagerPrefab;

constexpr void __set__externalCamerasManagerPrefab(GlobalNamespace::ExternalCamerasManager value) ;

constexpr GlobalNamespace::ExternalCamerasManager __get__externalCamerasManagerPrefab() const;

 GlobalNamespace::MultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManagerPrefab, put=__set__multiplayerSessionManagerPrefab))  _multiplayerSessionManagerPrefab;

constexpr void __set__multiplayerSessionManagerPrefab(GlobalNamespace::MultiplayerSessionManager value) ;

constexpr GlobalNamespace::MultiplayerSessionManager __get__multiplayerSessionManagerPrefab() const;

 GlobalNamespace::VoipManager __declspec(property(get=__get__voipManagerPrefab, put=__set__voipManagerPrefab))  _voipManagerPrefab;

constexpr void __set__voipManagerPrefab(GlobalNamespace::VoipManager value) ;

constexpr GlobalNamespace::VoipManager __get__voipManagerPrefab() const;

 GlobalNamespace::LocalNetworkPlayerModel __declspec(property(get=__get__localNetworkPlayerModelPrefab, put=__set__localNetworkPlayerModelPrefab))  _localNetworkPlayerModelPrefab;

constexpr void __set__localNetworkPlayerModelPrefab(GlobalNamespace::LocalNetworkPlayerModel value) ;

constexpr GlobalNamespace::LocalNetworkPlayerModel __get__localNetworkPlayerModelPrefab() const;

 GlobalNamespace::GameLiftNetworkPlayerModel __declspec(property(get=__get__gameLiftNetworkPlayerModelPrefab, put=__set__gameLiftNetworkPlayerModelPrefab))  _gameLiftNetworkPlayerModelPrefab;

constexpr void __set__gameLiftNetworkPlayerModelPrefab(GlobalNamespace::GameLiftNetworkPlayerModel value) ;

constexpr GlobalNamespace::GameLiftNetworkPlayerModel __get__gameLiftNetworkPlayerModelPrefab() const;

 GlobalNamespace::NetworkPlayerEntitlementChecker __declspec(property(get=__get__networkPlayerEntitlementCheckerPrefab, put=__set__networkPlayerEntitlementCheckerPrefab))  _networkPlayerEntitlementCheckerPrefab;

constexpr void __set__networkPlayerEntitlementCheckerPrefab(GlobalNamespace::NetworkPlayerEntitlementChecker value) ;

constexpr GlobalNamespace::NetworkPlayerEntitlementChecker __get__networkPlayerEntitlementCheckerPrefab() const;

 GlobalNamespace::HapticFeedbackManager __declspec(property(get=__get__hapticFeedbackControllerPrefab, put=__set__hapticFeedbackControllerPrefab))  _hapticFeedbackControllerPrefab;

constexpr void __set__hapticFeedbackControllerPrefab(GlobalNamespace::HapticFeedbackManager value) ;

constexpr GlobalNamespace::HapticFeedbackManager __get__hapticFeedbackControllerPrefab() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManagerPrefab, put=__set__tweeningManagerPrefab))  _tweeningManagerPrefab;

constexpr void __set__tweeningManagerPrefab(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManagerPrefab() const;

 GlobalNamespace::BloomPrePassLightsUpdateSystem __declspec(property(get=__get__lightsUpdateSystemPrefab, put=__set__lightsUpdateSystemPrefab))  _lightsUpdateSystemPrefab;

constexpr void __set__lightsUpdateSystemPrefab(GlobalNamespace::BloomPrePassLightsUpdateSystem value) ;

constexpr GlobalNamespace::BloomPrePassLightsUpdateSystem __get__lightsUpdateSystemPrefab() const;

 GlobalNamespace::EnvironmentAudioEffectsPlayer __declspec(property(get=__get__environmentAudioEffectsPlayerPrefab, put=__set__environmentAudioEffectsPlayerPrefab))  _environmentAudioEffectsPlayerPrefab;

constexpr void __set__environmentAudioEffectsPlayerPrefab(GlobalNamespace::EnvironmentAudioEffectsPlayer value) ;

constexpr GlobalNamespace::EnvironmentAudioEffectsPlayer __get__environmentAudioEffectsPlayerPrefab() const;

 GlobalNamespace::NodePoseSyncStateManager __declspec(property(get=__get__nodePoseSyncStateManagerPrefab, put=__set__nodePoseSyncStateManagerPrefab))  _nodePoseSyncStateManagerPrefab;

constexpr void __set__nodePoseSyncStateManagerPrefab(GlobalNamespace::NodePoseSyncStateManager value) ;

constexpr GlobalNamespace::NodePoseSyncStateManager __get__nodePoseSyncStateManagerPrefab() const;

 GlobalNamespace::AlwaysOwnedContentContainerSO __declspec(property(get=__get__alwaysOwnedContentContainer, put=__set__alwaysOwnedContentContainer))  _alwaysOwnedContentContainer;

constexpr void __set__alwaysOwnedContentContainer(GlobalNamespace::AlwaysOwnedContentContainerSO value) ;

constexpr GlobalNamespace::AlwaysOwnedContentContainerSO __get__alwaysOwnedContentContainer() const;

 GlobalNamespace::PSVRHelper __declspec(property(get=__get__psVRHelperPrefab, put=__set__psVRHelperPrefab))  _psVRHelperPrefab;

constexpr void __set__psVRHelperPrefab(GlobalNamespace::PSVRHelper value) ;

constexpr GlobalNamespace::PSVRHelper __get__psVRHelperPrefab() const;

 GlobalNamespace::PSVR2Helper __declspec(property(get=__get__psVR2HelperPrefab, put=__set__psVR2HelperPrefab))  _psVR2HelperPrefab;

constexpr void __set__psVR2HelperPrefab(GlobalNamespace::PSVR2Helper value) ;

constexpr GlobalNamespace::PSVR2Helper __get__psVR2HelperPrefab() const;

 GlobalNamespace::OculusVRHelper __declspec(property(get=__get__oculusVRHelperPrefab, put=__set__oculusVRHelperPrefab))  _oculusVRHelperPrefab;

constexpr void __set__oculusVRHelperPrefab(GlobalNamespace::OculusVRHelper value) ;

constexpr GlobalNamespace::OculusVRHelper __get__oculusVRHelperPrefab() const;

 GlobalNamespace::UnityXRHelper __declspec(property(get=__get__unityXRHelperPrefab, put=__set__unityXRHelperPrefab))  _unityXRHelperPrefab;

constexpr void __set__unityXRHelperPrefab(GlobalNamespace::UnityXRHelper value) ;

constexpr GlobalNamespace::UnityXRHelper __get__unityXRHelperPrefab() const;

 GlobalNamespace::DevicelessVRHelper __declspec(property(get=__get__devicelessVRHelperPrefab, put=__set__devicelessVRHelperPrefab))  _devicelessVRHelperPrefab;

constexpr void __set__devicelessVRHelperPrefab(GlobalNamespace::DevicelessVRHelper value) ;

constexpr GlobalNamespace::DevicelessVRHelper __get__devicelessVRHelperPrefab() const;

 GlobalNamespace::TestPlatformAdditionalContentModel __declspec(property(get=__get__testPlatformAdditionalContentModelPrefab, put=__set__testPlatformAdditionalContentModelPrefab))  _testPlatformAdditionalContentModelPrefab;

constexpr void __set__testPlatformAdditionalContentModelPrefab(GlobalNamespace::TestPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::TestPlatformAdditionalContentModel __get__testPlatformAdditionalContentModelPrefab() const;

 GlobalNamespace::PS4PlatformAdditionalContentModel __declspec(property(get=__get__ps4PlatformAdditionalContentModelPrefab, put=__set__ps4PlatformAdditionalContentModelPrefab))  _ps4PlatformAdditionalContentModelPrefab;

constexpr void __set__ps4PlatformAdditionalContentModelPrefab(GlobalNamespace::PS4PlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::PS4PlatformAdditionalContentModel __get__ps4PlatformAdditionalContentModelPrefab() const;

 GlobalNamespace::PS5PlatformAdditionalContentModel __declspec(property(get=__get__ps5PlatformAdditionalContentModelPrefab, put=__set__ps5PlatformAdditionalContentModelPrefab))  _ps5PlatformAdditionalContentModelPrefab;

constexpr void __set__ps5PlatformAdditionalContentModelPrefab(GlobalNamespace::PS5PlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::PS5PlatformAdditionalContentModel __get__ps5PlatformAdditionalContentModelPrefab() const;

 GlobalNamespace::OculusPlatformAdditionalContentModel __declspec(property(get=__get__oculusPlatformAdditionalContentModelPrefab, put=__set__oculusPlatformAdditionalContentModelPrefab))  _oculusPlatformAdditionalContentModelPrefab;

constexpr void __set__oculusPlatformAdditionalContentModelPrefab(GlobalNamespace::OculusPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::OculusPlatformAdditionalContentModel __get__oculusPlatformAdditionalContentModelPrefab() const;

 GlobalNamespace::SteamPlatformAdditionalContentModel __declspec(property(get=__get__steamPlatformAdditionalContentModelPrefab, put=__set__steamPlatformAdditionalContentModelPrefab))  _steamPlatformAdditionalContentModelPrefab;

constexpr void __set__steamPlatformAdditionalContentModelPrefab(GlobalNamespace::SteamPlatformAdditionalContentModel value) ;

constexpr GlobalNamespace::SteamPlatformAdditionalContentModel __get__steamPlatformAdditionalContentModelPrefab() const;

 GlobalNamespace::SteamLevelProductsModelSO __declspec(property(get=__get__steamLevelProductsModel, put=__set__steamLevelProductsModel))  _steamLevelProductsModel;

constexpr void __set__steamLevelProductsModel(GlobalNamespace::SteamLevelProductsModelSO value) ;

constexpr GlobalNamespace::SteamLevelProductsModelSO __get__steamLevelProductsModel() const;

 GlobalNamespace::OculusLevelProductsModelSO __declspec(property(get=__get__oculusLevelProducsModel, put=__set__oculusLevelProducsModel))  _oculusLevelProducsModel;

constexpr void __set__oculusLevelProducsModel(GlobalNamespace::OculusLevelProductsModelSO value) ;

constexpr GlobalNamespace::OculusLevelProductsModelSO __get__oculusLevelProducsModel() const;

 GlobalNamespace::PS4LevelProductsModelSO __declspec(property(get=__get__ps4LevelProductsModel, put=__set__ps4LevelProductsModel))  _ps4LevelProductsModel;

constexpr void __set__ps4LevelProductsModel(GlobalNamespace::PS4LevelProductsModelSO value) ;

constexpr GlobalNamespace::PS4LevelProductsModelSO __get__ps4LevelProductsModel() const;

 GlobalNamespace::PS5LevelProductsModelSO __declspec(property(get=__get__ps5LevelProductsModel, put=__set__ps5LevelProductsModel))  _ps5LevelProductsModel;

constexpr void __set__ps5LevelProductsModel(GlobalNamespace::PS5LevelProductsModelSO value) ;

constexpr GlobalNamespace::PS5LevelProductsModelSO __get__ps5LevelProductsModel() const;

 GlobalNamespace::PS4LeaderboardIdsModelSO __declspec(property(get=__get__ps4LeaderboardIdsModel, put=__set__ps4LeaderboardIdsModel))  _ps4LeaderboardIdsModel;

constexpr void __set__ps4LeaderboardIdsModel(GlobalNamespace::PS4LeaderboardIdsModelSO value) ;

constexpr GlobalNamespace::PS4LeaderboardIdsModelSO __get__ps4LeaderboardIdsModel() const;

 GlobalNamespace::PS5LeaderboardIdsModelSO __declspec(property(get=__get__ps5LeaderboardIdsModel, put=__set__ps5LeaderboardIdsModel))  _ps5LeaderboardIdsModel;

constexpr void __set__ps5LeaderboardIdsModel(GlobalNamespace::PS5LeaderboardIdsModelSO value) ;

constexpr GlobalNamespace::PS5LeaderboardIdsModelSO __get__ps5LeaderboardIdsModel() const;

 GlobalNamespace::LeaderboardIdsModelSO __declspec(property(get=__get__riftLeaderboardIdsModel, put=__set__riftLeaderboardIdsModel))  _riftLeaderboardIdsModel;

constexpr void __set__riftLeaderboardIdsModel(GlobalNamespace::LeaderboardIdsModelSO value) ;

constexpr GlobalNamespace::LeaderboardIdsModelSO __get__riftLeaderboardIdsModel() const;

 GlobalNamespace::LeaderboardIdsModelSO __declspec(property(get=__get__questLeaderboardIdsModel, put=__set__questLeaderboardIdsModel))  _questLeaderboardIdsModel;

constexpr void __set__questLeaderboardIdsModel(GlobalNamespace::LeaderboardIdsModelSO value) ;

constexpr GlobalNamespace::LeaderboardIdsModelSO __get__questLeaderboardIdsModel() const;

 GlobalNamespace::LeaderboardIdsModelSO __declspec(property(get=__get__steamLeaderboardIdsModel, put=__set__steamLeaderboardIdsModel))  _steamLeaderboardIdsModel;

constexpr void __set__steamLeaderboardIdsModel(GlobalNamespace::LeaderboardIdsModelSO value) ;

constexpr GlobalNamespace::LeaderboardIdsModelSO __get__steamLeaderboardIdsModel() const;

 GlobalNamespace::RichPresenceManager __declspec(property(get=__get__richPresenceManagerPrefab, put=__set__richPresenceManagerPrefab))  _richPresenceManagerPrefab;

constexpr void __set__richPresenceManagerPrefab(GlobalNamespace::RichPresenceManager value) ;

constexpr GlobalNamespace::RichPresenceManager __get__richPresenceManagerPrefab() const;

 GlobalNamespace::DlcPromoPanelDataSO __declspec(property(get=__get__dlcPromoPanelData, put=__set__dlcPromoPanelData))  _dlcPromoPanelData;

constexpr void __set__dlcPromoPanelData(GlobalNamespace::DlcPromoPanelDataSO value) ;

constexpr GlobalNamespace::DlcPromoPanelDataSO __get__dlcPromoPanelData() const;

 GlobalNamespace::BeatmapLevelsPromoDataSO __declspec(property(get=__get__beatmapLevelsPromoData, put=__set__beatmapLevelsPromoData))  _beatmapLevelsPromoData;

constexpr void __set__beatmapLevelsPromoData(GlobalNamespace::BeatmapLevelsPromoDataSO value) ;

constexpr GlobalNamespace::BeatmapLevelsPromoDataSO __get__beatmapLevelsPromoData() const;

 GlobalNamespace::NetworkConfigSO __declspec(property(get=__get__networkConfig, put=__set__networkConfig))  _networkConfig;

constexpr void __set__networkConfig(GlobalNamespace::NetworkConfigSO value) ;

constexpr GlobalNamespace::NetworkConfigSO __get__networkConfig() const;

 GlobalNamespace::SteamNetworkPlayerModel __declspec(property(get=__get__steamNetworkPlayerModelPrefab, put=__set__steamNetworkPlayerModelPrefab))  _steamNetworkPlayerModelPrefab;

constexpr void __set__steamNetworkPlayerModelPrefab(GlobalNamespace::SteamNetworkPlayerModel value) ;

constexpr GlobalNamespace::SteamNetworkPlayerModel __get__steamNetworkPlayerModelPrefab() const;

 GlobalNamespace::OculusNetworkPlayerModel __declspec(property(get=__get__oculusNetworkPlayerModelPrefab, put=__set__oculusNetworkPlayerModelPrefab))  _oculusNetworkPlayerModelPrefab;

constexpr void __set__oculusNetworkPlayerModelPrefab(GlobalNamespace::OculusNetworkPlayerModel value) ;

constexpr GlobalNamespace::OculusNetworkPlayerModel __get__oculusNetworkPlayerModelPrefab() const;

 GlobalNamespace::PS4NetworkPlayerModel __declspec(property(get=__get__ps4NetworkPlayerModelPrefab, put=__set__ps4NetworkPlayerModelPrefab))  _ps4NetworkPlayerModelPrefab;

constexpr void __set__ps4NetworkPlayerModelPrefab(GlobalNamespace::PS4NetworkPlayerModel value) ;

constexpr GlobalNamespace::PS4NetworkPlayerModel __get__ps4NetworkPlayerModelPrefab() const;

 GlobalNamespace::PS5NetworkPlayerModel __declspec(property(get=__get__ps5NetworkPlayerModelPrefab, put=__set__ps5NetworkPlayerModelPrefab))  _ps5NetworkPlayerModelPrefab;

constexpr void __set__ps5NetworkPlayerModelPrefab(GlobalNamespace::PS5NetworkPlayerModel value) ;

constexpr GlobalNamespace::PS5NetworkPlayerModel __get__ps5NetworkPlayerModelPrefab() const;

 GlobalNamespace::BeatmapCharacteristicCollectionSO __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection))  _beatmapCharacteristicCollection;

constexpr void __set__beatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollectionSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicCollectionSO __get__beatmapCharacteristicCollection() const;

 GlobalNamespace::LeaderboardScoreUploader __declspec(property(get=__get__leaderboardScoreUploader, put=__set__leaderboardScoreUploader))  _leaderboardScoreUploader;

constexpr void __set__leaderboardScoreUploader(GlobalNamespace::LeaderboardScoreUploader value) ;

constexpr GlobalNamespace::LeaderboardScoreUploader __get__leaderboardScoreUploader() const;

 GlobalNamespace::PlatformLeaderboardsModel __declspec(property(get=__get__platformLeaderboardsModel, put=__set__platformLeaderboardsModel))  _platformLeaderboardsModel;

constexpr void __set__platformLeaderboardsModel(GlobalNamespace::PlatformLeaderboardsModel value) ;

constexpr GlobalNamespace::PlatformLeaderboardsModel __get__platformLeaderboardsModel() const;

 GlobalNamespace::SonyAchievementIdsModelSO __declspec(property(get=__get__ps4AchievementIdsModel, put=__set__ps4AchievementIdsModel))  _ps4AchievementIdsModel;

constexpr void __set__ps4AchievementIdsModel(GlobalNamespace::SonyAchievementIdsModelSO value) ;

constexpr GlobalNamespace::SonyAchievementIdsModelSO __get__ps4AchievementIdsModel() const;

 GlobalNamespace::SonyAchievementIdsModelSO __declspec(property(get=__get__ps5AchievmentIdsModel, put=__set__ps5AchievmentIdsModel))  _ps5AchievmentIdsModel;

constexpr void __set__ps5AchievmentIdsModel(GlobalNamespace::SonyAchievementIdsModelSO value) ;

constexpr GlobalNamespace::SonyAchievementIdsModelSO __get__ps5AchievmentIdsModel() const;

 GlobalNamespace::AchievementIdsModelSO __declspec(property(get=__get__achievementIdsModel, put=__set__achievementIdsModel))  _achievementIdsModel;

constexpr void __set__achievementIdsModel(GlobalNamespace::AchievementIdsModelSO value) ;

constexpr GlobalNamespace::AchievementIdsModelSO __get__achievementIdsModel() const;

 GlobalNamespace::AchievementsModelSO __declspec(property(get=__get__achievementsModel, put=__set__achievementsModel))  _achievementsModel;

constexpr void __set__achievementsModel(GlobalNamespace::AchievementsModelSO value) ;

constexpr GlobalNamespace::AchievementsModelSO __get__achievementsModel() const;

 GlobalNamespace::PS5ActivityIdsModelSO __declspec(property(get=__get__ps5ActivityIdsModel, put=__set__ps5ActivityIdsModel))  _ps5ActivityIdsModel;

constexpr void __set__ps5ActivityIdsModel(GlobalNamespace::PS5ActivityIdsModelSO value) ;

constexpr GlobalNamespace::PS5ActivityIdsModelSO __get__ps5ActivityIdsModel() const;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get__anyBeatmapLevelSO, put=__set__anyBeatmapLevelSO))  _anyBeatmapLevelSO;

constexpr void __set__anyBeatmapLevelSO(GlobalNamespace::BeatmapLevelSO value) ;

constexpr GlobalNamespace::BeatmapLevelSO __get__anyBeatmapLevelSO() const;

 GlobalNamespace::RecordingToolInstallerSO __declspec(property(get=__get__recordingToolInstaller, put=__set__recordingToolInstaller))  _recordingToolInstaller;

constexpr void __set__recordingToolInstaller(GlobalNamespace::RecordingToolInstallerSO value) ;

constexpr GlobalNamespace::RecordingToolInstallerSO __get__recordingToolInstaller() const;

 GlobalNamespace::CoroutineStarter __declspec(property(get=__get__coroutineStarter, put=__set__coroutineStarter))  _coroutineStarter;

constexpr void __set__coroutineStarter(GlobalNamespace::CoroutineStarter value) ;

constexpr GlobalNamespace::CoroutineStarter __get__coroutineStarter() const;

 GlobalNamespace::EnvironmentCommandLineArgsProvider __declspec(property(get=__get__commandLineArgsProvider, put=__set__commandLineArgsProvider))  _commandLineArgsProvider;

constexpr void __set__commandLineArgsProvider(GlobalNamespace::EnvironmentCommandLineArgsProvider value) ;

constexpr GlobalNamespace::EnvironmentCommandLineArgsProvider __get__commandLineArgsProvider() const;

 int32_t __declspec(property(get=__get__defaultMaxCachedBeatmapLevels, put=__set__defaultMaxCachedBeatmapLevels))  _defaultMaxCachedBeatmapLevels;

constexpr void __set__defaultMaxCachedBeatmapLevels(int32_t value) ;

constexpr int32_t __get__defaultMaxCachedBeatmapLevels() const;

 int32_t __declspec(property(get=__get__ps4MaxCachedBeatmapLevels, put=__set__ps4MaxCachedBeatmapLevels))  _ps4MaxCachedBeatmapLevels;

constexpr void __set__ps4MaxCachedBeatmapLevels(int32_t value) ;

constexpr int32_t __get__ps4MaxCachedBeatmapLevels() const;

 GlobalNamespace::MockPlayersModel __declspec(property(get=__get__mockPlayersModel, put=__set__mockPlayersModel))  _mockPlayersModel;

constexpr void __set__mockPlayersModel(GlobalNamespace::MockPlayersModel value) ;

constexpr GlobalNamespace::MockPlayersModel __get__mockPlayersModel() const;


// Methods

/// @brief Method Init addr 0x20b4c74 size 0x384 virtual false final false
 void Init() ;

/// @brief Method PreInstall addr 0x20b5104 size 0x8 virtual false final false
 void PreInstall(GlobalNamespace::MockPlayersModel mockPlayersModel) ;

/// @brief Method InstallBindings addr 0x20b510c size 0x1870 virtual false final false
 void InstallBindings(Zenject::DiContainer container, bool isRunningFromTests) ;

/// @brief Method InstallHapticsController addr 0x20b6cf0 size 0x1c0 virtual false final false
 void InstallHapticsController(Zenject::DiContainer container) ;

/// @brief Method InstallRichPresence addr 0x20b6a74 size 0xf0 virtual false final false
 void InstallRichPresence(Zenject::DiContainer container, bool isRunningFromTests) ;

/// @brief Method InstallOculusDestinationBindings addr 0x20b697c size 0xf8 virtual false final false
 void InstallOculusDestinationBindings(Zenject::DiContainer container) ;

/// @brief Method InstallPlatformLeaderboardsModel addr 0x20b6b64 size 0x18c virtual false final false
 void InstallPlatformLeaderboardsModel(Zenject::DiContainer container) ;

/// @brief Method InstallPS5Bindings addr 0x20b6eb0 size 0x4 virtual false final false
 void InstallPS5Bindings(Zenject::DiContainer container) ;

/// @brief Method InstallPS4Bindings addr 0x20b6eb4 size 0x4 virtual false final false
 void InstallPS4Bindings(Zenject::DiContainer container) ;

static GlobalNamespace::MainSystemInit New_ctor() ;

/// @brief Method .ctor addr 0x20b6eb8 size 0x74 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MainSystemInit);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSystemInit, "", "MainSystemInit");
