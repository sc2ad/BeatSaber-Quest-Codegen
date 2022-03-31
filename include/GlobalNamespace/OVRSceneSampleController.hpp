// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPlayerController
  class OVRPlayerController;
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
  // Forward declaring type: OVRGridCube
  class OVRGridCube;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSceneSampleController
  class OVRSceneSampleController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSceneSampleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneSampleController*, "", "OVRSceneSampleController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: OVRSceneSampleController
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSceneSampleController : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.KeyCode quitKey
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::KeyCode quitKey;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    // Padding between fields: quitKey and: fadeInTexture
    char __padding0[0x4] = {};
    // public UnityEngine.Texture fadeInTexture
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Texture* fadeInTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // public System.Single speedRotationIncrement
    // Size: 0x4
    // Offset: 0x28
    float speedRotationIncrement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: speedRotationIncrement and: playerController
    char __padding2[0x4] = {};
    // private OVRPlayerController playerController
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::OVRPlayerController* playerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlayerController*) == 0x8);
    // private OVRCameraRig cameraController
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::OVRCameraRig* cameraController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    // public System.String layerName
    // Size: 0x8
    // Offset: 0x40
    ::StringW layerName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean visionMode
    // Size: 0x1
    // Offset: 0x48
    bool visionMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: visionMode and: gridCube
    char __padding6[0x7] = {};
    // private OVRGridCube gridCube
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::OVRGridCube* gridCube;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRGridCube*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.KeyCode quitKey
    ::UnityEngine::KeyCode& dyn_quitKey();
    // Get instance field reference: public UnityEngine.Texture fadeInTexture
    ::UnityEngine::Texture*& dyn_fadeInTexture();
    // Get instance field reference: public System.Single speedRotationIncrement
    float& dyn_speedRotationIncrement();
    // Get instance field reference: private OVRPlayerController playerController
    ::GlobalNamespace::OVRPlayerController*& dyn_playerController();
    // Get instance field reference: private OVRCameraRig cameraController
    ::GlobalNamespace::OVRCameraRig*& dyn_cameraController();
    // Get instance field reference: public System.String layerName
    ::StringW& dyn_layerName();
    // Get instance field reference: private System.Boolean visionMode
    bool& dyn_visionMode();
    // Get instance field reference: private OVRGridCube gridCube
    ::GlobalNamespace::OVRGridCube*& dyn_gridCube();
    // private System.Void Awake()
    // Offset: 0x1AE80EC
    void Awake();
    // private System.Void Start()
    // Offset: 0x1AE8288
    void Start();
    // private System.Void Update()
    // Offset: 0x1AE8374
    void Update();
    // private System.Void UpdateVisionMode()
    // Offset: 0x1AE8524
    void UpdateVisionMode();
    // private System.Void UpdateSpeedAndRotationScaleMultiplier()
    // Offset: 0x1AE8608
    void UpdateSpeedAndRotationScaleMultiplier();
    // private System.Void UpdateRecenterPose()
    // Offset: 0x1AE8458
    void UpdateRecenterPose();
    // public System.Void .ctor()
    // Offset: 0x1AE86FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSceneSampleController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSceneSampleController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSceneSampleController*, creationType>()));
    }
  }; // OVRSceneSampleController
  #pragma pack(pop)
  static check_size<sizeof(OVRSceneSampleController), 80 + sizeof(::GlobalNamespace::OVRGridCube*)> __GlobalNamespace_OVRSceneSampleControllerSizeCheck;
  static_assert(sizeof(OVRSceneSampleController) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneSampleController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneSampleController::*)()>(&GlobalNamespace::OVRSceneSampleController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneSampleController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneSampleController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneSampleController::*)()>(&GlobalNamespace::OVRSceneSampleController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneSampleController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneSampleController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneSampleController::*)()>(&GlobalNamespace::OVRSceneSampleController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneSampleController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneSampleController::UpdateVisionMode
// Il2CppName: UpdateVisionMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneSampleController::*)()>(&GlobalNamespace::OVRSceneSampleController::UpdateVisionMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneSampleController*), "UpdateVisionMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneSampleController::UpdateSpeedAndRotationScaleMultiplier
// Il2CppName: UpdateSpeedAndRotationScaleMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneSampleController::*)()>(&GlobalNamespace::OVRSceneSampleController::UpdateSpeedAndRotationScaleMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneSampleController*), "UpdateSpeedAndRotationScaleMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneSampleController::UpdateRecenterPose
// Il2CppName: UpdateRecenterPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSceneSampleController::*)()>(&GlobalNamespace::OVRSceneSampleController::UpdateRecenterPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSceneSampleController*), "UpdateRecenterPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSceneSampleController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
