#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
// Forward declare root types
namespace GlobalNamespace {
class INetworkPlayer;
}
// Type: ::INetworkPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12743))
// CS Name: INetworkPlayer
class CORDL_TYPE INetworkPlayer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetworkPlayer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetworkPlayer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_isMe))  isMe;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 bool __declspec(property(get=get_isMyPartyOwner))  isMyPartyOwner;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_connectedPlayer))  connectedPlayer;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;

 bool __declspec(property(get=get_canJoin))  canJoin;

 bool __declspec(property(get=get_requiresPassword))  requiresPassword;

 bool __declspec(property(get=get_isWaitingOnJoin))  isWaitingOnJoin;

 bool __declspec(property(get=get_canInvite))  canInvite;

 bool __declspec(property(get=get_isWaitingOnInvite))  isWaitingOnInvite;

 bool __declspec(property(get=get_canKick))  canKick;

 bool __declspec(property(get=get_canLeave))  canLeave;

 bool __declspec(property(get=get_canBlock))  canBlock;

 bool __declspec(property(get=get_canUnblock))  canUnblock;


// Methods

/// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userName() ;

/// @brief Method get_isMe addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isMe() ;

/// @brief Method get_currentPartySize addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_currentPartySize() ;

/// @brief Method get_isMyPartyOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isMyPartyOwner() ;

/// @brief Method get_connectedPlayer addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::IConnectedPlayer get_connectedPlayer() ;

/// @brief Method get_configuration addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_selectionMask addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method get_canJoin addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_canJoin() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final false
 void Join() ;

/// @brief Method get_requiresPassword addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_requiresPassword() ;

/// @brief Method Join addr 0x0 size 0xffffffffffffffff virtual true final false
 void Join(::StringW password) ;

/// @brief Method get_isWaitingOnJoin addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isWaitingOnJoin() ;

/// @brief Method get_canInvite addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_canInvite() ;

/// @brief Method Invite addr 0x0 size 0xffffffffffffffff virtual true final false
 void Invite() ;

/// @brief Method get_isWaitingOnInvite addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isWaitingOnInvite() ;

/// @brief Method get_canKick addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_canKick() ;

/// @brief Method Kick addr 0x0 size 0xffffffffffffffff virtual true final false
 void Kick() ;

/// @brief Method get_canLeave addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_canLeave() ;

/// @brief Method Leave addr 0x0 size 0xffffffffffffffff virtual true final false
 void Leave() ;

/// @brief Method get_canBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_canBlock() ;

/// @brief Method Block addr 0x0 size 0xffffffffffffffff virtual true final false
 void Block() ;

/// @brief Method get_canUnblock addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_canUnblock() ;

/// @brief Method Unblock addr 0x0 size 0xffffffffffffffff virtual true final false
 void Unblock() ;

/// @brief Method SendJoinResponse addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendJoinResponse(bool accept) ;

/// @brief Method SendInviteResponse addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendInviteResponse(bool accept) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INetworkPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INetworkPlayer, "", "INetworkPlayer");
