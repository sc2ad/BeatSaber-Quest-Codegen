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
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RenderTextureFromPostEffect
  class RenderTextureFromPostEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RenderTextureFromPostEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderTextureFromPostEffect*, "", "RenderTextureFromPostEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: RenderTextureFromPostEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class RenderTextureFromPostEffect : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.RenderTexture _targetTexture
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RenderTexture* targetTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(::UnityEngine::Camera*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.RenderTexture _targetTexture
    ::UnityEngine::RenderTexture*& dyn__targetTexture();
    // Get instance field reference: private UnityEngine.Camera _camera
    ::UnityEngine::Camera*& dyn__camera();
    // public UnityEngine.RenderTexture get_targetTexture()
    // Offset: 0x2E0FD20
    ::UnityEngine::RenderTexture* get_targetTexture();
    // protected System.Void Awake()
    // Offset: 0x2E0FD28
    void Awake();
    // private System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dst)
    // Offset: 0x2E0FD80
    void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dst);
    // public System.Void .ctor()
    // Offset: 0x2E0FF88
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RenderTextureFromPostEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RenderTextureFromPostEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RenderTextureFromPostEffect*, creationType>()));
    }
  }; // RenderTextureFromPostEffect
  #pragma pack(pop)
  static check_size<sizeof(RenderTextureFromPostEffect), 32 + sizeof(::UnityEngine::Camera*)> __GlobalNamespace_RenderTextureFromPostEffectSizeCheck;
  static_assert(sizeof(RenderTextureFromPostEffect) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RenderTextureFromPostEffect::get_targetTexture
// Il2CppName: get_targetTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (GlobalNamespace::RenderTextureFromPostEffect::*)()>(&GlobalNamespace::RenderTextureFromPostEffect::get_targetTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RenderTextureFromPostEffect*), "get_targetTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RenderTextureFromPostEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RenderTextureFromPostEffect::*)()>(&GlobalNamespace::RenderTextureFromPostEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RenderTextureFromPostEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RenderTextureFromPostEffect::OnRenderImage
// Il2CppName: OnRenderImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RenderTextureFromPostEffect::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&GlobalNamespace::RenderTextureFromPostEffect::OnRenderImage)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dst = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RenderTextureFromPostEffect*), "OnRenderImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::RenderTextureFromPostEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
