// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: RenderTextureDescriptor
  struct RenderTextureDescriptor;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BakedLightTexturePacking
  class BakedLightTexturePacking;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BakedLightTexturePacking);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedLightTexturePacking*, "", "BakedLightTexturePacking");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BakedLightTexturePacking
  // [TokenAttribute] Offset: FFFFFFFF
  class BakedLightTexturePacking : public ::Il2CppObject {
    public:
    // static field const value: static private System.String kBakedLightTexturePackingShaderName
    static constexpr const char* kBakedLightTexturePackingShaderName = "Hidden/BakedLightTexturePacking";
    // Get static field: static private System.String kBakedLightTexturePackingShaderName
    static ::StringW _get_kBakedLightTexturePackingShaderName();
    // Set static field: static private System.String kBakedLightTexturePackingShaderName
    static void _set_kBakedLightTexturePackingShaderName(::StringW value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x110DA1C
    // Get static field: static private readonly System.Int32[] _texPropertyIds
    static ::ArrayW<int> _get__texPropertyIds();
    // Set static field: static private readonly System.Int32[] _texPropertyIds
    static void _set__texPropertyIds(::ArrayW<int> value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x110DA2C
    // Get static field: static private UnityEngine.Material _material
    static ::UnityEngine::Material* _get__material();
    // Set static field: static private UnityEngine.Material _material
    static void _set__material(::UnityEngine::Material* value);
    // static private System.Void .cctor()
    // Offset: 0x136DBA8
    static void _cctor();
    // static public UnityEngine.RenderTexture PackTextures(System.Collections.Generic.IReadOnlyList`1<UnityEngine.RenderTexture> textures, UnityEngine.RenderTextureDescriptor descriptor)
    // Offset: 0x136D844
    static ::UnityEngine::RenderTexture* PackTextures(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::RenderTexture*>* textures, ::UnityEngine::RenderTextureDescriptor descriptor);
  }; // BakedLightTexturePacking
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BakedLightTexturePacking::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BakedLightTexturePacking::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightTexturePacking*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedLightTexturePacking::PackTextures
// Il2CppName: PackTextures
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (*)(::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::RenderTexture*>*, ::UnityEngine::RenderTextureDescriptor)>(&GlobalNamespace::BakedLightTexturePacking::PackTextures)> {
  static const MethodInfo* get() {
    static auto* textures = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")})->byval_arg;
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedLightTexturePacking*), "PackTextures", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textures, descriptor});
  }
};
