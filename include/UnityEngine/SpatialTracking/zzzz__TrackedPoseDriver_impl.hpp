#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_def.hpp"
#include "UnityEngine/Experimental/XR/Interaction/zzzz__BasePoseProvider_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__PoseDataFlags_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType::GenericXRDevice{0};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType::GenericXRController{1};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType::GenericXRRemote{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::LeftEye{0};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::RightEye{1};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::Center{2};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::Head{3};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::LeftPose{4};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::RightPose{5};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::ColorCamera{6};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::DepthCameraDeprecated{7};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::FisheyeCameraDeprected{8};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::DeviceDeprecated{9};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose::RemotePose{10};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType::RotationAndPosition{0};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType::RotationOnly{1};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType::PositionOnly{2};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType::UpdateAndBeforeRender{0};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType::Update{1};
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType  UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType::BeforeRender{2};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.get_deviceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::get_deviceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba2760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_deviceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.set_deviceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::set_deviceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba2768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_deviceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.get_poseSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba2770;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_poseSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.set_poseSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba2778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_poseSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.SetPoseSource
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType, UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::SetPoseSource)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2ba2780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "SetPoseSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.get_poseProviderComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Experimental::XR::Interaction::BasePoseProvider (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseProviderComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba28c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_poseProviderComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.set_poseProviderComponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::Experimental::XR::Interaction::BasePoseProvider)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseProviderComponent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba28cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_poseProviderComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Experimental::XR::Interaction::BasePoseProvider>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.GetPoseData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SpatialTracking::PoseDataFlags (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType, UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose, ByRef<UnityEngine::Pose>)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::GetPoseData)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ba28d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "GetPoseData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Pose>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.get_trackingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::get_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba29a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.set_trackingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::set_trackingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba29a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.get_updateType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::get_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba29b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.set_updateType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::set_updateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba29b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.get_UseRelativeTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::get_UseRelativeTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba29c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_UseRelativeTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.set_UseRelativeTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(bool)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::set_UseRelativeTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ba29c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_UseRelativeTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.get_originPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Pose (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::get_originPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2ba29d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_originPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.set_originPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::Pose)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::set_originPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ba29e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_originPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Pose>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.CacheLocalPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::CacheLocalPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ba2a04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "CacheLocalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.ResetToCachedLocalPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::ResetToCachedLocalPosition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ba2a54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "ResetToCachedLocalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ba2a74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::SpatialTracking::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ba2a78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::SpatialTracking::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::OnEnable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2ba2a7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::SpatialTracking::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2ba2af0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::SpatialTracking::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::FixedUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ba2b6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::SpatialTracking::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2ba2b88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::SpatialTracking::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.OnBeforeRender
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::OnBeforeRender)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ba2ba4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::SpatialTracking::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.SetLocalTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::SpatialTracking::PoseDataFlags)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::SetLocalTransform)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2ba2bc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::SpatialTracking::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.TransformPoseByOriginIfNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Pose (UnityEngine::SpatialTracking::TrackedPoseDriver::*)(UnityEngine::Pose)>(&UnityEngine::SpatialTracking::TrackedPoseDriver::TransformPoseByOriginIfNeeded)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ba2ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "TransformPoseByOriginIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Pose>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.HasStereoCamera
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::HasStereoCamera)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ba2d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "HasStereoCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver.PerformUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::PerformUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2ba2dc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::SpatialTracking::TrackedPoseDriver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::SpatialTracking::TrackedPoseDriver._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpatialTracking::TrackedPoseDriver::*)()>(&UnityEngine::SpatialTracking::TrackedPoseDriver::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ba2e88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__set_m_Device(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType value)  {
::cordl_internals::setInstanceField<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType>(value));
}
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType UnityEngine::SpatialTracking::TrackedPoseDriver::__get_m_Device() const {
return ::cordl_internals::getInstanceField<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__set_m_PoseSource(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose value)  {
::cordl_internals::setInstanceField<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>(value));
}
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver::__get_m_PoseSource() const {
return ::cordl_internals::getInstanceField<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose, 0x1c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__set_m_PoseProviderComponent(UnityEngine::Experimental::XR::Interaction::BasePoseProvider value)  {
::cordl_internals::setInstanceField<UnityEngine::Experimental::XR::Interaction::BasePoseProvider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Experimental::XR::Interaction::BasePoseProvider>(value));
}
constexpr UnityEngine::Experimental::XR::Interaction::BasePoseProvider UnityEngine::SpatialTracking::TrackedPoseDriver::__get_m_PoseProviderComponent() const {
return ::cordl_internals::getInstanceField<UnityEngine::Experimental::XR::Interaction::BasePoseProvider, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__set_m_TrackingType(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType value)  {
::cordl_internals::setInstanceField<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType>(value));
}
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType UnityEngine::SpatialTracking::TrackedPoseDriver::__get_m_TrackingType() const {
return ::cordl_internals::getInstanceField<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__set_m_UpdateType(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType value)  {
::cordl_internals::setInstanceField<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType>(value));
}
constexpr UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType UnityEngine::SpatialTracking::TrackedPoseDriver::__get_m_UpdateType() const {
return ::cordl_internals::getInstanceField<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__set_m_UseRelativeTransform(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::SpatialTracking::TrackedPoseDriver::__get_m_UseRelativeTransform() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::SpatialTracking::TrackedPoseDriver::__set_m_OriginPose(UnityEngine::Pose value)  {
::cordl_internals::setInstanceField<UnityEngine::Pose, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Pose>(value));
}
constexpr UnityEngine::Pose UnityEngine::SpatialTracking::TrackedPoseDriver::__get_m_OriginPose() const {
return ::cordl_internals::getInstanceField<UnityEngine::Pose, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType UnityEngine::SpatialTracking::TrackedPoseDriver::get_deviceType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_deviceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::set_deviceType(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_deviceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseSource()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_poseSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseSource(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_poseSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::SpatialTracking::TrackedPoseDriver::SetPoseSource(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType deviceType, UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose pose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "SetPoseSource",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, deviceType, pose);
}
 UnityEngine::Experimental::XR::Interaction::BasePoseProvider UnityEngine::SpatialTracking::TrackedPoseDriver::get_poseProviderComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_poseProviderComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Experimental::XR::Interaction::BasePoseProvider, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::set_poseProviderComponent(UnityEngine::Experimental::XR::Interaction::BasePoseProvider value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_poseProviderComponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Experimental::XR::Interaction::BasePoseProvider>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::SpatialTracking::PoseDataFlags UnityEngine::SpatialTracking::TrackedPoseDriver::GetPoseData(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType device, UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose poseSource, ByRef<UnityEngine::Pose> resultPose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "GetPoseData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__DeviceType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackedPose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::Pose>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::SpatialTracking::PoseDataFlags, false>(const_cast<void*>(instance), ___internal_method, device, poseSource, resultPose);
}
 UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType UnityEngine::SpatialTracking::TrackedPoseDriver::get_trackingType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::set_trackingType(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_trackingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__TrackingType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType UnityEngine::SpatialTracking::TrackedPoseDriver::get_updateType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::set_updateType(UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_updateType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::UnityEngine__SpatialTracking__TrackedPoseDriver__UpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::SpatialTracking::TrackedPoseDriver::get_UseRelativeTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_UseRelativeTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::set_UseRelativeTransform(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_UseRelativeTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Pose UnityEngine::SpatialTracking::TrackedPoseDriver::get_originPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "get_originPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Pose, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::set_originPose(UnityEngine::Pose value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "set_originPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Pose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::CacheLocalPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "CacheLocalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::ResetToCachedLocalPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "ResetToCachedLocalPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::OnBeforeRender()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "OnBeforeRender",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::SetLocalTransform(UnityEngine::Vector3 newPosition, UnityEngine::Quaternion newRotation, UnityEngine::SpatialTracking::PoseDataFlags poseFlags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "SetLocalTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::SpatialTracking::PoseDataFlags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newPosition, newRotation, poseFlags);
}
 UnityEngine::Pose UnityEngine::SpatialTracking::TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine::Pose pose)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "TransformPoseByOriginIfNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Pose>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Pose, false>(const_cast<void*>(instance), ___internal_method, pose);
}
 bool UnityEngine::SpatialTracking::TrackedPoseDriver::HasStereoCamera()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "HasStereoCamera",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::PerformUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            "PerformUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::SpatialTracking::TrackedPoseDriver UnityEngine::SpatialTracking::TrackedPoseDriver::New_ctor()  {
UnityEngine::SpatialTracking::TrackedPoseDriver o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::SpatialTracking::TrackedPoseDriver>())};
return o;
}
 void UnityEngine::SpatialTracking::TrackedPoseDriver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::SpatialTracking::TrackedPoseDriver>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
