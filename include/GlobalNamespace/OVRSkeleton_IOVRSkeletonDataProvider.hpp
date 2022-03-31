// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*, "", "OVRSkeleton/IOVRSkeletonDataProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRSkeleton/IOVRSkeletonDataProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSkeleton::IOVRSkeletonDataProvider {
    public:
    // public OVRSkeleton/SkeletonType GetSkeletonType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::OVRSkeleton::SkeletonType GetSkeletonType();
    // public OVRSkeleton/SkeletonPoseData GetSkeletonPoseData()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::OVRSkeleton::SkeletonPoseData GetSkeletonPoseData();
  }; // OVRSkeleton/IOVRSkeletonDataProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider::GetSkeletonType
// Il2CppName: GetSkeletonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::SkeletonType (GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider::*)()>(&GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider::GetSkeletonType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*), "GetSkeletonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider::GetSkeletonPoseData
// Il2CppName: GetSkeletonPoseData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton::SkeletonPoseData (GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider::*)()>(&GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider::GetSkeletonPoseData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeleton::IOVRSkeletonDataProvider*), "GetSkeletonPoseData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
