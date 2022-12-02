// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BeatmapSaveDataItem
#include "BeatmapSaveDataVersion3/BeatmapSaveData_BeatmapSaveDataItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/BombNoteData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BombNoteData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::BombNoteData : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataItem {
    public:
    public:
    // private System.Int32 x
    // Size: 0x4
    // Offset: 0x14
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 y
    // Size: 0x4
    // Offset: 0x18
    int y;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Get instance field reference: private System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: private System.Int32 y
    [[deprecated("Use field access instead!")]] int& dyn_y();
    // public System.Int32 get_line()
    // Offset: 0x2755C8C
    int get_line();
    // public System.Int32 get_layer()
    // Offset: 0x2755C94
    int get_layer();
    // public System.Void .ctor(System.Single beat, System.Int32 line, System.Int32 layer)
    // Offset: 0x27555F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::BombNoteData* New_ctor(float beat, int line, int layer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::BombNoteData*, creationType>(beat, line, layer)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BombNoteData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::BombNoteData), 24 + sizeof(int)> __BeatmapSaveDataVersion3_BeatmapSaveData_BombNoteDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::BombNoteData) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData::get_line
// Il2CppName: get_line
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData::get_line)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData*), "get_line", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData::get_layer
// Il2CppName: get_layer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData::get_layer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData*), "get_layer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::BombNoteData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
