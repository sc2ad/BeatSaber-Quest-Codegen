// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.WingedEdge
#include "UnityEngine/ProBuilder/WingedEdge.hpp"
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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0*, "UnityEngine.ProBuilder", "WingedEdge/<>c__DisplayClass32_0");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.WingedEdge/UnityEngine.ProBuilder.<>c__DisplayClass32_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WingedEdge::$$c__DisplayClass32_0 : public ::Il2CppObject {
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
    // public System.Collections.Generic.HashSet`1<System.Int32> common
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::HashSet_1<int>* common;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<int>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::HashSet_1<int>*
    constexpr operator ::System::Collections::Generic::HashSet_1<int>*() const noexcept {
      return common;
    }
    // Get instance field reference: public System.Collections.Generic.HashSet`1<System.Int32> common
    ::System::Collections::Generic::HashSet_1<int>*& dyn_common();
    // System.Boolean <SortCommonIndexesByAdjacency>b__0(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x295D57C
    bool $SortCommonIndexesByAdjacency$b__0(::UnityEngine::ProBuilder::WingedEdge* x);
    // public System.Void .ctor()
    // Offset: 0x295D380
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WingedEdge::$$c__DisplayClass32_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WingedEdge::$$c__DisplayClass32_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.WingedEdge/UnityEngine.ProBuilder.<>c__DisplayClass32_0
  #pragma pack(pop)
  static check_size<sizeof(WingedEdge::$$c__DisplayClass32_0), 16 + sizeof(::System::Collections::Generic::HashSet_1<int>*)> __UnityEngine_ProBuilder_WingedEdge_$$c__DisplayClass32_0SizeCheck;
  static_assert(sizeof(WingedEdge::$$c__DisplayClass32_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0::$SortCommonIndexesByAdjacency$b__0
// Il2CppName: <SortCommonIndexesByAdjacency>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0::$SortCommonIndexesByAdjacency$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0*), "<SortCommonIndexesByAdjacency>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::WingedEdge::$$c__DisplayClass32_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
