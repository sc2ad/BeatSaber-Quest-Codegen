// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Joint
  class Joint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Joint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Joint*, "UnityEngine", "Joint");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Joint
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 11B96A4
  // [NativeHeaderAttribute] Offset: 11B96A4
  // [NativeClassAttribute] Offset: 11B96A4
  class Joint : public ::UnityEngine::Component {
    public:
    // public UnityEngine.Rigidbody get_connectedBody()
    // Offset: 0x2A42B74
    ::UnityEngine::Rigidbody* get_connectedBody();
    // public System.Void set_connectedAnchor(UnityEngine.Vector3 value)
    // Offset: 0x2A42BB4
    void set_connectedAnchor(::UnityEngine::Vector3 value);
    // private System.Void set_connectedAnchor_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x2A42C0C
    void set_connectedAnchor_Injected(ByRef<::UnityEngine::Vector3> value);
  }; // UnityEngine.Joint
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Joint::get_connectedBody
// Il2CppName: get_connectedBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody* (UnityEngine::Joint::*)()>(&UnityEngine::Joint::get_connectedBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "get_connectedBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_connectedAnchor
// Il2CppName: set_connectedAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(::UnityEngine::Vector3)>(&UnityEngine::Joint::set_connectedAnchor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_connectedAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Joint::set_connectedAnchor_Injected
// Il2CppName: set_connectedAnchor_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Joint::*)(ByRef<::UnityEngine::Vector3>)>(&UnityEngine::Joint::set_connectedAnchor_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Joint*), "set_connectedAnchor_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
