#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class ILevelRestartController;
}
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
namespace GlobalNamespace {
class GlobalNamespace__PauseController__InitData;
}
namespace GlobalNamespace {
class PauseMenuManager;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class IReturnToMenuController;
}
namespace GlobalNamespace {
class GlobalNamespace__PauseController____c__DisplayClass25_0;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PauseController__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__PauseController____c__DisplayClass25_0;
}
namespace GlobalNamespace {
class PauseController;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5163))
// CS Name: PauseController::InitData
class CORDL_TYPE GlobalNamespace__PauseController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PauseController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PauseController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PauseController__InitData(GlobalNamespace__PauseController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PauseController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PauseController__InitData(GlobalNamespace__PauseController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PauseController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PauseController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PauseController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PauseController__InitData& operator=(GlobalNamespace__PauseController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__PauseController__InitData& operator=(GlobalNamespace__PauseController__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_startPaused, put=__set_startPaused))  startPaused;

constexpr void __set_startPaused(bool value) ;

constexpr bool __get_startPaused() const;


// Methods

static GlobalNamespace::GlobalNamespace__PauseController__InitData New_ctor(bool startPaused) ;

/// @brief Method .ctor addr 0x20d34e0 size 0x28 virtual false final false
 void _ctor(bool startPaused) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass25_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5164))
// CS Name: PauseController::<>c__DisplayClass25_0
class CORDL_TYPE GlobalNamespace__PauseController____c__DisplayClass25_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PauseController____c__DisplayClass25_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PauseController____c__DisplayClass25_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PauseController____c__DisplayClass25_0(GlobalNamespace__PauseController____c__DisplayClass25_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PauseController____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PauseController____c__DisplayClass25_0(GlobalNamespace__PauseController____c__DisplayClass25_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PauseController____c__DisplayClass25_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PauseController____c__DisplayClass25_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PauseController____c__DisplayClass25_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PauseController____c__DisplayClass25_0& operator=(GlobalNamespace__PauseController____c__DisplayClass25_0&& o) noexcept = default;
  constexpr GlobalNamespace__PauseController____c__DisplayClass25_0& operator=(GlobalNamespace__PauseController____c__DisplayClass25_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(bool value) ;

constexpr bool __get_value() const;


// Methods

static GlobalNamespace::GlobalNamespace__PauseController____c__DisplayClass25_0 New_ctor() ;

/// @brief Method .ctor addr 0x20d205c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_canPause>b__0 addr 0x20d3508 size 0x10 virtual false final false
 void _get_canPause_b__0(bool newValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PauseController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5165))
// CS Name: PauseController
class CORDL_TYPE PauseController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass25_0 = GlobalNamespace::GlobalNamespace__PauseController____c__DisplayClass25_0;

using InitData = GlobalNamespace::GlobalNamespace__PauseController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~PauseController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PauseController", modifiers: " const&", def_value: None }]
constexpr PauseController(PauseController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PauseController", modifiers: "&&", def_value: None }]
constexpr PauseController(PauseController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PauseController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PauseController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PauseController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PauseController& operator=(PauseController&& o) noexcept = default;
  constexpr PauseController& operator=(PauseController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PauseMenuManager __declspec(property(get=__get__pauseMenuManager, put=__set__pauseMenuManager))  _pauseMenuManager;

constexpr void __set__pauseMenuManager(GlobalNamespace::PauseMenuManager value) ;

constexpr GlobalNamespace::PauseMenuManager __get__pauseMenuManager() const;

 GlobalNamespace::IGamePause __declspec(property(get=__get__gamePause, put=__set__gamePause))  _gamePause;

constexpr void __set__gamePause(GlobalNamespace::IGamePause value) ;

constexpr GlobalNamespace::IGamePause __get__gamePause() const;

 GlobalNamespace::IMenuButtonTrigger __declspec(property(get=__get__menuButtonTrigger, put=__set__menuButtonTrigger))  _menuButtonTrigger;

constexpr void __set__menuButtonTrigger(GlobalNamespace::IMenuButtonTrigger value) ;

constexpr GlobalNamespace::IMenuButtonTrigger __get__menuButtonTrigger() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::ILevelRestartController __declspec(property(get=__get__levelRestartController, put=__set__levelRestartController))  _levelRestartController;

constexpr void __set__levelRestartController(GlobalNamespace::ILevelRestartController value) ;

constexpr GlobalNamespace::ILevelRestartController __get__levelRestartController() const;

 GlobalNamespace::IReturnToMenuController __declspec(property(get=__get__returnToMenuController, put=__set__returnToMenuController))  _returnToMenuController;

constexpr void __set__returnToMenuController(GlobalNamespace::IReturnToMenuController value) ;

constexpr GlobalNamespace::IReturnToMenuController __get__returnToMenuController() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 GlobalNamespace::ILevelStartController __declspec(property(get=__get__levelStartController, put=__set__levelStartController))  _levelStartController;

constexpr void __set__levelStartController(GlobalNamespace::ILevelStartController value) ;

constexpr GlobalNamespace::ILevelStartController __get__levelStartController() const;

 GlobalNamespace::GlobalNamespace__PauseController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__PauseController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__PauseController__InitData __get__initData() const;

 System::Action __declspec(property(get=__get_didPauseEvent, put=__set_didPauseEvent))  didPauseEvent;

constexpr void __set_didPauseEvent(System::Action value) ;

constexpr System::Action __get_didPauseEvent() const;

 System::Action __declspec(property(get=__get_didResumeEvent, put=__set_didResumeEvent))  didResumeEvent;

constexpr void __set_didResumeEvent(System::Action value) ;

constexpr System::Action __get_didResumeEvent() const;

 System::Action_1<System::Action_1<bool>> __declspec(property(get=__get_canPauseEvent, put=__set_canPauseEvent))  canPauseEvent;

constexpr void __set_canPauseEvent(System::Action_1<System::Action_1<bool>> value) ;

constexpr System::Action_1<System::Action_1<bool>> __get_canPauseEvent() const;

 System::Action __declspec(property(get=__get_didReturnToMenuEvent, put=__set_didReturnToMenuEvent))  didReturnToMenuEvent;

constexpr void __set_didReturnToMenuEvent(System::Action value) ;

constexpr System::Action __get_didReturnToMenuEvent() const;

 bool __declspec(property(get=__get__wantsToPause, put=__set__wantsToPause))  _wantsToPause;

constexpr void __set__wantsToPause(bool value) ;

constexpr bool __get__wantsToPause() const;

 bool __declspec(property(get=__get__paused, put=__set__paused))  _paused;

constexpr void __set__paused(bool value) ;

constexpr bool __get__paused() const;


// Properties

 bool __declspec(property(get=get_wantsToPause))  wantsToPause;

 bool __declspec(property(get=get_canPause))  canPause;


// Methods

/// @brief Method add_didPauseEvent addr 0x20d1a60 size 0x9c virtual false final false
 void add_didPauseEvent(System::Action value) ;

/// @brief Method remove_didPauseEvent addr 0x20d1afc size 0x9c virtual false final false
 void remove_didPauseEvent(System::Action value) ;

/// @brief Method add_didResumeEvent addr 0x20d1b98 size 0x9c virtual false final false
 void add_didResumeEvent(System::Action value) ;

/// @brief Method remove_didResumeEvent addr 0x20d1c34 size 0x9c virtual false final false
 void remove_didResumeEvent(System::Action value) ;

/// @brief Method add_canPauseEvent addr 0x20d1cd0 size 0xb0 virtual false final false
 void add_canPauseEvent(System::Action_1<System::Action_1<bool>> value) ;

/// @brief Method remove_canPauseEvent addr 0x20d1d80 size 0xb0 virtual false final false
 void remove_canPauseEvent(System::Action_1<System::Action_1<bool>> value) ;

/// @brief Method add_didReturnToMenuEvent addr 0x20d1e30 size 0x9c virtual false final false
 void add_didReturnToMenuEvent(System::Action value) ;

/// @brief Method remove_didReturnToMenuEvent addr 0x20d1ecc size 0x9c virtual false final false
 void remove_didReturnToMenuEvent(System::Action value) ;

/// @brief Method get_wantsToPause addr 0x20d1f68 size 0x8 virtual false final false
 bool get_wantsToPause() ;

/// @brief Method get_canPause addr 0x20d1f70 size 0xec virtual false final false
 bool get_canPause() ;

/// @brief Method Start addr 0x20d2064 size 0x4d0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d2854 size 0x4fc virtual false final false
 void OnDestroy() ;

/// @brief Method OnApplicationPause addr 0x20d2fc0 size 0xc virtual false final false
 void OnApplicationPause(bool pauseStatus) ;

/// @brief Method Pause addr 0x20d2fcc size 0x110 virtual false final false
 void Pause() ;

/// @brief Method PauseGameOnStartupIfItShouldBePaused addr 0x20d3134 size 0x4c virtual false final false
 void PauseGameOnStartupIfItShouldBePaused() ;

/// @brief Method HandleLevelDidStart addr 0x20d3180 size 0x4 virtual false final false
 void HandleLevelDidStart() ;

/// @brief Method HandleLevelWillStartIntro addr 0x20d3184 size 0x4 virtual false final false
 void HandleLevelWillStartIntro() ;

/// @brief Method HandleMenuButtonTriggered addr 0x20d3188 size 0x4 virtual false final false
 void HandleMenuButtonTriggered() ;

/// @brief Method HandleInputFocusWasCaptured addr 0x20d318c size 0x4 virtual false final false
 void HandleInputFocusWasCaptured() ;

/// @brief Method HandleHMDUnmounted addr 0x20d3190 size 0x4 virtual false final false
 void HandleHMDUnmounted() ;

/// @brief Method HandlePauseMenuManagerDidFinishResumeAnimation addr 0x20d3194 size 0xec virtual false final false
 void HandlePauseMenuManagerDidFinishResumeAnimation() ;

/// @brief Method HandlePauseMenuManagerDidPressContinueButton addr 0x20d3280 size 0xd8 virtual false final false
 void HandlePauseMenuManagerDidPressContinueButton() ;

/// @brief Method HandlePauseMenuManagerDidPressRestartButton addr 0x20d3380 size 0xa0 virtual false final false
 void HandlePauseMenuManagerDidPressRestartButton() ;

/// @brief Method HandlePauseMenuManagerDidPressMenuButton addr 0x20d3420 size 0xb8 virtual false final false
 void HandlePauseMenuManagerDidPressMenuButton() ;

/// @brief Method GetDefaultPausedState addr 0x20d27a4 size 0xb0 virtual false final false
 bool GetDefaultPausedState() ;

static GlobalNamespace::PauseController New_ctor() ;

/// @brief Method .ctor addr 0x20d34d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PauseController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PauseController__InitData, "", "PauseController/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PauseController____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PauseController____c__DisplayClass25_0, "", "PauseController/<>c__DisplayClass25_0");
NEED_NO_BOX(GlobalNamespace::PauseController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PauseController, "", "PauseController");
