// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: StandardLevelInfoSaveData
#include "GlobalNamespace/StandardLevelInfoSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*, "", "StandardLevelInfoSaveData/DifficultyBeatmapSet");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelInfoSaveData/DifficultyBeatmapSet
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelInfoSaveData::DifficultyBeatmapSet : public ::Il2CppObject {
    public:
    public:
    // private System.String _beatmapCharacteristicName
    // Size: 0x8
    // Offset: 0x10
    ::StringW beatmapCharacteristicName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private StandardLevelInfoSaveData/DifficultyBeatmap[] _difficultyBeatmaps
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*> difficultyBeatmaps;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*>) == 0x8);
    public:
    // Get instance field reference: private System.String _beatmapCharacteristicName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__beatmapCharacteristicName();
    // Get instance field reference: private StandardLevelInfoSaveData/DifficultyBeatmap[] _difficultyBeatmaps
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*>& dyn__difficultyBeatmaps();
    // public System.String get_beatmapCharacteristicName()
    // Offset: 0x13AF0D0
    ::StringW get_beatmapCharacteristicName();
    // public StandardLevelInfoSaveData/DifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x13AF0D8
    ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*> get_difficultyBeatmaps();
    // public System.Void .ctor(System.String beatmapCharacteristicName, StandardLevelInfoSaveData/DifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x13AF070
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData::DifficultyBeatmapSet* New_ctor(::StringW beatmapCharacteristicName, ::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*> difficultyBeatmaps) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData::DifficultyBeatmapSet*, creationType>(beatmapCharacteristicName, difficultyBeatmaps)));
    }
  }; // StandardLevelInfoSaveData/DifficultyBeatmapSet
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelInfoSaveData::DifficultyBeatmapSet), 24 + sizeof(::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*>)> __GlobalNamespace_StandardLevelInfoSaveData_DifficultyBeatmapSetSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData::DifficultyBeatmapSet) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet::get_beatmapCharacteristicName
// Il2CppName: get_beatmapCharacteristicName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet::get_beatmapCharacteristicName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*), "get_beatmapCharacteristicName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet::get_difficultyBeatmaps
// Il2CppName: get_difficultyBeatmaps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmap*> (GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet::*)()>(&GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet*), "get_difficultyBeatmaps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelInfoSaveData::DifficultyBeatmapSet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
