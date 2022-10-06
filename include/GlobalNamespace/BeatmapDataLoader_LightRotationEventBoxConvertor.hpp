// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: DataItemConvertor`4
#include "GlobalNamespace/DataItemConvertor_4.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventDataBox
  class BeatmapEventDataBox;
  // Forward declaring type: LightRotationBeatmapEventDataBox
  class LightRotationBeatmapEventDataBox;
  // Forward declaring type: LightGroupSO
  class LightGroupSO;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::LightRotationEventBoxConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::LightRotationEventBoxConvertor*, "", "BeatmapDataLoader/LightRotationEventBoxConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataLoader/LightRotationEventBoxConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::LightRotationEventBoxConvertor : public ::GlobalNamespace::DataItemConvertor_4<::GlobalNamespace::BeatmapEventDataBox*, ::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*, ::GlobalNamespace::LightRotationBeatmapEventDataBox*, ::GlobalNamespace::LightGroupSO*> {
    public:
    // protected LightRotationBeatmapEventDataBox Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.LightRotationEventBox saveData, LightGroupSO lightGroupData)
    // Offset: 0x137B3E4
    ::GlobalNamespace::LightRotationBeatmapEventDataBox* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox* saveData, ::GlobalNamespace::LightGroupSO* lightGroupData);
    // public System.Void .ctor()
    // Offset: 0x137ABD8
    // Implemented from: DataItemConvertor`4
    // Base method: System.Void DataItemConvertor_4::.ctor()
    // Base method: System.Void DataItemConvertor_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::LightRotationEventBoxConvertor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::LightRotationEventBoxConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::LightRotationEventBoxConvertor*, creationType>()));
    }
  }; // BeatmapDataLoader/LightRotationEventBoxConvertor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::LightRotationEventBoxConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightRotationBeatmapEventDataBox* (GlobalNamespace::BeatmapDataLoader::LightRotationEventBoxConvertor::*)(::BeatmapSaveDataVersion3::BeatmapSaveData::LightRotationEventBox*, ::GlobalNamespace::LightGroupSO*)>(&GlobalNamespace::BeatmapDataLoader::LightRotationEventBoxConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* saveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/LightRotationEventBox")->byval_arg;
    static auto* lightGroupData = &::il2cpp_utils::GetClassFromName("", "LightGroupSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::LightRotationEventBoxConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{saveData, lightGroupData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::LightRotationEventBoxConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
