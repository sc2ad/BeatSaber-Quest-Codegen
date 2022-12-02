// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BaseSliderData
#include "BeatmapSaveDataVersion3/BeatmapSaveData_BaseSliderData.hpp"
// Including type: SliderMidAnchorMode
#include "GlobalNamespace/SliderMidAnchorMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BeatmapSaveDataVersion3::BeatmapSaveData::SliderData);
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::BeatmapSaveData::SliderData*, "BeatmapSaveDataVersion3", "BeatmapSaveData/SliderData");
// Type namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.SliderData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapSaveData::SliderData : public ::BeatmapSaveDataVersion3::BeatmapSaveData::BaseSliderData {
    public:
    public:
    // private System.Single mu
    // Size: 0x4
    // Offset: 0x30
    float mu;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single tmu
    // Size: 0x4
    // Offset: 0x34
    float tmu;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private NoteCutDirection tc
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::NoteCutDirection tc;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteCutDirection) == 0x4);
    // private SliderMidAnchorMode m
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::SliderMidAnchorMode m;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SliderMidAnchorMode) == 0x4);
    public:
    // Get instance field reference: private System.Single mu
    [[deprecated("Use field access instead!")]] float& dyn_mu();
    // Get instance field reference: private System.Single tmu
    [[deprecated("Use field access instead!")]] float& dyn_tmu();
    // Get instance field reference: private NoteCutDirection tc
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteCutDirection& dyn_tc();
    // Get instance field reference: private SliderMidAnchorMode m
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SliderMidAnchorMode& dyn_m();
    // public System.Single get_headControlPointLengthMultiplier()
    // Offset: 0x27568E0
    float get_headControlPointLengthMultiplier();
    // public System.Single get_tailControlPointLengthMultiplier()
    // Offset: 0x27568E8
    float get_tailControlPointLengthMultiplier();
    // public NoteCutDirection get_tailCutDirection()
    // Offset: 0x27568F0
    ::GlobalNamespace::NoteCutDirection get_tailCutDirection();
    // public SliderMidAnchorMode get_sliderMidAnchorMode()
    // Offset: 0x27568F8
    ::GlobalNamespace::SliderMidAnchorMode get_sliderMidAnchorMode();
    // public System.Void .ctor(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.NoteColorType colorType, System.Single headBeat, System.Int32 headLine, System.Int32 headLayer, System.Single headControlPointLengthMultiplier, NoteCutDirection headCutDirection, System.Single tailBeat, System.Int32 tailLine, System.Int32 tailLayer, System.Single tailControlPointLengthMultiplier, NoteCutDirection tailCutDirection, SliderMidAnchorMode sliderMidAnchorMode)
    // Offset: 0x2755744
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::SliderData* New_ctor(::BeatmapSaveDataVersion3::BeatmapSaveData::NoteColorType colorType, float headBeat, int headLine, int headLayer, float headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection headCutDirection, float tailBeat, int tailLine, int tailLayer, float tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode sliderMidAnchorMode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::SliderData*, creationType>(colorType, headBeat, headLine, headLayer, headControlPointLengthMultiplier, headCutDirection, tailBeat, tailLine, tailLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode)));
    }
  }; // BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.SliderData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::SliderData), 60 + sizeof(::GlobalNamespace::SliderMidAnchorMode)> __BeatmapSaveDataVersion3_BeatmapSaveData_SliderDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::SliderData) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::get_headControlPointLengthMultiplier
// Il2CppName: get_headControlPointLengthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::get_headControlPointLengthMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::SliderData*), "get_headControlPointLengthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::get_tailControlPointLengthMultiplier
// Il2CppName: get_tailControlPointLengthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::get_tailControlPointLengthMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::SliderData*), "get_tailControlPointLengthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::get_tailCutDirection
// Il2CppName: get_tailCutDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::get_tailCutDirection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::SliderData*), "get_tailCutDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::get_sliderMidAnchorMode
// Il2CppName: get_sliderMidAnchorMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderMidAnchorMode (BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::*)()>(&BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::get_sliderMidAnchorMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BeatmapSaveDataVersion3::BeatmapSaveData::SliderData*), "get_sliderMidAnchorMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BeatmapSaveDataVersion3::BeatmapSaveData::SliderData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
