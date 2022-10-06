// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipelineAsset
  class RenderPipelineAsset;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: GraphicsSettings
  class GraphicsSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::GraphicsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GraphicsSettings*, "UnityEngine.Rendering", "GraphicsSettings");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.GraphicsSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 106F7D0
  // [NativeHeaderAttribute] Offset: 106F7D0
  class GraphicsSettings : public ::UnityEngine::Object {
    public:
    // static public System.Boolean get_lightsUseLinearIntensity()
    // Offset: 0x217B244
    static bool get_lightsUseLinearIntensity();
    // static public UnityEngine.Rendering.RenderPipelineAsset get_renderPipelineAsset()
    // Offset: 0x217B2AC
    static ::UnityEngine::Rendering::RenderPipelineAsset* get_renderPipelineAsset();
    // static private UnityEngine.ScriptableObject get_INTERNAL_defaultRenderPipeline()
    // Offset: 0x217B350
    static ::UnityEngine::ScriptableObject* get_INTERNAL_defaultRenderPipeline();
    // static public UnityEngine.Rendering.RenderPipelineAsset get_defaultRenderPipeline()
    // Offset: 0x217B2B0
    static ::UnityEngine::Rendering::RenderPipelineAsset* get_defaultRenderPipeline();
    // static System.Boolean AllowEnlightenSupportForUpgradedProject()
    // Offset: 0x217B278
    static bool AllowEnlightenSupportForUpgradedProject();
  }; // UnityEngine.Rendering.GraphicsSettings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::GraphicsSettings::get_lightsUseLinearIntensity
// Il2CppName: get_lightsUseLinearIntensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Rendering::GraphicsSettings::get_lightsUseLinearIntensity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::GraphicsSettings*), "get_lightsUseLinearIntensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::GraphicsSettings::get_renderPipelineAsset
// Il2CppName: get_renderPipelineAsset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderPipelineAsset* (*)()>(&UnityEngine::Rendering::GraphicsSettings::get_renderPipelineAsset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::GraphicsSettings*), "get_renderPipelineAsset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_defaultRenderPipeline
// Il2CppName: get_INTERNAL_defaultRenderPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScriptableObject* (*)()>(&UnityEngine::Rendering::GraphicsSettings::get_INTERNAL_defaultRenderPipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::GraphicsSettings*), "get_INTERNAL_defaultRenderPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::GraphicsSettings::get_defaultRenderPipeline
// Il2CppName: get_defaultRenderPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderPipelineAsset* (*)()>(&UnityEngine::Rendering::GraphicsSettings::get_defaultRenderPipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::GraphicsSettings*), "get_defaultRenderPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::GraphicsSettings::AllowEnlightenSupportForUpgradedProject
// Il2CppName: AllowEnlightenSupportForUpgradedProject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Rendering::GraphicsSettings::AllowEnlightenSupportForUpgradedProject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::GraphicsSettings*), "AllowEnlightenSupportForUpgradedProject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
