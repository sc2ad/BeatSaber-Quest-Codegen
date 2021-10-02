// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IK
  class IK;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.IKExecutionOrder
  // [TokenAttribute] Offset: FFFFFFFF
  class IKExecutionOrder : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // [TooltipAttribute] Offset: 0xEF278C
    // public RootMotion.FinalIK.IK[] IKComponents
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<RootMotion::FinalIK::IK*> IKComponents;
    // Field size check
    static_assert(sizeof(::ArrayW<RootMotion::FinalIK::IK*>) == 0x8);
    // [TooltipAttribute] Offset: 0xEF27C4
    // public UnityEngine.Animator animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private System.Boolean fixedFrame
    // Size: 0x1
    // Offset: 0x28
    bool fixedFrame;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public RootMotion.FinalIK.IK[] IKComponents
    ::ArrayW<RootMotion::FinalIK::IK*>& dyn_IKComponents();
    // Get instance field reference: public UnityEngine.Animator animator
    UnityEngine::Animator*& dyn_animator();
    // Get instance field reference: private System.Boolean fixedFrame
    bool& dyn_fixedFrame();
    // private System.Boolean get_animatePhysics()
    // Offset: 0x1E97270
    bool get_animatePhysics();
    // private System.Void Start()
    // Offset: 0x1E9730C
    void Start();
    // private System.Void Update()
    // Offset: 0x1E9737C
    void Update();
    // private System.Void FixedUpdate()
    // Offset: 0x1E97438
    void FixedUpdate();
    // private System.Void LateUpdate()
    // Offset: 0x1E97474
    void LateUpdate();
    // private System.Void FixTransforms()
    // Offset: 0x1E973B0
    void FixTransforms();
    // public System.Void .ctor()
    // Offset: 0x1E97500
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IKExecutionOrder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::IKExecutionOrder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IKExecutionOrder*, creationType>()));
    }
  }; // RootMotion.FinalIK.IKExecutionOrder
  #pragma pack(pop)
  static check_size<sizeof(IKExecutionOrder), 40 + sizeof(bool)> __RootMotion_FinalIK_IKExecutionOrderSizeCheck;
  static_assert(sizeof(IKExecutionOrder) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKExecutionOrder*, "RootMotion.FinalIK", "IKExecutionOrder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::get_animatePhysics
// Il2CppName: get_animatePhysics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::get_animatePhysics)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "get_animatePhysics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::FixTransforms
// Il2CppName: FixTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::IKExecutionOrder::*)()>(&RootMotion::FinalIK::IKExecutionOrder::FixTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::IKExecutionOrder*), "FixTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::IKExecutionOrder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
