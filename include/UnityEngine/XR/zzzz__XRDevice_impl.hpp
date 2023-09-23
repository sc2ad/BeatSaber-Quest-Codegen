#pragma once
#include "UnityEngine/XR/zzzz__XRDevice_def.hpp"
#include "UnityEngine/XR/zzzz__TrackingSpaceType_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: UnityEngine::XR::XRDevice.SetTrackingSpaceType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::XR::TrackingSpaceType)>(&UnityEngine::XR::XRDevice::SetTrackingSpaceType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d389fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDevice>::get(),
                            "SetTrackingSpaceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::TrackingSpaceType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRDevice.DisableAutoXRCameraTracking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Camera, bool)>(&UnityEngine::XR::XRDevice::DisableAutoXRCameraTracking)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d38a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDevice>::get(),
                            "DisableAutoXRCameraTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::XRDevice.InvokeDeviceLoaded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&UnityEngine::XR::XRDevice::InvokeDeviceLoaded)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2d38a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDevice>::get(),
                            "InvokeDeviceLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::XR::XRDevice::__set_deviceLoaded(System::Action_1<::StringW> value)  {
::cordl_internals::setStaticField<System::Action_1<::StringW>, "deviceLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDevice>::get>(std::forward<System::Action_1<::StringW>>(value));
}
 System::Action_1<::StringW> UnityEngine::XR::XRDevice::__get_deviceLoaded()  {
return ::cordl_internals::getStaticField<System::Action_1<::StringW>, "deviceLoaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDevice>::get>();
}
 bool UnityEngine::XR::XRDevice::SetTrackingSpaceType(UnityEngine::XR::TrackingSpaceType trackingSpaceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDevice>::get(),
                            "SetTrackingSpaceType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::TrackingSpaceType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trackingSpaceType);
}
 void UnityEngine::XR::XRDevice::DisableAutoXRCameraTracking(UnityEngine::Camera camera, bool disabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDevice>::get(),
                            "DisableAutoXRCameraTracking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, camera, disabled);
}
 void UnityEngine::XR::XRDevice::InvokeDeviceLoaded(::StringW loadedDeviceName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::XRDevice>::get(),
                            "InvokeDeviceLoaded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, loadedDeviceName);
}
