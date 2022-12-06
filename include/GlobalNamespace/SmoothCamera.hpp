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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainCamera
  class MainCamera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SmoothCamera
  class SmoothCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SmoothCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCamera*, "", "SmoothCamera");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: SmoothCamera
  // [TokenAttribute] Offset: FFFFFFFF
  class SmoothCamera : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // [InjectAttribute] Offset: 0x111C100
    // private MainCamera _mainCamera
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MainCamera* mainCamera;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainCamera*) == 0x8);
    // private UnityEngine.Vector3 _thirdPersonPosition
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 thirdPersonPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _thirdPersonEulerAngles
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 thirdPersonEulerAngles;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Boolean _thirdPersonEnabled
    // Size: 0x1
    // Offset: 0x40
    bool thirdPersonEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: thirdPersonEnabled and: rotationSmooth
    char __padding4[0x3] = {};
    // private System.Single _rotationSmooth
    // Size: 0x4
    // Offset: 0x44
    float rotationSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _positionSmooth
    // Size: 0x4
    // Offset: 0x48
    float positionSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Camera _camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__camera();
    // Get instance field reference: private MainCamera _mainCamera
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MainCamera*& dyn__mainCamera();
    // Get instance field reference: private UnityEngine.Vector3 _thirdPersonPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__thirdPersonPosition();
    // Get instance field reference: private UnityEngine.Vector3 _thirdPersonEulerAngles
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__thirdPersonEulerAngles();
    // Get instance field reference: private System.Boolean _thirdPersonEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__thirdPersonEnabled();
    // Get instance field reference: private System.Single _rotationSmooth
    [[deprecated("Use field access instead!")]] float& dyn__rotationSmooth();
    // Get instance field reference: private System.Single _positionSmooth
    [[deprecated("Use field access instead!")]] float& dyn__positionSmooth();
    // public System.Void .ctor()
    // Offset: 0x1473FA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmoothCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SmoothCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmoothCamera*, creationType>()));
    }
    // public System.Void Init(System.Single fieldOfView, System.Single positionSmooth, System.Single rotationSmooth, System.Boolean thirdPersonEnabled, UnityEngine.Vector3 thirdPersonPosition, UnityEngine.Vector3 thirdPersonEulerAngles)
    // Offset: 0x1473B80
    void Init(float fieldOfView, float positionSmooth, float rotationSmooth, bool thirdPersonEnabled, ::UnityEngine::Vector3 thirdPersonPosition, ::UnityEngine::Vector3 thirdPersonEulerAngles);
    // protected System.Void OnEnable()
    // Offset: 0x1473D2C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1473D4C
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0x1473D6C
    void LateUpdate();
  }; // SmoothCamera
  #pragma pack(pop)
  static check_size<sizeof(SmoothCamera), 72 + sizeof(float)> __GlobalNamespace_SmoothCameraSizeCheck;
  static_assert(sizeof(SmoothCamera) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SmoothCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SmoothCamera::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCamera::*)(float, float, float, bool, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::SmoothCamera::Init)> {
  static const MethodInfo* get() {
    static auto* fieldOfView = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* positionSmooth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* rotationSmooth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* thirdPersonEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* thirdPersonPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* thirdPersonEulerAngles = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCamera*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fieldOfView, positionSmooth, rotationSmooth, thirdPersonEnabled, thirdPersonPosition, thirdPersonEulerAngles});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCamera::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCamera::*)()>(&GlobalNamespace::SmoothCamera::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCamera*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCamera::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCamera::*)()>(&GlobalNamespace::SmoothCamera::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCamera*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCamera::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCamera::*)()>(&GlobalNamespace::SmoothCamera::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCamera*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
