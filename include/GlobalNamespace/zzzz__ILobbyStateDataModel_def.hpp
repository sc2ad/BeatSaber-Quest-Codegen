#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ILobbyStateDataModel;
}
// Type: ::ILobbyStateDataModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4502))
// CS Name: ILobbyStateDataModel
class CORDL_TYPE ILobbyStateDataModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILobbyStateDataModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILobbyStateDataModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_isConnected))  isConnected;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_localPlayer))  localPlayer;

 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=get_connectedPlayers))  connectedPlayers;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=get_rawConnectedPlayers))  rawConnectedPlayers;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;


// Methods

/// @brief Method add_playerConnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerConnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerDisconnectedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method get_isConnected addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnected() ;

/// @brief Method get_localPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_localPlayer() ;

/// @brief Method get_connectedPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> get_connectedPlayers() ;

/// @brief Method get_rawConnectedPlayers addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> get_rawConnectedPlayers() ;

/// @brief Method get_configuration addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method Activate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Activate() ;

/// @brief Method Deactivate addr 0x0 size 0xffffffffffffffff virtual true final false
 void Deactivate() ;

/// @brief Method GetPlayerById addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer GetPlayerById(::StringW userId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ILobbyStateDataModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ILobbyStateDataModel, "", "ILobbyStateDataModel");
