// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.MeshTopology
#include "UnityEngine/MeshTopology.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: HEU_MeshData
  class HEU_MeshData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MeshData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MeshData*, "HoudiniEngineUnity", "HEU_MeshData");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_MeshData
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_MeshData : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<System.Int32> _indices
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<int>* indices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> _vertices
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Color32> _colors
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::Color32>* colors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Color32>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> _normals
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* normals;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Vector4> _tangents
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector4>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Vector4>[] _uvs
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*> uvs;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.Vector3> _triangleNormals
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* triangleNormals;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // public System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> _pointIndexToMeshIndexMap
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::Dictionary_2<int, int>* pointIndexToMeshIndexMap;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // public UnityEngine.MeshTopology _meshTopology
    // Size: 0x4
    // Offset: 0x50
    ::UnityEngine::MeshTopology meshTopology;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshTopology) == 0x4);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<System.Int32> _indices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn__indices();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Vector3> _vertices
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn__vertices();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Color32> _colors
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Color32>*& dyn__colors();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Vector3> _normals
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn__normals();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Vector4> _tangents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& dyn__tangents();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Vector4>[] _uvs
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector4>*>& dyn__uvs();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.Vector3> _triangleNormals
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn__triangleNormals();
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> _pointIndexToMeshIndexMap
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, int>*& dyn__pointIndexToMeshIndexMap();
    // Get instance field reference: public UnityEngine.MeshTopology _meshTopology
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshTopology& dyn__meshTopology();
    // public System.Void .ctor()
    // Offset: 0x18ACE64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_MeshData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::HEU_MeshData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_MeshData*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_MeshData
  #pragma pack(pop)
  static check_size<sizeof(HEU_MeshData), 80 + sizeof(::UnityEngine::MeshTopology)> __HoudiniEngineUnity_HEU_MeshDataSizeCheck;
  static_assert(sizeof(HEU_MeshData) == 0x54);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MeshData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
