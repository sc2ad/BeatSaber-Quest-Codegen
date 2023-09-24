#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class SceneStartHandler;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneStartSyncController;
}
// Type: ::SceneStartSyncController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4600))
// CS Name: SceneStartSyncController
class CORDL_TYPE SceneStartSyncController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SceneStartSyncController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneStartSyncController", modifiers: " const&", def_value: None }]
constexpr SceneStartSyncController(SceneStartSyncController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneStartSyncController", modifiers: "&&", def_value: None }]
constexpr SceneStartSyncController(SceneStartSyncController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneStartSyncController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SceneStartSyncController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneStartSyncController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneStartSyncController& operator=(SceneStartSyncController&& o) noexcept = default;
  constexpr SceneStartSyncController& operator=(SceneStartSyncController const& o) noexcept = default;
                


// Fields

/// @brief Field kLoadOtherTimeout offset 0
static constexpr float_t  kLoadOtherTimeout{15};

/// @brief Field kLoadSelfTimeout offset 0
static constexpr float_t  kLoadSelfTimeout{20};

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager))  _gameplayRpcManager;

constexpr void __set__gameplayRpcManager(GlobalNamespace::IGameplayRpcManager value) ;

constexpr GlobalNamespace::IGameplayRpcManager __get__gameplayRpcManager() const;

 System::Action_1<::StringW> __declspec(property(get=__get_syncStartDidSuccessEvent, put=__set_syncStartDidSuccessEvent))  syncStartDidSuccessEvent;

constexpr void __set_syncStartDidSuccessEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_syncStartDidSuccessEvent() const;

 System::Action_1<::StringW> __declspec(property(get=__get_syncStartDidReceiveTooLateEvent, put=__set_syncStartDidReceiveTooLateEvent))  syncStartDidReceiveTooLateEvent;

constexpr void __set_syncStartDidReceiveTooLateEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_syncStartDidReceiveTooLateEvent() const;

 System::Action __declspec(property(get=__get_syncStartDidFailEvent, put=__set_syncStartDidFailEvent))  syncStartDidFailEvent;

constexpr void __set_syncStartDidFailEvent(System::Action value) ;

constexpr System::Action __get_syncStartDidFailEvent() const;

 GlobalNamespace::SceneStartHandler __declspec(property(get=__get__sceneStartHandler, put=__set__sceneStartHandler))  _sceneStartHandler;

constexpr void __set__sceneStartHandler(GlobalNamespace::SceneStartHandler value) ;

constexpr GlobalNamespace::SceneStartHandler __get__sceneStartHandler() const;

 GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __declspec(property(get=__get__playersAtGameStartModel, put=__set__playersAtGameStartModel))  _playersAtGameStartModel;

constexpr void __set__playersAtGameStartModel(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel value) ;

constexpr GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __get__playersAtGameStartModel() const;

 float_t __declspec(property(get=__get__waitStartTime, put=__set__waitStartTime))  _waitStartTime;

constexpr void __set__waitStartTime(float_t value) ;

constexpr float_t __get__waitStartTime() const;

 bool __declspec(property(get=__get__sceneSyncStarted, put=__set__sceneSyncStarted))  _sceneSyncStarted;

constexpr void __set__sceneSyncStarted(bool value) ;

constexpr bool __get__sceneSyncStarted() const;


// Methods

/// @brief Method add_syncStartDidSuccessEvent addr 0x2211780 size 0xb0 virtual false final false
 void add_syncStartDidSuccessEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_syncStartDidSuccessEvent addr 0x2211830 size 0xb0 virtual false final false
 void remove_syncStartDidSuccessEvent(System::Action_1<::StringW> value) ;

/// @brief Method add_syncStartDidReceiveTooLateEvent addr 0x22118e0 size 0xb0 virtual false final false
 void add_syncStartDidReceiveTooLateEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_syncStartDidReceiveTooLateEvent addr 0x2211990 size 0xb0 virtual false final false
 void remove_syncStartDidReceiveTooLateEvent(System::Action_1<::StringW> value) ;

/// @brief Method add_syncStartDidFailEvent addr 0x2211a40 size 0x9c virtual false final false
 void add_syncStartDidFailEvent(System::Action value) ;

/// @brief Method remove_syncStartDidFailEvent addr 0x2211adc size 0x9c virtual false final false
 void remove_syncStartDidFailEvent(System::Action value) ;

/// @brief Method Start addr 0x2211b78 size 0x18 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2211b90 size 0x58 virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x2211be8 size 0x100 virtual false final false
 void OnDestroy() ;

/// @brief Method StartSceneLoadSync addr 0x2211ce8 size 0x160 virtual false final false
 void StartSceneLoadSync(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel playersAtGameStartModel) ;

/// @brief Method HandleSceneSetupDidFinish addr 0x2211e48 size 0x4c virtual false final false
 void HandleSceneSetupDidFinish(::StringW sessionGameId) ;

/// @brief Method HandleSceneSetupDidReceiveTooLate addr 0x2211e94 size 0x4c virtual false final false
 void HandleSceneSetupDidReceiveTooLate(::StringW sessionGameId) ;

static GlobalNamespace::SceneStartSyncController New_ctor() ;

/// @brief Method .ctor addr 0x2211ee0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SceneStartSyncController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneStartSyncController, "", "SceneStartSyncController");
