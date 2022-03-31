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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BakerMuscle
  class BakerMuscle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::BakerMuscle);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerMuscle*, "RootMotion", "BakerMuscle");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BakerMuscle
  // [TokenAttribute] Offset: FFFFFFFF
  class BakerMuscle : public ::Il2CppObject {
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
    // public UnityEngine.AnimationCurve curve
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AnimationCurve* curve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.Int32 muscleIndex
    // Size: 0x4
    // Offset: 0x18
    int muscleIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: muscleIndex and: propertyName
    char __padding1[0x4] = {};
    // private System.String propertyName
    // Size: 0x8
    // Offset: 0x20
    ::StringW propertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AnimationCurve curve
    ::UnityEngine::AnimationCurve*& dyn_curve();
    // Get instance field reference: private System.Int32 muscleIndex
    int& dyn_muscleIndex();
    // Get instance field reference: private System.String propertyName
    ::StringW& dyn_propertyName();
    // public System.Void .ctor(System.Int32 muscleIndex)
    // Offset: 0x21F8B18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakerMuscle* New_ctor(int muscleIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::BakerMuscle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakerMuscle*, creationType>(muscleIndex)));
    }
    // private System.String MuscleNameToPropertyName(System.String n)
    // Offset: 0x21F8B88
    ::StringW MuscleNameToPropertyName(::StringW n);
    // public System.Void MultiplyLength(UnityEngine.AnimationCurve curve, System.Single mlp)
    // Offset: 0x21F9270
    void MultiplyLength(::UnityEngine::AnimationCurve* curve, float mlp);
    // public System.Void SetCurves(ref UnityEngine.AnimationClip clip, System.Single maxError, System.Single lengthMlp)
    // Offset: 0x21F9324
    void SetCurves(ByRef<::UnityEngine::AnimationClip*> clip, float maxError, float lengthMlp);
    // public System.Void Reset()
    // Offset: 0x21F9210
    void Reset();
    // public System.Void SetKeyframe(System.Single time, System.Single[] muscles)
    // Offset: 0x21F9408
    void SetKeyframe(float time, ::ArrayW<float> muscles);
    // public System.Void SetLoopFrame(System.Single time)
    // Offset: 0x21F9450
    void SetLoopFrame(float time);
  }; // RootMotion.BakerMuscle
  #pragma pack(pop)
  static check_size<sizeof(BakerMuscle), 32 + sizeof(::StringW)> __RootMotion_BakerMuscleSizeCheck;
  static_assert(sizeof(BakerMuscle) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::BakerMuscle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::BakerMuscle::MuscleNameToPropertyName
// Il2CppName: MuscleNameToPropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (RootMotion::BakerMuscle::*)(::StringW)>(&RootMotion::BakerMuscle::MuscleNameToPropertyName)> {
  static const MethodInfo* get() {
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "MuscleNameToPropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{n});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::MultiplyLength
// Il2CppName: MultiplyLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)(::UnityEngine::AnimationCurve*, float)>(&RootMotion::BakerMuscle::MultiplyLength)> {
  static const MethodInfo* get() {
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    static auto* mlp = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "MultiplyLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{curve, mlp});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::SetCurves
// Il2CppName: SetCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)(ByRef<::UnityEngine::AnimationClip*>, float, float)>(&RootMotion::BakerMuscle::SetCurves)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->this_arg;
    static auto* maxError = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lengthMlp = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "SetCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, maxError, lengthMlp});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)()>(&RootMotion::BakerMuscle::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::SetKeyframe
// Il2CppName: SetKeyframe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)(float, ::ArrayW<float>)>(&RootMotion::BakerMuscle::SetKeyframe)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* muscles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "SetKeyframe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time, muscles});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerMuscle::SetLoopFrame
// Il2CppName: SetLoopFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerMuscle::*)(float)>(&RootMotion::BakerMuscle::SetLoopFrame)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerMuscle*), "SetLoopFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
