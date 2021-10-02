// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/ColorType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapSaveData::ColorType/*, public System::Enum*/ {
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
    // Creating value type constructor for type: ColorType
    constexpr ColorType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeatmapSaveData/ColorType ColorA
    static constexpr const int ColorA = 0;
    // Get static field: static public BeatmapSaveData/ColorType ColorA
    static GlobalNamespace::BeatmapSaveData::ColorType _get_ColorA();
    // Set static field: static public BeatmapSaveData/ColorType ColorA
    static void _set_ColorA(GlobalNamespace::BeatmapSaveData::ColorType value);
    // static field const value: static public BeatmapSaveData/ColorType ColorB
    static constexpr const int ColorB = 1;
    // Get static field: static public BeatmapSaveData/ColorType ColorB
    static GlobalNamespace::BeatmapSaveData::ColorType _get_ColorB();
    // Set static field: static public BeatmapSaveData/ColorType ColorB
    static void _set_ColorB(GlobalNamespace::BeatmapSaveData::ColorType value);
    // static field const value: static public BeatmapSaveData/ColorType None
    static constexpr const int None = -1;
    // Get static field: static public BeatmapSaveData/ColorType None
    static GlobalNamespace::BeatmapSaveData::ColorType _get_None();
    // Set static field: static public BeatmapSaveData/ColorType None
    static void _set_None(GlobalNamespace::BeatmapSaveData::ColorType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // BeatmapSaveData/ColorType
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::ColorType), 0 + sizeof(int)> __GlobalNamespace_BeatmapSaveData_ColorTypeSizeCheck;
  static_assert(sizeof(BeatmapSaveData::ColorType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::ColorType, "", "BeatmapSaveData/ColorType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
