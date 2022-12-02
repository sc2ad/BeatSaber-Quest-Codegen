// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TutorialSongController
#include "GlobalNamespace/TutorialSongController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialSongController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialSongController::InitData*, "", "TutorialSongController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TutorialSongController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialSongController::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Single songBpm
    // Size: 0x4
    // Offset: 0x10
    float songBpm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songBpm and: beatmapData
    char __padding0[0x4] = {};
    // public readonly BeatmapData beatmapData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapData*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Single songBpm
    [[deprecated("Use field access instead!")]] float& dyn_songBpm();
    // Get instance field reference: public readonly BeatmapData beatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapData*& dyn_beatmapData();
    // public System.Void .ctor(System.Single songBpm, BeatmapData beatmapData)
    // Offset: 0x13BCED4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialSongController::InitData* New_ctor(float songBpm, ::GlobalNamespace::BeatmapData* beatmapData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialSongController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialSongController::InitData*, creationType>(songBpm, beatmapData)));
    }
  }; // TutorialSongController/InitData
  #pragma pack(pop)
  static check_size<sizeof(TutorialSongController::InitData), 24 + sizeof(::GlobalNamespace::BeatmapData*)> __GlobalNamespace_TutorialSongController_InitDataSizeCheck;
  static_assert(sizeof(TutorialSongController::InitData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialSongController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
