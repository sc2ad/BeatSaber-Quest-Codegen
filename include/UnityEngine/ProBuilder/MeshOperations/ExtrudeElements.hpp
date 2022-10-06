// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: ExtrudeMethod
  struct ExtrudeMethod;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: ExtrudeElements
  class ExtrudeElements;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ExtrudeElements : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c
    class $$c;
    // static public UnityEngine.ProBuilder.Face[] Extrude(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, UnityEngine.ProBuilder.ExtrudeMethod method, System.Single distance)
    // Offset: 0x1A54354
    static ::ArrayW<::UnityEngine::ProBuilder::Face*> Extrude(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::ProBuilder::ExtrudeMethod method, float distance);
    // static public UnityEngine.ProBuilder.Edge[] Extrude(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Single distance, System.Boolean extrudeAsGroup, System.Boolean enableManifoldExtrude)
    // Offset: 0x1A5646C
    static ::ArrayW<::UnityEngine::ProBuilder::Edge> Extrude(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, float distance, bool extrudeAsGroup, bool enableManifoldExtrude);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> DetachFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1A573DC
    static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> DetachFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Boolean deleteSourceFaces)
    // Offset: 0x1A573E4
    static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, bool deleteSourceFaces);
    // static private UnityEngine.ProBuilder.Face[] ExtrudePerFace(UnityEngine.ProBuilder.ProBuilderMesh pb, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Single distance)
    // Offset: 0x1A54368
    static ::ArrayW<::UnityEngine::ProBuilder::Face*> ExtrudePerFace(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, float distance);
    // static private UnityEngine.ProBuilder.Face[] ExtrudeAsGroups(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Boolean compensateAngleVertexDistance, System.Single distance)
    // Offset: 0x1A54DFC
    static ::ArrayW<::UnityEngine::ProBuilder::Face*> ExtrudeAsGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, bool compensateAngleVertexDistance, float distance);
    // static private System.Collections.Generic.List`1<System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face>> GetFaceGroups(System.Collections.Generic.List`1<UnityEngine.ProBuilder.WingedEdge> wings)
    // Offset: 0x1A57C48
    static ::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* GetFaceGroups(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings);
    // static private System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.EdgeLookup,UnityEngine.ProBuilder.Face> GetPerimeterEdges(System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> lookup)
    // Offset: 0x1A57F84
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>* GetPerimeterEdges(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::Dictionary_2<int, int>* lookup);
  }; // UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude
// Il2CppName: Extrude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::ProBuilder::ExtrudeMethod, float)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* method = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ExtrudeMethod")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*), "Extrude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, method, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude
// Il2CppName: Extrude
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Edge> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, float, bool, bool)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::Extrude)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* edges = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")})->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* extrudeAsGroup = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* enableManifoldExtrude = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*), "Extrude", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, edges, distance, extrudeAsGroup, enableManifoldExtrude});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces
// Il2CppName: DetachFaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*), "DetachFaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces
// Il2CppName: DetachFaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, bool)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::DetachFaces)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* deleteSourceFaces = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*), "DetachFaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, deleteSourceFaces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudePerFace
// Il2CppName: ExtrudePerFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, float)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudePerFace)> {
  static const MethodInfo* get() {
    static auto* pb = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*), "ExtrudePerFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pb, faces, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudeAsGroups
// Il2CppName: ExtrudeAsGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Face*> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, bool, float)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::ExtrudeAsGroups)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* compensateAngleVertexDistance = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*), "ExtrudeAsGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces, compensateAngleVertexDistance, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetFaceGroups
// Il2CppName: GetFaceGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetFaceGroups)> {
  static const MethodInfo* get() {
    static auto* wings = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*), "GetFaceGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wings});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetPerimeterEdges
// Il2CppName: GetPerimeterEdges
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>* (*)(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::Dictionary_2<int, int>*)>(&UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::GetPerimeterEdges)> {
  static const MethodInfo* get() {
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "HashSet`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* lookup = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements*), "GetPerimeterEdges", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{faces, lookup});
  }
};
