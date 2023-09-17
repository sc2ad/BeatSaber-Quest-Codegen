#pragma once
namespace {
#include "UnityEngine/SpatialTracking/zzzz__PoseDataSource_def.hpp"
#include "UnityEngine/XR/zzzz__XRNodeState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
//  Writing Method size for method: ::UnityEngine::SpatialTracking::PoseDataSource.GetNodePoseData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (*)(::UnityEngine::XR::XRNode, ByRef<::UnityEngine::Pose>)>(&::UnityEngine::SpatialTracking::PoseDataSource::GetNodePoseData)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2ba2174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource>::get(),
                            "GetNodePoseData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::PoseDataSource.TryGetDataFromSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose, ByRef<::UnityEngine::Pose>)>(&::UnityEngine::SpatialTracking::PoseDataSource::TryGetDataFromSource)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ba23f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource>::get(),
                            "TryGetDataFromSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SpatialTracking::PoseDataSource.GetDataFromSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (*)(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose, ByRef<::UnityEngine::Pose>)>(&::UnityEngine::SpatialTracking::PoseDataSource::GetDataFromSource)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2ba2464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource>::get(),
                            "GetDataFromSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::SpatialTracking::PoseDataSource::__set_nodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState> value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>, "nodeStates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource>::get>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>>(value));
}
 ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState> ::UnityEngine::SpatialTracking::PoseDataSource::__get_nodeStates()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>, "nodeStates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource>::get>();
}
 ::UnityEngine::SpatialTracking::PoseDataFlags ::UnityEngine::SpatialTracking::PoseDataSource::GetNodePoseData(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> resultPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource>::get(),
                            "GetNodePoseData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags, false>(nullptr, ___internal_method, node, resultPose);
}
 bool ::UnityEngine::SpatialTracking::PoseDataSource::TryGetDataFromSource(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource>::get(),
                            "TryGetDataFromSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, poseSource, resultPose);
}
 ::UnityEngine::SpatialTracking::PoseDataFlags ::UnityEngine::SpatialTracking::PoseDataSource::GetDataFromSource(::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose poseSource, ByRef<::UnityEngine::Pose> resultPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SpatialTracking::PoseDataSource>::get(),
                            "GetDataFromSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpatialTracking::____UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Pose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpatialTracking::PoseDataFlags, false>(nullptr, ___internal_method, poseSource, resultPose);
}
} // end anonymous namespace
