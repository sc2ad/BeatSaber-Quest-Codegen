// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SessionType
  struct MultiplayerSessionManager_SessionType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerSessionManager_SessionType, "", "MultiplayerSessionManager/SessionType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerSessionManager/SessionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct MultiplayerSessionManager_SessionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MultiplayerSessionManager_SessionType
    constexpr MultiplayerSessionManager_SessionType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MultiplayerSessionManager/SessionType Player
    static constexpr const int Player = 0;
    // Get static field: static public MultiplayerSessionManager/SessionType Player
    static ::GlobalNamespace::MultiplayerSessionManager_SessionType _get_Player();
    // Set static field: static public MultiplayerSessionManager/SessionType Player
    static void _set_Player(::GlobalNamespace::MultiplayerSessionManager_SessionType value);
    // static field const value: static public MultiplayerSessionManager/SessionType Spectator
    static constexpr const int Spectator = 1;
    // Get static field: static public MultiplayerSessionManager/SessionType Spectator
    static ::GlobalNamespace::MultiplayerSessionManager_SessionType _get_Spectator();
    // Set static field: static public MultiplayerSessionManager/SessionType Spectator
    static void _set_Spectator(::GlobalNamespace::MultiplayerSessionManager_SessionType value);
    // static field const value: static public MultiplayerSessionManager/SessionType DedicatedServer
    static constexpr const int DedicatedServer = 2;
    // Get static field: static public MultiplayerSessionManager/SessionType DedicatedServer
    static ::GlobalNamespace::MultiplayerSessionManager_SessionType _get_DedicatedServer();
    // Set static field: static public MultiplayerSessionManager/SessionType DedicatedServer
    static void _set_DedicatedServer(::GlobalNamespace::MultiplayerSessionManager_SessionType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // MultiplayerSessionManager/SessionType
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerSessionManager_SessionType), 0 + sizeof(int)> __GlobalNamespace_MultiplayerSessionManager_SessionTypeSizeCheck;
  static_assert(sizeof(MultiplayerSessionManager_SessionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
