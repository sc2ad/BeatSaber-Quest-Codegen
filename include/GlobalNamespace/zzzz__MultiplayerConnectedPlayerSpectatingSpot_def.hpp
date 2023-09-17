#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class IMultiplayerSpectatingSpot;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerSpectatingSpotManager;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSpectatingSpot;
}
// Type: ::MultiplayerConnectedPlayerSpectatingSpot
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5349))
// CS Name: MultiplayerConnectedPlayerSpectatingSpot
class CORDL_TYPE MultiplayerConnectedPlayerSpectatingSpot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IMultiplayerSpectatingSpot
constexpr operator  ::GlobalNamespace::IMultiplayerSpectatingSpot() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MultiplayerConnectedPlayerSpectatingSpot() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSpectatingSpot", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerSpectatingSpot(MultiplayerConnectedPlayerSpectatingSpot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSpectatingSpot", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerSpectatingSpot(MultiplayerConnectedPlayerSpectatingSpot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerSpectatingSpot(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerConnectedPlayerSpectatingSpot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerSpectatingSpot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerSpectatingSpot& operator=(MultiplayerConnectedPlayerSpectatingSpot&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerSpectatingSpot& operator=(MultiplayerConnectedPlayerSpectatingSpot const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer value) ;

constexpr ::GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::MultiplayerSpectatingSpotManager __declspec(property(get=__get__spectatingSpotManager, put=__set__spectatingSpotManager))  _spectatingSpotManager;

constexpr void __set__spectatingSpotManager(::GlobalNamespace::MultiplayerSpectatingSpotManager value) ;

constexpr ::GlobalNamespace::MultiplayerSpectatingSpotManager __get__spectatingSpotManager() const;

 ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> __declspec(property(get=__get_hasBeenRemovedEvent, put=__set_hasBeenRemovedEvent))  hasBeenRemovedEvent;

constexpr void __set_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

constexpr ::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> __get_hasBeenRemovedEvent() const;

 ::System::Action_1<bool> __declspec(property(get=__get_isObservedChangedEvent, put=__set_isObservedChangedEvent))  isObservedChangedEvent;

constexpr void __set_isObservedChangedEvent(::System::Action_1<bool> value) ;

constexpr ::System::Action_1<bool> __get_isObservedChangedEvent() const;

 ::GlobalNamespace::IMultiplayerObservable __declspec(property(get=__get__observable_k__BackingField, put=__set__observable_k__BackingField))  _observable_k__BackingField;

constexpr void __set__observable_k__BackingField(::GlobalNamespace::IMultiplayerObservable value) ;

constexpr ::GlobalNamespace::IMultiplayerObservable __get__observable_k__BackingField() const;

 bool __declspec(property(get=__get__playerFailed, put=__set__playerFailed))  _playerFailed;

constexpr void __set__playerFailed(bool value) ;

constexpr bool __get__playerFailed() const;


// Properties

 ::GlobalNamespace::IMultiplayerObservable __declspec(property(get=get_observable, put=set_observable))  observable;

 ::StringW __declspec(property(get=get_spotName))  spotName;

 bool __declspec(property(get=get_isMain))  isMain;


// Methods

/// @brief Method add_hasBeenRemovedEvent addr 0x2105594 size 0xb0 virtual true final true
 void add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

/// @brief Method remove_hasBeenRemovedEvent addr 0x2105644 size 0xb0 virtual true final true
 void remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot> value) ;

/// @brief Method add_isObservedChangedEvent addr 0x21056f4 size 0xb0 virtual false final false
 void add_isObservedChangedEvent(::System::Action_1<bool> value) ;

/// @brief Method remove_isObservedChangedEvent addr 0x21057a4 size 0xb0 virtual false final false
 void remove_isObservedChangedEvent(::System::Action_1<bool> value) ;

/// @brief Method get_observable addr 0x2105854 size 0x8 virtual true final true
 ::GlobalNamespace::IMultiplayerObservable get_observable() ;

/// @brief Method set_observable addr 0x210585c size 0x8 virtual false final false
 void set_observable(::GlobalNamespace::IMultiplayerObservable value) ;

/// @brief Method get_spotName addr 0x2105864 size 0xa4 virtual true final true
 ::StringW get_spotName() ;

/// @brief Method get_isMain addr 0x2105908 size 0x8 virtual true final true
 bool get_isMain() ;

/// @brief Method Start addr 0x2105910 size 0x1f4 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2105c68 size 0x1a4 virtual false final false
 void OnDestroy() ;

/// @brief Method SetIsObserved addr 0x2105e0c size 0x20 virtual true final true
 void SetIsObserved(bool isObserved) ;

/// @brief Method ReloadBasedOnPlayerCurrentState addr 0x2105e2c size 0x174 virtual false final false
 void ReloadBasedOnPlayerCurrentState(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method HandlePlayerStateChanged addr 0x2105fa0 size 0x4 virtual false final false
 void HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

/// @brief Method HandlePlayerDisconnected addr 0x2105fa4 size 0x4 virtual false final false
 void HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer connectedPlayer) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerSpectatingSpot() ;

/// @brief Method .ctor addr 0x2105fa8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method IMultiplayerSpectatingSpot.get_transform addr 0x2105fb0 size 0x8 virtual true final true
 ::UnityEngine::Transform IMultiplayerSpectatingSpot_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot, "", "MultiplayerConnectedPlayerSpectatingSpot");
