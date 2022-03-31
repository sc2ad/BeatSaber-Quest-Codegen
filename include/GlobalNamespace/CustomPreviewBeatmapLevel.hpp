// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: IFilePathSongPreviewAudioClipProvider
#include "GlobalNamespace/IFilePathSongPreviewAudioClipProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISpriteAsyncLoader
  class ISpriteAsyncLoader;
  // Forward declaring type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomPreviewBeatmapLevel
  class CustomPreviewBeatmapLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomPreviewBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomPreviewBeatmapLevel*, "", "CustomPreviewBeatmapLevel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: CustomPreviewBeatmapLevel
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomPreviewBeatmapLevel : public ::Il2CppObject/*, public ::GlobalNamespace::IPreviewBeatmapLevel, public ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*/ {
    public:
    // Nested type: ::GlobalNamespace::CustomPreviewBeatmapLevel::$GetCoverImageAsync$d__60
    struct $GetCoverImageAsync$d__60;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private readonly ISpriteAsyncLoader <spriteAsyncLoader>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ISpriteAsyncLoader*) == 0x8);
    // private readonly StandardLevelInfoSaveData <standardLevelInfoSaveData>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardLevelInfoSaveData*) == 0x8);
    // private readonly System.String <customLevelPath>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW customLevelPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <levelID>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW levelID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <songName>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW songName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <songSubName>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW songSubName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <songAuthorName>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::StringW songAuthorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <levelAuthorName>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::StringW levelAuthorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Single <beatsPerMinute>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <songTimeOffset>k__BackingField
    // Size: 0x4
    // Offset: 0x54
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <songDuration>k__BackingField
    // Size: 0x4
    // Offset: 0x58
    float songDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <shuffle>k__BackingField
    // Size: 0x4
    // Offset: 0x5C
    float shuffle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <shufflePeriod>k__BackingField
    // Size: 0x4
    // Offset: 0x60
    float shufflePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <previewStartTime>k__BackingField
    // Size: 0x4
    // Offset: 0x64
    float previewStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single <previewDuration>k__BackingField
    // Size: 0x4
    // Offset: 0x68
    float previewDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: previewDuration and: environmentInfo
    char __padding14[0x4] = {};
    // private readonly EnvironmentInfoSO <environmentInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private readonly EnvironmentInfoSO <allDirectionsEnvironmentInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private readonly UnityEngine.Sprite <defaultCoverImage>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    ::UnityEngine::Sprite* defaultCoverImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private readonly System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> <previewDifficultyBeatmapSets>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IPreviewBeatmapLevel
    operator ::GlobalNamespace::IPreviewBeatmapLevel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider
    operator ::GlobalNamespace::IFilePathSongPreviewAudioClipProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IFilePathSongPreviewAudioClipProvider*>(this);
    }
    // Get instance field reference: private readonly ISpriteAsyncLoader <spriteAsyncLoader>k__BackingField
    ::GlobalNamespace::ISpriteAsyncLoader*& dyn_$spriteAsyncLoader$k__BackingField();
    // Get instance field reference: private readonly StandardLevelInfoSaveData <standardLevelInfoSaveData>k__BackingField
    ::GlobalNamespace::StandardLevelInfoSaveData*& dyn_$standardLevelInfoSaveData$k__BackingField();
    // Get instance field reference: private readonly System.String <customLevelPath>k__BackingField
    ::StringW& dyn_$customLevelPath$k__BackingField();
    // Get instance field reference: private readonly System.String <levelID>k__BackingField
    ::StringW& dyn_$levelID$k__BackingField();
    // Get instance field reference: private readonly System.String <songName>k__BackingField
    ::StringW& dyn_$songName$k__BackingField();
    // Get instance field reference: private readonly System.String <songSubName>k__BackingField
    ::StringW& dyn_$songSubName$k__BackingField();
    // Get instance field reference: private readonly System.String <songAuthorName>k__BackingField
    ::StringW& dyn_$songAuthorName$k__BackingField();
    // Get instance field reference: private readonly System.String <levelAuthorName>k__BackingField
    ::StringW& dyn_$levelAuthorName$k__BackingField();
    // Get instance field reference: private readonly System.Single <beatsPerMinute>k__BackingField
    float& dyn_$beatsPerMinute$k__BackingField();
    // Get instance field reference: private readonly System.Single <songTimeOffset>k__BackingField
    float& dyn_$songTimeOffset$k__BackingField();
    // Get instance field reference: private readonly System.Single <songDuration>k__BackingField
    float& dyn_$songDuration$k__BackingField();
    // Get instance field reference: private readonly System.Single <shuffle>k__BackingField
    float& dyn_$shuffle$k__BackingField();
    // Get instance field reference: private readonly System.Single <shufflePeriod>k__BackingField
    float& dyn_$shufflePeriod$k__BackingField();
    // Get instance field reference: private readonly System.Single <previewStartTime>k__BackingField
    float& dyn_$previewStartTime$k__BackingField();
    // Get instance field reference: private readonly System.Single <previewDuration>k__BackingField
    float& dyn_$previewDuration$k__BackingField();
    // Get instance field reference: private readonly EnvironmentInfoSO <environmentInfo>k__BackingField
    ::GlobalNamespace::EnvironmentInfoSO*& dyn_$environmentInfo$k__BackingField();
    // Get instance field reference: private readonly EnvironmentInfoSO <allDirectionsEnvironmentInfo>k__BackingField
    ::GlobalNamespace::EnvironmentInfoSO*& dyn_$allDirectionsEnvironmentInfo$k__BackingField();
    // Get instance field reference: private readonly UnityEngine.Sprite <defaultCoverImage>k__BackingField
    ::UnityEngine::Sprite*& dyn_$defaultCoverImage$k__BackingField();
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> <previewDifficultyBeatmapSets>k__BackingField
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*& dyn_$previewDifficultyBeatmapSets$k__BackingField();
    // Get instance field reference: private UnityEngine.Sprite _coverImage
    ::UnityEngine::Sprite*& dyn__coverImage();
    // public ISpriteAsyncLoader get_spriteAsyncLoader()
    // Offset: 0x140A398
    ::GlobalNamespace::ISpriteAsyncLoader* get_spriteAsyncLoader();
    // public StandardLevelInfoSaveData get_standardLevelInfoSaveData()
    // Offset: 0x140A3A0
    ::GlobalNamespace::StandardLevelInfoSaveData* get_standardLevelInfoSaveData();
    // public System.String get_customLevelPath()
    // Offset: 0x140A3A8
    ::StringW get_customLevelPath();
    // public System.String get_levelID()
    // Offset: 0x140A3B0
    ::StringW get_levelID();
    // public System.String get_songName()
    // Offset: 0x140A3B8
    ::StringW get_songName();
    // public System.String get_songSubName()
    // Offset: 0x140A3C0
    ::StringW get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x140A3C8
    ::StringW get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x140A3D0
    ::StringW get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x140A3D8
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x140A3E0
    float get_songTimeOffset();
    // public System.Single get_songDuration()
    // Offset: 0x140A3E8
    float get_songDuration();
    // public System.Single get_shuffle()
    // Offset: 0x140A3F0
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x140A3F8
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x140A400
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x140A408
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x140A410
    ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x140A418
    ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public UnityEngine.Sprite get_defaultCoverImage()
    // Offset: 0x140A420
    ::UnityEngine::Sprite* get_defaultCoverImage();
    // public System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets()
    // Offset: 0x140A428
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // public System.String get_songPreviewAudioClipPath()
    // Offset: 0x14096B8
    ::StringW get_songPreviewAudioClipPath();
    // public System.Void .ctor(UnityEngine.Sprite defaultCoverImage, StandardLevelInfoSaveData standardLevelInfoSaveData, System.String customLevelPath, ISpriteAsyncLoader spriteAsyncLoader, System.String levelID, System.String songName, System.String songSubName, System.String songAuthorName, System.String levelAuthorName, System.Single beatsPerMinute, System.Single songTimeOffset, System.Single shuffle, System.Single shufflePeriod, System.Single previewStartTime, System.Single previewDuration, EnvironmentInfoSO environmentInfo, EnvironmentInfoSO allDirectionsEnvironmentInfo, System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> previewDifficultyBeatmapSets)
    // Offset: 0x14097EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomPreviewBeatmapLevel* New_ctor(::UnityEngine::Sprite* defaultCoverImage, ::GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData, ::StringW customLevelPath, ::GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float beatsPerMinute, float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, float previewDuration, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo, ::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomPreviewBeatmapLevel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomPreviewBeatmapLevel*, creationType>(defaultCoverImage, standardLevelInfoSaveData, customLevelPath, spriteAsyncLoader, levelID, songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, shuffle, shufflePeriod, previewStartTime, previewDuration, environmentInfo, allDirectionsEnvironmentInfo, previewDifficultyBeatmapSets)));
    }
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x140A430
    ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);
  }; // CustomPreviewBeatmapLevel
  #pragma pack(pop)
  static check_size<sizeof(CustomPreviewBeatmapLevel), 144 + sizeof(::UnityEngine::Sprite*)> __GlobalNamespace_CustomPreviewBeatmapLevelSizeCheck;
  static_assert(sizeof(CustomPreviewBeatmapLevel) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_spriteAsyncLoader
// Il2CppName: get_spriteAsyncLoader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ISpriteAsyncLoader* (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_spriteAsyncLoader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_spriteAsyncLoader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_standardLevelInfoSaveData
// Il2CppName: get_standardLevelInfoSaveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardLevelInfoSaveData* (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_standardLevelInfoSaveData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_standardLevelInfoSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_customLevelPath
// Il2CppName: get_customLevelPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_customLevelPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_customLevelPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_levelID
// Il2CppName: get_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_levelID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_songName
// Il2CppName: get_songName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_songName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_songName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_songSubName
// Il2CppName: get_songSubName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_songSubName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_songSubName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_songAuthorName
// Il2CppName: get_songAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_songAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_songAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_levelAuthorName
// Il2CppName: get_levelAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_levelAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_levelAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_beatsPerMinute
// Il2CppName: get_beatsPerMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_beatsPerMinute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_beatsPerMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_songTimeOffset
// Il2CppName: get_songTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_songTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_songTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_songDuration
// Il2CppName: get_songDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_songDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_songDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_shuffle
// Il2CppName: get_shuffle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_shuffle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_shuffle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_shufflePeriod
// Il2CppName: get_shufflePeriod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_shufflePeriod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_shufflePeriod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_previewStartTime
// Il2CppName: get_previewStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_previewStartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_previewStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_previewDuration
// Il2CppName: get_previewDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_previewDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_previewDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_environmentInfo
// Il2CppName: get_environmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_environmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_environmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo
// Il2CppName: get_allDirectionsEnvironmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_defaultCoverImage
// Il2CppName: get_defaultCoverImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_defaultCoverImage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_defaultCoverImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_previewDifficultyBeatmapSets
// Il2CppName: get_previewDifficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_previewDifficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::get_songPreviewAudioClipPath
// Il2CppName: get_songPreviewAudioClipPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomPreviewBeatmapLevel::*)()>(&GlobalNamespace::CustomPreviewBeatmapLevel::get_songPreviewAudioClipPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "get_songPreviewAudioClipPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CustomPreviewBeatmapLevel::GetCoverImageAsync
// Il2CppName: GetCoverImageAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* (GlobalNamespace::CustomPreviewBeatmapLevel::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::CustomPreviewBeatmapLevel::GetCoverImageAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomPreviewBeatmapLevel*), "GetCoverImageAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
