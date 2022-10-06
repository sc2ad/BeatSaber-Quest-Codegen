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
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/ColorBoostEventData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorBoostEventData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::ColorBoostEventData : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataItem {
    public:
    public:
    // public System.Boolean o
    // Size: 0x1
    // Offset: 0x14
    bool o;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator float
    constexpr operator float() const noexcept = delete;
    // Get instance field reference: public System.Boolean o
    [[deprecated("Use field access instead!")]] bool& dyn_o();
    // public System.Boolean get_boost()
    // Offset: 0x28BE184
    bool get_boost();
    // public System.Void .ctor(System.Single beat, System.Boolean boost)
    // Offset: 0x28BDDC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::ColorBoostEventData* New_ctor(float beat, bool boost) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::ColorBoostEventData*, creationType>(beat, boost)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorBoostEventData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::ColorBoostEventData), 20 + sizeof(bool)> __BeatmapSaveDataVersion3_BeatmapSaveData_ColorBoostEventDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::ColorBoostEventData) == 0x15);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData::get_boost
// Il2CppName: get_boost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData::get_boost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData*), "get_boost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
