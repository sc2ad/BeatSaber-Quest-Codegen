// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: TwistRelaxer
  class TwistRelaxer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::TwistRelaxer);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::TwistRelaxer*, "RootMotion.FinalIK", "TwistRelaxer");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.TwistRelaxer
  // [TokenAttribute] Offset: FFFFFFFF
  class TwistRelaxer : public ::UnityEngine::MonoBehaviour {
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
    // public RootMotion.FinalIK.IK ik
    // Size: 0x8
    // Offset: 0x18
    ::RootMotion::FinalIK::IK* ik;
    // Field size check
    static_assert(sizeof(::RootMotion::FinalIK::IK*) == 0x8);
    // [TooltipAttribute] Offset: 0x12653BC
    // public UnityEngine.Transform parent
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* parent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x12653F4
    // public UnityEngine.Transform child
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* child;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0x126542C
    // [RangeAttribute] Offset: 0x126542C
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x30
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x1265480
    // [RangeAttribute] Offset: 0x1265480
    // public System.Single parentChildCrossfade
    // Size: 0x4
    // Offset: 0x34
    float parentChildCrossfade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x12654D4
    // [RangeAttribute] Offset: 0x12654D4
    // public System.Single twistAngleOffset
    // Size: 0x4
    // Offset: 0x38
    float twistAngleOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 twistAxis
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 twistAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 axis
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 axis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 axisRelativeToParentDefault
    // Size: 0xC
    // Offset: 0x54
    ::UnityEngine::Vector3 axisRelativeToParentDefault;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 axisRelativeToChildDefault
    // Size: 0xC
    // Offset: 0x60
    ::UnityEngine::Vector3 axisRelativeToChildDefault;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.IK ik
    ::RootMotion::FinalIK::IK*& dyn_ik();
    // Get instance field reference: public UnityEngine.Transform parent
    ::UnityEngine::Transform*& dyn_parent();
    // Get instance field reference: public UnityEngine.Transform child
    ::UnityEngine::Transform*& dyn_child();
    // Get instance field reference: public System.Single weight
    float& dyn_weight();
    // Get instance field reference: public System.Single parentChildCrossfade
    float& dyn_parentChildCrossfade();
    // Get instance field reference: public System.Single twistAngleOffset
    float& dyn_twistAngleOffset();
    // Get instance field reference: private UnityEngine.Vector3 twistAxis
    ::UnityEngine::Vector3& dyn_twistAxis();
    // Get instance field reference: private UnityEngine.Vector3 axis
    ::UnityEngine::Vector3& dyn_axis();
    // Get instance field reference: private UnityEngine.Vector3 axisRelativeToParentDefault
    ::UnityEngine::Vector3& dyn_axisRelativeToParentDefault();
    // Get instance field reference: private UnityEngine.Vector3 axisRelativeToChildDefault
    ::UnityEngine::Vector3& dyn_axisRelativeToChildDefault();
    // public System.Void Relax()
    // Offset: 0x1F1406C
    void Relax();
    // private System.Void Start()
    // Offset: 0x1F1444C
    void Start();
    // private System.Void OnPostUpdate()
    // Offset: 0x1F148C0
    void OnPostUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1F14948
    void LateUpdate();
    // private System.Void OnDestroy()
    // Offset: 0x1F149D0
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x1F14AD4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TwistRelaxer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::TwistRelaxer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TwistRelaxer*, creationType>()));
    }
  }; // RootMotion.FinalIK.TwistRelaxer
  #pragma pack(pop)
  static check_size<sizeof(TwistRelaxer), 96 + sizeof(::UnityEngine::Vector3)> __RootMotion_FinalIK_TwistRelaxerSizeCheck;
  static_assert(sizeof(TwistRelaxer) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::Relax
// Il2CppName: Relax
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::Relax)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "Relax", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::OnPostUpdate
// Il2CppName: OnPostUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::OnPostUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "OnPostUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::TwistRelaxer::*)()>(&RootMotion::FinalIK::TwistRelaxer::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::TwistRelaxer*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::TwistRelaxer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
