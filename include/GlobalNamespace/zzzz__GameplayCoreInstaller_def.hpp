#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
class MissedNoteEffectSpawner;
}
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace GlobalNamespace {
class BadNoteCutEffectSpawner;
}
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelModel;
}
namespace GlobalNamespace {
class EffectPoolsManualInstaller;
}
namespace GlobalNamespace {
class BeatLineManager;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class NoteCutScoreSpawner;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace Tweening {
class SongTimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayCoreInstaller;
}
// Type: ::GameplayCoreInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5480))
// CS Name: GameplayCoreInstaller
class CORDL_TYPE GameplayCoreInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~GameplayCoreInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayCoreInstaller", modifiers: " const&", def_value: None }]
constexpr GameplayCoreInstaller(GameplayCoreInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayCoreInstaller", modifiers: "&&", def_value: None }]
constexpr GameplayCoreInstaller(GameplayCoreInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayCoreInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr GameplayCoreInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayCoreInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayCoreInstaller& operator=(GameplayCoreInstaller&& o) noexcept = default;
  constexpr GameplayCoreInstaller& operator=(GameplayCoreInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatLineManager __declspec(property(get=__get__beatLineManagerPrefab, put=__set__beatLineManagerPrefab))  _beatLineManagerPrefab;

constexpr void __set__beatLineManagerPrefab(GlobalNamespace::BeatLineManager value) ;

constexpr GlobalNamespace::BeatLineManager __get__beatLineManagerPrefab() const;

 Tweening::SongTimeTweeningManager __declspec(property(get=__get__songTimeTweeningManager, put=__set__songTimeTweeningManager))  _songTimeTweeningManager;

constexpr void __set__songTimeTweeningManager(Tweening::SongTimeTweeningManager value) ;

constexpr Tweening::SongTimeTweeningManager __get__songTimeTweeningManager() const;

 GlobalNamespace::AudioManagerSO __declspec(property(get=__get__audioManager, put=__set__audioManager))  _audioManager;

constexpr void __set__audioManager(GlobalNamespace::AudioManagerSO value) ;

constexpr GlobalNamespace::AudioManagerSO __get__audioManager() const;

 GlobalNamespace::PlayerHeightDetector __declspec(property(get=__get__playerHeightDetectorPrefab, put=__set__playerHeightDetectorPrefab))  _playerHeightDetectorPrefab;

constexpr void __set__playerHeightDetectorPrefab(GlobalNamespace::PlayerHeightDetector value) ;

constexpr GlobalNamespace::PlayerHeightDetector __get__playerHeightDetectorPrefab() const;

 GlobalNamespace::NoteCutScoreSpawner __declspec(property(get=__get__noteCutScoreSpawnerPrefab, put=__set__noteCutScoreSpawnerPrefab))  _noteCutScoreSpawnerPrefab;

constexpr void __set__noteCutScoreSpawnerPrefab(GlobalNamespace::NoteCutScoreSpawner value) ;

constexpr GlobalNamespace::NoteCutScoreSpawner __get__noteCutScoreSpawnerPrefab() const;

 GlobalNamespace::BadNoteCutEffectSpawner __declspec(property(get=__get__badNoteCutEffectSpawnerPrefab, put=__set__badNoteCutEffectSpawnerPrefab))  _badNoteCutEffectSpawnerPrefab;

constexpr void __set__badNoteCutEffectSpawnerPrefab(GlobalNamespace::BadNoteCutEffectSpawner value) ;

constexpr GlobalNamespace::BadNoteCutEffectSpawner __get__badNoteCutEffectSpawnerPrefab() const;

 GlobalNamespace::MissedNoteEffectSpawner __declspec(property(get=__get__missedNoteEffectSpawnerPrefab, put=__set__missedNoteEffectSpawnerPrefab))  _missedNoteEffectSpawnerPrefab;

constexpr void __set__missedNoteEffectSpawnerPrefab(GlobalNamespace::MissedNoteEffectSpawner value) ;

constexpr GlobalNamespace::MissedNoteEffectSpawner __get__missedNoteEffectSpawnerPrefab() const;

 GlobalNamespace::EffectPoolsManualInstaller __declspec(property(get=__get__effectPoolsManualInstaller, put=__set__effectPoolsManualInstaller))  _effectPoolsManualInstaller;

constexpr void __set__effectPoolsManualInstaller(GlobalNamespace::EffectPoolsManualInstaller value) ;

constexpr GlobalNamespace::EffectPoolsManualInstaller __get__effectPoolsManualInstaller() const;

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;

 GlobalNamespace::PerceivedLoudnessPerLevelModel __declspec(property(get=__get__perceivedLoudnessPerLevelModel, put=__set__perceivedLoudnessPerLevelModel))  _perceivedLoudnessPerLevelModel;

constexpr void __set__perceivedLoudnessPerLevelModel(GlobalNamespace::PerceivedLoudnessPerLevelModel value) ;

constexpr GlobalNamespace::PerceivedLoudnessPerLevelModel __get__perceivedLoudnessPerLevelModel() const;

 GlobalNamespace::RelativeSfxVolumePerLevelModel __declspec(property(get=__get__relativeSfxVolumePerLevelModel, put=__set__relativeSfxVolumePerLevelModel))  _relativeSfxVolumePerLevelModel;

constexpr void __set__relativeSfxVolumePerLevelModel(GlobalNamespace::RelativeSfxVolumePerLevelModel value) ;

constexpr GlobalNamespace::RelativeSfxVolumePerLevelModel __get__relativeSfxVolumePerLevelModel() const;


// Methods

/// @brief Method InstallBindings addr 0x21180c0 size 0x1b28 virtual true final false
 void InstallBindings() ;

static GlobalNamespace::GameplayCoreInstaller New_ctor() ;

/// @brief Method .ctor addr 0x2119be8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayCoreInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayCoreInstaller, "", "GameplayCoreInstaller");
