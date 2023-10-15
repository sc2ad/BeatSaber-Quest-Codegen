// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapCallbacksController
#include "GlobalNamespace/BeatmapCallbacksController.hpp"
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
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController::InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController::InitData*, "", "BeatmapCallbacksController/InitData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapCallbacksController/InitData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapCallbacksController::InitData : public ::Il2CppObject {
    public:
    public:
    // public readonly IReadonlyBeatmapData beatmapData
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // public readonly System.Single startFilterTime
    // Size: 0x4
    // Offset: 0x18
    float startFilterTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Boolean shouldKeepReplayState
    // Size: 0x1
    // Offset: 0x1C
    bool shouldKeepReplayState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly IReadonlyBeatmapData beatmapData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IReadonlyBeatmapData*& dyn_beatmapData();
    // Get instance field reference: public readonly System.Single startFilterTime
    [[deprecated("Use field access instead!")]] float& dyn_startFilterTime();
    // Get instance field reference: public readonly System.Boolean shouldKeepReplayState
    [[deprecated("Use field access instead!")]] bool& dyn_shouldKeepReplayState();
    // public System.Void .ctor(IReadonlyBeatmapData beatmapData, System.Single startFilterTime, System.Boolean shouldKeepReplayState)
    // Offset: 0x13DCC60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapCallbacksController::InitData* New_ctor(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, float startFilterTime, bool shouldKeepReplayState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapCallbacksController::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapCallbacksController::InitData*, creationType>(beatmapData, startFilterTime, shouldKeepReplayState)));
    }
  }; // BeatmapCallbacksController/InitData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapCallbacksController::InitData), 28 + sizeof(bool)> __GlobalNamespace_BeatmapCallbacksController_InitDataSizeCheck;
  static_assert(sizeof(BeatmapCallbacksController::InitData) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapCallbacksController::InitData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!