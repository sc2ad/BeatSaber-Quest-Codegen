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
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRDebugHeadController
  class OVRDebugHeadController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRDebugHeadController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRDebugHeadController*, "", "OVRDebugHeadController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVRDebugHeadController
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRDebugHeadController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean AllowPitchLook
    // Size: 0x1
    // Offset: 0x18
    bool AllowPitchLook;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean AllowYawLook
    // Size: 0x1
    // Offset: 0x19
    bool AllowYawLook;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean InvertPitch
    // Size: 0x1
    // Offset: 0x1A
    bool InvertPitch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: InvertPitch and: GamePad_PitchDegreesPerSec
    char __padding2[0x1] = {};
    // public System.Single GamePad_PitchDegreesPerSec
    // Size: 0x4
    // Offset: 0x1C
    float GamePad_PitchDegreesPerSec;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single GamePad_YawDegreesPerSec
    // Size: 0x4
    // Offset: 0x20
    float GamePad_YawDegreesPerSec;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean AllowMovement
    // Size: 0x1
    // Offset: 0x24
    bool AllowMovement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: AllowMovement and: ForwardSpeed
    char __padding5[0x3] = {};
    // public System.Single ForwardSpeed
    // Size: 0x4
    // Offset: 0x28
    float ForwardSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single StrafeSpeed
    // Size: 0x4
    // Offset: 0x2C
    float StrafeSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean AllowPitchLook
    [[deprecated("Use field access instead!")]] bool& dyn_AllowPitchLook();
    // Get instance field reference: public System.Boolean AllowYawLook
    [[deprecated("Use field access instead!")]] bool& dyn_AllowYawLook();
    // Get instance field reference: public System.Boolean InvertPitch
    [[deprecated("Use field access instead!")]] bool& dyn_InvertPitch();
    // Get instance field reference: public System.Single GamePad_PitchDegreesPerSec
    [[deprecated("Use field access instead!")]] float& dyn_GamePad_PitchDegreesPerSec();
    // Get instance field reference: public System.Single GamePad_YawDegreesPerSec
    [[deprecated("Use field access instead!")]] float& dyn_GamePad_YawDegreesPerSec();
    // Get instance field reference: public System.Boolean AllowMovement
    [[deprecated("Use field access instead!")]] bool& dyn_AllowMovement();
    // Get instance field reference: public System.Single ForwardSpeed
    [[deprecated("Use field access instead!")]] float& dyn_ForwardSpeed();
    // Get instance field reference: public System.Single StrafeSpeed
    [[deprecated("Use field access instead!")]] float& dyn_StrafeSpeed();
    // Get instance field reference: protected OVRCameraRig CameraRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn_CameraRig();
    // public System.Void .ctor()
    // Offset: 0x169DDFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRDebugHeadController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRDebugHeadController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRDebugHeadController*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x169D774
    void Awake();
    // private System.Void Start()
    // Offset: 0x169D86C
    void Start();
    // private System.Void Update()
    // Offset: 0x169D870
    void Update();
  }; // OVRDebugHeadController
  #pragma pack(pop)
  static check_size<sizeof(OVRDebugHeadController), 48 + sizeof(::GlobalNamespace::OVRCameraRig*)> __GlobalNamespace_OVRDebugHeadControllerSizeCheck;
  static_assert(sizeof(OVRDebugHeadController) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugHeadController::*)()>(&GlobalNamespace::OVRDebugHeadController::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugHeadController*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugHeadController::*)()>(&GlobalNamespace::OVRDebugHeadController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugHeadController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRDebugHeadController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRDebugHeadController::*)()>(&GlobalNamespace::OVRDebugHeadController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRDebugHeadController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
