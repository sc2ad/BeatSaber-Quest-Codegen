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
  // Forward declaring type: BeatmapEventTransitionType
  struct BeatmapEventTransitionType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEventTransitionType, "", "BeatmapEventTransitionType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapEventTransitionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapEventTransitionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BeatmapEventTransitionType
    constexpr BeatmapEventTransitionType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public BeatmapEventTransitionType Instant
    static constexpr const int Instant = 0;
    // Get static field: static public BeatmapEventTransitionType Instant
    static ::GlobalNamespace::BeatmapEventTransitionType _get_Instant();
    // Set static field: static public BeatmapEventTransitionType Instant
    static void _set_Instant(::GlobalNamespace::BeatmapEventTransitionType value);
    // static field const value: static public BeatmapEventTransitionType Interpolate
    static constexpr const int Interpolate = 1;
    // Get static field: static public BeatmapEventTransitionType Interpolate
    static ::GlobalNamespace::BeatmapEventTransitionType _get_Interpolate();
    // Set static field: static public BeatmapEventTransitionType Interpolate
    static void _set_Interpolate(::GlobalNamespace::BeatmapEventTransitionType value);
    // static field const value: static public BeatmapEventTransitionType Extend
    static constexpr const int Extend = 2;
    // Get static field: static public BeatmapEventTransitionType Extend
    static ::GlobalNamespace::BeatmapEventTransitionType _get_Extend();
    // Set static field: static public BeatmapEventTransitionType Extend
    static void _set_Extend(::GlobalNamespace::BeatmapEventTransitionType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // BeatmapEventTransitionType
  #pragma pack(pop)
  static check_size<sizeof(BeatmapEventTransitionType), 0 + sizeof(int)> __GlobalNamespace_BeatmapEventTransitionTypeSizeCheck;
  static_assert(sizeof(BeatmapEventTransitionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
