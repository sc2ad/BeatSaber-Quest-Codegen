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
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rigidbody2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody2D*, "UnityEngine", "Rigidbody2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rigidbody2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 10A8358
  // [RequireComponent] Offset: 10A8358
  class Rigidbody2D : public ::UnityEngine::Component {
    public:
    // public UnityEngine.Vector2 get_position()
    // Offset: 0x2B77954
    ::UnityEngine::Vector2 get_position();
    // public UnityEngine.Vector2 get_velocity()
    // Offset: 0x2B779FC
    ::UnityEngine::Vector2 get_velocity();
    // public System.Void set_velocity(UnityEngine.Vector2 value)
    // Offset: 0x2B77AA4
    void set_velocity(::UnityEngine::Vector2 value);
    // public System.Void Sleep()
    // Offset: 0x2B77B48
    void Sleep();
    // private System.Void get_position_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x2B779AC
    void get_position_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void get_velocity_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x2B77A54
    void get_velocity_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void set_velocity_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x2B77AF8
    void set_velocity_Injected(ByRef<::UnityEngine::Vector2> value);
  }; // UnityEngine.Rigidbody2D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rigidbody2D::*)()>(&UnityEngine::Rigidbody2D::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::get_velocity
// Il2CppName: get_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rigidbody2D::*)()>(&UnityEngine::Rigidbody2D::get_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "get_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::set_velocity
// Il2CppName: set_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(::UnityEngine::Vector2)>(&UnityEngine::Rigidbody2D::set_velocity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "set_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::Sleep
// Il2CppName: Sleep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)()>(&UnityEngine::Rigidbody2D::Sleep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "Sleep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::get_position_Injected
// Il2CppName: get_position_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Rigidbody2D::get_position_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "get_position_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::get_velocity_Injected
// Il2CppName: get_velocity_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Rigidbody2D::get_velocity_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "get_velocity_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rigidbody2D::set_velocity_Injected
// Il2CppName: set_velocity_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rigidbody2D::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Rigidbody2D::set_velocity_Injected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rigidbody2D*), "set_velocity_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
