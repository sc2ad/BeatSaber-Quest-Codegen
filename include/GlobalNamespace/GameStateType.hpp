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
  // Forward declaring type: GameStateType
  struct GameStateType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameStateType, "", "GameStateType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GameStateType
  // [TokenAttribute] Offset: FFFFFFFF
  struct GameStateType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GameStateType
    constexpr GameStateType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GameStateType EmptyServer
    static constexpr const int EmptyServer = 0;
    // Get static field: static public GameStateType EmptyServer
    static ::GlobalNamespace::GameStateType _get_EmptyServer();
    // Set static field: static public GameStateType EmptyServer
    static void _set_EmptyServer(::GlobalNamespace::GameStateType value);
    // static field const value: static public GameStateType SelectingLevel
    static constexpr const int SelectingLevel = 1;
    // Get static field: static public GameStateType SelectingLevel
    static ::GlobalNamespace::GameStateType _get_SelectingLevel();
    // Set static field: static public GameStateType SelectingLevel
    static void _set_SelectingLevel(::GlobalNamespace::GameStateType value);
    // static field const value: static public GameStateType StartingLevel
    static constexpr const int StartingLevel = 2;
    // Get static field: static public GameStateType StartingLevel
    static ::GlobalNamespace::GameStateType _get_StartingLevel();
    // Set static field: static public GameStateType StartingLevel
    static void _set_StartingLevel(::GlobalNamespace::GameStateType value);
    // static field const value: static public GameStateType RunningLevel
    static constexpr const int RunningLevel = 3;
    // Get static field: static public GameStateType RunningLevel
    static ::GlobalNamespace::GameStateType _get_RunningLevel();
    // Set static field: static public GameStateType RunningLevel
    static void _set_RunningLevel(::GlobalNamespace::GameStateType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // GameStateType
  #pragma pack(pop)
  static check_size<sizeof(GameStateType), 0 + sizeof(int)> __GlobalNamespace_GameStateTypeSizeCheck;
  static_assert(sizeof(GameStateType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
