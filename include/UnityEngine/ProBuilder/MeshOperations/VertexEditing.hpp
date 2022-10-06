// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Edge
  struct Edge;
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: WingedEdge
  class WingedEdge;
  // Forward declaring type: EdgeLookup
  struct EdgeLookup;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: VertexEditing
  class VertexEditing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::VertexEditing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::VertexEditing*, "UnityEngine.ProBuilder.MeshOperations", "VertexEditing");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.VertexEditing
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class VertexEditing : public ::Il2CppObject {
    public:
    // static public System.Int32 MergeVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32[] indexes, System.Boolean collapseToFirst)
    // Offset: 0x1C75C54
    static int MergeVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::ArrayW<int> indexes, bool collapseToFirst);
    // static public System.Void SplitVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x1C75F64
    static void SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge);
    // static public System.Void SplitVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> vertices)
    // Offset: 0x1C75FFC
    static void SplitVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int>* vertices);
    // static public System.Int32[] WeldVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> indexes, System.Single neighborRadius)
    // Offset: 0x1C76344
    static ::ArrayW<int> WeldVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int>* indexes, float neighborRadius);
    // static UnityEngine.ProBuilder.FaceRebuildData ExplodeVertex(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.SimpleTuple`2<UnityEngine.ProBuilder.WingedEdge,System.Int32>> edgeAndCommonIndex, System.Single distance, out System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> appendedVertices)
    // Offset: 0x1C76EE8
    static ::UnityEngine::ProBuilder::FaceRebuildData* ExplodeVertex(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int>>* edgeAndCommonIndex, float distance, ByRef<::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::List_1<int>*>*> appendedVertices);
    // static private UnityEngine.ProBuilder.Edge AlignEdgeWithDirection(UnityEngine.ProBuilder.EdgeLookup edge, System.Int32 commonIndex)
    // Offset: 0x1C778CC
    static ::UnityEngine::ProBuilder::Edge AlignEdgeWithDirection(::UnityEngine::ProBuilder::EdgeLookup edge, int commonIndex);
  }; // UnityEngine.ProBuilder.MeshOperations.VertexEditing
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::VertexEditing::MergeVertices
// Il2CppName: MergeVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::ArrayW<int>, bool)>(&UnityEngine::ProBuilder::MeshOperations::VertexEditing::MergeVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* collapseToFirst = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::VertexEditing*), "MergeVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes, collapseToFirst});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices
// Il2CppName: SplitVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::VertexEditing*), "SplitVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edge});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices
// Il2CppName: SplitVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::VertexEditing::SplitVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::VertexEditing*), "SplitVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, vertices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::VertexEditing::WeldVertices
// Il2CppName: WeldVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int>*, float)>(&UnityEngine::ProBuilder::MeshOperations::VertexEditing::WeldVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* indexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    static auto* neighborRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::VertexEditing*), "WeldVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, indexes, neighborRadius});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::VertexEditing::ExplodeVertex
// Il2CppName: ExplodeVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::FaceRebuildData* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::WingedEdge*, int>>*, float, ByRef<::System::Collections::Generic::Dictionary_2<int, ::System::Collections::Generic::List_1<int>*>*>)>(&UnityEngine::ProBuilder::MeshOperations::VertexEditing::ExplodeVertex)> {
  static const MethodInfo* get() {
    static auto* vertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Vertex")})->byval_arg;
    static auto* edgeAndCommonIndex = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "SimpleTuple`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge"), ::il2cpp_utils::GetClassFromName("System", "Int32")})})->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* appendedVertices = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::VertexEditing*), "ExplodeVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vertices, edgeAndCommonIndex, distance, appendedVertices});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::VertexEditing::AlignEdgeWithDirection
// Il2CppName: AlignEdgeWithDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::EdgeLookup, int)>(&UnityEngine::ProBuilder::MeshOperations::VertexEditing::AlignEdgeWithDirection)> {
  static const MethodInfo* get() {
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "EdgeLookup")->byval_arg;
    static auto* commonIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::VertexEditing*), "AlignEdgeWithDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edge, commonIndex});
  }
};
