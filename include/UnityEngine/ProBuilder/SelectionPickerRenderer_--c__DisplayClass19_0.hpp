// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.SelectionPickerRenderer
#include "UnityEngine/ProBuilder/SelectionPickerRenderer.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: SharedVertex
  class SharedVertex;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass19_0*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/<>c__DisplayClass19_0");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPickerRenderer/UnityEngine.ProBuilder.<>c__DisplayClass19_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SelectionPickerRenderer::$$c__DisplayClass19_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3[] positions
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::Vector3> positions;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // public UnityEngine.ProBuilder.SharedVertex[] sharedVertices
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*> sharedVertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Vector3[] positions
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_positions();
    // Get instance field reference: public UnityEngine.ProBuilder.SharedVertex[] sharedVertices
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>& dyn_sharedVertices();
    // public System.Void .ctor()
    // Offset: 0x19F09B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectionPickerRenderer::$$c__DisplayClass19_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass19_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectionPickerRenderer::$$c__DisplayClass19_0*, creationType>()));
    }
    // System.Int32 <PickVerticesInRect>b__0(System.Int32 x)
    // Offset: 0x19F2A68
    int $PickVerticesInRect$b__0(int x);
  }; // UnityEngine.ProBuilder.SelectionPickerRenderer/UnityEngine.ProBuilder.<>c__DisplayClass19_0
  #pragma pack(pop)
  static check_size<sizeof(SelectionPickerRenderer::$$c__DisplayClass19_0), 24 + sizeof(::ArrayW<::UnityEngine::ProBuilder::SharedVertex*>)> __UnityEngine_ProBuilder_SelectionPickerRenderer_$$c__DisplayClass19_0SizeCheck;
  static_assert(sizeof(SelectionPickerRenderer::$$c__DisplayClass19_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass19_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass19_0::$PickVerticesInRect$b__0
// Il2CppName: <PickVerticesInRect>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass19_0::*)(int)>(&UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass19_0::$PickVerticesInRect$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SelectionPickerRenderer::$$c__DisplayClass19_0*), "<PickVerticesInRect>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
