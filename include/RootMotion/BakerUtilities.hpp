// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Keyframe
#include "UnityEngine/Keyframe.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BakerUtilities
  class BakerUtilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::BakerUtilities);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerUtilities*, "RootMotion", "BakerUtilities");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BakerUtilities
  // [TokenAttribute] Offset: FFFFFFFF
  class BakerUtilities : public ::Il2CppObject {
    public:
    // static public System.Void ReduceKeyframes(UnityEngine.AnimationCurve curve, System.Single maxError)
    // Offset: 0x230B328
    static void ReduceKeyframes(::UnityEngine::AnimationCurve* curve, float maxError);
    // static public UnityEngine.Keyframe[] GetReducedKeyframes(UnityEngine.AnimationCurve curve, System.Single maxError)
    // Offset: 0x230C7FC
    static ::ArrayW<::UnityEngine::Keyframe> GetReducedKeyframes(::UnityEngine::AnimationCurve* curve, float maxError);
    // static public System.Void SetLoopFrame(System.Single time, UnityEngine.AnimationCurve curve)
    // Offset: 0x230AD3C
    static void SetLoopFrame(float time, ::UnityEngine::AnimationCurve* curve);
    // static public System.Void SetTangentMode(UnityEngine.AnimationCurve curve)
    // Offset: 0x230B370
    static void SetTangentMode(::UnityEngine::AnimationCurve* curve);
    // static public UnityEngine.Quaternion EnsureQuaternionContinuity(UnityEngine.Quaternion lastQ, UnityEngine.Quaternion q)
    // Offset: 0x230A874
    static ::UnityEngine::Quaternion EnsureQuaternionContinuity(::UnityEngine::Quaternion lastQ, ::UnityEngine::Quaternion q);
  }; // RootMotion.BakerUtilities
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::BakerUtilities::ReduceKeyframes
// Il2CppName: ReduceKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimationCurve*, float)>(&RootMotion::BakerUtilities::ReduceKeyframes)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* maxError = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "ReduceKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve, maxError});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerUtilities::GetReducedKeyframes
// Il2CppName: GetReducedKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Keyframe> (*)(::UnityEngine::AnimationCurve*, float)>(&RootMotion::BakerUtilities::GetReducedKeyframes)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* maxError = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "GetReducedKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve, maxError});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerUtilities::SetLoopFrame
// Il2CppName: SetLoopFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float, ::UnityEngine::AnimationCurve*)>(&RootMotion::BakerUtilities::SetLoopFrame)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "SetLoopFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, curve});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerUtilities::SetTangentMode
// Il2CppName: SetTangentMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimationCurve*)>(&RootMotion::BakerUtilities::SetTangentMode)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "SetTangentMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerUtilities::EnsureQuaternionContinuity
// Il2CppName: EnsureQuaternionContinuity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&RootMotion::BakerUtilities::EnsureQuaternionContinuity)> {
  static const MethodInfo* get() {
    static auto* lastQ = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerUtilities*), "EnsureQuaternionContinuity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lastQ, q});
  }
};
