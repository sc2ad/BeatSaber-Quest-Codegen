// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GameplayServerControlSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct GameplayServerControlSettings/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GameplayServerControlSettings
    constexpr GameplayServerControlSettings(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GameplayServerControlSettings None
    static constexpr const int None = 0;
    // Get static field: static public GameplayServerControlSettings None
    static GlobalNamespace::GameplayServerControlSettings _get_None();
    // Set static field: static public GameplayServerControlSettings None
    static void _set_None(GlobalNamespace::GameplayServerControlSettings value);
    // static field const value: static public GameplayServerControlSettings AllowModifierSelection
    static constexpr const int AllowModifierSelection = 1;
    // Get static field: static public GameplayServerControlSettings AllowModifierSelection
    static GlobalNamespace::GameplayServerControlSettings _get_AllowModifierSelection();
    // Set static field: static public GameplayServerControlSettings AllowModifierSelection
    static void _set_AllowModifierSelection(GlobalNamespace::GameplayServerControlSettings value);
    // static field const value: static public GameplayServerControlSettings AllowSpectate
    static constexpr const int AllowSpectate = 2;
    // Get static field: static public GameplayServerControlSettings AllowSpectate
    static GlobalNamespace::GameplayServerControlSettings _get_AllowSpectate();
    // Set static field: static public GameplayServerControlSettings AllowSpectate
    static void _set_AllowSpectate(GlobalNamespace::GameplayServerControlSettings value);
    // static field const value: static public GameplayServerControlSettings All
    static constexpr const int All = 3;
    // Get static field: static public GameplayServerControlSettings All
    static GlobalNamespace::GameplayServerControlSettings _get_All();
    // Set static field: static public GameplayServerControlSettings All
    static void _set_All(GlobalNamespace::GameplayServerControlSettings value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // GameplayServerControlSettings
  #pragma pack(pop)
  static check_size<sizeof(GameplayServerControlSettings), 0 + sizeof(int)> __GlobalNamespace_GameplayServerControlSettingsSizeCheck;
  static_assert(sizeof(GameplayServerControlSettings) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerControlSettings, "", "GameplayServerControlSettings");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
