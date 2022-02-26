// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: CameraRenderCallbacksManager/ICameraRenderCallbacks
#include "GlobalNamespace/CameraRenderCallbacksManager_ICameraRenderCallbacks.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassRendererSO
  class BloomPrePassRendererSO;
  // Forward declaring type: BloomPrePassEffectContainerSO
  class BloomPrePassEffectContainerSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SceneCameraBloomPrePass
  class SceneCameraBloomPrePass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SceneCameraBloomPrePass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneCameraBloomPrePass*, "", "SceneCameraBloomPrePass");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SceneCameraBloomPrePass
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 1228598
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class SceneCameraBloomPrePass : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*/ {
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
    // private BloomPrePassRendererSO _bloomPrepassRenderer
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BloomPrePassRendererSO* bloomPrepassRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassRendererSO*) == 0x8);
    // private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BloomPrePassEffectContainerSO* bloomPrePassEffectContainer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassEffectContainerSO*) == 0x8);
    // private UnityEngine.RenderTexture _bloomPrepassRenderTexture
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::RenderTexture* bloomPrepassRenderTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks
    operator ::GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks() noexcept {
      return *reinterpret_cast<::GlobalNamespace::CameraRenderCallbacksManager::ICameraRenderCallbacks*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private BloomPrePassRendererSO _bloomPrepassRenderer
    ::GlobalNamespace::BloomPrePassRendererSO*& dyn__bloomPrepassRenderer();
    // Get instance field reference: private BloomPrePassEffectContainerSO _bloomPrePassEffectContainer
    ::GlobalNamespace::BloomPrePassEffectContainerSO*& dyn__bloomPrePassEffectContainer();
    // Get instance field reference: private UnityEngine.RenderTexture _bloomPrepassRenderTexture
    ::UnityEngine::RenderTexture*& dyn__bloomPrepassRenderTexture();
    // public System.Void OnCameraPreRender(UnityEngine.Camera camera)
    // Offset: 0x2091EA0
    void OnCameraPreRender(::UnityEngine::Camera* camera);
    // public System.Void OnCameraPostRender(UnityEngine.Camera camera)
    // Offset: 0x2091EA4
    void OnCameraPostRender(::UnityEngine::Camera* camera);
    // public System.Void .ctor()
    // Offset: 0x2091EA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneCameraBloomPrePass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SceneCameraBloomPrePass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneCameraBloomPrePass*, creationType>()));
    }
  }; // SceneCameraBloomPrePass
  #pragma pack(pop)
  static check_size<sizeof(SceneCameraBloomPrePass), 40 + sizeof(::UnityEngine::RenderTexture*)> __GlobalNamespace_SceneCameraBloomPrePassSizeCheck;
  static_assert(sizeof(SceneCameraBloomPrePass) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SceneCameraBloomPrePass::OnCameraPreRender
// Il2CppName: OnCameraPreRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneCameraBloomPrePass::*)(::UnityEngine::Camera*)>(&GlobalNamespace::SceneCameraBloomPrePass::OnCameraPreRender)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneCameraBloomPrePass*), "OnCameraPreRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneCameraBloomPrePass::OnCameraPostRender
// Il2CppName: OnCameraPostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SceneCameraBloomPrePass::*)(::UnityEngine::Camera*)>(&GlobalNamespace::SceneCameraBloomPrePass::OnCameraPostRender)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SceneCameraBloomPrePass*), "OnCameraPostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SceneCameraBloomPrePass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
