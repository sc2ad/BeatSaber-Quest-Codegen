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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRing
  class TrackLaneRing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TrackLaneRing);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TrackLaneRing*, "", "TrackLaneRing");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: TrackLaneRing
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackLaneRing : public ::UnityEngine::MonoBehaviour {
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
    // private System.Single _prevRotZ
    // Size: 0x4
    // Offset: 0x18
    float prevRotZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotZ
    // Size: 0x4
    // Offset: 0x1C
    float rotZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _destRotZ
    // Size: 0x4
    // Offset: 0x20
    float destRotZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationSpeed
    // Size: 0x4
    // Offset: 0x24
    float rotationSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevPosZ
    // Size: 0x4
    // Offset: 0x28
    float prevPosZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _posZ
    // Size: 0x4
    // Offset: 0x2C
    float posZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _destPosZ
    // Size: 0x4
    // Offset: 0x30
    float destPosZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _moveSpeed
    // Size: 0x4
    // Offset: 0x34
    float moveSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 _positionOffset
    // Size: 0xC
    // Offset: 0x38
    ::UnityEngine::Vector3 positionOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: positionOffset and: transform
    char __padding8[0x4] = {};
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _prevRotZ
    float& dyn__prevRotZ();
    // Get instance field reference: private System.Single _rotZ
    float& dyn__rotZ();
    // Get instance field reference: private System.Single _destRotZ
    float& dyn__destRotZ();
    // Get instance field reference: private System.Single _rotationSpeed
    float& dyn__rotationSpeed();
    // Get instance field reference: private System.Single _prevPosZ
    float& dyn__prevPosZ();
    // Get instance field reference: private System.Single _posZ
    float& dyn__posZ();
    // Get instance field reference: private System.Single _destPosZ
    float& dyn__destPosZ();
    // Get instance field reference: private System.Single _moveSpeed
    float& dyn__moveSpeed();
    // Get instance field reference: private UnityEngine.Vector3 _positionOffset
    ::UnityEngine::Vector3& dyn__positionOffset();
    // Get instance field reference: private UnityEngine.Transform _transform
    ::UnityEngine::Transform*& dyn__transform();
    // public System.Single get_destRotZ()
    // Offset: 0x133E218
    float get_destRotZ();
    // public System.Void Init(UnityEngine.Vector3 position, UnityEngine.Vector3 positionOffset)
    // Offset: 0x133E220
    void Init(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 positionOffset);
    // public System.Void FixedUpdateRing(System.Single fixedDeltaTime)
    // Offset: 0x133E308
    void FixedUpdateRing(float fixedDeltaTime);
    // public System.Void LateUpdateRing(System.Single interpolationFactor)
    // Offset: 0x133E3C8
    void LateUpdateRing(float interpolationFactor);
    // public System.Void SetDestRotation(System.Single destRotZ, System.Single rotateSpeed)
    // Offset: 0x133E488
    void SetDestRotation(float destRotZ, float rotateSpeed);
    // public System.Single GetRotation()
    // Offset: 0x133E490
    float GetRotation();
    // public System.Single GetDestinationRotation()
    // Offset: 0x133E498
    float GetDestinationRotation();
    // public System.Void SetPosition(System.Single destPosZ, System.Single moveSpeed)
    // Offset: 0x133E4A0
    void SetPosition(float destPosZ, float moveSpeed);
    // public System.Void .ctor()
    // Offset: 0x133E4A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackLaneRing* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TrackLaneRing::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackLaneRing*, creationType>()));
    }
  }; // TrackLaneRing
  #pragma pack(pop)
  static check_size<sizeof(TrackLaneRing), 72 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_TrackLaneRingSizeCheck;
  static_assert(sizeof(TrackLaneRing) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRing::get_destRotZ
// Il2CppName: get_destRotZ
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TrackLaneRing::*)()>(&GlobalNamespace::TrackLaneRing::get_destRotZ)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRing*), "get_destRotZ", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRing::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRing::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::TrackLaneRing::Init)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* positionOffset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRing*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, positionOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRing::FixedUpdateRing
// Il2CppName: FixedUpdateRing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRing::*)(float)>(&GlobalNamespace::TrackLaneRing::FixedUpdateRing)> {
  static const MethodInfo* get() {
    static auto* fixedDeltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRing*), "FixedUpdateRing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixedDeltaTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRing::LateUpdateRing
// Il2CppName: LateUpdateRing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRing::*)(float)>(&GlobalNamespace::TrackLaneRing::LateUpdateRing)> {
  static const MethodInfo* get() {
    static auto* interpolationFactor = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRing*), "LateUpdateRing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interpolationFactor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRing::SetDestRotation
// Il2CppName: SetDestRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRing::*)(float, float)>(&GlobalNamespace::TrackLaneRing::SetDestRotation)> {
  static const MethodInfo* get() {
    static auto* destRotZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotateSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRing*), "SetDestRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destRotZ, rotateSpeed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRing::GetRotation
// Il2CppName: GetRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TrackLaneRing::*)()>(&GlobalNamespace::TrackLaneRing::GetRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRing*), "GetRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRing::GetDestinationRotation
// Il2CppName: GetDestinationRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TrackLaneRing::*)()>(&GlobalNamespace::TrackLaneRing::GetDestinationRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRing*), "GetDestinationRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRing::SetPosition
// Il2CppName: SetPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TrackLaneRing::*)(float, float)>(&GlobalNamespace::TrackLaneRing::SetPosition)> {
  static const MethodInfo* get() {
    static auto* destPosZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* moveSpeed = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TrackLaneRing*), "SetPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destPosZ, moveSpeed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TrackLaneRing::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
