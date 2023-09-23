#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class PauseAnimationController;
}
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace System {
class Action;
}
namespace HMUI {
class ButtonBinder;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PauseMenuManager__InitData;
}
namespace GlobalNamespace {
class PauseMenuManager;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5166))
// CS Name: PauseMenuManager::InitData
class CORDL_TYPE GlobalNamespace__PauseMenuManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__PauseMenuManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PauseMenuManager__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PauseMenuManager__InitData(GlobalNamespace__PauseMenuManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PauseMenuManager__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PauseMenuManager__InitData(GlobalNamespace__PauseMenuManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PauseMenuManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PauseMenuManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PauseMenuManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PauseMenuManager__InitData& operator=(GlobalNamespace__PauseMenuManager__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__PauseMenuManager__InitData& operator=(GlobalNamespace__PauseMenuManager__InitData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_backButtonText, put=__set_backButtonText))  backButtonText;

constexpr void __set_backButtonText(::StringW value) ;

constexpr ::StringW __get_backButtonText() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 GlobalNamespace::BeatmapDifficulty __declspec(property(get=__get_beatmapDifficulty, put=__set_beatmapDifficulty))  beatmapDifficulty;

constexpr void __set_beatmapDifficulty(GlobalNamespace::BeatmapDifficulty value) ;

constexpr GlobalNamespace::BeatmapDifficulty __get_beatmapDifficulty() const;

 GlobalNamespace::BeatmapCharacteristicSO __declspec(property(get=__get_beatmapCharacteristic, put=__set_beatmapCharacteristic))  beatmapCharacteristic;

constexpr void __set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO value) ;

constexpr GlobalNamespace::BeatmapCharacteristicSO __get_beatmapCharacteristic() const;

 bool __declspec(property(get=__get_showRestartButton, put=__set_showRestartButton))  showRestartButton;

constexpr void __set_showRestartButton(bool value) ;

constexpr bool __get_showRestartButton() const;

 bool __declspec(property(get=__get_showLevelBar, put=__set_showLevelBar))  showLevelBar;

constexpr void __set_showLevelBar(bool value) ;

constexpr bool __get_showLevelBar() const;


// Methods

// Ctor Parameters [CppParam { name: "backButtonText", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "beatmapDifficulty", ty: "GlobalNamespace::BeatmapDifficulty", modifiers: "", def_value: None }, CppParam { name: "beatmapCharacteristic", ty: "GlobalNamespace::BeatmapCharacteristicSO", modifiers: "", def_value: None }, CppParam { name: "showRestartButton", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "showLevelBar", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__PauseMenuManager__InitData(::StringW backButtonText, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, bool showRestartButton, bool showLevelBar) ;

/// @brief Method .ctor addr 0x20d3af4 size 0x5c virtual false final false
 void _ctor(::StringW backButtonText, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::BeatmapDifficulty beatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic, bool showRestartButton, bool showLevelBar) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PauseMenuManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5167))
// CS Name: PauseMenuManager
class CORDL_TYPE PauseMenuManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__PauseMenuManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~PauseMenuManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "PauseMenuManager", modifiers: " const&", def_value: None }]
constexpr PauseMenuManager(PauseMenuManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PauseMenuManager", modifiers: "&&", def_value: None }]
constexpr PauseMenuManager(PauseMenuManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PauseMenuManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PauseMenuManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PauseMenuManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PauseMenuManager& operator=(PauseMenuManager&& o) noexcept = default;
  constexpr PauseMenuManager& operator=(PauseMenuManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PauseAnimationController __declspec(property(get=__get__pauseAnimationController, put=__set__pauseAnimationController))  _pauseAnimationController;

constexpr void __set__pauseAnimationController(GlobalNamespace::PauseAnimationController value) ;

constexpr GlobalNamespace::PauseAnimationController __get__pauseAnimationController() const;

 GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get__levelBar() const;

 UnityEngine::UI::Button __declspec(property(get=__get__continueButton, put=__set__continueButton))  _continueButton;

constexpr void __set__continueButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__continueButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__restartButton, put=__set__restartButton))  _restartButton;

constexpr void __set__restartButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__restartButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__backButton, put=__set__backButton))  _backButton;

constexpr void __set__backButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__backButton() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__backButtonText, put=__set__backButtonText))  _backButtonText;

constexpr void __set__backButtonText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__backButtonText() const;

 UnityEngine::Transform __declspec(property(get=__get__pauseContainerTransform, put=__set__pauseContainerTransform))  _pauseContainerTransform;

constexpr void __set__pauseContainerTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__pauseContainerTransform() const;

 GlobalNamespace::GlobalNamespace__PauseMenuManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__PauseMenuManager__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__PauseMenuManager__InitData __get__initData() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 GlobalNamespace::EnvironmentSpawnRotation __declspec(property(get=__get__environmentSpawnRotation, put=__set__environmentSpawnRotation))  _environmentSpawnRotation;

constexpr void __set__environmentSpawnRotation(GlobalNamespace::EnvironmentSpawnRotation value) ;

constexpr GlobalNamespace::EnvironmentSpawnRotation __get__environmentSpawnRotation() const;

 System::Action __declspec(property(get=__get_didPressContinueButtonEvent, put=__set_didPressContinueButtonEvent))  didPressContinueButtonEvent;

constexpr void __set_didPressContinueButtonEvent(System::Action value) ;

constexpr System::Action __get_didPressContinueButtonEvent() const;

 System::Action __declspec(property(get=__get_didPressMenuButtonEvent, put=__set_didPressMenuButtonEvent))  didPressMenuButtonEvent;

constexpr void __set_didPressMenuButtonEvent(System::Action value) ;

constexpr System::Action __get_didPressMenuButtonEvent() const;

 System::Action __declspec(property(get=__get_didPressRestartButtonEvent, put=__set_didPressRestartButtonEvent))  didPressRestartButtonEvent;

constexpr void __set_didPressRestartButtonEvent(System::Action value) ;

constexpr System::Action __get_didPressRestartButtonEvent() const;

 System::Action __declspec(property(get=__get_didFinishResumeAnimationEvent, put=__set_didFinishResumeAnimationEvent))  didFinishResumeAnimationEvent;

constexpr void __set_didFinishResumeAnimationEvent(System::Action value) ;

constexpr System::Action __get_didFinishResumeAnimationEvent() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 float_t __declspec(property(get=__get__disabledInteractionRemainingTime, put=__set__disabledInteractionRemainingTime))  _disabledInteractionRemainingTime;

constexpr void __set__disabledInteractionRemainingTime(float_t value) ;

constexpr float_t __get__disabledInteractionRemainingTime() const;

/// @brief Field kDisabledInteractionDuration offset 0
static constexpr float_t  kDisabledInteractionDuration{0.2};


// Methods

/// @brief Method add_didPressContinueButtonEvent addr 0x20d25d0 size 0x9c virtual false final false
 void add_didPressContinueButtonEvent(System::Action value) ;

/// @brief Method remove_didPressContinueButtonEvent addr 0x20d2dec size 0x9c virtual false final false
 void remove_didPressContinueButtonEvent(System::Action value) ;

/// @brief Method add_didPressMenuButtonEvent addr 0x20d2708 size 0x9c virtual false final false
 void add_didPressMenuButtonEvent(System::Action value) ;

/// @brief Method remove_didPressMenuButtonEvent addr 0x20d2f24 size 0x9c virtual false final false
 void remove_didPressMenuButtonEvent(System::Action value) ;

/// @brief Method add_didPressRestartButtonEvent addr 0x20d266c size 0x9c virtual false final false
 void add_didPressRestartButtonEvent(System::Action value) ;

/// @brief Method remove_didPressRestartButtonEvent addr 0x20d2e88 size 0x9c virtual false final false
 void remove_didPressRestartButtonEvent(System::Action value) ;

/// @brief Method add_didFinishResumeAnimationEvent addr 0x20d2534 size 0x9c virtual false final false
 void add_didFinishResumeAnimationEvent(System::Action value) ;

/// @brief Method remove_didFinishResumeAnimationEvent addr 0x20d2d50 size 0x9c virtual false final false
 void remove_didFinishResumeAnimationEvent(System::Action value) ;

/// @brief Method Awake addr 0x20d3518 size 0x1c4 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x20d36dc size 0x128 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d3804 size 0xe0 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20d38e4 size 0x130 virtual false final false
 void Update() ;

/// @brief Method ShowMenu addr 0x20d30dc size 0x58 virtual false final false
 void ShowMenu() ;

/// @brief Method StartResumeAnimation addr 0x20d3358 size 0x28 virtual false final false
 void StartResumeAnimation() ;

/// @brief Method HandleResumeFromPauseAnimationDidFinish addr 0x20d3ad0 size 0x1c virtual false final false
 void HandleResumeFromPauseAnimationDidFinish() ;

/// @brief Method MenuButtonPressed addr 0x20d3a98 size 0x38 virtual false final false
 void MenuButtonPressed() ;

/// @brief Method RestartButtonPressed addr 0x20d3a4c size 0x4c virtual false final false
 void RestartButtonPressed() ;

/// @brief Method ContinueButtonPressed addr 0x20d3a14 size 0x38 virtual false final false
 void ContinueButtonPressed() ;

// Ctor Parameters []
explicit PauseMenuManager() ;

/// @brief Method .ctor addr 0x20d3aec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PauseMenuManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PauseMenuManager__InitData, "", "PauseMenuManager/InitData");
NEED_NO_BOX(GlobalNamespace::PauseMenuManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseMenuManager, "", "PauseMenuManager");
