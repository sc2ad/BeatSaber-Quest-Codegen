// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_RenderModel
#include "GlobalNamespace/SteamVR_RenderModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_RenderModel::RenderModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_RenderModel::RenderModel*, "", "SteamVR_RenderModel/RenderModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_RenderModel/RenderModel
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_RenderModel::RenderModel : public ::Il2CppObject {
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
    // private UnityEngine.Mesh <mesh>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Material <material>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Mesh <mesh>k__BackingField
    ::UnityEngine::Mesh*& dyn_$mesh$k__BackingField();
    // Get instance field reference: private UnityEngine.Material <material>k__BackingField
    ::UnityEngine::Material*& dyn_$material$k__BackingField();
    // public UnityEngine.Mesh get_mesh()
    // Offset: 0x187A048
    ::UnityEngine::Mesh* get_mesh();
    // private System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0x187A050
    void set_mesh(::UnityEngine::Mesh* value);
    // public UnityEngine.Material get_material()
    // Offset: 0x187A058
    ::UnityEngine::Material* get_material();
    // private System.Void set_material(UnityEngine.Material value)
    // Offset: 0x187A060
    void set_material(::UnityEngine::Material* value);
    // public System.Void .ctor(UnityEngine.Mesh mesh, UnityEngine.Material material)
    // Offset: 0x1878F04
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_RenderModel::RenderModel* New_ctor(::UnityEngine::Mesh* mesh, ::UnityEngine::Material* material) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_RenderModel::RenderModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_RenderModel::RenderModel*, creationType>(mesh, material)));
    }
  }; // SteamVR_RenderModel/RenderModel
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_RenderModel::RenderModel), 24 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_SteamVR_RenderModel_RenderModelSizeCheck;
  static_assert(sizeof(SteamVR_RenderModel::RenderModel) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::RenderModel::get_mesh
// Il2CppName: get_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Mesh* (GlobalNamespace::SteamVR_RenderModel::RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::RenderModel::get_mesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel::RenderModel*), "get_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::RenderModel::set_mesh
// Il2CppName: set_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::RenderModel::*)(::UnityEngine::Mesh*)>(&GlobalNamespace::SteamVR_RenderModel::RenderModel::set_mesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel::RenderModel*), "set_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::RenderModel::get_material
// Il2CppName: get_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (GlobalNamespace::SteamVR_RenderModel::RenderModel::*)()>(&GlobalNamespace::SteamVR_RenderModel::RenderModel::get_material)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel::RenderModel*), "get_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::RenderModel::set_material
// Il2CppName: set_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_RenderModel::RenderModel::*)(::UnityEngine::Material*)>(&GlobalNamespace::SteamVR_RenderModel::RenderModel::set_material)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_RenderModel::RenderModel*), "set_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_RenderModel::RenderModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
