// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRComposition
  class OVRComposition;
  // Forward declaring type: OVRMixedRealityCaptureConfiguration
  class OVRMixedRealityCaptureConfiguration;
  // Forward declaring type: TrackingOrigin
  struct OVRManager_TrackingOrigin;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRMixedReality
  class OVRMixedReality;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRMixedReality);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedReality*, "", "OVRMixedReality");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRMixedReality
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRMixedReality : public ::Il2CppObject {
    public:
    // Get static field: static public System.Boolean useFakeExternalCamera
    static bool _get_useFakeExternalCamera();
    // Set static field: static public System.Boolean useFakeExternalCamera
    static void _set_useFakeExternalCamera(bool value);
    // Get static field: static public UnityEngine.Vector3 fakeCameraFloorLevelPosition
    static ::UnityEngine::Vector3 _get_fakeCameraFloorLevelPosition();
    // Set static field: static public UnityEngine.Vector3 fakeCameraFloorLevelPosition
    static void _set_fakeCameraFloorLevelPosition(::UnityEngine::Vector3 value);
    // Get static field: static public UnityEngine.Vector3 fakeCameraEyeLevelPosition
    static ::UnityEngine::Vector3 _get_fakeCameraEyeLevelPosition();
    // Set static field: static public UnityEngine.Vector3 fakeCameraEyeLevelPosition
    static void _set_fakeCameraEyeLevelPosition(::UnityEngine::Vector3 value);
    // Get static field: static public UnityEngine.Quaternion fakeCameraRotation
    static ::UnityEngine::Quaternion _get_fakeCameraRotation();
    // Set static field: static public UnityEngine.Quaternion fakeCameraRotation
    static void _set_fakeCameraRotation(::UnityEngine::Quaternion value);
    // Get static field: static public System.Single fakeCameraFov
    static float _get_fakeCameraFov();
    // Set static field: static public System.Single fakeCameraFov
    static void _set_fakeCameraFov(float value);
    // Get static field: static public System.Single fakeCameraAspect
    static float _get_fakeCameraAspect();
    // Set static field: static public System.Single fakeCameraAspect
    static void _set_fakeCameraAspect(float value);
    // Get static field: static public OVRComposition currentComposition
    static ::GlobalNamespace::OVRComposition* _get_currentComposition();
    // Set static field: static public OVRComposition currentComposition
    static void _set_currentComposition(::GlobalNamespace::OVRComposition* value);
    // static private System.Void .cctor()
    // Offset: 0x175C088
    static void _cctor();
    // static public System.Void Update(UnityEngine.GameObject parentObject, UnityEngine.Camera mainCamera, OVRMixedRealityCaptureConfiguration configuration, OVRManager/TrackingOrigin trackingOrigin)
    // Offset: 0x175B558
    static void Update(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration, ::GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin);
    // static public System.Void Cleanup()
    // Offset: 0x175BDE0
    static void Cleanup();
    // static public System.Void RecenterPose()
    // Offset: 0x175BFDC
    static void RecenterPose();
  }; // OVRMixedReality
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedReality::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRMixedReality::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMixedReality*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedReality::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*, ::GlobalNamespace::OVRManager_TrackingOrigin)>(&GlobalNamespace::OVRMixedReality::Update)> {
  static const MethodInfo* get() {
    static auto* parentObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* mainCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "OVRMixedRealityCaptureConfiguration")->byval_arg;
    static auto* trackingOrigin = &::il2cpp_utils::GetClassFromName("", "OVRManager/TrackingOrigin")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMixedReality*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentObject, mainCamera, configuration, trackingOrigin});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedReality::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRMixedReality::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMixedReality*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMixedReality::RecenterPose
// Il2CppName: RecenterPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRMixedReality::RecenterPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMixedReality*), "RecenterPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
