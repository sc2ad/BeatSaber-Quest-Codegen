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
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: SmoothCamera
  class SmoothCamera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SmoothCameraController
  class SmoothCameraController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SmoothCameraController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCameraController*, "", "SmoothCameraController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SmoothCameraController
  // [TokenAttribute] Offset: FFFFFFFF
  class SmoothCameraController : public ::UnityEngine::MonoBehaviour {
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
    // private MainSettingsModelSO _mainSettingsModel
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MainSettingsModelSO*) == 0x8);
    // private SmoothCamera _smoothCamera
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SmoothCamera* smoothCamera;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SmoothCamera*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MainSettingsModelSO _mainSettingsModel
    ::GlobalNamespace::MainSettingsModelSO*& dyn__mainSettingsModel();
    // Get instance field reference: private SmoothCamera _smoothCamera
    ::GlobalNamespace::SmoothCamera*& dyn__smoothCamera();
    // protected System.Void Start()
    // Offset: 0x13CF798
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x13CF928
    void OnDestroy();
    // private System.Void HandleDidActivate()
    // Offset: 0x13CF92C
    void HandleDidActivate();
    // private System.Void HandleDidDeactivate()
    // Offset: 0x13CF97C
    void HandleDidDeactivate();
    // private System.Void ActivateSmoothCameraIfNeeded()
    // Offset: 0x13CF79C
    void ActivateSmoothCameraIfNeeded();
    // public System.Void .ctor()
    // Offset: 0x13CF980
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmoothCameraController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SmoothCameraController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmoothCameraController*, creationType>()));
    }
  }; // SmoothCameraController
  #pragma pack(pop)
  static check_size<sizeof(SmoothCameraController), 32 + sizeof(::GlobalNamespace::SmoothCamera*)> __GlobalNamespace_SmoothCameraControllerSizeCheck;
  static_assert(sizeof(SmoothCameraController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCameraController::*)()>(&GlobalNamespace::SmoothCameraController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCameraController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraController::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCameraController::*)()>(&GlobalNamespace::SmoothCameraController::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCameraController*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraController::HandleDidActivate
// Il2CppName: HandleDidActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCameraController::*)()>(&GlobalNamespace::SmoothCameraController::HandleDidActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCameraController*), "HandleDidActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraController::HandleDidDeactivate
// Il2CppName: HandleDidDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCameraController::*)()>(&GlobalNamespace::SmoothCameraController::HandleDidDeactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCameraController*), "HandleDidDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraController::ActivateSmoothCameraIfNeeded
// Il2CppName: ActivateSmoothCameraIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SmoothCameraController::*)()>(&GlobalNamespace::SmoothCameraController::ActivateSmoothCameraIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SmoothCameraController*), "ActivateSmoothCameraIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SmoothCameraController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
