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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPose
  struct OVRPose;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRTracker
  class OVRTracker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRTracker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTracker*, "", "OVRTracker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRTracker
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRTracker : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRTracker::Frustum
    struct Frustum;
    // public System.Boolean get_isPresent()
    // Offset: 0x2564C8C
    bool get_isPresent();
    // public System.Boolean get_isPositionTracked()
    // Offset: 0x2564D28
    bool get_isPositionTracked();
    // public System.Boolean get_isEnabled()
    // Offset: 0x2564D88
    bool get_isEnabled();
    // public System.Void set_isEnabled(System.Boolean value)
    // Offset: 0x2564E24
    void set_isEnabled(bool value);
    // public System.Int32 get_count()
    // Offset: 0x2564EC4
    int get_count();
    // public System.Void .ctor()
    // Offset: 0x25654C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRTracker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRTracker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRTracker*, creationType>()));
    }
    // public OVRTracker/Frustum GetFrustum(System.Int32 tracker)
    // Offset: 0x2565040
    ::GlobalNamespace::OVRTracker::Frustum GetFrustum(int tracker);
    // public OVRPose GetPose(System.Int32 tracker)
    // Offset: 0x25650F0
    ::GlobalNamespace::OVRPose GetPose(int tracker);
    // public System.Boolean GetPoseValid(System.Int32 tracker)
    // Offset: 0x2565384
    bool GetPoseValid(int tracker);
    // public System.Boolean GetPresent(System.Int32 tracker)
    // Offset: 0x2564F04
    bool GetPresent(int tracker);
  }; // OVRTracker
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::get_isPresent
// Il2CppName: get_isPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_isPresent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "get_isPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::get_isPositionTracked
// Il2CppName: get_isPositionTracked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_isPositionTracked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "get_isPositionTracked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::get_isEnabled
// Il2CppName: get_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_isEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "get_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::set_isEnabled
// Il2CppName: set_isEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRTracker::*)(bool)>(&GlobalNamespace::OVRTracker::set_isEnabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "set_isEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::get_count
// Il2CppName: get_count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRTracker::*)()>(&GlobalNamespace::OVRTracker::get_count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "get_count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::GetFrustum
// Il2CppName: GetFrustum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTracker::Frustum (GlobalNamespace::OVRTracker::*)(int)>(&GlobalNamespace::OVRTracker::GetFrustum)> {
  static const MethodInfo* get() {
    static auto* tracker = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "GetFrustum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tracker});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::GetPose
// Il2CppName: GetPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (GlobalNamespace::OVRTracker::*)(int)>(&GlobalNamespace::OVRTracker::GetPose)> {
  static const MethodInfo* get() {
    static auto* tracker = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "GetPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tracker});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::GetPoseValid
// Il2CppName: GetPoseValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)(int)>(&GlobalNamespace::OVRTracker::GetPoseValid)> {
  static const MethodInfo* get() {
    static auto* tracker = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "GetPoseValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tracker});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRTracker::GetPresent
// Il2CppName: GetPresent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRTracker::*)(int)>(&GlobalNamespace::OVRTracker::GetPresent)> {
  static const MethodInfo* get() {
    static auto* tracker = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRTracker*), "GetPresent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tracker});
  }
};
