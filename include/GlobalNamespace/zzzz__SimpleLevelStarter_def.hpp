#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace UnityEngine {
class Component;
}
namespace HMUI {
class ButtonBinder;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace UnityEngine {
class TextAsset;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleLevelStarter;
}
// Type: ::SimpleLevelStarter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6142))
// CS Name: SimpleLevelStarter
class CORDL_TYPE SimpleLevelStarter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~SimpleLevelStarter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLevelStarter", modifiers: " const&", def_value: None }]
constexpr SimpleLevelStarter(SimpleLevelStarter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleLevelStarter", modifiers: "&&", def_value: None }]
constexpr SimpleLevelStarter(SimpleLevelStarter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleLevelStarter(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SimpleLevelStarter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleLevelStarter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleLevelStarter& operator=(SimpleLevelStarter&& o) noexcept = default;
  constexpr SimpleLevelStarter& operator=(SimpleLevelStarter const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get__level, put=__set__level))  _level;

constexpr void __set__level(::GlobalNamespace::BeatmapLevelSO value) ;

constexpr ::GlobalNamespace::BeatmapLevelSO __get__level() const;

 ::GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get__beatmapCharacteristic, put=__set__beatmapCharacteristic))  _beatmapCharacteristic;

constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr ::GlobalNamespace::BeatmapCharacteristicSO __get__beatmapCharacteristic() const;

 ::GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get__beatmapDifficulty, put=__set__beatmapDifficulty))  _beatmapDifficulty;

constexpr void __set__beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) ;

constexpr ::GlobalNamespace::BeatmapDifficulty __get__beatmapDifficulty() const;

 bool __declspec(property(get=__get__useTestNoteCutSoundEffects, put=__set__useTestNoteCutSoundEffects))  _useTestNoteCutSoundEffects;

constexpr void __set__useTestNoteCutSoundEffects(bool value) ;

constexpr bool __get__useTestNoteCutSoundEffects() const;

 bool __declspec(property(get=__get__overrideStrobeFilterSettingsToAllEffects, put=__set__overrideStrobeFilterSettingsToAllEffects))  _overrideStrobeFilterSettingsToAllEffects;

constexpr void __set__overrideStrobeFilterSettingsToAllEffects(bool value) ;

constexpr bool __get__overrideStrobeFilterSettingsToAllEffects() const;

 ::UnityEngine::TextAsset __declspec(property(get=__get__recordingTextAsset, put=__set__recordingTextAsset))  _recordingTextAsset;

constexpr void __set__recordingTextAsset(::UnityEngine::TextAsset value) ;

constexpr ::UnityEngine::TextAsset __get__recordingTextAsset() const;

 ::ArrayW<::UnityEngine::Component> __declspec(property(get=__get__prefabBindings, put=__set__prefabBindings))  _prefabBindings;

constexpr void __set__prefabBindings(::ArrayW<::UnityEngine::Component> value) ;

constexpr ::ArrayW<::UnityEngine::Component> __get__prefabBindings() const;

 ::UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(::UnityEngine::UI::Button value) ;

constexpr ::UnityEngine::UI::Button __get__button() const;

 ::GlobalNamespace::MenuTransitionsHelper __declspec(property(get=__get__menuTransitionsHelper, put=__set__menuTransitionsHelper))  _menuTransitionsHelper;

constexpr void __set__menuTransitionsHelper(::GlobalNamespace::MenuTransitionsHelper value) ;

constexpr ::GlobalNamespace::MenuTransitionsHelper __get__menuTransitionsHelper() const;

 ::GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager value) ;

constexpr ::GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 ::GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel value) ;

constexpr ::GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 ::HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(::HMUI::ButtonBinder value) ;

constexpr ::HMUI::ButtonBinder __get__buttonBinder() const;

 ::GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers value) ;

constexpr ::GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;


// Methods

/// @brief Method Awake addr 0x21d3e10 size 0xc4 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x21d3ed4 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method StartLevel addr 0x21d3ef0 size 0x2b4 virtual false final false
 void StartLevel() ;

/// @brief Method InstallEarlyBindings addr 0x21d41a4 size 0x128 virtual false final false
 void InstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, ::Zenject::DiContainer container) ;

/// @brief Method ButtonPressed addr 0x21d42cc size 0x4 virtual false final false
 void ButtonPressed() ;

/// @brief Method HandleLevelDidFinish addr 0x21d42d0 size 0x28 virtual false final false
 void HandleLevelDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO standardLevelSceneSetupData, ::GlobalNamespace::LevelCompletionResults levelCompletionResults) ;

// Ctor Parameters []
explicit SimpleLevelStarter() ;

/// @brief Method .ctor addr 0x21d42f8 size 0xd8 virtual false final false
 void _ctor() ;

/// @brief Method <StartLevel>g__AfterSceneSwitchCallback|15_0 addr 0x21d43d0 size 0x13c virtual false final false
 void _StartLevel_g__AfterSceneSwitchCallback_15_0(::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SimpleLevelStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleLevelStarter, "", "SimpleLevelStarter");
