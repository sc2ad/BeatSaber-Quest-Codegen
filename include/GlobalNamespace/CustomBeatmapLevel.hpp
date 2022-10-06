// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CustomPreviewBeatmapLevel
#include "GlobalNamespace/CustomPreviewBeatmapLevel.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Including type: IFilePathSongAudioClipProvider
#include "GlobalNamespace/IFilePathSongAudioClipProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelData
  class BeatmapLevelData;
  // Forward declaring type: IBeatmapLevelData
  class IBeatmapLevelData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomBeatmapLevel
  class CustomBeatmapLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomBeatmapLevel*, "", "CustomBeatmapLevel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: CustomBeatmapLevel
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomBeatmapLevel : public ::GlobalNamespace::CustomPreviewBeatmapLevel/*, public ::GlobalNamespace::IBeatmapLevel, public ::GlobalNamespace::IFilePathSongAudioClipProvider*/ {
    public:
    public:
    // private BeatmapLevelData _beatmapLevelData
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::BeatmapLevelData* beatmapLevelData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelData*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBeatmapLevel
    operator ::GlobalNamespace::IBeatmapLevel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBeatmapLevel*>(this);
    }
    // Creating interface conversion operator: i_IBeatmapLevel
    inline ::GlobalNamespace::IBeatmapLevel* i_IBeatmapLevel() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBeatmapLevel*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IFilePathSongAudioClipProvider
    operator ::GlobalNamespace::IFilePathSongAudioClipProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(this);
    }
    // Creating interface conversion operator: i_IFilePathSongAudioClipProvider
    inline ::GlobalNamespace::IFilePathSongAudioClipProvider* i_IFilePathSongAudioClipProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(this);
    }
    // Creating conversion operator: operator ::GlobalNamespace::BeatmapLevelData*
    constexpr operator ::GlobalNamespace::BeatmapLevelData*() const noexcept {
      return beatmapLevelData;
    }
    // Get instance field reference: private BeatmapLevelData _beatmapLevelData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelData*& dyn__beatmapLevelData();
    // public IBeatmapLevelData get_beatmapLevelData()
    // Offset: 0x1479604
    ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();
    // public System.String get_songAudioClipPath()
    // Offset: 0x147960C
    ::StringW get_songAudioClipPath();
    // public System.Void .ctor(CustomPreviewBeatmapLevel customPreviewBeatmapLevel)
    // Offset: 0x1479690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomBeatmapLevel* New_ctor(::GlobalNamespace::CustomPreviewBeatmapLevel* customPreviewBeatmapLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomBeatmapLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomBeatmapLevel*, creationType>(customPreviewBeatmapLevel)));
    }
    // public System.Void SetBeatmapLevelData(BeatmapLevelData beatmapLevelData)
    // Offset: 0x1479830
    void SetBeatmapLevelData(::GlobalNamespace::BeatmapLevelData* beatmapLevelData);
  }; // CustomBeatmapLevel
  #pragma pack(pop)
  static check_size<sizeof(CustomBeatmapLevel), 152 + sizeof(::GlobalNamespace::BeatmapLevelData*)> __GlobalNamespace_CustomBeatmapLevelSizeCheck;
  static_assert(sizeof(CustomBeatmapLevel) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData
// Il2CppName: get_beatmapLevelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData* (GlobalNamespace::CustomBeatmapLevel::*)()>(&GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevel*), "get_beatmapLevelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevel::get_songAudioClipPath
// Il2CppName: get_songAudioClipPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomBeatmapLevel::*)()>(&GlobalNamespace::CustomBeatmapLevel::get_songAudioClipPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevel*), "get_songAudioClipPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData
// Il2CppName: SetBeatmapLevelData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomBeatmapLevel::*)(::GlobalNamespace::BeatmapLevelData*)>(&GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelData = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomBeatmapLevel*), "SetBeatmapLevelData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelData});
  }
};
