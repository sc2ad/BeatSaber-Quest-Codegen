#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct MultiplayerAvatarData;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Type: ::IConnectedPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12720))
// CS Name: IConnectedPlayer
class CORDL_TYPE IConnectedPlayer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IConnectedPlayer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConnectedPlayer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_isMe))  isMe;

 ::StringW __declspec(property(get=get_userId))  userId;

 ::StringW __declspec(property(get=get_userName))  userName;

 bool __declspec(property(get=get_hasValidLatency))  hasValidLatency;

 float_t __declspec(property(get=get_currentLatency))  currentLatency;

 bool __declspec(property(get=get_isConnected))  isConnected;

 ::GlobalNamespace::DisconnectedReason __declspec(property(get=get_disconnectedReason))  disconnectedReason;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 float_t __declspec(property(get=get_offsetSyncTime))  offsetSyncTime;

 int32_t __declspec(property(get=get_sortIndex))  sortIndex;

 bool __declspec(property(get=get_isKicked))  isKicked;

 ::GlobalNamespace::MultiplayerAvatarData __declspec(property(get=get_multiplayerAvatarData))  multiplayerAvatarData;


// Methods

/// @brief Method get_isMe addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isMe() ;

/// @brief Method get_userId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userId() ;

/// @brief Method get_userName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_userName() ;

/// @brief Method get_hasValidLatency addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_hasValidLatency() ;

/// @brief Method get_currentLatency addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_currentLatency() ;

/// @brief Method get_isConnected addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnected() ;

/// @brief Method get_disconnectedReason addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::DisconnectedReason get_disconnectedReason() ;

/// @brief Method get_isConnectionOwner addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isConnectionOwner() ;

/// @brief Method get_offsetSyncTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_offsetSyncTime() ;

/// @brief Method get_sortIndex addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_sortIndex() ;

/// @brief Method get_isKicked addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isKicked() ;

/// @brief Method get_multiplayerAvatarData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::MultiplayerAvatarData get_multiplayerAvatarData() ;

/// @brief Method HasState addr 0x0 size 0xffffffffffffffff virtual true final false
 bool HasState(::StringW state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IConnectedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnectedPlayer, "", "IConnectedPlayer");
