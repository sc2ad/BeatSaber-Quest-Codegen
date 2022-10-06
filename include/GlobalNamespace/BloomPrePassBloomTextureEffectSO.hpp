// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassEffectSO
#include "GlobalNamespace/BloomPrePassEffectSO.hpp"
// Including type: PyramidBloomRendererSO/Pass
#include "GlobalNamespace/PyramidBloomRendererSO_Pass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: PyramidBloomRendererSO because it is already included!
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: ToneMapping
  struct ToneMapping;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBloomTextureEffectSO
  class BloomPrePassBloomTextureEffectSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBloomTextureEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBloomTextureEffectSO*, "", "BloomPrePassBloomTextureEffectSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBloomTextureEffectSO
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBloomTextureEffectSO : public ::GlobalNamespace::BloomPrePassEffectSO {
    public:
    public:
    // [SpaceAttribute] Offset: 0x10F0758
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x2C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x30
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _downBloomIntensityOffset
    // Size: 0x4
    // Offset: 0x34
    float downBloomIntensityOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _uniformPyramidWeights
    // Size: 0x1
    // Offset: 0x38
    bool uniformPyramidWeights;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: uniformPyramidWeights and: pyramidWeightsParam
    char __padding3[0x3] = {};
    // private System.Single _pyramidWeightsParam
    // Size: 0x4
    // Offset: 0x3C
    float pyramidWeightsParam;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _firstUpsampleBrightness
    // Size: 0x4
    // Offset: 0x40
    float firstUpsampleBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _finalUpsampleBrightness
    // Size: 0x4
    // Offset: 0x44
    float finalUpsampleBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private PyramidBloomRendererSO/Pass _prefilterPass
    // Size: 0x4
    // Offset: 0x48
    ::GlobalNamespace::PyramidBloomRendererSO::Pass prefilterPass;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _downsamplePass
    // Size: 0x4
    // Offset: 0x4C
    ::GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _upsamplePass
    // Size: 0x4
    // Offset: 0x50
    ::GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // private PyramidBloomRendererSO/Pass _finalUpsamplePass
    // Size: 0x4
    // Offset: 0x54
    ::GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO::Pass) == 0x4);
    // [SpaceAttribute] Offset: 0x10F0830
    // private PyramidBloomRendererSO _bloomRenderer
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::PyramidBloomRendererSO* bloomRenderer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PyramidBloomRendererSO*) == 0x8);
    // private BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomFogSO*) == 0x8);
    public:
    // Get instance field reference: private System.Single _radius
    [[deprecated("Use field access instead!")]] float& dyn__radius();
    // Get instance field reference: private System.Single _intensity
    [[deprecated("Use field access instead!")]] float& dyn__intensity();
    // Get instance field reference: private System.Single _downBloomIntensityOffset
    [[deprecated("Use field access instead!")]] float& dyn__downBloomIntensityOffset();
    // Get instance field reference: private System.Boolean _uniformPyramidWeights
    [[deprecated("Use field access instead!")]] bool& dyn__uniformPyramidWeights();
    // Get instance field reference: private System.Single _pyramidWeightsParam
    [[deprecated("Use field access instead!")]] float& dyn__pyramidWeightsParam();
    // Get instance field reference: private System.Single _firstUpsampleBrightness
    [[deprecated("Use field access instead!")]] float& dyn__firstUpsampleBrightness();
    // Get instance field reference: private System.Single _finalUpsampleBrightness
    [[deprecated("Use field access instead!")]] float& dyn__finalUpsampleBrightness();
    // Get instance field reference: private PyramidBloomRendererSO/Pass _prefilterPass
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO::Pass& dyn__prefilterPass();
    // Get instance field reference: private PyramidBloomRendererSO/Pass _downsamplePass
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO::Pass& dyn__downsamplePass();
    // Get instance field reference: private PyramidBloomRendererSO/Pass _upsamplePass
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO::Pass& dyn__upsamplePass();
    // Get instance field reference: private PyramidBloomRendererSO/Pass _finalUpsamplePass
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO::Pass& dyn__finalUpsamplePass();
    // Get instance field reference: private PyramidBloomRendererSO _bloomRenderer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PyramidBloomRendererSO*& dyn__bloomRenderer();
    // Get instance field reference: private BloomFogSO _bloomFog
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomFogSO*& dyn__bloomFog();
    // public System.Void .ctor()
    // Offset: 0x2A93E90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBloomTextureEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBloomTextureEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBloomTextureEffectSO*, creationType>()));
    }
    // public override ToneMapping get_toneMapping()
    // Offset: 0x2A93E08
    // Implemented from: BloomPrePassEffectSO
    // Base method: ToneMapping BloomPrePassEffectSO::get_toneMapping()
    ::GlobalNamespace::ToneMapping get_toneMapping();
    // public override System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x2A93E28
    // Implemented from: TextureEffectSO
    // Base method: System.Void TextureEffectSO::Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    void Render(::UnityEngine::RenderTexture* src, ::UnityEngine::RenderTexture* dest);
  }; // BloomPrePassBloomTextureEffectSO
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBloomTextureEffectSO), 96 + sizeof(::GlobalNamespace::BloomFogSO*)> __GlobalNamespace_BloomPrePassBloomTextureEffectSOSizeCheck;
  static_assert(sizeof(BloomPrePassBloomTextureEffectSO) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBloomTextureEffectSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping
// Il2CppName: get_toneMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ToneMapping (GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)()>(&GlobalNamespace::BloomPrePassBloomTextureEffectSO::get_toneMapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBloomTextureEffectSO*), "get_toneMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBloomTextureEffectSO::*)(::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*)>(&GlobalNamespace::BloomPrePassBloomTextureEffectSO::Render)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBloomTextureEffectSO*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dest});
  }
};
