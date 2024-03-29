// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameServerLobbyFlowCoordinator
#include "GlobalNamespace/GameServerLobbyFlowCoordinator.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerLobbyFlowCoordinator::LobbyType, "", "GameServerLobbyFlowCoordinator/LobbyType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GameServerLobbyFlowCoordinator/LobbyType
  // [TokenAttribute] Offset: FFFFFFFF
  struct GameServerLobbyFlowCoordinator::LobbyType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LobbyType
    constexpr LobbyType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GameServerLobbyFlowCoordinator/LobbyType HostSetup
    static constexpr const int HostSetup = 0;
    // Get static field: static public GameServerLobbyFlowCoordinator/LobbyType HostSetup
    static ::GlobalNamespace::GameServerLobbyFlowCoordinator::LobbyType _get_HostSetup();
    // Set static field: static public GameServerLobbyFlowCoordinator/LobbyType HostSetup
    static void _set_HostSetup(::GlobalNamespace::GameServerLobbyFlowCoordinator::LobbyType value);
    // static field const value: static public GameServerLobbyFlowCoordinator/LobbyType ClientSetup
    static constexpr const int ClientSetup = 1;
    // Get static field: static public GameServerLobbyFlowCoordinator/LobbyType ClientSetup
    static ::GlobalNamespace::GameServerLobbyFlowCoordinator::LobbyType _get_ClientSetup();
    // Set static field: static public GameServerLobbyFlowCoordinator/LobbyType ClientSetup
    static void _set_ClientSetup(::GlobalNamespace::GameServerLobbyFlowCoordinator::LobbyType value);
    // static field const value: static public GameServerLobbyFlowCoordinator/LobbyType QuickPlayLobby
    static constexpr const int QuickPlayLobby = 2;
    // Get static field: static public GameServerLobbyFlowCoordinator/LobbyType QuickPlayLobby
    static ::GlobalNamespace::GameServerLobbyFlowCoordinator::LobbyType _get_QuickPlayLobby();
    // Set static field: static public GameServerLobbyFlowCoordinator/LobbyType QuickPlayLobby
    static void _set_QuickPlayLobby(::GlobalNamespace::GameServerLobbyFlowCoordinator::LobbyType value);
    // static field const value: static public GameServerLobbyFlowCoordinator/LobbyType Party
    static constexpr const int Party = 3;
    // Get static field: static public GameServerLobbyFlowCoordinator/LobbyType Party
    static ::GlobalNamespace::GameServerLobbyFlowCoordinator::LobbyType _get_Party();
    // Set static field: static public GameServerLobbyFlowCoordinator/LobbyType Party
    static void _set_Party(::GlobalNamespace::GameServerLobbyFlowCoordinator::LobbyType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GameServerLobbyFlowCoordinator/LobbyType
  #pragma pack(pop)
  static check_size<sizeof(GameServerLobbyFlowCoordinator::LobbyType), 0 + sizeof(int)> __GlobalNamespace_GameServerLobbyFlowCoordinator_LobbyTypeSizeCheck;
  static_assert(sizeof(GameServerLobbyFlowCoordinator::LobbyType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
