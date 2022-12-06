// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/UnityEngine.AddressableAssets.ResourceProviders.InternalOp
#include "UnityEngine/AddressableAssets/ResourceProviders/ContentCatalogProvider_InternalOp.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleCreateRequest
  class AssetBundleCreateRequest;
  // Forward declaring type: AssetBundle
  class AssetBundle;
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: UnityEngine::AddressableAssets::ResourceLocators
namespace UnityEngine::AddressableAssets::ResourceLocators {
  // Forward declaring type: ContentCatalogData
  class ContentCatalogData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/InternalOp/BundledCatalog");
// Type namespace: UnityEngine.AddressableAssets.ResourceProviders
namespace UnityEngine::AddressableAssets::ResourceProviders {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/UnityEngine.AddressableAssets.ResourceProviders.InternalOp/UnityEngine.AddressableAssets.ResourceProviders.BundledCatalog
  // [TokenAttribute] Offset: FFFFFFFF
  class ContentCatalogProvider::InternalOp::BundledCatalog : public ::Il2CppObject {
    public:
    public:
    // private readonly System.String m_BundlePath
    // Size: 0x8
    // Offset: 0x10
    ::StringW m_BundlePath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean m_OpInProgress
    // Size: 0x1
    // Offset: 0x18
    bool m_OpInProgress;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_OpInProgress and: m_LoadBundleRequest
    char __padding1[0x7] = {};
    // private UnityEngine.AssetBundleCreateRequest m_LoadBundleRequest
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AssetBundleCreateRequest* m_LoadBundleRequest;
    // Field size check
    static_assert(sizeof(::UnityEngine::AssetBundleCreateRequest*) == 0x8);
    // UnityEngine.AssetBundle m_CatalogAssetBundle
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::AssetBundle* m_CatalogAssetBundle;
    // Field size check
    static_assert(sizeof(::UnityEngine::AssetBundle*) == 0x8);
    // private UnityEngine.AssetBundleRequest m_LoadTextAssetRequest
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::AssetBundleRequest* m_LoadTextAssetRequest;
    // Field size check
    static_assert(sizeof(::UnityEngine::AssetBundleRequest*) == 0x8);
    // private UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData m_CatalogData
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_CatalogData;
    // Field size check
    static_assert(sizeof(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*) == 0x8);
    // private System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> OnLoaded
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* OnLoaded;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.String m_BundlePath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_BundlePath();
    // Get instance field reference: private System.Boolean m_OpInProgress
    [[deprecated("Use field access instead!")]] bool& dyn_m_OpInProgress();
    // Get instance field reference: private UnityEngine.AssetBundleCreateRequest m_LoadBundleRequest
    [[deprecated("Use field access instead!")]] ::UnityEngine::AssetBundleCreateRequest*& dyn_m_LoadBundleRequest();
    // Get instance field reference: UnityEngine.AssetBundle m_CatalogAssetBundle
    [[deprecated("Use field access instead!")]] ::UnityEngine::AssetBundle*& dyn_m_CatalogAssetBundle();
    // Get instance field reference: private UnityEngine.AssetBundleRequest m_LoadTextAssetRequest
    [[deprecated("Use field access instead!")]] ::UnityEngine::AssetBundleRequest*& dyn_m_LoadTextAssetRequest();
    // Get instance field reference: private UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData m_CatalogData
    [[deprecated("Use field access instead!")]] ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*& dyn_m_CatalogData();
    // Get instance field reference: private System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> OnLoaded
    [[deprecated("Use field access instead!")]] ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*& dyn_OnLoaded();
    // public System.Boolean get_OpInProgress()
    // Offset: 0x18E2EE4
    bool get_OpInProgress();
    // public System.Boolean get_OpIsSuccess()
    // Offset: 0x18E2EEC
    bool get_OpIsSuccess();
    // public System.Void add_OnLoaded(System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> value)
    // Offset: 0x18E2A10
    void add_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);
    // public System.Void remove_OnLoaded(System.Action`1<UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData> value)
    // Offset: 0x18E2E40
    void remove_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>* value);
    // public System.Void .ctor(System.String bundlePath)
    // Offset: 0x18E290C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentCatalogProvider::InternalOp::BundledCatalog* New_ctor(::StringW bundlePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentCatalogProvider::InternalOp::BundledCatalog*, creationType>(bundlePath)));
    }
    // private System.Void Unload()
    // Offset: 0x18E2F88
    void Unload();
    // public System.Void LoadCatalogFromBundleAsync()
    // Offset: 0x18E2AB4
    void LoadCatalogFromBundleAsync();
    // private System.Void LoadTextAssetRequestComplete(UnityEngine.AsyncOperation op)
    // Offset: 0x18E2FBC
    void LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation* op);
    // public System.Boolean WaitForCompletion()
    // Offset: 0x18E2808
    bool WaitForCompletion();
    // private System.Void <LoadCatalogFromBundleAsync>b__16_0(UnityEngine.AsyncOperation loadOp)
    // Offset: 0x18E3140
    void $LoadCatalogFromBundleAsync$b__16_0(::UnityEngine::AsyncOperation* loadOp);
    // protected override System.Void Finalize()
    // Offset: 0x18E2F0C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/UnityEngine.AddressableAssets.ResourceProviders.InternalOp/UnityEngine.AddressableAssets.ResourceProviders.BundledCatalog
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogProvider::InternalOp::BundledCatalog), 64 + sizeof(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)> __UnityEngine_AddressableAssets_ResourceProviders_ContentCatalogProvider_InternalOp_BundledCatalogSizeCheck;
  static_assert(sizeof(ContentCatalogProvider::InternalOp::BundledCatalog) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::get_OpInProgress
// Il2CppName: get_OpInProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)()>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::get_OpInProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "get_OpInProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::get_OpIsSuccess
// Il2CppName: get_OpIsSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)()>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::get_OpIsSuccess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "get_OpIsSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::add_OnLoaded
// Il2CppName: add_OnLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::add_OnLoaded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "add_OnLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::remove_OnLoaded
// Il2CppName: remove_OnLoaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*>*)>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::remove_OnLoaded)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "remove_OnLoaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)()>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::Unload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::LoadCatalogFromBundleAsync
// Il2CppName: LoadCatalogFromBundleAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)()>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::LoadCatalogFromBundleAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "LoadCatalogFromBundleAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::LoadTextAssetRequestComplete
// Il2CppName: LoadTextAssetRequestComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)(::UnityEngine::AsyncOperation*)>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::LoadTextAssetRequestComplete)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "LoadTextAssetRequestComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::WaitForCompletion
// Il2CppName: WaitForCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)()>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::WaitForCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "WaitForCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::$LoadCatalogFromBundleAsync$b__16_0
// Il2CppName: <LoadCatalogFromBundleAsync>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)(::UnityEngine::AsyncOperation*)>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::$LoadCatalogFromBundleAsync$b__16_0)> {
  static const MethodInfo* get() {
    static auto* loadOp = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "<LoadCatalogFromBundleAsync>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loadOp});
  }
};
// Writing MetadataGetter for method: UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::*)()>(&UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::InternalOp::BundledCatalog*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
