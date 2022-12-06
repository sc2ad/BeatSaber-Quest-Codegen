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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRCenterAdjust
  class VRCenterAdjust;
  // Forward declaring type: VRController
  class VRController;
  // Forward declaring type: MouseLook
  class MouseLook;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRInputModule
  class VRInputModule;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FirstPersonFlyingController
  class FirstPersonFlyingController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FirstPersonFlyingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FirstPersonFlyingController*, "", "FirstPersonFlyingController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: FirstPersonFlyingController
  // [TokenAttribute] Offset: FFFFFFFF
  class FirstPersonFlyingController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _moveSensitivity
    // Size: 0x4
    // Offset: 0x18
    float moveSensitivity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: moveSensitivity and: transform
    char __padding0[0x4] = {};
    // [NullAllowed] Offset: 0x1125CFC
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // [NullAllowed] Offset: 0x1125D34
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    // private System.Single _cameraFov
    // Size: 0x4
    // Offset: 0x30
    float cameraFov;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cameraFov and: centerAdjust
    char __padding3[0x4] = {};
    // [NullAllowed] Offset: 0x1125D7C
    // private VRCenterAdjust _centerAdjust
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::VRCenterAdjust* centerAdjust;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRCenterAdjust*) == 0x8);
    // [NullAllowed] Offset: 0x1125DB4
    // private VRController _controller0
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::VRController* controller0;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRController*) == 0x8);
    // [NullAllowed] Offset: 0x1125DEC
    // private VRController _controller1
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::VRController* controller1;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRController*) == 0x8);
    // [NullAllowed] Offset: 0x1125E24
    // private VRUIControls.VRInputModule _vrInputModule
    // Size: 0x8
    // Offset: 0x50
    ::VRUIControls::VRInputModule* vrInputModule;
    // Field size check
    static_assert(sizeof(::VRUIControls::VRInputModule*) == 0x8);
    // [NullAllowed] Offset: 0x1125E5C
    // private UnityEngine.GameObject[] _controllerModels
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<::UnityEngine::GameObject*> controllerModels;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    // private MouseLook _mouseLook
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::MouseLook* mouseLook;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MouseLook*) == 0x8);
    // private System.Boolean _shouldBeEnabled
    // Size: 0x1
    // Offset: 0x68
    bool shouldBeEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shouldBeEnabled and: cameraTransform
    char __padding10[0x7] = {};
    // private UnityEngine.Transform _cameraTransform
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::Transform* cameraTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Single _moveSensitivity
    [[deprecated("Use field access instead!")]] float& dyn__moveSensitivity();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: private UnityEngine.Camera _camera
    [[deprecated("Use field access instead!")]] ::UnityEngine::Camera*& dyn__camera();
    // Get instance field reference: private System.Single _cameraFov
    [[deprecated("Use field access instead!")]] float& dyn__cameraFov();
    // Get instance field reference: private VRCenterAdjust _centerAdjust
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRCenterAdjust*& dyn__centerAdjust();
    // Get instance field reference: private VRController _controller0
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRController*& dyn__controller0();
    // Get instance field reference: private VRController _controller1
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRController*& dyn__controller1();
    // Get instance field reference: private VRUIControls.VRInputModule _vrInputModule
    [[deprecated("Use field access instead!")]] ::VRUIControls::VRInputModule*& dyn__vrInputModule();
    // Get instance field reference: private UnityEngine.GameObject[] _controllerModels
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn__controllerModels();
    // Get instance field reference: private MouseLook _mouseLook
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MouseLook*& dyn__mouseLook();
    // Get instance field reference: private System.Boolean _shouldBeEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__shouldBeEnabled();
    // Get instance field reference: private UnityEngine.Transform _cameraTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__cameraTransform();
    // public System.Void .ctor()
    // Offset: 0x1394D94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FirstPersonFlyingController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FirstPersonFlyingController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FirstPersonFlyingController*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x139445C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x1394468
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x139466C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1394708
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0x13947A0
    void Update();
    // public System.Void Inject(UnityEngine.Camera camera, VRCenterAdjust centerAdjust, VRController controller0, VRController controller1, VRUIControls.VRInputModule vrInputModule, System.Boolean shouldBeEnabled)
    // Offset: 0x1394C4C
    void Inject(::UnityEngine::Camera* camera, ::GlobalNamespace::VRCenterAdjust* centerAdjust, ::GlobalNamespace::VRController* controller0, ::GlobalNamespace::VRController* controller1, ::VRUIControls::VRInputModule* vrInputModule, bool shouldBeEnabled);
  }; // FirstPersonFlyingController
  #pragma pack(pop)
  static check_size<sizeof(FirstPersonFlyingController), 112 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_FirstPersonFlyingControllerSizeCheck;
  static_assert(sizeof(FirstPersonFlyingController) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)()>(&GlobalNamespace::FirstPersonFlyingController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FirstPersonFlyingController::Inject
// Il2CppName: Inject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FirstPersonFlyingController::*)(::UnityEngine::Camera*, ::GlobalNamespace::VRCenterAdjust*, ::GlobalNamespace::VRController*, ::GlobalNamespace::VRController*, ::VRUIControls::VRInputModule*, bool)>(&GlobalNamespace::FirstPersonFlyingController::Inject)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* centerAdjust = &::il2cpp_utils::GetClassFromName("", "VRCenterAdjust")->byval_arg;
    static auto* controller0 = &::il2cpp_utils::GetClassFromName("", "VRController")->byval_arg;
    static auto* controller1 = &::il2cpp_utils::GetClassFromName("", "VRController")->byval_arg;
    static auto* vrInputModule = &::il2cpp_utils::GetClassFromName("VRUIControls", "VRInputModule")->byval_arg;
    static auto* shouldBeEnabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FirstPersonFlyingController*), "Inject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, centerAdjust, controller0, controller1, vrInputModule, shouldBeEnabled});
  }
};
