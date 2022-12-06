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
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: DeleteElements
  class DeleteElements;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::DeleteElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::DeleteElements*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.DeleteElements
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class DeleteElements : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c
    class $$c;
    // static public System.Void DeleteVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> distinctIndexes)
    // Offset: 0x1A7486C
    static void DeleteVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<int>* distinctIndexes);
    // static public System.Int32[] DeleteFace(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x1A74CB8
    static ::ArrayW<int> DeleteFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face);
    // static public System.Int32[] DeleteFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x1A6D038
    static ::ArrayW<int> DeleteFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces);
    // static public System.Int32[] DeleteFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<System.Int32> faceIndexes)
    // Offset: 0x1A74D70
    static ::ArrayW<int> DeleteFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<int>* faceIndexes);
    // static public System.Int32[] RemoveDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1A752C4
    static ::ArrayW<int> RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public System.Int32[] RemoveUnusedVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x1A75350
    static ::ArrayW<int> RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);
  }; // UnityEngine.ProBuilder.MeshOperations.DeleteElements
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteVertices
// Il2CppName: DeleteVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* distinctIndexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements*), "DeleteVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, distinctIndexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFace
// Il2CppName: DeleteFace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFace)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* face = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements*), "DeleteFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, face});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFaces
// Il2CppName: DeleteFaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFaces)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements*), "DeleteFaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faces});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFaces
// Il2CppName: DeleteFaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<int>*)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::DeleteFaces)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    static auto* faceIndexes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements*), "DeleteFaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, faceIndexes});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::RemoveDegenerateTriangles
// Il2CppName: RemoveDegenerateTriangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::RemoveDegenerateTriangles)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements*), "RemoveDegenerateTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::RemoveUnusedVertices
// Il2CppName: RemoveUnusedVertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int> (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::RemoveUnusedVertices)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements*), "RemoveUnusedVertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
