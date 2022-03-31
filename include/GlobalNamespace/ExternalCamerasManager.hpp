// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OculusMRCManager
  class OculusMRCManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ExternalCamerasManager
  class ExternalCamerasManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ExternalCamerasManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ExternalCamerasManager*, "", "ExternalCamerasManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ExternalCamerasManager
  // [TokenAttribute] Offset: FFFFFFFF
  class ExternalCamerasManager : public ::UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private OculusMRCManager _oculusMRCManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OculusMRCManager* oculusMRCManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OculusMRCManager*) == 0x8);
    // private UnityEngine.Camera _mrcBackgroundCameraPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* mrcBackgroundCameraPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private UnityEngine.Camera _mrcForegroundCameraPrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Camera* mrcForegroundCameraPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private OculusMRCManager _oculusMRCManager
    ::GlobalNamespace::OculusMRCManager*& dyn__oculusMRCManager();
    // Get instance field reference: private UnityEngine.Camera _mrcBackgroundCameraPrefab
    ::UnityEngine::Camera*& dyn__mrcBackgroundCameraPrefab();
    // Get instance field reference: private UnityEngine.Camera _mrcForegroundCameraPrefab
    ::UnityEngine::Camera*& dyn__mrcForegroundCameraPrefab();
    // protected System.Void OnEnable()
    // Offset: 0x29E7588
    void OnEnable();
    // private UnityEngine.GameObject InstantiateMixedRealityBackgroundCameraGameObject(UnityEngine.GameObject mainCameraGameObject)
    // Offset: 0x29E764C
    ::UnityEngine::GameObject* InstantiateMixedRealityBackgroundCameraGameObject(::UnityEngine::GameObject* mainCameraGameObject);
    // private UnityEngine.GameObject InstantiateMixedRealityForegroundCameraGameObject(UnityEngine.GameObject mainCameraGameObject)
    // Offset: 0x29E76D0
    ::UnityEngine::GameObject* InstantiateMixedRealityForegroundCameraGameObject(::UnityEngine::GameObject* mainCameraGameObject);
    // public System.Void .ctor()
    // Offset: 0x29E7754
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExternalCamerasManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ExternalCamerasManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExternalCamerasManager*, creationType>()));
    }
  }; // ExternalCamerasManager
  #pragma pack(pop)
  static check_size<sizeof(ExternalCamerasManager), 40 + sizeof(::UnityEngine::Camera*)> __GlobalNamespace_ExternalCamerasManagerSizeCheck;
  static_assert(sizeof(ExternalCamerasManager) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ExternalCamerasManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ExternalCamerasManager::*)()>(&GlobalNamespace::ExternalCamerasManager::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExternalCamerasManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject
// Il2CppName: InstantiateMixedRealityBackgroundCameraGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::ExternalCamerasManager::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject)> {
  static const MethodInfo* get() {
    static auto* mainCameraGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExternalCamerasManager*), "InstantiateMixedRealityBackgroundCameraGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainCameraGameObject});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject
// Il2CppName: InstantiateMixedRealityForegroundCameraGameObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (GlobalNamespace::ExternalCamerasManager::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject)> {
  static const MethodInfo* get() {
    static auto* mainCameraGameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ExternalCamerasManager*), "InstantiateMixedRealityForegroundCameraGameObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainCameraGameObject});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ExternalCamerasManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
