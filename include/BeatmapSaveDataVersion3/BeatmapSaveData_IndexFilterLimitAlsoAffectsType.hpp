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
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType, "BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilterLimitAlsoAffectsType");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct BeatmapSaveData::IndexFilterLimitAlsoAffectsType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: IndexFilterLimitAlsoAffectsType
    constexpr IndexFilterLimitAlsoAffectsType(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType None
    static constexpr const int None = 0;
    // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType None
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType _get_None();
    // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType None
    static void _set_None(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType value);
    // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType Duration
    static constexpr const int Duration = 1;
    // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType Duration
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType _get_Duration();
    // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType Duration
    static void _set_Duration(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType value);
    // static field const value: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType Distribution
    static constexpr const int Distribution = 2;
    // Get static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType Distribution
    static ::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType _get_Distribution();
    // Set static field: static public BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType Distribution
    static void _set_Distribution(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilterLimitAlsoAffectsType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilterLimitAlsoAffectsType
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::IndexFilterLimitAlsoAffectsType), 0 + sizeof(int)> __BeatmapSaveDataVersion3_BeatmapSaveData_IndexFilterLimitAlsoAffectsTypeSizeCheck;
  static_assert(sizeof(BeatmapSaveData::IndexFilterLimitAlsoAffectsType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"