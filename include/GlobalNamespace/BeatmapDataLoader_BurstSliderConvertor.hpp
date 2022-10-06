// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: BeatmapDataLoader/BeatmapDataItemConvertor`3
#include "GlobalNamespace/BeatmapDataLoader_BeatmapDataItemConvertor_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: SliderData
  class SliderData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::BurstSliderConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::BurstSliderConvertor*, "", "BeatmapDataLoader/BurstSliderConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataLoader/BurstSliderConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::BurstSliderConvertor : public ::GlobalNamespace::BeatmapDataLoader::BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData*, ::GlobalNamespace::SliderData*> {
    public:
    // protected SliderData Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BurstSliderData sliderSaveData)
    // Offset: 0x137A918
    ::GlobalNamespace::SliderData* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData* sliderSaveData);
    // public System.Void .ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    // Offset: 0x1379954
    // Implemented from: BeatmapDataLoader/BeatmapDataItemConvertor`3
    // Base method: System.Void BeatmapDataItemConvertor_3::.ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::BurstSliderConvertor* New_ctor(::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor* bpmTimeProcessor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::BurstSliderConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::BurstSliderConvertor*, creationType>(bpmTimeProcessor)));
    }
  }; // BeatmapDataLoader/BurstSliderConvertor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::BurstSliderConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderData* (GlobalNamespace::BeatmapDataLoader::BurstSliderConvertor::*)(::BeatmapSaveDataVersion3::BeatmapSaveData::BurstSliderData*)>(&GlobalNamespace::BeatmapDataLoader::BurstSliderConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* sliderSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/BurstSliderData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::BurstSliderConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderSaveData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::BurstSliderConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
