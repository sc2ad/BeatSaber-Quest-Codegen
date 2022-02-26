// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
#include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
// Including type: UnityEngine.ProBuilder.Triangle
#include "UnityEngine/ProBuilder/Triangle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass5_0");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class MeshValidation::$$c__DisplayClass5_0 : public ::Il2CppObject {
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
    // public UnityEngine.ProBuilder.Triangle triangle
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::ProBuilder::Triangle triangle;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Triangle) == 0xC);
    // Padding between fields: triangle and: $$9__0
    char __padding0[0x4] = {};
    // public System.Func`2<UnityEngine.ProBuilder.Triangle,System.Boolean> <>9__0
    // Size: 0x8
    // Offset: 0x20
    ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>* $$9__0;
    // Field size check
    static_assert(sizeof(::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.ProBuilder.Triangle triangle
    ::UnityEngine::ProBuilder::Triangle& dyn_triangle();
    // Get instance field reference: public System.Func`2<UnityEngine.ProBuilder.Triangle,System.Boolean> <>9__0
    ::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>*& dyn_$$9__0();
    // System.Boolean <CollectFaceGroups>b__0(UnityEngine.ProBuilder.Triangle x)
    // Offset: 0x1B385B8
    bool $CollectFaceGroups$b__0(::UnityEngine::ProBuilder::Triangle x);
    // public System.Void .ctor()
    // Offset: 0x1B3734C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeshValidation::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeshValidation::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(MeshValidation::$$c__DisplayClass5_0), 32 + sizeof(::System::Func_2<::UnityEngine::ProBuilder::Triangle, bool>*)> __UnityEngine_ProBuilder_MeshOperations_MeshValidation_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(MeshValidation::$$c__DisplayClass5_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0::$CollectFaceGroups$b__0
// Il2CppName: <CollectFaceGroups>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0::*)(::UnityEngine::ProBuilder::Triangle)>(&UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0::$CollectFaceGroups$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Triangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0*), "<CollectFaceGroups>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
