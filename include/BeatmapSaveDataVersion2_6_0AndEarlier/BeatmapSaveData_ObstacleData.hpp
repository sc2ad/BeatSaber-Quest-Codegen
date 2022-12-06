// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveDataItem.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleType
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData_ObstacleType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData*, "BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/ObstacleData");
// Type namespace: BeatmapSaveDataVersion2_6_0AndEarlier
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::ObstacleData : public ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem {
    public:
    public:
    // private System.Single _time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _lineIndex
    // Size: 0x4
    // Offset: 0x14
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleType _type
    // Size: 0x4
    // Offset: 0x18
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType type;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType) == 0x4);
    // private System.Single _duration
    // Size: 0x4
    // Offset: 0x1C
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _width
    // Size: 0x4
    // Offset: 0x20
    int width;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Single _time
    [[deprecated("Use field access instead!")]] float& dyn__time();
    // Get instance field reference: private System.Int32 _lineIndex
    [[deprecated("Use field access instead!")]] int& dyn__lineIndex();
    // Get instance field reference: private BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleType _type
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType& dyn__type();
    // Get instance field reference: private System.Single _duration
    [[deprecated("Use field access instead!")]] float& dyn__duration();
    // Get instance field reference: private System.Int32 _width
    [[deprecated("Use field access instead!")]] int& dyn__width();
    // public System.Int32 get_lineIndex()
    // Offset: 0x274A8B8
    int get_lineIndex();
    // public BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleType get_type()
    // Offset: 0x274A8C0
    ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType get_type();
    // public System.Single get_duration()
    // Offset: 0x274A8C8
    float get_duration();
    // public System.Int32 get_width()
    // Offset: 0x274A8D0
    int get_width();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleType type, System.Single duration, System.Int32 width)
    // Offset: 0x274A8D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::ObstacleData* New_ctor(float time, int lineIndex, ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType type, float duration, int width) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::ObstacleData*, creationType>(time, lineIndex, type, duration, width)));
    }
    // public override System.Single get_time()
    // Offset: 0x274A8B0
    // Implemented from: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveDataItem
    // Base method: System.Single BeatmapSaveDataItem::get_time()
    float get_time();
  }; // BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.ObstacleData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::ObstacleData), 32 + sizeof(int)> __BeatmapSaveDataVersion2_6_0AndEarlier_BeatmapSaveData_ObstacleDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::ObstacleData) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleType (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_duration
// Il2CppName: get_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_duration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData*), "get_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::*)()>(&BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ObstacleData*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
