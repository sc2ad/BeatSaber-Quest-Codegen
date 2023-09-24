#pragma once
#include "GlobalNamespace/zzzz__OVRMixedReality_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRComposition_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: GlobalNamespace::OVRMixedReality.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::GameObject, UnityEngine::Camera, GlobalNamespace::OVRMixedRealityCaptureConfiguration, GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin, float_t)>(&GlobalNamespace::OVRMixedReality::Update)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x25cf61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRMixedRealityCaptureConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRMixedReality.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRMixedReality::Cleanup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x25cfdd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::OVRMixedReality.RecenterPose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRMixedReality::RecenterPose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x25cff88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get(),
                            "RecenterPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::OVRMixedReality::__set_useFakeExternalCamera(bool value)  {
::cordl_internals::setStaticField<bool, "useFakeExternalCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>(std::forward<bool>(value));
}
 bool GlobalNamespace::OVRMixedReality::__get_useFakeExternalCamera()  {
return ::cordl_internals::getStaticField<bool, "useFakeExternalCamera", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>();
}
 void GlobalNamespace::OVRMixedReality::__set_fakeCameraFloorLevelPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector3, "fakeCameraFloorLevelPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>(std::forward<UnityEngine::Vector3>(value));
}
 UnityEngine::Vector3 GlobalNamespace::OVRMixedReality::__get_fakeCameraFloorLevelPosition()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector3, "fakeCameraFloorLevelPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>();
}
 void GlobalNamespace::OVRMixedReality::__set_fakeCameraEyeLevelPosition(UnityEngine::Vector3 value)  {
::cordl_internals::setStaticField<UnityEngine::Vector3, "fakeCameraEyeLevelPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>(std::forward<UnityEngine::Vector3>(value));
}
 UnityEngine::Vector3 GlobalNamespace::OVRMixedReality::__get_fakeCameraEyeLevelPosition()  {
return ::cordl_internals::getStaticField<UnityEngine::Vector3, "fakeCameraEyeLevelPosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>();
}
 void GlobalNamespace::OVRMixedReality::__set_fakeCameraRotation(UnityEngine::Quaternion value)  {
::cordl_internals::setStaticField<UnityEngine::Quaternion, "fakeCameraRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>(std::forward<UnityEngine::Quaternion>(value));
}
 UnityEngine::Quaternion GlobalNamespace::OVRMixedReality::__get_fakeCameraRotation()  {
return ::cordl_internals::getStaticField<UnityEngine::Quaternion, "fakeCameraRotation", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>();
}
 void GlobalNamespace::OVRMixedReality::__set_fakeCameraFov(float_t value)  {
::cordl_internals::setStaticField<float_t, "fakeCameraFov", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRMixedReality::__get_fakeCameraFov()  {
return ::cordl_internals::getStaticField<float_t, "fakeCameraFov", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>();
}
 void GlobalNamespace::OVRMixedReality::__set_fakeCameraAspect(float_t value)  {
::cordl_internals::setStaticField<float_t, "fakeCameraAspect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>(std::forward<float_t>(value));
}
 float_t GlobalNamespace::OVRMixedReality::__get_fakeCameraAspect()  {
return ::cordl_internals::getStaticField<float_t, "fakeCameraAspect", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>();
}
 void GlobalNamespace::OVRMixedReality::__set_currentComposition(GlobalNamespace::OVRComposition value)  {
::cordl_internals::setStaticField<GlobalNamespace::OVRComposition, "currentComposition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>(std::forward<GlobalNamespace::OVRComposition>(value));
}
 GlobalNamespace::OVRComposition GlobalNamespace::OVRMixedReality::__get_currentComposition()  {
return ::cordl_internals::getStaticField<GlobalNamespace::OVRComposition, "currentComposition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get>();
}
 void GlobalNamespace::OVRMixedReality::Update(UnityEngine::GameObject parentObject, UnityEngine::Camera mainCamera, GlobalNamespace::OVRMixedRealityCaptureConfiguration configuration, GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin trackingOrigin, float_t displayFrequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Camera>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::OVRMixedRealityCaptureConfiguration>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__OVRManager__TrackingOrigin>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, parentObject, mainCamera, configuration, trackingOrigin, displayFrequency);
}
 void GlobalNamespace::OVRMixedReality::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 void GlobalNamespace::OVRMixedReality::RecenterPose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::OVRMixedReality>::get(),
                            "RecenterPose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
