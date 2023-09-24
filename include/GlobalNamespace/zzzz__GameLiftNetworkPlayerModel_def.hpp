#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__GameLiftConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPlayerModel_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct PublicServerInfo;
}
namespace GlobalNamespace {
class GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams;
}
namespace BGNet::Core::GameLift {
class IGameLiftPlayerSessionProvider;
}
namespace GlobalNamespace {
class GlobalNamespace__GameLiftConnectionManager__StartClientParams;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace GlobalNamespace {
class GameLiftConnectionManager;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLiftNetworkPlayerModel;
}
// Type: ::GameLiftNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12679)), TypeDefinitionIndex(TypeDefinitionIndex(4573)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4573), inst: 2641 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4536))
// CS Name: GameLiftNetworkPlayerModel
class CORDL_TYPE GameLiftNetworkPlayerModel : public GlobalNamespace::NetworkPlayerModel_1<GlobalNamespace::GameLiftConnectionManager> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x108};

virtual ~GameLiftNetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftNetworkPlayerModel", modifiers: " const&", def_value: None }]
constexpr GameLiftNetworkPlayerModel(GameLiftNetworkPlayerModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftNetworkPlayerModel", modifiers: "&&", def_value: None }]
constexpr GameLiftNetworkPlayerModel(GameLiftNetworkPlayerModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameLiftNetworkPlayerModel(void* ptr) noexcept : GlobalNamespace::NetworkPlayerModel_1<GlobalNamespace::GameLiftConnectionManager>(ptr) {
}


  constexpr GameLiftNetworkPlayerModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameLiftNetworkPlayerModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameLiftNetworkPlayerModel& operator=(GameLiftNetworkPlayerModel&& o) noexcept = default;
  constexpr GameLiftNetworkPlayerModel& operator=(GameLiftNetworkPlayerModel const& o) noexcept = default;
                


// Fields

 BGNet::Core::GameLift::IGameLiftPlayerSessionProvider __declspec(property(get=__get__gameLiftPlayerSessionProvider, put=__set__gameLiftPlayerSessionProvider))  _gameLiftPlayerSessionProvider;

constexpr void __set__gameLiftPlayerSessionProvider(BGNet::Core::GameLift::IGameLiftPlayerSessionProvider value) ;

constexpr BGNet::Core::GameLift::IGameLiftPlayerSessionProvider __get__gameLiftPlayerSessionProvider() const;

 GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams __declspec(property(get=__get__cachedConnectToServerParams, put=__set__cachedConnectToServerParams))  _cachedConnectToServerParams;

constexpr void __set__cachedConnectToServerParams(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams value) ;

constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__ConnectToServerParams __get__cachedConnectToServerParams() const;

 GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams __declspec(property(get=__get__cachedStartClientParams, put=__set__cachedStartClientParams))  _cachedStartClientParams;

constexpr void __set__cachedStartClientParams(GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams value) ;

constexpr GlobalNamespace::GlobalNamespace__GameLiftConnectionManager__StartClientParams __get__cachedStartClientParams() const;


// Properties

 ::StringW __declspec(property(get=get_secret))  secret;

 ::StringW __declspec(property(get=get_code))  code;

 ::StringW __declspec(property(get=get_partyOwnerId))  partyOwnerId;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;


// Methods

/// @brief Method get_secret addr 0x2202630 size 0x54 virtual true final false
 ::StringW get_secret() ;

/// @brief Method get_code addr 0x2202684 size 0x54 virtual true final false
 ::StringW get_code() ;

/// @brief Method get_partyOwnerId addr 0x22026d8 size 0x8 virtual true final false
 ::StringW get_partyOwnerId() ;

/// @brief Method get_configuration addr 0x22026e0 size 0x78 virtual true final false
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_selectionMask addr 0x2202758 size 0x78 virtual true final false
 GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method Update addr 0x22027d0 size 0xc0 virtual true final false
 void Update() ;

/// @brief Method RefreshPublicServers addr 0x2202890 size 0xb8 virtual true final false
 void RefreshPublicServers(GlobalNamespace::BeatmapLevelSelectionMask localSelectionMask, GlobalNamespace::GameplayServerConfiguration localConfiguration, System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>> onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason> onFailure) ;

/// @brief Method GetConnectToServerParams addr 0x2202948 size 0xe8 virtual true final false
 GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::GameLiftConnectionManager> GetConnectToServerParams(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration, ::StringW secret, ::StringW code) ;

/// @brief Method GetStartClientParams addr 0x2202a30 size 0xd0 virtual true final false
 GlobalNamespace::IConnectionInitParams_1<GlobalNamespace::GameLiftConnectionManager> GetStartClientParams(GlobalNamespace::BeatmapLevelSelectionMask selectionMask, GlobalNamespace::GameplayServerConfiguration configuration) ;

static GlobalNamespace::GameLiftNetworkPlayerModel New_ctor() ;

/// @brief Method .ctor addr 0x2202b00 size 0xac virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameLiftNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameLiftNetworkPlayerModel, "", "GameLiftNetworkPlayerModel");
