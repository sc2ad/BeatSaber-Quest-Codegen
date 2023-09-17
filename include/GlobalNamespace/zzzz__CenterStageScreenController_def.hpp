#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class CountdownController;
}
namespace GlobalNamespace {
class MultiplayerLobbyCenterScreenLayoutAnimator;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class BeatmapSelectionView;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ILobbyGameStateController;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class CenterStageScreenController;
}
// Type: ::CenterStageScreenController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5805))
// CS Name: CenterStageScreenController
class CORDL_TYPE CenterStageScreenController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~CenterStageScreenController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CenterStageScreenController", modifiers: " const&", def_value: None }]
constexpr CenterStageScreenController(CenterStageScreenController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CenterStageScreenController", modifiers: "&&", def_value: None }]
constexpr CenterStageScreenController(CenterStageScreenController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CenterStageScreenController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CenterStageScreenController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CenterStageScreenController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CenterStageScreenController& operator=(CenterStageScreenController&& o) noexcept = default;
  constexpr CenterStageScreenController& operator=(CenterStageScreenController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__defaultMenuLightsPreset, put=__set__defaultMenuLightsPreset))  _defaultMenuLightsPreset;

constexpr void __set__defaultMenuLightsPreset(::GlobalNamespace::MenuLightsPresetSO value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO __get__defaultMenuLightsPreset() const;

 ::GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__lobbyLightsPreset, put=__set__lobbyLightsPreset))  _lobbyLightsPreset;

constexpr void __set__lobbyLightsPreset(::GlobalNamespace::MenuLightsPresetSO value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO __get__lobbyLightsPreset() const;

 ::GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__countdownMenuLightsPreset, put=__set__countdownMenuLightsPreset))  _countdownMenuLightsPreset;

constexpr void __set__countdownMenuLightsPreset(::GlobalNamespace::MenuLightsPresetSO value) ;

constexpr ::GlobalNamespace::MenuLightsPresetSO __get__countdownMenuLightsPreset() const;

 ::GlobalNamespace::BeatmapSelectionView __declspec(property(get=__get__beatmapSelectionView, put=__set__beatmapSelectionView))  _beatmapSelectionView;

constexpr void __set__beatmapSelectionView(::GlobalNamespace::BeatmapSelectionView value) ;

constexpr ::GlobalNamespace::BeatmapSelectionView __get__beatmapSelectionView() const;

 ::GlobalNamespace::ModifiersSelectionView __declspec(property(get=__get__modifiersSelectionView, put=__set__modifiersSelectionView))  _modifiersSelectionView;

constexpr void __set__modifiersSelectionView(::GlobalNamespace::ModifiersSelectionView value) ;

constexpr ::GlobalNamespace::ModifiersSelectionView __get__modifiersSelectionView() const;

 ::GlobalNamespace::CountdownController __declspec(property(get=__get__countdownController, put=__set__countdownController))  _countdownController;

constexpr void __set__countdownController(::GlobalNamespace::CountdownController value) ;

constexpr ::GlobalNamespace::CountdownController __get__countdownController() const;

 ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator __declspec(property(get=__get__multiplayerLobbyCenterScreenLayoutAnimator, put=__set__multiplayerLobbyCenterScreenLayoutAnimator))  _multiplayerLobbyCenterScreenLayoutAnimator;

constexpr void __set__multiplayerLobbyCenterScreenLayoutAnimator(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator value) ;

constexpr ::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator __get__multiplayerLobbyCenterScreenLayoutAnimator() const;

 ::GlobalNamespace::ILobbyGameStateController __declspec(property(get=__get__lobbyGameStateController, put=__set__lobbyGameStateController))  _lobbyGameStateController;

constexpr void __set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController value) ;

constexpr ::GlobalNamespace::ILobbyGameStateController __get__lobbyGameStateController() const;

 ::GlobalNamespace::MenuLightsManager __declspec(property(get=__get__menuLightsManager, put=__set__menuLightsManager))  _menuLightsManager;

constexpr void __set__menuLightsManager(::GlobalNamespace::MenuLightsManager value) ;

constexpr ::GlobalNamespace::MenuLightsManager __get__menuLightsManager() const;

 bool __declspec(property(get=__get__countdownShown_k__BackingField, put=__set__countdownShown_k__BackingField))  _countdownShown_k__BackingField;

constexpr void __set__countdownShown_k__BackingField(bool value) ;

constexpr bool __get__countdownShown_k__BackingField() const;

 float_t __declspec(property(get=__get__countdownEndTime, put=__set__countdownEndTime))  _countdownEndTime;

constexpr void __set__countdownEndTime(float_t value) ;

constexpr float_t __get__countdownEndTime() const;


// Properties

 bool __declspec(property(get=get_countdownShown, put=set_countdownShown))  countdownShown;


// Methods

/// @brief Method get_countdownShown addr 0x2175c30 size 0x8 virtual false final false
 bool get_countdownShown() ;

/// @brief Method set_countdownShown addr 0x2175c38 size 0xc virtual false final false
 void set_countdownShown(bool value) ;

/// @brief Method Setup addr 0x2175c44 size 0x30 virtual false final false
 void Setup(bool showModifiers) ;

/// @brief Method Show addr 0x2175c74 size 0x18c virtual false final false
 void Show() ;

/// @brief Method Hide addr 0x2175f68 size 0x130 virtual false final false
 void Hide() ;

/// @brief Method ShowCountdown addr 0x21760dc size 0x3c virtual false final false
 void ShowCountdown(float_t countdownEndTime) ;

/// @brief Method HideCountdown addr 0x2176098 size 0x44 virtual false final false
 void HideCountdown(bool instant) ;

/// @brief Method SetCountdownEndTime addr 0x2176118 size 0x58 virtual false final false
 void SetCountdownEndTime(float_t countdownEndTime) ;

/// @brief Method ShowCountdownColorPreset addr 0x2176170 size 0x2c virtual false final false
 void ShowCountdownColorPreset(bool animated) ;

/// @brief Method ShowLobbyColorPreset addr 0x2175e00 size 0x2c virtual false final false
 void ShowLobbyColorPreset(bool animated) ;

/// @brief Method HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged addr 0x217619c size 0x4 virtual false final false
 void HandleLobbyGameStateControllerSelectedLevelGameplaySetupDataChanged(::GlobalNamespace::ILevelGameplaySetupData levelGameplaySetupData) ;

/// @brief Method SetNextGameplaySetupData addr 0x2175e2c size 0x13c virtual false final false
 void SetNextGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData levelGameplaySetupData) ;

// Ctor Parameters []
explicit CenterStageScreenController() ;

/// @brief Method .ctor addr 0x21761a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CenterStageScreenController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CenterStageScreenController, "", "CenterStageScreenController");
