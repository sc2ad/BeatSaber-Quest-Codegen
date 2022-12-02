// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.AppendElements
#include "UnityEngine/ProBuilder/MeshOperations/AppendElements.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Edge
  struct Edge;
  // Forward declaring type: EdgeLookup
  struct EdgeLookup;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c__DisplayClass14_0");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.AppendElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass14_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AppendElements::$$c__DisplayClass14_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 delCount
    // Size: 0x4
    // Offset: 0x10
    int delCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return delCount;
    }
    // Get instance field reference: public System.Int32 delCount
    [[deprecated("Use field access instead!")]] int& dyn_delCount();
    // public System.Void .ctor()
    // Offset: 0x1A6C854
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppendElements::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppendElements::$$c__DisplayClass14_0*, creationType>()));
    }
    // UnityEngine.ProBuilder.Edge <AppendVerticesToEdge>b__0(UnityEngine.ProBuilder.EdgeLookup x)
    // Offset: 0x1A6C85C
    ::UnityEngine::ProBuilder::Edge $AppendVerticesToEdge$b__0(::UnityEngine::ProBuilder::EdgeLookup x);
  }; // UnityEngine.ProBuilder.MeshOperations.AppendElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(AppendElements::$$c__DisplayClass14_0), 16 + sizeof(int)> __UnityEngine_ProBuilder_MeshOperations_AppendElements_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(AppendElements::$$c__DisplayClass14_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::$AppendVerticesToEdge$b__0
// Il2CppName: <AppendVerticesToEdge>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::*)(::UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::$AppendVerticesToEdge$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "EdgeLookup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0*), "<AppendVerticesToEdge>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
