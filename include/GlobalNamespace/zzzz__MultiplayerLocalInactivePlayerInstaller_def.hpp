#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace {
namespace GlobalNamespace {
class RelativeSfxVolumePerLevelModel;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerInstaller;
}
// Type: ::MultiplayerLocalInactivePlayerInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5262))
// CS Name: MultiplayerLocalInactivePlayerInstaller
class CORDL_TYPE MultiplayerLocalInactivePlayerInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerLocalInactivePlayerInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerInstaller(MultiplayerLocalInactivePlayerInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerInstaller(MultiplayerLocalInactivePlayerInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalInactivePlayerInstaller(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerLocalInactivePlayerInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerInstaller& operator=(MultiplayerLocalInactivePlayerInstaller&& o) noexcept = default;
  constexpr MultiplayerLocalInactivePlayerInstaller& operator=(MultiplayerLocalInactivePlayerInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::AudioManagerSO __declspec(property(get=__get__audioManager, put=__set__audioManager))  _audioManager;

constexpr void __set__audioManager(::GlobalNamespace::AudioManagerSO value) ;

constexpr ::GlobalNamespace::AudioManagerSO __get__audioManager() const;

 ::GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;

 ::GlobalNamespace::PerceivedLoudnessPerLevelModel __declspec(property(get=__get__beatmapLoudnessModel, put=__set__beatmapLoudnessModel))  _beatmapLoudnessModel;

constexpr void __set__beatmapLoudnessModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel value) ;

constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel __get__beatmapLoudnessModel() const;

 ::GlobalNamespace::RelativeSfxVolumePerLevelModel __declspec(property(get=__get__relativeSfxVolumePerLevelModel, put=__set__relativeSfxVolumePerLevelModel))  _relativeSfxVolumePerLevelModel;

constexpr void __set__relativeSfxVolumePerLevelModel(::GlobalNamespace::RelativeSfxVolumePerLevelModel value) ;

constexpr ::GlobalNamespace::RelativeSfxVolumePerLevelModel __get__relativeSfxVolumePerLevelModel() const;


// Methods

/// @brief Method InstallBindings addr 0x20e888c size 0x598 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MultiplayerLocalInactivePlayerInstaller() ;

/// @brief Method .ctor addr 0x20e8e70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller, "", "MultiplayerLocalInactivePlayerInstaller");
