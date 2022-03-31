// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevel*, "", "IBeatmapLevel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IBeatmapLevel
  // [TokenAttribute] Offset: FFFFFFFF
  class IBeatmapLevel/*, public ::GlobalNamespace::IPreviewBeatmapLevel*/ {
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IPreviewBeatmapLevel
    operator ::GlobalNamespace::IPreviewBeatmapLevel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(this);
    }
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
  }; // IBeatmapLevel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IBeatmapLevel::get_beatmapLevelData
// Il2CppName: get_beatmapLevelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData* (GlobalNamespace::IBeatmapLevel::*)()>(&GlobalNamespace::IBeatmapLevel::get_beatmapLevelData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBeatmapLevel*), "get_beatmapLevelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
