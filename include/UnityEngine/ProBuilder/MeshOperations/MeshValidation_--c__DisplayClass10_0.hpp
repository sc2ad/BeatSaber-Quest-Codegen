// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
#include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass10_0");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass10_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MeshValidation::$$c__DisplayClass10_0 : public ::Il2CppObject {
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
    // public UnityEngine.ProBuilder.ProBuilderMesh mesh
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ProBuilder::ProBuilderMesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::ProBuilderMesh*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::ProBuilder::ProBuilderMesh*
    constexpr operator ::UnityEngine::ProBuilder::ProBuilderMesh*() const noexcept {
      return mesh;
    }
    // Get instance field reference: public UnityEngine.ProBuilder.ProBuilderMesh mesh
    ::UnityEngine::ProBuilder::ProBuilderMesh*& dyn_mesh();
    // System.Boolean <RebuildSelectionIndexes>b__0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x1B3854C
    bool $RebuildSelectionIndexes$b__0(::UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x1B38330
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshValidation::$$c__DisplayClass10_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshValidation::$$c__DisplayClass10_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass10_0
  #pragma pack(pop)
  static check_size<sizeof(MeshValidation::$$c__DisplayClass10_0), 16 + sizeof(::UnityEngine::ProBuilder::ProBuilderMesh*)> __UnityEngine_ProBuilder_MeshOperations_MeshValidation_$$c__DisplayClass10_0SizeCheck;
  static_assert(sizeof(MeshValidation::$$c__DisplayClass10_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0::$RebuildSelectionIndexes$b__0
// Il2CppName: <RebuildSelectionIndexes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0::*)(::UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0::$RebuildSelectionIndexes$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0*), "<RebuildSelectionIndexes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
