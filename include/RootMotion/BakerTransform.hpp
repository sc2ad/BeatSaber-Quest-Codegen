// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BakerTransform
  class BakerTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::BakerTransform);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerTransform*, "RootMotion", "BakerTransform");
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.BakerTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class BakerTransform : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.AnimationCurve posX
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AnimationCurve* posX;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve posY
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* posY;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve posZ
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AnimationCurve* posZ;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotX
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AnimationCurve* rotX;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotY
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* rotY;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotZ
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::AnimationCurve* rotZ;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public UnityEngine.AnimationCurve rotW
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* rotW;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private System.String relativePath
    // Size: 0x8
    // Offset: 0x50
    ::StringW relativePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean recordPosition
    // Size: 0x1
    // Offset: 0x58
    bool recordPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: recordPosition and: relativePosition
    char __padding9[0x3] = {};
    // private UnityEngine.Vector3 relativePosition
    // Size: 0xC
    // Offset: 0x5C
    ::UnityEngine::Vector3 relativePosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean isRootNode
    // Size: 0x1
    // Offset: 0x68
    bool isRootNode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRootNode and: relativeRotation
    char __padding11[0x3] = {};
    // private UnityEngine.Quaternion relativeRotation
    // Size: 0x10
    // Offset: 0x6C
    ::UnityEngine::Quaternion relativeRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Get instance field reference: public UnityEngine.Transform transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_transform();
    // Get instance field reference: public UnityEngine.AnimationCurve posX
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_posX();
    // Get instance field reference: public UnityEngine.AnimationCurve posY
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_posY();
    // Get instance field reference: public UnityEngine.AnimationCurve posZ
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_posZ();
    // Get instance field reference: public UnityEngine.AnimationCurve rotX
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_rotX();
    // Get instance field reference: public UnityEngine.AnimationCurve rotY
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_rotY();
    // Get instance field reference: public UnityEngine.AnimationCurve rotZ
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_rotZ();
    // Get instance field reference: public UnityEngine.AnimationCurve rotW
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_rotW();
    // Get instance field reference: private System.String relativePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_relativePath();
    // Get instance field reference: private System.Boolean recordPosition
    [[deprecated("Use field access instead!")]] bool& dyn_recordPosition();
    // Get instance field reference: private UnityEngine.Vector3 relativePosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_relativePosition();
    // Get instance field reference: private System.Boolean isRootNode
    [[deprecated("Use field access instead!")]] bool& dyn_isRootNode();
    // Get instance field reference: private UnityEngine.Quaternion relativeRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_relativeRotation();
    // public System.Void .ctor(UnityEngine.Transform transform, UnityEngine.Transform root, System.Boolean recordPosition, System.Boolean isRootNode)
    // Offset: 0x2309824
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakerTransform* New_ctor(::UnityEngine::Transform* transform, ::UnityEngine::Transform* root, bool recordPosition, bool isRootNode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::BakerTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakerTransform*, creationType>(transform, root, recordPosition, isRootNode)));
    }
    // public System.Void SetRelativeSpace(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x23099B8
    void SetRelativeSpace(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);
    // public System.Void SetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x23099CC
    void SetCurves(ByRef<::UnityEngine::AnimationClip*> clip);
    // private System.Void AddRootMotionCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x2309C5C
    void AddRootMotionCurves(ByRef<::UnityEngine::AnimationClip*> clip);
    // public System.Void Reset()
    // Offset: 0x23098C0
    void Reset();
    // public System.Void ReduceKeyframes(System.Single maxError)
    // Offset: 0x2309EA8
    void ReduceKeyframes(float maxError);
    // public System.Void SetKeyframes(System.Single time)
    // Offset: 0x2309F1C
    void SetKeyframes(float time);
    // public System.Void AddLoopFrame(System.Single time)
    // Offset: 0x230A168
    void AddLoopFrame(float time);
  }; // RootMotion.BakerTransform
  #pragma pack(pop)
  static check_size<sizeof(BakerTransform), 108 + sizeof(::UnityEngine::Quaternion)> __RootMotion_BakerTransformSizeCheck;
  static_assert(sizeof(BakerTransform) == 0x7C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::BakerTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::BakerTransform::SetRelativeSpace
// Il2CppName: SetRelativeSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerTransform::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&RootMotion::BakerTransform::SetRelativeSpace)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerTransform*), "SetRelativeSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerTransform::SetCurves
// Il2CppName: SetCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerTransform::*)(ByRef<::UnityEngine::AnimationClip*>)>(&RootMotion::BakerTransform::SetCurves)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerTransform*), "SetCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerTransform::AddRootMotionCurves
// Il2CppName: AddRootMotionCurves
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerTransform::*)(ByRef<::UnityEngine::AnimationClip*>)>(&RootMotion::BakerTransform::AddRootMotionCurves)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationClip")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerTransform*), "AddRootMotionCurves", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerTransform::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerTransform::*)()>(&RootMotion::BakerTransform::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerTransform*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerTransform::ReduceKeyframes
// Il2CppName: ReduceKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerTransform::*)(float)>(&RootMotion::BakerTransform::ReduceKeyframes)> {
  static const MethodInfo* get() {
    static auto* maxError = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerTransform*), "ReduceKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxError});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerTransform::SetKeyframes
// Il2CppName: SetKeyframes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerTransform::*)(float)>(&RootMotion::BakerTransform::SetKeyframes)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerTransform*), "SetKeyframes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: RootMotion::BakerTransform::AddLoopFrame
// Il2CppName: AddLoopFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::BakerTransform::*)(float)>(&RootMotion::BakerTransform::AddLoopFrame)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::BakerTransform*), "AddLoopFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
