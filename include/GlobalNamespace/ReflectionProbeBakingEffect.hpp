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
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReflectionProbeBakingEffect
  class ReflectionProbeBakingEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ReflectionProbeBakingEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReflectionProbeBakingEffect*, "", "ReflectionProbeBakingEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ReflectionProbeBakingEffect
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [ImageEffectAllowedInSceneView] Offset: FFFFFFFF
  class ReflectionProbeBakingEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Material _material
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__material();
    // public System.Void .ctor()
    // Offset: 0x1D08C84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionProbeBakingEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ReflectionProbeBakingEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionProbeBakingEffect*, creationType>()));
    }
    // protected System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x1D08C00
    void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);
  }; // ReflectionProbeBakingEffect
  #pragma pack(pop)
  static check_size<sizeof(ReflectionProbeBakingEffect), 24 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_ReflectionProbeBakingEffectSizeCheck;
  static_assert(sizeof(ReflectionProbeBakingEffect) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeBakingEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ReflectionProbeBakingEffect::OnRenderImage
// Il2CppName: OnRenderImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReflectionProbeBakingEffect::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&GlobalNamespace::ReflectionProbeBakingEffect::OnRenderImage)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReflectionProbeBakingEffect*), "OnRenderImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest});
  }
};
