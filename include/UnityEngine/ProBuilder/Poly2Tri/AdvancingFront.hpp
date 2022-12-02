// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: AdvancingFront
  class AdvancingFront;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*, "UnityEngine.ProBuilder.Poly2Tri", "AdvancingFront");
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
  // [TokenAttribute] Offset: FFFFFFFF
  class AdvancingFront : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Head
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Head;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Tail
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Tail;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // protected UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Search
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* Search;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Head
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& dyn_Head();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Tail
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& dyn_Tail();
    // Get instance field reference: protected UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode Search
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*& dyn_Search();
    // public System.Void .ctor(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode head, UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode tail)
    // Offset: 0x2B16520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdvancingFront* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* head, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* tail) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdvancingFront*, creationType>(head, tail)));
    }
    // public System.Void AddNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2B1655C
    void AddNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // public System.Void RemoveNode(UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode node)
    // Offset: 0x2B16560
    void RemoveNode(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node);
    // private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode FindSearchNode(System.Double x)
    // Offset: 0x2B1664C
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* FindSearchNode(double x);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode LocateNode(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2B16654
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // private UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode LocateNode(System.Double x)
    // Offset: 0x2B1666C
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocateNode(double x);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode LocatePoint(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2B166D4
    ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* LocatePoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public override System.String ToString()
    // Offset: 0x2B16564
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
  #pragma pack(pop)
  static check_size<sizeof(AdvancingFront), 32 + sizeof(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)> __UnityEngine_ProBuilder_Poly2Tri_AdvancingFrontSizeCheck;
  static_assert(sizeof(AdvancingFront) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::AddNode
// Il2CppName: AddNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::AddNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "AdvancingFrontNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*), "AddNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::RemoveNode
// Il2CppName: RemoveNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*)>(&UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::RemoveNode)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "AdvancingFrontNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*), "RemoveNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::FindSearchNode
// Il2CppName: FindSearchNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(double)>(&UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::FindSearchNode)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*), "FindSearchNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode
// Il2CppName: LocateNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*), "LocateNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode
// Il2CppName: LocateNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(double)>(&UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*), "LocateNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocatePoint
// Il2CppName: LocatePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* (UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocatePoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*), "LocatePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::*)()>(&UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
