// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VideoProjectionEffect
#include "GlobalNamespace/VideoProjectionEffect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VideoProjectionEffect::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionEffect::InitData*, "", "VideoProjectionEffect/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: VideoProjectionEffect/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class VideoProjectionEffect::InitData : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly IPreviewBeatmapLevel previewBeatmapLevel
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    public:
    // Creating conversion operator: operator ::GlobalNamespace::IPreviewBeatmapLevel*
    constexpr operator ::GlobalNamespace::IPreviewBeatmapLevel*() const noexcept {
      return previewBeatmapLevel;
    }
    // Get instance field reference: public readonly IPreviewBeatmapLevel previewBeatmapLevel
    ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_previewBeatmapLevel();
    // public System.Void .ctor(IPreviewBeatmapLevel previewBeatmapLevel)
    // Offset: 0x2AC4ADC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoProjectionEffect::InitData* New_ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VideoProjectionEffect::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoProjectionEffect::InitData*, creationType>(previewBeatmapLevel)));
    }
  }; // VideoProjectionEffect/InitData
  #pragma pack(pop)
  static check_size<sizeof(VideoProjectionEffect::InitData), 16 + sizeof(::GlobalNamespace::IPreviewBeatmapLevel*)> __GlobalNamespace_VideoProjectionEffect_InitDataSizeCheck;
  static_assert(sizeof(VideoProjectionEffect::InitData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VideoProjectionEffect::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
