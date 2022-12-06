// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.ElementSelection
#include "UnityEngine/ProBuilder/MeshOperations/ElementSelection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c__DisplayClass26_0");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ElementSelection/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass26_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ElementSelection::$$c__DisplayClass26_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.HashSet`1<System.Int32> common
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::HashSet_1<int>* common;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // public System.Func`2<UnityEngine.ProBuilder.WingedEdge,System.Boolean> <>9__1
    // Size: 0x8
    // Offset: 0x18
    ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* $$9__1;
    // Field size check
    static_assert(sizeof(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*) == 0x8);
    // public System.Func`2<UnityEngine.ProBuilder.WingedEdge,System.Boolean> <>9__2
    // Size: 0x8
    // Offset: 0x20
    ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.HashSet`1<System.Int32> common
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<int>*& dyn_common();
    // Get instance field reference: public System.Func`2<UnityEngine.ProBuilder.WingedEdge,System.Boolean> <>9__1
    [[deprecated("Use field access instead!")]] ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*& dyn_$$9__1();
    // Get instance field reference: public System.Func`2<UnityEngine.ProBuilder.WingedEdge,System.Boolean> <>9__2
    [[deprecated("Use field access instead!")]] ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*& dyn_$$9__2();
    // public System.Void .ctor()
    // Offset: 0x1A79F74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElementSelection::$$c__DisplayClass26_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElementSelection::$$c__DisplayClass26_0*, creationType>()));
    }
    // System.Boolean <FindHoles>b__1(UnityEngine.ProBuilder.WingedEdge w)
    // Offset: 0x1A7A384
    bool $FindHoles$b__1(::UnityEngine::ProBuilder::WingedEdge* w);
    // System.Boolean <FindHoles>b__2(UnityEngine.ProBuilder.WingedEdge w)
    // Offset: 0x1A7A3F0
    bool $FindHoles$b__2(::UnityEngine::ProBuilder::WingedEdge* w);
  }; // UnityEngine.ProBuilder.MeshOperations.ElementSelection/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass26_0
  #pragma pack(pop)
  static check_size<sizeof(ElementSelection::$$c__DisplayClass26_0), 32 + sizeof(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, bool>*)> __UnityEngine_ProBuilder_MeshOperations_ElementSelection_$$c__DisplayClass26_0SizeCheck;
  static_assert(sizeof(ElementSelection::$$c__DisplayClass26_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0::$FindHoles$b__1
// Il2CppName: <FindHoles>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0::$FindHoles$b__1)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0*), "<FindHoles>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0::$FindHoles$b__2
// Il2CppName: <FindHoles>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0::$FindHoles$b__2)> {
  static const MethodInfo* get() {
    static auto* w = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass26_0*), "<FindHoles>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{w});
  }
};
