#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
// Forward declare root types
namespace GlobalNamespace {
class INetworkPlayerModel;
}
// Type: ::INetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12744))
// CS Name: INetworkPlayerModel
class CORDL_TYPE INetworkPlayerModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetworkPlayerModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_discoveryEnabled, put=set_discoveryEnabled))  discoveryEnabled;

 bool __declspec(property(get=get_localPlayerIsPartyOwner))  localPlayerIsPartyOwner;

 bool __declspec(property(get=get_hasNetworkingFailed))  hasNetworkingFailed;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=get_partyPlayers))  partyPlayers;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=get_otherPlayers))  otherPlayers;

 GlobalNamespace::ConnectedPlayerManager __declspec(property(get=get_connectedPlayerManager))  connectedPlayerManager;


// Methods

/// @brief Method get_discoveryEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_discoveryEnabled() ;

/// @brief Method set_discoveryEnabled addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_discoveryEnabled(bool value) ;

/// @brief Method get_localPlayerIsPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_localPlayerIsPartyOwner() ;

/// @brief Method get_hasNetworkingFailed addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_hasNetworkingFailed() ;

/// @brief Method get_configuration addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_selectionMask addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_currentPartySize() ;

/// @brief Method get_partyPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> get_partyPlayers() ;

/// @brief Method get_otherPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> get_otherPlayers() ;

/// @brief Method get_connectedPlayerManager addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::ConnectedPlayerManager get_connectedPlayerManager() ;

/// @brief Method add_connectedPlayerManagerCreatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_connectedPlayerManagerCreatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_connectedPlayerManagerDestroyedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_connectedPlayerManagerDestroyedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_partyChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_partyChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_partySizeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_partySizeChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_partySizeChangedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_partySizeChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method add_joinRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_joinRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method add_inviteRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_inviteRequestedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 bool CreatePartyConnection(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T> config) ;

/// @brief Method DestroyPartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
 void DestroyPartyConnection() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INetworkPlayerModel, "", "INetworkPlayerModel");
