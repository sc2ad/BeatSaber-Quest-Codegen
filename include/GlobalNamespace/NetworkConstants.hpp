// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NetworkConstants
  class NetworkConstants;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NetworkConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkConstants*, "", "NetworkConstants");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NetworkConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkConstants : public ::Il2CppObject {
    public:
    // static field const value: static public System.UInt32 kProtocolVersion
    static constexpr const uint kProtocolVersion = 8u;
    // Get static field: static public System.UInt32 kProtocolVersion
    static uint _get_kProtocolVersion();
    // Set static field: static public System.UInt32 kProtocolVersion
    static void _set_kProtocolVersion(uint value);
    // static field const value: static public System.UInt32 kHandshakeMessageType
    static constexpr const uint kHandshakeMessageType = 3192347326u;
    // Get static field: static public System.UInt32 kHandshakeMessageType
    static uint _get_kHandshakeMessageType();
    // Set static field: static public System.UInt32 kHandshakeMessageType
    static void _set_kHandshakeMessageType(uint value);
    // static field const value: static public System.UInt32 kUserMasterServerMessageType
    static constexpr const uint kUserMasterServerMessageType = 1u;
    // Get static field: static public System.UInt32 kUserMasterServerMessageType
    static uint _get_kUserMasterServerMessageType();
    // Set static field: static public System.UInt32 kUserMasterServerMessageType
    static void _set_kUserMasterServerMessageType(uint value);
    // static field const value: static public System.UInt32 kDedicatedServerMasterServerMessageType
    static constexpr const uint kDedicatedServerMasterServerMessageType = 2u;
    // Get static field: static public System.UInt32 kDedicatedServerMasterServerMessageType
    static uint _get_kDedicatedServerMasterServerMessageType();
    // Set static field: static public System.UInt32 kDedicatedServerMasterServerMessageType
    static void _set_kDedicatedServerMasterServerMessageType(uint value);
    // static field const value: static public System.UInt32 kGameLiftMessageType
    static constexpr const uint kGameLiftMessageType = 3u;
    // Get static field: static public System.UInt32 kGameLiftMessageType
    static uint _get_kGameLiftMessageType();
    // Set static field: static public System.UInt32 kGameLiftMessageType
    static void _set_kGameLiftMessageType(uint value);
    // static field const value: static public System.String dedicatedServerState
    static constexpr const char* dedicatedServerState = "dedicated_server";
    // Get static field: static public System.String dedicatedServerState
    static ::StringW _get_dedicatedServerState();
    // Set static field: static public System.String dedicatedServerState
    static void _set_dedicatedServerState(::StringW value);
    // static field const value: static public System.String playerState
    static constexpr const char* playerState = "player";
    // Get static field: static public System.String playerState
    static ::StringW _get_playerState();
    // Set static field: static public System.String playerState
    static void _set_playerState(::StringW value);
    // static field const value: static public System.String spectatingState
    static constexpr const char* spectatingState = "spectating";
    // Get static field: static public System.String spectatingState
    static ::StringW _get_spectatingState();
    // Set static field: static public System.String spectatingState
    static void _set_spectatingState(::StringW value);
    // static field const value: static public System.String backgroundedState
    static constexpr const char* backgroundedState = "backgrounded";
    // Get static field: static public System.String backgroundedState
    static ::StringW _get_backgroundedState();
    // Set static field: static public System.String backgroundedState
    static void _set_backgroundedState(::StringW value);
    // static field const value: static public System.String terminatingState
    static constexpr const char* terminatingState = "terminating";
    // Get static field: static public System.String terminatingState
    static ::StringW _get_terminatingState();
    // Set static field: static public System.String terminatingState
    static void _set_terminatingState(::StringW value);
    // static field const value: static public System.String wantsToPlayNextLevel
    static constexpr const char* wantsToPlayNextLevel = "wants_to_play_next_level";
    // Get static field: static public System.String wantsToPlayNextLevel
    static ::StringW _get_wantsToPlayNextLevel();
    // Set static field: static public System.String wantsToPlayNextLevel
    static void _set_wantsToPlayNextLevel(::StringW value);
    // static field const value: static public System.String wasActiveAtLevelStart
    static constexpr const char* wasActiveAtLevelStart = "was_active_at_level_start";
    // Get static field: static public System.String wasActiveAtLevelStart
    static ::StringW _get_wasActiveAtLevelStart();
    // Set static field: static public System.String wasActiveAtLevelStart
    static void _set_wasActiveAtLevelStart(::StringW value);
    // static field const value: static public System.String isActive
    static constexpr const char* isActive = "is_active";
    // Get static field: static public System.String isActive
    static ::StringW _get_isActive();
    // Set static field: static public System.String isActive
    static void _set_isActive(::StringW value);
    // static field const value: static public System.String finishedLevel
    static constexpr const char* finishedLevel = "finished_level";
    // Get static field: static public System.String finishedLevel
    static ::StringW _get_finishedLevel();
    // Set static field: static public System.String finishedLevel
    static void _set_finishedLevel(::StringW value);
  }; // NetworkConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
