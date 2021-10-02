// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.IndexFormat
#include "UnityEngine/Rendering/IndexFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.HEU_MeshIndexFormat
  // [TokenAttribute] Offset: FFFFFFFF
  class HEU_MeshIndexFormat : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public UnityEngine.Rendering.IndexFormat _indexFormat
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::Rendering::IndexFormat indexFormat;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::IndexFormat) == 0x4);
    public:
    // Creating conversion operator: operator UnityEngine::Rendering::IndexFormat
    constexpr operator UnityEngine::Rendering::IndexFormat() const noexcept {
      return indexFormat;
    }
    // Get instance field reference: public UnityEngine.Rendering.IndexFormat _indexFormat
    UnityEngine::Rendering::IndexFormat& dyn__indexFormat();
    // public System.Void CalculateIndexFormat(System.Int32 numVertices)
    // Offset: 0x152F034
    void CalculateIndexFormat(int numVertices);
    // public System.Void SetFormatForMesh(UnityEngine.Mesh mesh)
    // Offset: 0x152F0BC
    void SetFormatForMesh(UnityEngine::Mesh* mesh);
    // public System.Void .ctor()
    // Offset: 0x152F0E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HEU_MeshIndexFormat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HoudiniEngineUnity::HEU_MeshIndexFormat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HEU_MeshIndexFormat*, creationType>()));
    }
  }; // HoudiniEngineUnity.HEU_MeshIndexFormat
  #pragma pack(pop)
  static check_size<sizeof(HEU_MeshIndexFormat), 16 + sizeof(UnityEngine::Rendering::IndexFormat)> __HoudiniEngineUnity_HEU_MeshIndexFormatSizeCheck;
  static_assert(sizeof(HEU_MeshIndexFormat) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_MeshIndexFormat*, "HoudiniEngineUnity", "HEU_MeshIndexFormat");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MeshIndexFormat::CalculateIndexFormat
// Il2CppName: CalculateIndexFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_MeshIndexFormat::*)(int)>(&HoudiniEngineUnity::HEU_MeshIndexFormat::CalculateIndexFormat)> {
  static const MethodInfo* get() {
    static auto* numVertices = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MeshIndexFormat*), "CalculateIndexFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numVertices});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MeshIndexFormat::SetFormatForMesh
// Il2CppName: SetFormatForMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HEU_MeshIndexFormat::*)(UnityEngine::Mesh*)>(&HoudiniEngineUnity::HEU_MeshIndexFormat::SetFormatForMesh)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::HEU_MeshIndexFormat*), "SetFormatForMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::HEU_MeshIndexFormat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
