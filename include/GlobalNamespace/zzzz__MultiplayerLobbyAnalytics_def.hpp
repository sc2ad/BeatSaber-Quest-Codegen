#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType;
}
namespace GlobalNamespace {
class GameServerLobbyFlowCoordinator;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyAnalytics;
}
// Type: ::MultiplayerLobbyAnalytics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4004))
// CS Name: MultiplayerLobbyAnalytics
class CORDL_TYPE MultiplayerLobbyAnalytics : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MultiplayerLobbyAnalytics() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAnalytics", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyAnalytics(MultiplayerLobbyAnalytics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyAnalytics", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyAnalytics(MultiplayerLobbyAnalytics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyAnalytics(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyAnalytics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyAnalytics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyAnalytics& operator=(MultiplayerLobbyAnalytics&& o) noexcept = default;
  constexpr MultiplayerLobbyAnalytics& operator=(MultiplayerLobbyAnalytics const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameServerLobbyFlowCoordinator __declspec(property(get=__get__gameServerLobbyFlowCoordinator, put=__set__gameServerLobbyFlowCoordinator))  _gameServerLobbyFlowCoordinator;

constexpr void __set__gameServerLobbyFlowCoordinator(GlobalNamespace::GameServerLobbyFlowCoordinator value) ;

constexpr GlobalNamespace::GameServerLobbyFlowCoordinator __get__gameServerLobbyFlowCoordinator() const;

 GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(GlobalNamespace::IAnalyticsModel value) ;

constexpr GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;


// Methods

/// @brief Method Awake addr 0x20b253c size 0x178 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20b26b4 size 0x1c4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleGameServerLobbyFlowCoordinatorDidSetupEvent addr 0x20b2878 size 0x16c virtual false final false
 void HandleGameServerLobbyFlowCoordinatorDidSetupEvent() ;

/// @brief Method HandleGameServerLobbyFlowCoordinatorDidFinish addr 0x20b2a64 size 0x114 virtual false final false
 void HandleGameServerLobbyFlowCoordinatorDidFinish() ;

/// @brief Method HandleGameServerLobbyFlowCoordinatorStartGameOrReady addr 0x20b2c44 size 0x114 virtual false final false
 void HandleGameServerLobbyFlowCoordinatorStartGameOrReady() ;

/// @brief Method HandleGameServerLobbyFlowCoordinatorDidOpenInvitePanel addr 0x20b2d58 size 0x114 virtual false final false
 void HandleGameServerLobbyFlowCoordinatorDidOpenInvitePanel() ;

/// @brief Method LogClick addr 0x20b2b78 size 0xcc virtual false final false
 void LogClick(System::Collections::Generic::Dictionary_2<::StringW,::StringW> clickData) ;

/// @brief Method GetEventTypeFromLobbyType addr 0x20b29e4 size 0x80 virtual false final false
 ::StringW GetEventTypeFromLobbyType(GlobalNamespace::GlobalNamespace__GameServerLobbyFlowCoordinator__LobbyType lobbyType) ;

// Ctor Parameters []
explicit MultiplayerLobbyAnalytics() ;

/// @brief Method .ctor addr 0x20b2e6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLobbyAnalytics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyAnalytics, "", "MultiplayerLobbyAnalytics");
