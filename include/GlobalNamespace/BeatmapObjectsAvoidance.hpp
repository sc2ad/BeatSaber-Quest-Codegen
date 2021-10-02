// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: IBeatmapObjectSpawnController
  class IBeatmapObjectSpawnController;
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
  // Forward declaring type: BeatmapObjectAvoidanceYOffsetEvaluator
  class BeatmapObjectAvoidanceYOffsetEvaluator;
  // Forward declaring type: BeatmapObjectAvoidancePathEvaluator
  class BeatmapObjectAvoidancePathEvaluator;
  // Forward declaring type: BeatmapObjectAvoidanceTiltEvaluator
  class BeatmapObjectAvoidanceTiltEvaluator;
  // Forward declaring type: BezierSplineEvaluator
  class BezierSplineEvaluator;
  // Forward declaring type: OffsetDirection
  struct OffsetDirection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectsAvoidance
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectsAvoidance : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [HeaderAttribute] Offset: 0xEFEA08
    // private System.Single _zOffset
    // Size: 0x4
    // Offset: 0x18
    float zOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _yOffset
    // Size: 0x4
    // Offset: 0x1C
    float yOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xEFEA64
    // private UnityEngine.Vector2 _gravity
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 gravity;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [HeaderAttribute] Offset: 0xEFEAB0
    // private UnityEngine.Transform _towardsPlayerWrapperTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* towardsPlayerWrapperTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xEFEAFC
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0xEFEB0C
    // private readonly IReadonlyBeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // [InjectAttribute] Offset: 0xEFEB1C
    // private readonly IBeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::IBeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xEFEB2C
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerTransforms*) == 0x8);
    // private BeatmapObjectAvoidanceYOffsetEvaluator _avoidanceYOffsetEvaluatorProvider
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator* avoidanceYOffsetEvaluatorProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*) == 0x8);
    // private BeatmapObjectAvoidancePathEvaluator _pathEvaluator
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::BeatmapObjectAvoidancePathEvaluator* pathEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*) == 0x8);
    // private BeatmapObjectAvoidanceTiltEvaluator _tiltEvaluator
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator* tiltEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*) == 0x8);
    // private BezierSplineEvaluator _pathBezierSplineEvaluator
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::BezierSplineEvaluator* pathBezierSplineEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BezierSplineEvaluator*) == 0x8);
    // private BezierSplineEvaluator _accelerationBezierSplineEvaluator
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::BezierSplineEvaluator* accelerationBezierSplineEvaluator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BezierSplineEvaluator*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x78
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _zOffset
    float& dyn__zOffset();
    // Get instance field reference: private System.Single _yOffset
    float& dyn__yOffset();
    // Get instance field reference: private UnityEngine.Vector2 _gravity
    UnityEngine::Vector2& dyn__gravity();
    // Get instance field reference: private UnityEngine.Transform _towardsPlayerWrapperTransform
    UnityEngine::Transform*& dyn__towardsPlayerWrapperTransform();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private readonly IReadonlyBeatmapData _beatmapData
    GlobalNamespace::IReadonlyBeatmapData*& dyn__beatmapData();
    // Get instance field reference: private readonly IBeatmapObjectSpawnController _beatmapObjectSpawnController
    GlobalNamespace::IBeatmapObjectSpawnController*& dyn__beatmapObjectSpawnController();
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // Get instance field reference: private BeatmapObjectAvoidanceYOffsetEvaluator _avoidanceYOffsetEvaluatorProvider
    GlobalNamespace::BeatmapObjectAvoidanceYOffsetEvaluator*& dyn__avoidanceYOffsetEvaluatorProvider();
    // Get instance field reference: private BeatmapObjectAvoidancePathEvaluator _pathEvaluator
    GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*& dyn__pathEvaluator();
    // Get instance field reference: private BeatmapObjectAvoidanceTiltEvaluator _tiltEvaluator
    GlobalNamespace::BeatmapObjectAvoidanceTiltEvaluator*& dyn__tiltEvaluator();
    // Get instance field reference: private BezierSplineEvaluator _pathBezierSplineEvaluator
    GlobalNamespace::BezierSplineEvaluator*& dyn__pathBezierSplineEvaluator();
    // Get instance field reference: private BezierSplineEvaluator _accelerationBezierSplineEvaluator
    GlobalNamespace::BezierSplineEvaluator*& dyn__accelerationBezierSplineEvaluator();
    // Get instance field reference: private UnityEngine.Transform _transform
    UnityEngine::Transform*& dyn__transform();
    // protected System.Void Awake()
    // Offset: 0x12A5A3C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x12A5A64
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x12A5F68
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x12A6060
    void Update();
    // private System.Void SetupAndRun()
    // Offset: 0x12A5BE4
    void SetupAndRun();
    // private System.Boolean BuildAnimationCurvePath()
    // Offset: 0x12A6234
    bool BuildAnimationCurvePath();
    // private System.Void AdjustPositionWithOffsetDirection(ref UnityEngine.Vector2 position, System.Int32 lineIndex, OffsetDirection offsetDirection)
    // Offset: 0x12A6804
    void AdjustPositionWithOffsetDirection(ByRef<UnityEngine::Vector2> position, int lineIndex, GlobalNamespace::OffsetDirection offsetDirection);
    // private System.Void HandleBeatmapObjectSpawnControllerDidInit()
    // Offset: 0x12A7304
    void HandleBeatmapObjectSpawnControllerDidInit();
    // public System.Void .ctor()
    // Offset: 0x12A7308
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectsAvoidance* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectsAvoidance::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectsAvoidance*, creationType>()));
    }
  }; // BeatmapObjectsAvoidance
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectsAvoidance), 120 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_BeatmapObjectsAvoidanceSizeCheck;
  static_assert(sizeof(BeatmapObjectsAvoidance) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectsAvoidance*, "", "BeatmapObjectsAvoidance");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsAvoidance::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&GlobalNamespace::BeatmapObjectsAvoidance::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsAvoidance*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsAvoidance::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&GlobalNamespace::BeatmapObjectsAvoidance::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsAvoidance*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsAvoidance::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&GlobalNamespace::BeatmapObjectsAvoidance::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsAvoidance*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsAvoidance::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&GlobalNamespace::BeatmapObjectsAvoidance::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsAvoidance*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsAvoidance::SetupAndRun
// Il2CppName: SetupAndRun
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&GlobalNamespace::BeatmapObjectsAvoidance::SetupAndRun)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsAvoidance*), "SetupAndRun", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsAvoidance::BuildAnimationCurvePath
// Il2CppName: BuildAnimationCurvePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&GlobalNamespace::BeatmapObjectsAvoidance::BuildAnimationCurvePath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsAvoidance*), "BuildAnimationCurvePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsAvoidance::AdjustPositionWithOffsetDirection
// Il2CppName: AdjustPositionWithOffsetDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsAvoidance::*)(ByRef<UnityEngine::Vector2>, int, GlobalNamespace::OffsetDirection)>(&GlobalNamespace::BeatmapObjectsAvoidance::AdjustPositionWithOffsetDirection)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* lineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offsetDirection = &::il2cpp_utils::GetClassFromName("", "OffsetDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsAvoidance*), "AdjustPositionWithOffsetDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, lineIndex, offsetDirection});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsAvoidance::HandleBeatmapObjectSpawnControllerDidInit
// Il2CppName: HandleBeatmapObjectSpawnControllerDidInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectsAvoidance::*)()>(&GlobalNamespace::BeatmapObjectsAvoidance::HandleBeatmapObjectSpawnControllerDidInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectsAvoidance*), "HandleBeatmapObjectSpawnControllerDidInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectsAvoidance::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
