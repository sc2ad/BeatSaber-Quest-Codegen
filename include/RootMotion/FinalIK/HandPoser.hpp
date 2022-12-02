// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Poser
#include "RootMotion/FinalIK/Poser.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: HandPoser
  class HandPoser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::HandPoser);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HandPoser*, "RootMotion.FinalIK", "HandPoser");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.HandPoser
  // [TokenAttribute] Offset: FFFFFFFF
  class HandPoser : public ::RootMotion::FinalIK::Poser {
    public:
    // Writing base type padding for base size: 0x4D to desired offset: 0x50
    char ___base_padding[0x3] = {};
    public:
    // protected UnityEngine.Transform[] children
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Transform*> children;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private UnityEngine.Transform _poseRoot
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Transform* poseRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Transform[] poseChildren
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<::UnityEngine::Transform*> poseChildren;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // private UnityEngine.Vector3[] defaultLocalPositions
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::UnityEngine::Vector3> defaultLocalPositions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Quaternion[] defaultLocalRotations
    // Size: 0x8
    // Offset: 0x70
    ::ArrayW<::UnityEngine::Quaternion> defaultLocalRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Quaternion>) == 0x8);
    public:
    // Get instance field reference: protected UnityEngine.Transform[] children
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_children();
    // Get instance field reference: private UnityEngine.Transform _poseRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__poseRoot();
    // Get instance field reference: private UnityEngine.Transform[] poseChildren
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_poseChildren();
    // Get instance field reference: private UnityEngine.Vector3[] defaultLocalPositions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_defaultLocalPositions();
    // Get instance field reference: private UnityEngine.Quaternion[] defaultLocalRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Quaternion>& dyn_defaultLocalRotations();
    // protected System.Void StoreDefaultState()
    // Offset: 0x22FC6B0
    void StoreDefaultState();
    // public System.Void .ctor()
    // Offset: 0x22FCCB8
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandPoser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::HandPoser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandPoser*, creationType>()));
    }
    // public override System.Void AutoMapping()
    // Offset: 0x22FC5A0
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::AutoMapping()
    void AutoMapping();
    // protected override System.Void InitiatePoser()
    // Offset: 0x22FC654
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::InitiatePoser()
    void InitiatePoser();
    // protected override System.Void FixPoserTransforms()
    // Offset: 0x22FC80C
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::FixPoserTransforms()
    void FixPoserTransforms();
    // protected override System.Void UpdatePoser()
    // Offset: 0x22FC908
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::UpdatePoser()
    void UpdatePoser();
  }; // RootMotion.FinalIK.HandPoser
  #pragma pack(pop)
  static check_size<sizeof(HandPoser), 112 + sizeof(::ArrayW<::UnityEngine::Quaternion>)> __RootMotion_FinalIK_HandPoserSizeCheck;
  static_assert(sizeof(HandPoser) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::HandPoser::StoreDefaultState
// Il2CppName: StoreDefaultState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HandPoser::*)()>(&RootMotion::FinalIK::HandPoser::StoreDefaultState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HandPoser*), "StoreDefaultState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HandPoser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::HandPoser::AutoMapping
// Il2CppName: AutoMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HandPoser::*)()>(&RootMotion::FinalIK::HandPoser::AutoMapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HandPoser*), "AutoMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HandPoser::InitiatePoser
// Il2CppName: InitiatePoser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HandPoser::*)()>(&RootMotion::FinalIK::HandPoser::InitiatePoser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HandPoser*), "InitiatePoser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HandPoser::FixPoserTransforms
// Il2CppName: FixPoserTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HandPoser::*)()>(&RootMotion::FinalIK::HandPoser::FixPoserTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HandPoser*), "FixPoserTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::HandPoser::UpdatePoser
// Il2CppName: UpdatePoser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::HandPoser::*)()>(&RootMotion::FinalIK::HandPoser::UpdatePoser)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::HandPoser*), "UpdatePoser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
