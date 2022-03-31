// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VideoProjectionEffect
#include "GlobalNamespace/VideoProjectionEffect.hpp"
// Including type: VideoProjectionEffect/VideoProjectionBehavior
#include "GlobalNamespace/VideoProjectionEffect_VideoProjectionBehavior.hpp"
// Including type: BasicBeatmapEventType
#include "GlobalNamespace/BasicBeatmapEventType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: VideoProjectionDataModelSO
  class VideoProjectionDataModelSO;
  // Forward declaring type: SongTimeSyncedVideoPlayer
  class SongTimeSyncedVideoPlayer;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior*, "", "VideoProjectionEffect/GameplayVideoProjectionBehavior");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: VideoProjectionEffect/GameplayVideoProjectionBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  class VideoProjectionEffect::GameplayVideoProjectionBehavior : public ::GlobalNamespace::VideoProjectionEffect::VideoProjectionBehavior {
    public:
    // Nested type: ::GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // public System.Void .ctor(IReadonlyBeatmapData beatmapData, VideoProjectionDataModelSO dataModel, SongTimeSyncedVideoPlayer videoPlayer, BasicBeatmapEventType videoEventType, IPreviewBeatmapLevel previewBeatmapLevel)
    // Offset: 0x2AC413C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoProjectionEffect::GameplayVideoProjectionBehavior* New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::VideoProjectionDataModelSO* dataModel, ::GlobalNamespace::SongTimeSyncedVideoPlayer* videoPlayer, ::GlobalNamespace::BasicBeatmapEventType videoEventType, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoProjectionEffect::GameplayVideoProjectionBehavior*, creationType>(beatmapData, dataModel, videoPlayer, videoEventType, previewBeatmapLevel)));
    }
  }; // VideoProjectionEffect/GameplayVideoProjectionBehavior
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::GameplayVideoProjectionBehavior::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
