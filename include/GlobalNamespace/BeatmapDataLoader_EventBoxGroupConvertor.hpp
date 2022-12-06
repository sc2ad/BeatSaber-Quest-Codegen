// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
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
  // Forward declaring type: DataConvertor`2<T, TParam>
  template<typename T, typename TParam>
  class DataConvertor_2;
  // Forward declaring type: BeatmapEventDataBox
  class BeatmapEventDataBox;
  // Forward declaring type: LightGroupSO
  class LightGroupSO;
  // Forward declaring type: EnvironmentLightGroups
  class EnvironmentLightGroups;
  // Forward declaring type: BeatmapEventDataBoxGroup
  class BeatmapEventDataBoxGroup;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::EventBoxGroupConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::EventBoxGroupConvertor*, "", "BeatmapDataLoader/EventBoxGroupConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader/EventBoxGroupConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::EventBoxGroupConvertor : public ::Il2CppObject {
    public:
    public:
    // private readonly DataConvertor`2<BeatmapEventDataBox,LightGroupSO> _dataConvertor
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::LightGroupSO*>* dataConvertor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::LightGroupSO*>*) == 0x8);
    // private readonly EnvironmentLightGroups _lightGroups
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::EnvironmentLightGroups* lightGroups;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentLightGroups*) == 0x8);
    public:
    // Get instance field reference: private readonly DataConvertor`2<BeatmapEventDataBox,LightGroupSO> _dataConvertor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DataConvertor_2<::GlobalNamespace::BeatmapEventDataBox*, ::GlobalNamespace::LightGroupSO*>*& dyn__dataConvertor();
    // Get instance field reference: private readonly EnvironmentLightGroups _lightGroups
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentLightGroups*& dyn__lightGroups();
    // public System.Void .ctor(EnvironmentLightGroups lightGroups)
    // Offset: 0x13AB3A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::EventBoxGroupConvertor* New_ctor(::GlobalNamespace::EnvironmentLightGroups* lightGroups) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::EventBoxGroupConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::EventBoxGroupConvertor*, creationType>(lightGroups)));
    }
    // public BeatmapEventDataBoxGroup Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.EventBoxGroup eventBoxGroupSaveData)
    // Offset: 0x13AB4B8
    ::GlobalNamespace::BeatmapEventDataBoxGroup* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup* eventBoxGroupSaveData);
  }; // BeatmapDataLoader/EventBoxGroupConvertor
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataLoader::EventBoxGroupConvertor), 24 + sizeof(::GlobalNamespace::EnvironmentLightGroups*)> __GlobalNamespace_BeatmapDataLoader_EventBoxGroupConvertorSizeCheck;
  static_assert(sizeof(BeatmapDataLoader::EventBoxGroupConvertor) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::EventBoxGroupConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::EventBoxGroupConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapEventDataBoxGroup* (GlobalNamespace::BeatmapDataLoader::EventBoxGroupConvertor::*)(::BeatmapSaveDataVersion3::BeatmapSaveData::EventBoxGroup*)>(&GlobalNamespace::BeatmapDataLoader::EventBoxGroupConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* eventBoxGroupSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/EventBoxGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::EventBoxGroupConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventBoxGroupSaveData});
  }
};
