#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
namespace {
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsListener;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerOutroAnimator;
}
namespace GlobalNamespace {
class IMultiplayerLevelEndActionsPublisher;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace GlobalNamespace {
class MultiplayerSpectatorController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerFacade;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory;
}
// Type: ::MultiplayerLocalInactivePlayerFacade
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5261))
// CS Name: MultiplayerLocalInactivePlayerFacade
class CORDL_TYPE MultiplayerLocalInactivePlayerFacade : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Factory = ::GlobalNamespace::____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory;

/// @brief Convert operator to ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher
constexpr operator  ::GlobalNamespace::IMultiplayerLevelEndActionsPublisher() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IMultiplayerLevelEndActionsListener
constexpr operator  ::GlobalNamespace::IMultiplayerLevelEndActionsListener() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IStartSeekSongControllerProvider
constexpr operator  ::GlobalNamespace::IStartSeekSongControllerProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MultiplayerLocalInactivePlayerFacade() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerFacade", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerFacade(MultiplayerLocalInactivePlayerFacade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerFacade", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerFacade(MultiplayerLocalInactivePlayerFacade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalInactivePlayerFacade(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalInactivePlayerFacade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerFacade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerFacade& operator=(MultiplayerLocalInactivePlayerFacade&& o) noexcept = default;
  constexpr MultiplayerLocalInactivePlayerFacade& operator=(MultiplayerLocalInactivePlayerFacade const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController __declspec(property(get=__get__inactivePlayerSongSyncController, put=__set__inactivePlayerSongSyncController))  _inactivePlayerSongSyncController;

constexpr void __set__inactivePlayerSongSyncController(::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController value) ;

constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController __get__inactivePlayerSongSyncController() const;

 ::GlobalNamespace::MultiplayerSpectatorController __declspec(property(get=__get__spectatorController, put=__set__spectatorController))  _spectatorController;

constexpr void __set__spectatorController(::GlobalNamespace::MultiplayerSpectatorController value) ;

constexpr ::GlobalNamespace::MultiplayerSpectatorController __get__spectatorController() const;

 ::UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__introAnimator, put=__set__introAnimator))  _introAnimator;

constexpr void __set__introAnimator(::UnityEngine::Playables::PlayableDirector value) ;

constexpr ::UnityEngine::Playables::PlayableDirector __get__introAnimator() const;

 ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator __declspec(property(get=__get__outroAnimator, put=__set__outroAnimator))  _outroAnimator;

constexpr void __set__outroAnimator(::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator value) ;

constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator __get__outroAnimator() const;

 ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=__get_playerDidFinishEvent, put=__set_playerDidFinishEvent))  playerDidFinishEvent;

constexpr void __set_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> __get_playerDidFinishEvent() const;

 ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=__get_playerNetworkDidFailedEvent, put=__set_playerNetworkDidFailedEvent))  playerNetworkDidFailedEvent;

constexpr void __set_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

constexpr ::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> __get_playerNetworkDidFailedEvent() const;


// Properties

 ::GlobalNamespace::IStartSeekSongController __declspec(property(get=get_songController))  songController;

 ::GlobalNamespace::MultiplayerSpectatorController __declspec(property(get=get_spectatorController))  spectatorController;

 ::UnityEngine::GameObject __declspec(property(get=get_introAnimator))  introAnimator;

 ::UnityEngine::Playables::PlayableDirector __declspec(property(get=get_introPlayableDirector))  introPlayableDirector;

 ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator __declspec(property(get=get_outroAnimator))  outroAnimator;


// Methods

/// @brief Method get_songController addr 0x20e8508 size 0x8 virtual true final true
 ::GlobalNamespace::IStartSeekSongController get_songController() ;

/// @brief Method get_spectatorController addr 0x20e8510 size 0x8 virtual false final false
 ::GlobalNamespace::MultiplayerSpectatorController get_spectatorController() ;

/// @brief Method get_introAnimator addr 0x20e8518 size 0x1c virtual false final false
 ::UnityEngine::GameObject get_introAnimator() ;

/// @brief Method get_introPlayableDirector addr 0x20e8534 size 0x8 virtual false final false
 ::UnityEngine::Playables::PlayableDirector get_introPlayableDirector() ;

/// @brief Method get_outroAnimator addr 0x20e853c size 0x8 virtual false final false
 ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator get_outroAnimator() ;

/// @brief Method add_playerDidFinishEvent addr 0x20e8544 size 0xb0 virtual true final true
 void add_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_playerDidFinishEvent addr 0x20e85f4 size 0xb0 virtual true final true
 void remove_playerDidFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method add_playerNetworkDidFailedEvent addr 0x20e86a4 size 0xb0 virtual true final true
 void add_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_playerNetworkDidFailedEvent addr 0x20e8754 size 0xb0 virtual true final true
 void remove_playerNetworkDidFailedEvent(::System::Action_1<::GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method ReportPlayerDidFinish addr 0x20e8804 size 0x1c virtual true final true
 void ReportPlayerDidFinish(::GlobalNamespace::MultiplayerLevelCompletionResults results) ;

/// @brief Method ReportPlayerNetworkDidFailed addr 0x20e8820 size 0x1c virtual true final true
 void ReportPlayerNetworkDidFailed(::GlobalNamespace::MultiplayerLevelCompletionResults results) ;

// Ctor Parameters []
explicit MultiplayerLocalInactivePlayerFacade() ;

/// @brief Method .ctor addr 0x20e883c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Factory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5328)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10947), inst: 3371 }), TypeDefinitionIndex(TypeDefinitionIndex(5261)), TypeDefinitionIndex(TypeDefinitionIndex(10947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5260))
// CS Name: MultiplayerLocalInactivePlayerFacade::Factory
class CORDL_TYPE ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory : public ::Zenject::PlaceholderFactory_2<::GlobalNamespace::MultiplayerPlayerStartState,::GlobalNamespace::MultiplayerLocalInactivePlayerFacade> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory(____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory(____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory(void* ptr) noexcept : ::Zenject::PlaceholderFactory_2<::GlobalNamespace::MultiplayerPlayerStartState,::GlobalNamespace::MultiplayerLocalInactivePlayerFacade>(ptr) {
}


  constexpr ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory& operator=(____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory&& o) noexcept = default;
  constexpr ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory& operator=(____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory() ;

/// @brief Method .ctor addr 0x20e8844 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerFacade, "", "MultiplayerLocalInactivePlayerFacade");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerLocalInactivePlayerFacade__Factory, "", "MultiplayerLocalInactivePlayerFacade/Factory");
