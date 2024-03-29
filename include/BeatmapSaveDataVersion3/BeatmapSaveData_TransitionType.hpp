// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType, "BeatmapSaveDataVersion3", "BeatmapSaveData/TransitionType");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapSaveData::TransitionType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TransitionType
    constexpr TransitionType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType Instant
    static constexpr const int Instant = 0;
    // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType Instant
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType _get_Instant();
    // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType Instant
    static void _set_Instant(::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType value);
    // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType Interpolate
    static constexpr const int Interpolate = 1;
    // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType Interpolate
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType _get_Interpolate();
    // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType Interpolate
    static void _set_Interpolate(::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType value);
    // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType Extend
    static constexpr const int Extend = 2;
    // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType Extend
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType _get_Extend();
    // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType Extend
    static void _set_Extend(::BeatmapSaveDataVersion3::BeatmapSaveData::TransitionType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.TransitionType
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::TransitionType), 0 + sizeof(int)> __BeatmapSaveDataVersion3_BeatmapSaveData_TransitionTypeSizeCheck;
  static_assert(sizeof(BeatmapSaveData::TransitionType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
