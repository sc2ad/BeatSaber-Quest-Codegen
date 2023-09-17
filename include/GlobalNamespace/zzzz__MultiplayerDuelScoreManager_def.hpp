#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerScoreItem;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerController__State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerDuelScoreManager;
}
// Type: ::MultiplayerDuelScoreManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5302))
// CS Name: MultiplayerDuelScoreManager
class CORDL_TYPE MultiplayerDuelScoreManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MultiplayerDuelScoreManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelScoreManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerDuelScoreManager(MultiplayerDuelScoreManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerDuelScoreManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerDuelScoreManager(MultiplayerDuelScoreManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerDuelScoreManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerDuelScoreManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerDuelScoreManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerDuelScoreManager& operator=(MultiplayerDuelScoreManager&& o) noexcept = default;
  constexpr MultiplayerDuelScoreManager& operator=(MultiplayerDuelScoreManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::MultiplayerScoreItem __declspec(property(get=__get__scoreItem, put=__set__scoreItem))  _scoreItem;

constexpr void __set__scoreItem(::GlobalNamespace::MultiplayerScoreItem value) ;

constexpr ::GlobalNamespace::MultiplayerScoreItem __get__scoreItem() const;

 float_t __declspec(property(get=__get__delayBetweenScoreUpdates, put=__set__delayBetweenScoreUpdates))  _delayBetweenScoreUpdates;

constexpr void __set__delayBetweenScoreUpdates(float_t value) ;

constexpr float_t __get__delayBetweenScoreUpdates() const;

 ::GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(::GlobalNamespace::MultiplayerController value) ;

constexpr ::GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 ::GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider))  _scoreProvider;

constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr ::GlobalNamespace::MultiplayerScoreProvider __get__scoreProvider() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__opponentPlayer, put=__set__opponentPlayer))  _opponentPlayer;

constexpr void __set__opponentPlayer(::GlobalNamespace::IConnectedPlayer value) ;

constexpr ::GlobalNamespace::IConnectedPlayer __get__opponentPlayer() const;

 float_t __declspec(property(get=__get__timeSinceLastScoreUpdate, put=__set__timeSinceLastScoreUpdate))  _timeSinceLastScoreUpdate;

constexpr void __set__timeSinceLastScoreUpdate(float_t value) ;

constexpr float_t __get__timeSinceLastScoreUpdate() const;


// Methods

/// @brief Method Start addr 0x20f68f4 size 0xe0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20f6f44 size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20f7014 size 0x58 virtual false final false
 void Update() ;

/// @brief Method GetOpponentPlayer addr 0x20f69d4 size 0x3dc virtual false final false
 ::GlobalNamespace::IConnectedPlayer GetOpponentPlayer() ;

/// @brief Method UpdateScore addr 0x20f6db0 size 0x194 virtual false final false
 void UpdateScore() ;

/// @brief Method HandleStateChanged addr 0x20f706c size 0xf4 virtual false final false
 void HandleStateChanged(::GlobalNamespace::____GlobalNamespace__MultiplayerController__State newState) ;

// Ctor Parameters []
explicit MultiplayerDuelScoreManager() ;

/// @brief Method .ctor addr 0x20f7160 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerDuelScoreManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerDuelScoreManager, "", "MultiplayerDuelScoreManager");
