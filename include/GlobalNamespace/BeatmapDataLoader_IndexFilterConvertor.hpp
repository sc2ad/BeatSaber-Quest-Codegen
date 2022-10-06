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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IndexFilter
  class IndexFilter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::IndexFilterConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::IndexFilterConvertor*, "", "BeatmapDataLoader/IndexFilterConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader/IndexFilterConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::IndexFilterConvertor : public ::Il2CppObject {
    public:
    // static public IndexFilter Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter indexFilter, System.Int32 groupSize)
    // Offset: 0x137AC28
    static ::GlobalNamespace::IndexFilter* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* indexFilter, int groupSize);
    // static public System.Boolean IsIndexFilterValid(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.IndexFilter indexFilter, System.Int32 groupSize)
    // Offset: 0x137AF88
    static bool IsIndexFilterValid(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter* indexFilter, int groupSize);
  }; // BeatmapDataLoader/IndexFilterConvertor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::IndexFilterConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IndexFilter* (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*, int)>(&GlobalNamespace::BeatmapDataLoader::IndexFilterConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* indexFilter = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilter")->byval_arg;
    static auto* groupSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::IndexFilterConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indexFilter, groupSize});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::IndexFilterConvertor::IsIndexFilterValid
// Il2CppName: IsIndexFilterValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::BeatmapSaveDataVersion3::BeatmapSaveData::IndexFilter*, int)>(&GlobalNamespace::BeatmapDataLoader::IndexFilterConvertor::IsIndexFilterValid)> {
  static const MethodInfo* get() {
    static auto* indexFilter = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/IndexFilter")->byval_arg;
    static auto* groupSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::IndexFilterConvertor*), "IsIndexFilterValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{indexFilter, groupSize});
  }
};
