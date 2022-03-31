// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2*, "", "BeatmapLevelDataLoaderSO/<>c__DisplayClass6_2");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataLoaderSO/<>c__DisplayClass6_2
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2 : public ::Il2CppObject {
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
    // public UnityEngine.AssetBundleRequest assetBundleRequest
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AssetBundleRequest* assetBundleRequest;
    // Field size check
    static_assert(sizeof(::UnityEngine::AssetBundleRequest*) == 0x8);
    // public BeatmapLevelDataLoaderSO/<>c__DisplayClass6_1 CS$<>8__locals2
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1* CS$$$8__locals2;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.AssetBundleRequest assetBundleRequest
    ::UnityEngine::AssetBundleRequest*& dyn_assetBundleRequest();
    // Get instance field reference: public BeatmapLevelDataLoaderSO/<>c__DisplayClass6_1 CS$<>8__locals2
    ::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1*& dyn_CS$$$8__locals2();
    // System.Void <LoadBeatmapLevelDataAsync>b__1(UnityEngine.AsyncOperation asyncOperation2)
    // Offset: 0x14CBE24
    void $LoadBeatmapLevelDataAsync$b__1(::UnityEngine::AsyncOperation* asyncOperation2);
    // public System.Void .ctor()
    // Offset: 0x14CBE1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2*, creationType>()));
    }
  }; // BeatmapLevelDataLoaderSO/<>c__DisplayClass6_2
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2), 24 + sizeof(::GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1*)> __GlobalNamespace_BeatmapLevelDataLoaderSO_$$c__DisplayClass6_2SizeCheck;
  static_assert(sizeof(BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2::$LoadBeatmapLevelDataAsync$b__1
// Il2CppName: <LoadBeatmapLevelDataAsync>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2::*)(::UnityEngine::AsyncOperation*)>(&GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2::$LoadBeatmapLevelDataAsync$b__1)> {
  static const MethodInfo* get() {
    static auto* asyncOperation2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2*), "<LoadBeatmapLevelDataAsync>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncOperation2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
