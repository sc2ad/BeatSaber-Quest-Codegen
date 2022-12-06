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
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_SphericalProjection
  class SteamVR_SphericalProjection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_SphericalProjection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_SphericalProjection*, "", "SteamVR_SphericalProjection");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_SphericalProjection
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class SteamVR_SphericalProjection : public ::UnityEngine::MonoBehaviour {
    public:
    // Get static field: static private UnityEngine.Material material
    static ::UnityEngine::Material* _get_material();
    // Set static field: static private UnityEngine.Material material
    static void _set_material(::UnityEngine::Material* value);
    // public System.Void .ctor()
    // Offset: 0x18C7E7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_SphericalProjection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_SphericalProjection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_SphericalProjection*, creationType>()));
    }
    // public System.Void Set(UnityEngine.Vector3 N, System.Single phi0, System.Single phi1, System.Single theta0, System.Single theta1, UnityEngine.Vector3 uAxis, UnityEngine.Vector3 uOrigin, System.Single uScale, UnityEngine.Vector3 vAxis, UnityEngine.Vector3 vOrigin, System.Single vScale)
    // Offset: 0x18C7A4C
    void Set(::UnityEngine::Vector3 N, float phi0, float phi1, float theta0, float theta1, ::UnityEngine::Vector3 uAxis, ::UnityEngine::Vector3 uOrigin, float uScale, ::UnityEngine::Vector3 vAxis, ::UnityEngine::Vector3 vOrigin, float vScale);
    // private System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x18C7DEC
    void OnRenderImage(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);
  }; // SteamVR_SphericalProjection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_SphericalProjection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_SphericalProjection::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_SphericalProjection::*)(::UnityEngine::Vector3, float, float, float, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::SteamVR_SphericalProjection::Set)> {
  static const MethodInfo* get() {
    static auto* N = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* phi0 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* phi1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* theta0 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* theta1 = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* uAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* uOrigin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* uScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* vAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* vOrigin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* vScale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_SphericalProjection*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{N, phi0, phi1, theta0, theta1, uAxis, uOrigin, uScale, vAxis, vOrigin, vScale});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_SphericalProjection::OnRenderImage
// Il2CppName: OnRenderImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_SphericalProjection::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&GlobalNamespace::SteamVR_SphericalProjection::OnRenderImage)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_SphericalProjection*), "OnRenderImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest});
  }
};
