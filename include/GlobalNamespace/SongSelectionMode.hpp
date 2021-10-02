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
  // Autogenerated type: SongSelectionMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct SongSelectionMode/*, public System::Enum*/ {
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
    // Creating value type constructor for type: SongSelectionMode
    constexpr SongSelectionMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public SongSelectionMode Vote
    static constexpr const int Vote = 0;
    // Get static field: static public SongSelectionMode Vote
    static GlobalNamespace::SongSelectionMode _get_Vote();
    // Set static field: static public SongSelectionMode Vote
    static void _set_Vote(GlobalNamespace::SongSelectionMode value);
    // static field const value: static public SongSelectionMode Random
    static constexpr const int Random = 1;
    // Get static field: static public SongSelectionMode Random
    static GlobalNamespace::SongSelectionMode _get_Random();
    // Set static field: static public SongSelectionMode Random
    static void _set_Random(GlobalNamespace::SongSelectionMode value);
    // static field const value: static public SongSelectionMode OwnerPicks
    static constexpr const int OwnerPicks = 2;
    // Get static field: static public SongSelectionMode OwnerPicks
    static GlobalNamespace::SongSelectionMode _get_OwnerPicks();
    // Set static field: static public SongSelectionMode OwnerPicks
    static void _set_OwnerPicks(GlobalNamespace::SongSelectionMode value);
    // static field const value: static public SongSelectionMode RandomPlayerPicks
    static constexpr const int RandomPlayerPicks = 3;
    // Get static field: static public SongSelectionMode RandomPlayerPicks
    static GlobalNamespace::SongSelectionMode _get_RandomPlayerPicks();
    // Set static field: static public SongSelectionMode RandomPlayerPicks
    static void _set_RandomPlayerPicks(GlobalNamespace::SongSelectionMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // SongSelectionMode
  #pragma pack(pop)
  static check_size<sizeof(SongSelectionMode), 0 + sizeof(int)> __GlobalNamespace_SongSelectionModeSizeCheck;
  static_assert(sizeof(SongSelectionMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongSelectionMode, "", "SongSelectionMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
