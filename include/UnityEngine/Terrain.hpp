// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TerrainData
  class TerrainData;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Terrain
  class Terrain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Terrain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Terrain*, "UnityEngine", "Terrain");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Terrain
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 12129D8
  // [NativeHeaderAttribute] Offset: 12129D8
  // [NativeHeaderAttribute] Offset: 12129D8
  // [StaticAccessorAttribute] Offset: 12129D8
  // [UsedByNativeCodeAttribute] Offset: 12129D8
  class Terrain : public ::UnityEngine::Behaviour {
    public:
    // public UnityEngine.TerrainData get_terrainData()
    // Offset: 0x2A28FDC
    ::UnityEngine::TerrainData* get_terrainData();
    // public System.Void set_terrainData(UnityEngine.TerrainData value)
    // Offset: 0x2A2A1A8
    void set_terrainData(::UnityEngine::TerrainData* value);
    // public System.Void set_detailObjectDistance(System.Single value)
    // Offset: 0x2A2A1F8
    void set_detailObjectDistance(float value);
    // public System.Void set_detailObjectDensity(System.Single value)
    // Offset: 0x2A2A248
    void set_detailObjectDensity(float value);
    // public UnityEngine.Material get_materialTemplate()
    // Offset: 0x2A2A298
    ::UnityEngine::Material* get_materialTemplate();
    // public System.Void set_materialTemplate(UnityEngine.Material value)
    // Offset: 0x2A2A2D8
    void set_materialTemplate(::UnityEngine::Material* value);
    // public System.Boolean get_allowAutoConnect()
    // Offset: 0x2A287F0
    bool get_allowAutoConnect();
    // public System.Void set_allowAutoConnect(System.Boolean value)
    // Offset: 0x2A2A328
    void set_allowAutoConnect(bool value);
    // public System.Int32 get_groupingID()
    // Offset: 0x2A28830
    int get_groupingID();
    // public System.Void set_drawInstanced(System.Boolean value)
    // Offset: 0x2A2A378
    void set_drawInstanced(bool value);
    // static public UnityEngine.Terrain[] get_activeTerrains()
    // Offset: 0x2A2839C
    static ::ArrayW<::UnityEngine::Terrain*> get_activeTerrains();
    // public System.Void SetNeighbors(UnityEngine.Terrain left, UnityEngine.Terrain top, UnityEngine.Terrain right, UnityEngine.Terrain bottom)
    // Offset: 0x2A284A4
    void SetNeighbors(::UnityEngine::Terrain* left, ::UnityEngine::Terrain* top, ::UnityEngine::Terrain* right, ::UnityEngine::Terrain* bottom);
    // public System.Void Flush()
    // Offset: 0x2A2A3C8
    void Flush();
    // public System.Void .ctor()
    // Offset: 0x2A2A408
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Terrain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Terrain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Terrain*, creationType>()));
    }
  }; // UnityEngine.Terrain
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Terrain::get_terrainData
// Il2CppName: get_terrainData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TerrainData* (UnityEngine::Terrain::*)()>(&UnityEngine::Terrain::get_terrainData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "get_terrainData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::set_terrainData
// Il2CppName: set_terrainData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Terrain::*)(::UnityEngine::TerrainData*)>(&UnityEngine::Terrain::set_terrainData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "TerrainData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "set_terrainData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::set_detailObjectDistance
// Il2CppName: set_detailObjectDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Terrain::*)(float)>(&UnityEngine::Terrain::set_detailObjectDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "set_detailObjectDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::set_detailObjectDensity
// Il2CppName: set_detailObjectDensity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Terrain::*)(float)>(&UnityEngine::Terrain::set_detailObjectDensity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "set_detailObjectDensity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::get_materialTemplate
// Il2CppName: get_materialTemplate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Terrain::*)()>(&UnityEngine::Terrain::get_materialTemplate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "get_materialTemplate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::set_materialTemplate
// Il2CppName: set_materialTemplate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Terrain::*)(::UnityEngine::Material*)>(&UnityEngine::Terrain::set_materialTemplate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "set_materialTemplate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::get_allowAutoConnect
// Il2CppName: get_allowAutoConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Terrain::*)()>(&UnityEngine::Terrain::get_allowAutoConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "get_allowAutoConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::set_allowAutoConnect
// Il2CppName: set_allowAutoConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Terrain::*)(bool)>(&UnityEngine::Terrain::set_allowAutoConnect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "set_allowAutoConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::get_groupingID
// Il2CppName: get_groupingID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Terrain::*)()>(&UnityEngine::Terrain::get_groupingID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "get_groupingID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::set_drawInstanced
// Il2CppName: set_drawInstanced
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Terrain::*)(bool)>(&UnityEngine::Terrain::set_drawInstanced)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "set_drawInstanced", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::get_activeTerrains
// Il2CppName: get_activeTerrains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Terrain*> (*)()>(&UnityEngine::Terrain::get_activeTerrains)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "get_activeTerrains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::SetNeighbors
// Il2CppName: SetNeighbors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Terrain::*)(::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*, ::UnityEngine::Terrain*)>(&UnityEngine::Terrain::SetNeighbors)> {
  static const MethodInfo* get() {
    static auto* left = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* top = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* right = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    static auto* bottom = &::il2cpp_utils::GetClassFromName("UnityEngine", "Terrain")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "SetNeighbors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{left, top, right, bottom});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::Flush
// Il2CppName: Flush
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Terrain::*)()>(&UnityEngine::Terrain::Flush)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Terrain*), "Flush", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Terrain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
