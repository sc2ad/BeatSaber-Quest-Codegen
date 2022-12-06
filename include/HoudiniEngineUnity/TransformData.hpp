// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: TransformData
  struct TransformData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::TransformData, "HoudiniEngineUnity", "TransformData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x50
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: HoudiniEngineUnity.TransformData
  // [TokenAttribute] Offset: FFFFFFFF
  struct TransformData/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 localPosition
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 localPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 localScale
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 localScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion localRotation
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Quaternion localRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // Padding between fields: localRotation and: parent
    char __padding4[0x4] = {};
    // public UnityEngine.Transform parent
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* parent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Creating value type constructor for type: TransformData
    constexpr TransformData(::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Quaternion rotation_ = {}, ::UnityEngine::Vector3 localPosition_ = {}, ::UnityEngine::Vector3 localScale_ = {}, ::UnityEngine::Quaternion localRotation_ = {}, ::UnityEngine::Transform* parent_ = {}) noexcept : position{position_}, rotation{rotation_}, localPosition{localPosition_}, localScale{localScale_}, localRotation{localRotation_}, parent{parent_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rotation();
    // Get instance field reference: public UnityEngine.Vector3 localPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_localPosition();
    // Get instance field reference: public UnityEngine.Vector3 localScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_localScale();
    // Get instance field reference: public UnityEngine.Quaternion localRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_localRotation();
    // Get instance field reference: public UnityEngine.Transform parent
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_parent();
    // public System.Void .ctor(UnityEngine.Transform other)
    // Offset: 0x2B184E4
    TransformData(::UnityEngine::Transform* other);
    // public System.Void CopyTo(UnityEngine.Transform other, System.Boolean copyParent)
    // Offset: 0x2B18580
    void CopyTo(::UnityEngine::Transform* other, bool copyParent);
    // public System.Void CopyToLocal(UnityEngine.Transform other, System.Boolean copyParent)
    // Offset: 0x2B18610
    void CopyToLocal(::UnityEngine::Transform* other, bool copyParent);
  }; // HoudiniEngineUnity.TransformData
  #pragma pack(pop)
  static check_size<sizeof(TransformData), 72 + sizeof(::UnityEngine::Transform*)> __HoudiniEngineUnity_TransformDataSizeCheck;
  static_assert(sizeof(TransformData) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::TransformData::TransformData
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::TransformData::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::TransformData::*)(::UnityEngine::Transform*, bool)>(&HoudiniEngineUnity::TransformData::CopyTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* copyParent = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::TransformData), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, copyParent});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::TransformData::CopyToLocal
// Il2CppName: CopyToLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::TransformData::*)(::UnityEngine::Transform*, bool)>(&HoudiniEngineUnity::TransformData::CopyToLocal)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* copyParent = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::TransformData), "CopyToLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other, copyParent});
  }
};
