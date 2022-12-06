// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MeshTopology
#include "UnityEngine/MeshTopology.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Submesh
  class Submesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Submesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Submesh*, "UnityEngine.ProBuilder", "Submesh");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Submesh
  // [TokenAttribute] Offset: FFFFFFFF
  class Submesh : public ::Il2CppObject {
    public:
    public:
    // System.Int32[] m_Indexes
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<int> m_Indexes;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // UnityEngine.MeshTopology m_Topology
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::MeshTopology m_Topology;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshTopology) == 0x4);
    // System.Int32 m_SubmeshIndex
    // Size: 0x4
    // Offset: 0x1C
    int m_SubmeshIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Int32[] m_Indexes
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_m_Indexes();
    // Get instance field reference: UnityEngine.MeshTopology m_Topology
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshTopology& dyn_m_Topology();
    // Get instance field reference: System.Int32 m_SubmeshIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_SubmeshIndex();
    // public System.Collections.Generic.IEnumerable`1<System.Int32> get_indexes()
    // Offset: 0x2A002B0
    ::System::Collections::Generic::IEnumerable_1<int>* get_indexes();
    // public System.Void set_indexes(System.Collections.Generic.IEnumerable`1<System.Int32> value)
    // Offset: 0x2A00320
    void set_indexes(::System::Collections::Generic::IEnumerable_1<int>* value);
    // public UnityEngine.MeshTopology get_topology()
    // Offset: 0x2A00384
    ::UnityEngine::MeshTopology get_topology();
    // public System.Void set_topology(UnityEngine.MeshTopology value)
    // Offset: 0x2A0038C
    void set_topology(::UnityEngine::MeshTopology value);
    // public System.Int32 get_submeshIndex()
    // Offset: 0x2A00394
    int get_submeshIndex();
    // public System.Void set_submeshIndex(System.Int32 value)
    // Offset: 0x2A0039C
    void set_submeshIndex(int value);
    // public System.Void .ctor(System.Int32 submeshIndex, UnityEngine.MeshTopology topology, System.Collections.Generic.IEnumerable`1<System.Int32> indexes)
    // Offset: 0x2A003A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Submesh* New_ctor(int submeshIndex, ::UnityEngine::MeshTopology topology, ::System::Collections::Generic::IEnumerable_1<int>* indexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Submesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Submesh*, creationType>(submeshIndex, topology, indexes)));
    }
    // public System.Void .ctor(UnityEngine.Mesh mesh, System.Int32 subMeshIndex)
    // Offset: 0x2A00468
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Submesh* New_ctor(::UnityEngine::Mesh* mesh, int subMeshIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Submesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Submesh*, creationType>(mesh, subMeshIndex)));
    }
    // static System.Int32 GetSubmeshCount(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x2A00668
    static int GetSubmeshCount(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public UnityEngine.ProBuilder.Submesh[] GetSubmeshes(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Int32 submeshCount, UnityEngine.MeshTopology preferredTopology)
    // Offset: 0x2A006EC
    static ::ArrayW<::UnityEngine::ProBuilder::Submesh*> GetSubmeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, int submeshCount, ::UnityEngine::MeshTopology preferredTopology);
    // static System.Void MapFaceMaterialsToSubmeshIndex(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x2A00FF4
    static void MapFaceMaterialsToSubmeshIndex(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // public override System.String ToString()
    // Offset: 0x2A00564
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.Submesh
  #pragma pack(pop)
  static check_size<sizeof(Submesh), 28 + sizeof(int)> __UnityEngine_ProBuilder_SubmeshSizeCheck;
  static_assert(sizeof(Submesh) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::get_indexes
// Il2CppName: get_indexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int>* (UnityEngine::ProBuilder::Submesh::*)()>(&UnityEngine::ProBuilder::Submesh::get_indexes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "get_indexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::set_indexes
// Il2CppName: set_indexes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Submesh::*)(::System::Collections::Generic::IEnumerable_1<int>*)>(&UnityEngine::ProBuilder::Submesh::set_indexes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "set_indexes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::get_topology
// Il2CppName: get_topology
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshTopology (UnityEngine::ProBuilder::Submesh::*)()>(&UnityEngine::ProBuilder::Submesh::get_topology)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "get_topology", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::set_topology
// Il2CppName: set_topology
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Submesh::*)(::UnityEngine::MeshTopology)>(&UnityEngine::ProBuilder::Submesh::set_topology)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshTopology")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "set_topology", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::get_submeshIndex
// Il2CppName: get_submeshIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Submesh::*)()>(&UnityEngine::ProBuilder::Submesh::get_submeshIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "get_submeshIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::set_submeshIndex
// Il2CppName: set_submeshIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Submesh::*)(int)>(&UnityEngine::ProBuilder::Submesh::set_submeshIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "set_submeshIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::GetSubmeshCount
// Il2CppName: GetSubmeshCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::Submesh::GetSubmeshCount)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "GetSubmeshCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::GetSubmeshes
// Il2CppName: GetSubmeshes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::ProBuilder::Submesh*> (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, int, ::UnityEngine::MeshTopology)>(&UnityEngine::ProBuilder::Submesh::GetSubmeshes)> {
  static const MethodInfo* get() {
    static auto* faces = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")})->byval_arg;
    static auto* submeshCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* preferredTopology = &::il2cpp_utils::GetClassFromName("UnityEngine", "MeshTopology")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "GetSubmeshes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{faces, submeshCount, preferredTopology});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::MapFaceMaterialsToSubmeshIndex
// Il2CppName: MapFaceMaterialsToSubmeshIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ProBuilder::ProBuilderMesh*)>(&UnityEngine::ProBuilder::Submesh::MapFaceMaterialsToSubmeshIndex)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ProBuilderMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "MapFaceMaterialsToSubmeshIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Submesh::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::Submesh::*)()>(&UnityEngine::ProBuilder::Submesh::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Submesh*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
