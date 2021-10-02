// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchRendererCullingOutput
  struct BatchRendererCullingOutput;
  // Forward declaring type: LODParameters
  struct LODParameters;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.BatchRendererGroup
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: E74560
  // [NativeHeaderAttribute] Offset: E74560
  // [RequiredByNativeCodeAttribute] Offset: E74560
  class BatchRendererGroup : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling
    class OnPerformCulling;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.IntPtr m_GroupHandle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_GroupHandle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private UnityEngine.Rendering.BatchRendererGroup/UnityEngine.Rendering.OnPerformCulling m_PerformCulling
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling* m_PerformCulling;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*) == 0x8);
    public:
    // Get instance field reference: private System.IntPtr m_GroupHandle
    System::IntPtr& dyn_m_GroupHandle();
    // Get instance field reference: private UnityEngine.Rendering.BatchRendererGroup/UnityEngine.Rendering.OnPerformCulling m_PerformCulling
    UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*& dyn_m_PerformCulling();
    // static private System.Void InvokeOnPerformCulling(UnityEngine.Rendering.BatchRendererGroup group, ref UnityEngine.Rendering.BatchRendererCullingOutput context, ref UnityEngine.Rendering.LODParameters lodParameters)
    // Offset: 0x1E0650C
    static void InvokeOnPerformCulling(UnityEngine::Rendering::BatchRendererGroup* group, ByRef<UnityEngine::Rendering::BatchRendererCullingOutput> context, ByRef<UnityEngine::Rendering::LODParameters> lodParameters);
  }; // UnityEngine.Rendering.BatchRendererGroup
  #pragma pack(pop)
  static check_size<sizeof(BatchRendererGroup), 24 + sizeof(UnityEngine::Rendering::BatchRendererGroup::OnPerformCulling*)> __UnityEngine_Rendering_BatchRendererGroupSizeCheck;
  static_assert(sizeof(BatchRendererGroup) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchRendererGroup*, "UnityEngine.Rendering", "BatchRendererGroup");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling
// Il2CppName: InvokeOnPerformCulling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Rendering::BatchRendererGroup*, ByRef<UnityEngine::Rendering::BatchRendererCullingOutput>, ByRef<UnityEngine::Rendering::LODParameters>)>(&UnityEngine::Rendering::BatchRendererGroup::InvokeOnPerformCulling)> {
  static const MethodInfo* get() {
    static auto* group = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "BatchRendererGroup")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "BatchRendererCullingOutput")->this_arg;
    static auto* lodParameters = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "LODParameters")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchRendererGroup*), "InvokeOnPerformCulling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{group, context, lodParameters});
  }
};
