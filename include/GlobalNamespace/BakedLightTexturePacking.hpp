// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BakedLightTexturePacking
  class BakedLightTexturePacking : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BakedLightTexturePacking
    BakedLightTexturePacking() noexcept {}
    // static field const value: static private System.String kBakedLightTexturePackingShaderName
    static constexpr const char* kBakedLightTexturePackingShaderName = "Hidden/BakedLightTexturePacking";
    // Get static field: static private System.String kBakedLightTexturePackingShaderName
    static ::Il2CppString* _get_kBakedLightTexturePackingShaderName();
    // Set static field: static private System.String kBakedLightTexturePackingShaderName
    static void _set_kBakedLightTexturePackingShaderName(::Il2CppString* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27D30
    // Get static field: static private readonly System.Int32[] _texPropertyIds
    static ::Array<int>* _get__texPropertyIds();
    // Set static field: static private readonly System.Int32[] _texPropertyIds
    static void _set__texPropertyIds(::Array<int>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27D40
    // Get static field: static private UnityEngine.Material _material
    static UnityEngine::Material* _get__material();
    // Set static field: static private UnityEngine.Material _material
    static void _set__material(UnityEngine::Material* value);
    // static public UnityEngine.RenderTexture PackTextures(System.Collections.Generic.IReadOnlyList`1<UnityEngine.RenderTexture> textures, UnityEngine.RenderTextureDescriptor descriptor)
    // Offset: 0x11B6F94
    static UnityEngine::RenderTexture* PackTextures(System::Collections::Generic::IReadOnlyList_1<UnityEngine::RenderTexture*>* textures, UnityEngine::RenderTextureDescriptor descriptor);
    // static private System.Void .cctor()
    // Offset: 0x11B72F8
    static void _cctor();
  }; // BakedLightTexturePacking
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakedLightTexturePacking*, "", "BakedLightTexturePacking");
// Writing MetadataGetter for method: GlobalNamespace::BakedLightTexturePacking::PackTextures
// Il2CppName: PackTextures
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedLightTexturePacking::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!