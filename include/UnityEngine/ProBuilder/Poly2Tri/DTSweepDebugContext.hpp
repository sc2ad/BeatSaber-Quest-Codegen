// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationDebugContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: DTSweepDebugContext
  class DTSweepDebugContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepDebugContext");
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
  // [TokenAttribute] Offset: FFFFFFFF
  class DTSweepDebugContext : public ::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext {
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
    // private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle _primaryTriangle
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* primaryTriangle;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle _secondaryTriangle
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* secondaryTriangle;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint _activePoint
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* activePoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode _activeNode
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* activeNode;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // private UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint _activeConstraint
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* activeConstraint;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*) == 0x8);
    public:
    // Deleting conversion operator: operator ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*
    constexpr operator ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle _primaryTriangle
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*& dyn__primaryTriangle();
    // Get instance field reference: private UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle _secondaryTriangle
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*& dyn__secondaryTriangle();
    // Get instance field reference: private UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint _activePoint
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*& dyn__activePoint();
    // Get instance field reference: private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode _activeNode
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& dyn__activeNode();
    // Get instance field reference: private UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint _activeConstraint
    ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*& dyn__activeConstraint();
    // public System.Void set_PrimaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle value)
    // Offset: 0x2A388FC
    void set_PrimaryTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);
    // public System.Void set_SecondaryTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle value)
    // Offset: 0x2A39B14
    void set_SecondaryTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* value);
    // public System.Void set_ActivePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint value)
    // Offset: 0x2A3B36C
    void set_ActivePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* value);
    // public System.Void set_ActiveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode value)
    // Offset: 0x2A37EB8
    void set_ActiveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* value);
    // public System.Void set_ActiveConstraint(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint value)
    // Offset: 0x2A370C0
    void set_ActiveConstraint(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* value);
    // public override System.Void Clear()
    // Offset: 0x2A3B3C8
    // Implemented from: UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
    // Base method: System.Void TriangulationDebugContext::Clear()
    void Clear();
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
  #pragma pack(pop)
  static check_size<sizeof(DTSweepDebugContext), 56 + sizeof(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*)> __UnityEngine_ProBuilder_Poly2Tri_DTSweepDebugContextSizeCheck;
  static_assert(sizeof(DTSweepDebugContext) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_PrimaryTriangle
// Il2CppName: set_PrimaryTriangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_PrimaryTriangle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_PrimaryTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_SecondaryTriangle
// Il2CppName: set_SecondaryTriangle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_SecondaryTriangle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_SecondaryTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActivePoint
// Il2CppName: set_ActivePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActivePoint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_ActivePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActiveNode
// Il2CppName: set_ActiveNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActiveNode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "AdvancingFrontNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_ActiveNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActiveConstraint
// Il2CppName: set_ActiveConstraint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*)>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::set_ActiveConstraint)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DTSweepConstraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "set_ActiveConstraint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
