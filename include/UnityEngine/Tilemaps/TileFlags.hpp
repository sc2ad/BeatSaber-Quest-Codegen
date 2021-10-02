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
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Tilemaps.TileFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TileFlags/*, public System::Enum*/ {
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
    // Creating value type constructor for type: TileFlags
    constexpr TileFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Tilemaps.TileFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Tilemaps.TileFlags None
    static UnityEngine::Tilemaps::TileFlags _get_None();
    // Set static field: static public UnityEngine.Tilemaps.TileFlags None
    static void _set_None(UnityEngine::Tilemaps::TileFlags value);
    // static field const value: static public UnityEngine.Tilemaps.TileFlags LockColor
    static constexpr const int LockColor = 1;
    // Get static field: static public UnityEngine.Tilemaps.TileFlags LockColor
    static UnityEngine::Tilemaps::TileFlags _get_LockColor();
    // Set static field: static public UnityEngine.Tilemaps.TileFlags LockColor
    static void _set_LockColor(UnityEngine::Tilemaps::TileFlags value);
    // static field const value: static public UnityEngine.Tilemaps.TileFlags LockTransform
    static constexpr const int LockTransform = 2;
    // Get static field: static public UnityEngine.Tilemaps.TileFlags LockTransform
    static UnityEngine::Tilemaps::TileFlags _get_LockTransform();
    // Set static field: static public UnityEngine.Tilemaps.TileFlags LockTransform
    static void _set_LockTransform(UnityEngine::Tilemaps::TileFlags value);
    // static field const value: static public UnityEngine.Tilemaps.TileFlags InstantiateGameObjectRuntimeOnly
    static constexpr const int InstantiateGameObjectRuntimeOnly = 4;
    // Get static field: static public UnityEngine.Tilemaps.TileFlags InstantiateGameObjectRuntimeOnly
    static UnityEngine::Tilemaps::TileFlags _get_InstantiateGameObjectRuntimeOnly();
    // Set static field: static public UnityEngine.Tilemaps.TileFlags InstantiateGameObjectRuntimeOnly
    static void _set_InstantiateGameObjectRuntimeOnly(UnityEngine::Tilemaps::TileFlags value);
    // static field const value: static public UnityEngine.Tilemaps.TileFlags LockAll
    static constexpr const int LockAll = 3;
    // Get static field: static public UnityEngine.Tilemaps.TileFlags LockAll
    static UnityEngine::Tilemaps::TileFlags _get_LockAll();
    // Set static field: static public UnityEngine.Tilemaps.TileFlags LockAll
    static void _set_LockAll(UnityEngine::Tilemaps::TileFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Tilemaps.TileFlags
  #pragma pack(pop)
  static check_size<sizeof(TileFlags), 0 + sizeof(int)> __UnityEngine_Tilemaps_TileFlagsSizeCheck;
  static_assert(sizeof(TileFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Tilemaps::TileFlags, "UnityEngine.Tilemaps", "TileFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
