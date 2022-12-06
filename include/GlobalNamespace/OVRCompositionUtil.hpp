// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRBoundary
#include "GlobalNamespace/OVRBoundary.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CameraDevice
  struct OVRManager_CameraDevice;
  // Forward declaring type: VirtualGreenScreenType
  struct OVRManager_VirtualGreenScreenType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRCompositionUtil
  class OVRCompositionUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRCompositionUtil);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCompositionUtil*, "", "OVRCompositionUtil");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRCompositionUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRCompositionUtil : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x16988A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCompositionUtil* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRCompositionUtil::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCompositionUtil*, creationType>()));
    }
    // static public System.Void SafeDestroy(UnityEngine.GameObject obj)
    // Offset: 0x1697F20
    static void SafeDestroy(::UnityEngine::GameObject* obj);
    // static public System.Void SafeDestroy(ref UnityEngine.GameObject obj)
    // Offset: 0x1697FC0
    static void SafeDestroy_(ByRef<::UnityEngine::GameObject*> obj);
    // static public OVRPlugin/CameraDevice ConvertCameraDevice(OVRManager/CameraDevice cameraDevice)
    // Offset: 0x1698044
    static ::GlobalNamespace::OVRPlugin::CameraDevice ConvertCameraDevice(::GlobalNamespace::OVRManager_CameraDevice cameraDevice);
    // static public OVRBoundary/BoundaryType ToBoundaryType(OVRManager/VirtualGreenScreenType type)
    // Offset: 0x1698070
    static ::GlobalNamespace::OVRBoundary::BoundaryType ToBoundaryType(::GlobalNamespace::OVRManager_VirtualGreenScreenType type);
    // static public UnityEngine.Vector3 GetWorldPosition(UnityEngine.Camera camera, UnityEngine.Vector3 trackingSpacePosition)
    // Offset: 0x1698104
    static ::UnityEngine::Vector3 GetWorldPosition(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 trackingSpacePosition);
    // static public System.Single GetMaximumBoundaryDistance(UnityEngine.Camera camera, OVRBoundary/BoundaryType boundaryType)
    // Offset: 0x16981B8
    static float GetMaximumBoundaryDistance(::UnityEngine::Camera* camera, ::GlobalNamespace::OVRBoundary::BoundaryType boundaryType);
    // static public UnityEngine.Mesh BuildBoundaryMesh(OVRBoundary/BoundaryType boundaryType, System.Single topY, System.Single bottomY)
    // Offset: 0x16983FC
    static ::UnityEngine::Mesh* BuildBoundaryMesh(::GlobalNamespace::OVRBoundary::BoundaryType boundaryType, float topY, float bottomY);
  }; // OVRCompositionUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRCompositionUtil::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRCompositionUtil::SafeDestroy
// Il2CppName: SafeDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GameObject*)>(&GlobalNamespace::OVRCompositionUtil::SafeDestroy)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCompositionUtil*), "SafeDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCompositionUtil::SafeDestroy_
// Il2CppName: SafeDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::GameObject*>)>(&GlobalNamespace::OVRCompositionUtil::SafeDestroy_)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCompositionUtil*), "SafeDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCompositionUtil::ConvertCameraDevice
// Il2CppName: ConvertCameraDevice
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::CameraDevice (*)(::GlobalNamespace::OVRManager_CameraDevice)>(&GlobalNamespace::OVRCompositionUtil::ConvertCameraDevice)> {
  static const MethodInfo* get() {
    static auto* cameraDevice = &::il2cpp_utils::GetClassFromName("", "OVRManager/CameraDevice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCompositionUtil*), "ConvertCameraDevice", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cameraDevice});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCompositionUtil::ToBoundaryType
// Il2CppName: ToBoundaryType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRBoundary::BoundaryType (*)(::GlobalNamespace::OVRManager_VirtualGreenScreenType)>(&GlobalNamespace::OVRCompositionUtil::ToBoundaryType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("", "OVRManager/VirtualGreenScreenType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCompositionUtil*), "ToBoundaryType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCompositionUtil::GetWorldPosition
// Il2CppName: GetWorldPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3)>(&GlobalNamespace::OVRCompositionUtil::GetWorldPosition)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* trackingSpacePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCompositionUtil*), "GetWorldPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, trackingSpacePosition});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCompositionUtil::GetMaximumBoundaryDistance
// Il2CppName: GetMaximumBoundaryDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::UnityEngine::Camera*, ::GlobalNamespace::OVRBoundary::BoundaryType)>(&GlobalNamespace::OVRCompositionUtil::GetMaximumBoundaryDistance)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRBoundary/BoundaryType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCompositionUtil*), "GetMaximumBoundaryDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, boundaryType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCompositionUtil::BuildBoundaryMesh
// Il2CppName: BuildBoundaryMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (*)(::GlobalNamespace::OVRBoundary::BoundaryType, float, float)>(&GlobalNamespace::OVRCompositionUtil::BuildBoundaryMesh)> {
  static const MethodInfo* get() {
    static auto* boundaryType = &::il2cpp_utils::GetClassFromName("", "OVRBoundary/BoundaryType")->byval_arg;
    static auto* topY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bottomY = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCompositionUtil*), "BuildBoundaryMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boundaryType, topY, bottomY});
  }
};
