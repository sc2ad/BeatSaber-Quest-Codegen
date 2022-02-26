// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BezierSplineEvaluator
  class BezierSplineEvaluator;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: PlayerTransforms
  class PlayerTransforms;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectAvoidancePathEvaluator
  class BeatmapObjectAvoidancePathEvaluator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*, "", "BeatmapObjectAvoidancePathEvaluator");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectAvoidancePathEvaluator
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectAvoidancePathEvaluator : public ::Il2CppObject {
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
    // private readonly System.Single _jumpStartZ
    // Size: 0x4
    // Offset: 0x10
    float jumpStartZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _jumpEndZ
    // Size: 0x4
    // Offset: 0x14
    float jumpEndZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _zOffset
    // Size: 0x4
    // Offset: 0x18
    float zOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _yOffset
    // Size: 0x4
    // Offset: 0x1C
    float yOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _noteJumpSpeed
    // Size: 0x4
    // Offset: 0x20
    float noteJumpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Single _moveToPlayerHeadTParam
    // Size: 0x4
    // Offset: 0x24
    float moveToPlayerHeadTParam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly BezierSplineEvaluator _pathBezierCurveEvaluator
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BezierSplineEvaluator*) == 0x8);
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private readonly PlayerTransforms _playerTransforms
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::PlayerTransforms* playerTransforms;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerTransforms*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Single _jumpStartZ
    float& dyn__jumpStartZ();
    // Get instance field reference: private readonly System.Single _jumpEndZ
    float& dyn__jumpEndZ();
    // Get instance field reference: private readonly System.Single _zOffset
    float& dyn__zOffset();
    // Get instance field reference: private readonly System.Single _yOffset
    float& dyn__yOffset();
    // Get instance field reference: private readonly System.Single _noteJumpSpeed
    float& dyn__noteJumpSpeed();
    // Get instance field reference: private readonly System.Single _moveToPlayerHeadTParam
    float& dyn__moveToPlayerHeadTParam();
    // Get instance field reference: private readonly BezierSplineEvaluator _pathBezierCurveEvaluator
    ::GlobalNamespace::BezierSplineEvaluator*& dyn__pathBezierCurveEvaluator();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private readonly PlayerTransforms _playerTransforms
    ::GlobalNamespace::PlayerTransforms*& dyn__playerTransforms();
    // public System.Void .ctor(IAudioTimeSource audioTimeSource, PlayerTransforms playerTransforms, BezierSplineEvaluator pathBezierCurveEvaluator, System.Single jumpStartZ, System.Single jumpEndZ, System.Single yOffset, System.Single zOffset, System.Single noteJumpSeed, System.Single moveToPlayerHeadTParam)
    // Offset: 0x14C6C7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectAvoidancePathEvaluator* New_ctor(::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::PlayerTransforms* playerTransforms, ::GlobalNamespace::BezierSplineEvaluator* pathBezierCurveEvaluator, float jumpStartZ, float jumpEndZ, float yOffset, float zOffset, float noteJumpSeed, float moveToPlayerHeadTParam) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectAvoidancePathEvaluator*, creationType>(audioTimeSource, playerTransforms, pathBezierCurveEvaluator, jumpStartZ, jumpEndZ, yOffset, zOffset, noteJumpSeed, moveToPlayerHeadTParam)));
    }
    // public UnityEngine.Vector3 GetCurrentPathPosition()
    // Offset: 0x14C6CF8
    ::UnityEngine::Vector3 GetCurrentPathPosition();
  }; // BeatmapObjectAvoidancePathEvaluator
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectAvoidancePathEvaluator), 56 + sizeof(::GlobalNamespace::PlayerTransforms*)> __GlobalNamespace_BeatmapObjectAvoidancePathEvaluatorSizeCheck;
  static_assert(sizeof(BeatmapObjectAvoidancePathEvaluator) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition
// Il2CppName: GetCurrentPathPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::*)()>(&GlobalNamespace::BeatmapObjectAvoidancePathEvaluator::GetCurrentPathPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectAvoidancePathEvaluator*), "GetCurrentPathPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
