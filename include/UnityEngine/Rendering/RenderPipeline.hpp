// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipeline
  class RenderPipeline;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipeline*, "UnityEngine.Rendering", "RenderPipeline");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderPipeline
  // [TokenAttribute] Offset: FFFFFFFF
  class RenderPipeline : public ::Il2CppObject {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x1072670
    // private System.Boolean <disposed>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return disposed;
    }
    // Get instance field reference: private System.Boolean <disposed>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$disposed$k__BackingField();
    // public System.Boolean get_disposed()
    // Offset: 0x217B700
    bool get_disposed();
    // private System.Void set_disposed(System.Boolean value)
    // Offset: 0x217B708
    void set_disposed(bool value);
    // protected System.Void Render(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera[] cameras)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Render(::UnityEngine::Rendering::ScriptableRenderContext context, ::ArrayW<::UnityEngine::Camera*> cameras);
    // System.Void InternalRender(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera[] cameras)
    // Offset: 0x217B640
    void InternalRender(::UnityEngine::Rendering::ScriptableRenderContext context, ::ArrayW<::UnityEngine::Camera*> cameras);
    // System.Void Dispose()
    // Offset: 0x217B714
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x217B79C
    void Dispose(bool disposing);
  }; // UnityEngine.Rendering.RenderPipeline
  #pragma pack(pop)
  static check_size<sizeof(RenderPipeline), 16 + sizeof(bool)> __UnityEngine_Rendering_RenderPipelineSizeCheck;
  static_assert(sizeof(RenderPipeline) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::get_disposed
// Il2CppName: get_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RenderPipeline::*)()>(&UnityEngine::Rendering::RenderPipeline::get_disposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "get_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::set_disposed
// Il2CppName: set_disposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(bool)>(&UnityEngine::Rendering::RenderPipeline::set_disposed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "set_disposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*>)>(&UnityEngine::Rendering::RenderPipeline::Render)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Camera"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::InternalRender
// Il2CppName: InternalRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*>)>(&UnityEngine::Rendering::RenderPipeline::InternalRender)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Camera"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "InternalRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)()>(&UnityEngine::Rendering::RenderPipeline::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipeline::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderPipeline::*)(bool)>(&UnityEngine::Rendering::RenderPipeline::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipeline*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
