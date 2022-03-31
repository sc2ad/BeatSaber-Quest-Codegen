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
// Including type: SpawnRotationBeatmapEventData
#include "GlobalNamespace/SpawnRotationBeatmapEventData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: BeatmapEventData because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::RotationEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::RotationEventConvertor*, "", "BeatmapDataLoader/RotationEventConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataLoader/RotationEventConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::RotationEventConvertor : public ::GlobalNamespace::BeatmapDataLoader::BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData*, ::BeatmapSaveDataVersion3::BeatmapSaveData::RotationEventData*, ::GlobalNamespace::SpawnRotationBeatmapEventData*> {
    public:
    // protected SpawnRotationBeatmapEventData Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.RotationEventData rotationEventSaveData)
    // Offset: 0x136C07C
    ::GlobalNamespace::SpawnRotationBeatmapEventData* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::RotationEventData* rotationEventSaveData);
    // static private SpawnRotationBeatmapEventData/SpawnRotationEventType SpawnRotationEventType(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ExecutionTime executionTime)
    // Offset: 0x136C134
    static ::GlobalNamespace::SpawnRotationBeatmapEventData::SpawnRotationEventType SpawnRotationEventType(::BeatmapSaveDataVersion3::BeatmapSaveData::ExecutionTime executionTime);
    // public System.Void .ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    // Offset: 0x136A24C
    // Implemented from: BeatmapDataLoader/BeatmapDataItemConvertor`3
    // Base method: System.Void BeatmapDataItemConvertor_3::.ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::RotationEventConvertor* New_ctor(::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor* bpmTimeProcessor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::RotationEventConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::RotationEventConvertor*, creationType>(bpmTimeProcessor)));
    }
  }; // BeatmapDataLoader/RotationEventConvertor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::RotationEventConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SpawnRotationBeatmapEventData* (GlobalNamespace::BeatmapDataLoader::RotationEventConvertor::*)(::BeatmapSaveDataVersion3::BeatmapSaveData::RotationEventData*)>(&GlobalNamespace::BeatmapDataLoader::RotationEventConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* rotationEventSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/RotationEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::RotationEventConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotationEventSaveData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::RotationEventConvertor::SpawnRotationEventType
// Il2CppName: SpawnRotationEventType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SpawnRotationBeatmapEventData::SpawnRotationEventType (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::ExecutionTime)>(&GlobalNamespace::BeatmapDataLoader::RotationEventConvertor::SpawnRotationEventType)> {
  static const MethodInfo* get() {
    static auto* executionTime = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/ExecutionTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::RotationEventConvertor*), "SpawnRotationEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{executionTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::RotationEventConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
