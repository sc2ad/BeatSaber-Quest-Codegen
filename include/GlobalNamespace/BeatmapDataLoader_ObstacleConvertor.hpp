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
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Forward declaring type: NoteLineLayer
  struct NoteLineLayer;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::ObstacleConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::ObstacleConvertor*, "", "BeatmapDataLoader/ObstacleConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataLoader/ObstacleConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::ObstacleConvertor : public ::GlobalNamespace::BeatmapDataLoader::BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*, ::GlobalNamespace::ObstacleData*> {
    public:
    // protected ObstacleData Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ObstacleData obstacleSaveData)
    // Offset: 0x13AD570
    ::GlobalNamespace::ObstacleData* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData* obstacleSaveData);
    // static private NoteLineLayer GetNoteLineLayer(System.Int32 lineLayer)
    // Offset: 0x13AD65C
    static ::GlobalNamespace::NoteLineLayer GetNoteLineLayer(int lineLayer);
    // public System.Void .ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    // Offset: 0x13AB08C
    // Implemented from: BeatmapDataLoader/BeatmapDataItemConvertor`3
    // Base method: System.Void BeatmapDataItemConvertor_3::.ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::ObstacleConvertor* New_ctor(::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor* bpmTimeProcessor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::ObstacleConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::ObstacleConvertor*, creationType>(bpmTimeProcessor)));
    }
  }; // BeatmapDataLoader/ObstacleConvertor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ObstacleConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ObstacleData* (GlobalNamespace::BeatmapDataLoader::ObstacleConvertor::*)(::BeatmapSaveDataVersion3::BeatmapSaveData::ObstacleData*)>(&GlobalNamespace::BeatmapDataLoader::ObstacleConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* obstacleSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/ObstacleData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::ObstacleConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleSaveData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ObstacleConvertor::GetNoteLineLayer
// Il2CppName: GetNoteLineLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (*)(int)>(&GlobalNamespace::BeatmapDataLoader::ObstacleConvertor::GetNoteLineLayer)> {
  static const MethodInfo* get() {
    static auto* lineLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::ObstacleConvertor*), "GetNoteLineLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ObstacleConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
