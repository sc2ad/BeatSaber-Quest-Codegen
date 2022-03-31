// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: TrackLaneRingsManager
  class TrackLaneRingsManager;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
  // Forward declaring type: BeatmapDataCallbackWrapper
  class BeatmapDataCallbackWrapper;
  // Forward declaring type: BasicBeatmapEventData
  class BasicBeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRingsPositionStepEffectSpawner
  class TrackLaneRingsPositionStepEffectSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*, "", "TrackLaneRingsPositionStepEffectSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRingsPositionStepEffectSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackLaneRingsPositionStepEffectSpawner : public ::UnityEngine::MonoBehaviour {
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
    // private TrackLaneRingsManager _trackLaneRingsManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::TrackLaneRingsManager* trackLaneRingsManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TrackLaneRingsManager*) == 0x8);
    // [SpaceAttribute] Offset: 0x1252080
    // private BasicBeatmapEventType _beatmapEventType
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::BasicBeatmapEventType beatmapEventType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BasicBeatmapEventType) == 0x4);
    // [SpaceAttribute] Offset: 0x12520B8
    // private System.Single _minPositionStep
    // Size: 0x4
    // Offset: 0x24
    float minPositionStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxPositionStep
    // Size: 0x4
    // Offset: 0x28
    float maxPositionStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveSpeed
    // Size: 0x4
    // Offset: 0x2C
    float moveSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0x1252110
    // private readonly BeatmapCallbacksController _beatmapCallbacksController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapCallbacksController*) == 0x8);
    // private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::BeatmapDataCallbackWrapper* beatmapDataCallbackWrapper;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TrackLaneRingsManager _trackLaneRingsManager
    ::GlobalNamespace::TrackLaneRingsManager*& dyn__trackLaneRingsManager();
    // Get instance field reference: private BasicBeatmapEventType _beatmapEventType
    ::GlobalNamespace::BasicBeatmapEventType& dyn__beatmapEventType();
    // Get instance field reference: private System.Single _minPositionStep
    float& dyn__minPositionStep();
    // Get instance field reference: private System.Single _maxPositionStep
    float& dyn__maxPositionStep();
    // Get instance field reference: private System.Single _moveSpeed
    float& dyn__moveSpeed();
    // Get instance field reference: private readonly BeatmapCallbacksController _beatmapCallbacksController
    ::GlobalNamespace::BeatmapCallbacksController*& dyn__beatmapCallbacksController();
    // Get instance field reference: private BeatmapDataCallbackWrapper _beatmapDataCallbackWrapper
    ::GlobalNamespace::BeatmapDataCallbackWrapper*& dyn__beatmapDataCallbackWrapper();
    // protected System.Void Start()
    // Offset: 0x133ECE8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x133EE00
    void OnDestroy();
    // private System.Void HandleBeatmapEvent(BasicBeatmapEventData basicBeatmapEventData)
    // Offset: 0x133EE1C
    void HandleBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x133EEB0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRingsPositionStepEffectSpawner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRingsPositionStepEffectSpawner*, creationType>()));
    }
  }; // TrackLaneRingsPositionStepEffectSpawner
  #pragma pack(pop)
  static check_size<sizeof(TrackLaneRingsPositionStepEffectSpawner), 56 + sizeof(::GlobalNamespace::BeatmapDataCallbackWrapper*)> __GlobalNamespace_TrackLaneRingsPositionStepEffectSpawnerSizeCheck;
  static_assert(sizeof(TrackLaneRingsPositionStepEffectSpawner) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::*)()>(&GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::*)()>(&GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::HandleBeatmapEvent
// Il2CppName: HandleBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::HandleBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventData = &::il2cpp_utils::GetClassFromName("", "BasicBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*), "HandleBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
