// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: IAssetSongPreviewAudioClipProvider
#include "GlobalNamespace/IAssetSongPreviewAudioClipProvider.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
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
  // Forward declaring type: PreviewBeatmapLevelSO
  class PreviewBeatmapLevelSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PreviewBeatmapLevelSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewBeatmapLevelSO*, "", "PreviewBeatmapLevelSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: PreviewBeatmapLevelSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PreviewBeatmapLevelSO : public ::GlobalNamespace::PersistentScriptableObject/*, public ::GlobalNamespace::IPreviewBeatmapLevel, public ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*/ {
    public:
    // Nested type: ::GlobalNamespace::PreviewBeatmapLevelSO::$GetPreviewAudioClipAsync$d__53
    struct $GetPreviewAudioClipAsync$d__53;
    // Nested type: ::GlobalNamespace::PreviewBeatmapLevelSO::$GetCoverImageAsync$d__54
    struct $GetCoverImageAsync$d__54;
    public:
    // private System.String _levelID
    // Size: 0x8
    // Offset: 0x18
    ::StringW levelID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _songName
    // Size: 0x8
    // Offset: 0x20
    ::StringW songName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _songSubName
    // Size: 0x8
    // Offset: 0x28
    ::StringW songSubName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _songAuthorName
    // Size: 0x8
    // Offset: 0x30
    ::StringW songAuthorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _levelAuthorName
    // Size: 0x8
    // Offset: 0x38
    ::StringW levelAuthorName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.AudioClip _previewAudioClip
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AudioClip* previewAudioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private System.Single _beatsPerMinute
    // Size: 0x4
    // Offset: 0x48
    float beatsPerMinute;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songTimeOffset
    // Size: 0x4
    // Offset: 0x4C
    float songTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shuffle
    // Size: 0x4
    // Offset: 0x50
    float shuffle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _shufflePeriod
    // Size: 0x4
    // Offset: 0x54
    float shufflePeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewStartTime
    // Size: 0x4
    // Offset: 0x58
    float previewStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _previewDuration
    // Size: 0x4
    // Offset: 0x5C
    float previewDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _songDuration
    // Size: 0x4
    // Offset: 0x60
    float songDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songDuration and: coverImage
    char __padding12[0x4] = {};
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    // private EnvironmentInfoSO _environmentInfo
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*> previewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*>) == 0x8);
    // public System.Boolean _ignore360MovementBeatmaps
    // Size: 0x1
    // Offset: 0x88
    bool ignore360MovementBeatmaps;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignore360MovementBeatmaps and: no360MovementPreviewDifficultyBeatmapSets
    char __padding17[0x7] = {};
    // private System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> _no360MovementPreviewDifficultyBeatmapSets
    // Size: 0x8
    // Offset: 0x90
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* no360MovementPreviewDifficultyBeatmapSets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IPreviewBeatmapLevel
    operator ::GlobalNamespace::IPreviewBeatmapLevel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(this);
    }
    // Creating interface conversion operator: i_IPreviewBeatmapLevel
    inline ::GlobalNamespace::IPreviewBeatmapLevel* i_IPreviewBeatmapLevel() noexcept {
      return reinterpret_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider
    operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(this);
    }
    // Creating interface conversion operator: i_IAssetSongPreviewAudioClipProvider
    inline ::GlobalNamespace::IAssetSongPreviewAudioClipProvider* i_IAssetSongPreviewAudioClipProvider() noexcept {
      return reinterpret_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _levelID
    [[deprecated("Use field access instead!")]] ::StringW& dyn__levelID();
    // Get instance field reference: private System.String _songName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__songName();
    // Get instance field reference: private System.String _songSubName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__songSubName();
    // Get instance field reference: private System.String _songAuthorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__songAuthorName();
    // Get instance field reference: private System.String _levelAuthorName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__levelAuthorName();
    // Get instance field reference: private UnityEngine.AudioClip _previewAudioClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__previewAudioClip();
    // Get instance field reference: private System.Single _beatsPerMinute
    [[deprecated("Use field access instead!")]] float& dyn__beatsPerMinute();
    // Get instance field reference: private System.Single _songTimeOffset
    [[deprecated("Use field access instead!")]] float& dyn__songTimeOffset();
    // Get instance field reference: private System.Single _shuffle
    [[deprecated("Use field access instead!")]] float& dyn__shuffle();
    // Get instance field reference: private System.Single _shufflePeriod
    [[deprecated("Use field access instead!")]] float& dyn__shufflePeriod();
    // Get instance field reference: private System.Single _previewStartTime
    [[deprecated("Use field access instead!")]] float& dyn__previewStartTime();
    // Get instance field reference: private System.Single _previewDuration
    [[deprecated("Use field access instead!")]] float& dyn__previewDuration();
    // Get instance field reference: private System.Single _songDuration
    [[deprecated("Use field access instead!")]] float& dyn__songDuration();
    // Get instance field reference: private UnityEngine.Sprite _coverImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__coverImage();
    // Get instance field reference: private EnvironmentInfoSO _environmentInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentInfoSO*& dyn__environmentInfo();
    // Get instance field reference: private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentInfoSO*& dyn__allDirectionsEnvironmentInfo();
    // Get instance field reference: private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::PreviewDifficultyBeatmapSet*>& dyn__previewDifficultyBeatmapSets();
    // Get instance field reference: public System.Boolean _ignore360MovementBeatmaps
    [[deprecated("Use field access instead!")]] bool& dyn__ignore360MovementBeatmaps();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> _no360MovementPreviewDifficultyBeatmapSets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*& dyn__no360MovementPreviewDifficultyBeatmapSets();
    // public System.String get_levelID()
    // Offset: 0x141BE4C
    ::StringW get_levelID();
    // public System.String get_songName()
    // Offset: 0x141BE54
    ::StringW get_songName();
    // public System.String get_songSubName()
    // Offset: 0x141BE5C
    ::StringW get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0x141BE64
    ::StringW get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0x141BE6C
    ::StringW get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0x141BE74
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0x141BE7C
    float get_songTimeOffset();
    // public System.Single get_songDuration()
    // Offset: 0x141BE84
    float get_songDuration();
    // public System.Single get_shuffle()
    // Offset: 0x141BE8C
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0x141BE94
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0x141BE9C
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0x141BEA4
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0x141BEAC
    ::GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0x141BEB4
    ::GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public UnityEngine.AudioClip get_songPreviewAudioClip()
    // Offset: 0x141BEBC
    ::UnityEngine::AudioClip* get_songPreviewAudioClip();
    // public System.Collections.Generic.IReadOnlyList`1<PreviewDifficultyBeatmapSet> get_previewDifficultyBeatmapSets()
    // Offset: 0x141BEC4
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
    // public System.Void .ctor()
    // Offset: 0x141C290
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreviewBeatmapLevelSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PreviewBeatmapLevelSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreviewBeatmapLevelSO*, creationType>()));
    }
    // private System.Void InitData()
    // Offset: 0x141BF0C
    void InitData();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x141C048
    ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(::System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x141C16C
    ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GetCoverImageAsync(::System::Threading::CancellationToken cancellationToken);
    // protected override System.Void OnEnable()
    // Offset: 0x141BEDC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
  }; // PreviewBeatmapLevelSO
  #pragma pack(pop)
  static check_size<sizeof(PreviewBeatmapLevelSO), 144 + sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>*)> __GlobalNamespace_PreviewBeatmapLevelSOSizeCheck;
  static_assert(sizeof(PreviewBeatmapLevelSO) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_levelID
// Il2CppName: get_levelID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_levelID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_levelID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songName
// Il2CppName: get_songName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songSubName
// Il2CppName: get_songSubName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songSubName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songSubName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songAuthorName
// Il2CppName: get_songAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_levelAuthorName
// Il2CppName: get_levelAuthorName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_levelAuthorName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_levelAuthorName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_beatsPerMinute
// Il2CppName: get_beatsPerMinute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_beatsPerMinute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_beatsPerMinute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songTimeOffset
// Il2CppName: get_songTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songDuration
// Il2CppName: get_songDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_shuffle
// Il2CppName: get_shuffle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_shuffle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_shuffle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_shufflePeriod
// Il2CppName: get_shufflePeriod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_shufflePeriod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_shufflePeriod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_previewStartTime
// Il2CppName: get_previewStartTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_previewStartTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_previewStartTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_previewDuration
// Il2CppName: get_previewDuration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_previewDuration)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_previewDuration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfo
// Il2CppName: get_environmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_environmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_environmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_allDirectionsEnvironmentInfo
// Il2CppName: get_allDirectionsEnvironmentInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_allDirectionsEnvironmentInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_allDirectionsEnvironmentInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_songPreviewAudioClip
// Il2CppName: get_songPreviewAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_songPreviewAudioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_songPreviewAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::get_previewDifficultyBeatmapSets
// Il2CppName: get_previewDifficultyBeatmapSets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::PreviewDifficultyBeatmapSet*>* (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::get_previewDifficultyBeatmapSets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "get_previewDifficultyBeatmapSets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::InitData
// Il2CppName: InitData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::InitData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "InitData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::GetPreviewAudioClipAsync
// Il2CppName: GetPreviewAudioClipAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (GlobalNamespace::PreviewBeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::PreviewBeatmapLevelSO::GetPreviewAudioClipAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "GetPreviewAudioClipAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::GetCoverImageAsync
// Il2CppName: GetCoverImageAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* (GlobalNamespace::PreviewBeatmapLevelSO::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::PreviewBeatmapLevelSO::GetCoverImageAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "GetCoverImageAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PreviewBeatmapLevelSO::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PreviewBeatmapLevelSO::*)()>(&GlobalNamespace::PreviewBeatmapLevelSO::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PreviewBeatmapLevelSO*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
