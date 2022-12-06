// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource
#include "UnityEngine/ResourceManagement/ResourceProviders/IAssetBundleResource.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
#include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundle
  class AssetBundle;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: DownloadHandlerAssetBundle
  class DownloadHandlerAssetBundle;
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: WebRequestQueueOperation
  class WebRequestQueueOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: AssetBundleRequestOptions
  class AssetBundleRequestOptions;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceLocations
namespace UnityEngine::ResourceManagement::ResourceLocations {
  // Forward declaring type: IResourceLocation
  class IResourceLocation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement::AsyncOperations
namespace UnityEngine::ResourceManagement::AsyncOperations {
  // Skipping declaration: DownloadStatus because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: AssetBundleResource
  class AssetBundleResource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleResource
  // [TokenAttribute] Offset: FFFFFFFF
  class AssetBundleResource : public ::Il2CppObject/*, public ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*/ {
    public:
    public:
    // private UnityEngine.AssetBundle m_AssetBundle
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AssetBundle* m_AssetBundle;
    // Field size check
    static_assert(sizeof(::UnityEngine::AssetBundle*) == 0x8);
    // private UnityEngine.Networking.DownloadHandlerAssetBundle m_downloadHandler
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Networking::DownloadHandlerAssetBundle* m_downloadHandler;
    // Field size check
    static_assert(sizeof(::UnityEngine::Networking::DownloadHandlerAssetBundle*) == 0x8);
    // private UnityEngine.AsyncOperation m_RequestOperation
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AsyncOperation* m_RequestOperation;
    // Field size check
    static_assert(sizeof(::UnityEngine::AsyncOperation*) == 0x8);
    // private UnityEngine.ResourceManagement.WebRequestQueueOperation m_WebRequestQueueOperation
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_WebRequestQueueOperation;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::WebRequestQueueOperation*) == 0x8);
    // UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProvideHandle
    // Size: 0x18
    // Offset: 0x30
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_ProvideHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle) == 0x18);
    // UnityEngine.ResourceManagement.ResourceProviders.AssetBundleRequestOptions m_Options
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* m_Options;
    // Field size check
    static_assert(sizeof(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*) == 0x8);
    // private System.Int32 m_Retries
    // Size: 0x4
    // Offset: 0x50
    int m_Retries;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Retries and: m_BytesToDownload
    char __padding6[0x4] = {};
    // private System.Int64 m_BytesToDownload
    // Size: 0x8
    // Offset: 0x58
    int64_t m_BytesToDownload;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 m_DownloadedBytes
    // Size: 0x8
    // Offset: 0x60
    int64_t m_DownloadedBytes;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean m_Completed
    // Size: 0x1
    // Offset: 0x68
    bool m_Completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource
    operator ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource() noexcept {
      return *reinterpret_cast<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>(this);
    }
    // Creating interface conversion operator: i_IAssetBundleResource
    inline ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource* i_IAssetBundleResource() noexcept {
      return reinterpret_cast<::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource*>(this);
    }
    // Get instance field reference: private UnityEngine.AssetBundle m_AssetBundle
    [[deprecated("Use field access instead!")]] ::UnityEngine::AssetBundle*& dyn_m_AssetBundle();
    // Get instance field reference: private UnityEngine.Networking.DownloadHandlerAssetBundle m_downloadHandler
    [[deprecated("Use field access instead!")]] ::UnityEngine::Networking::DownloadHandlerAssetBundle*& dyn_m_downloadHandler();
    // Get instance field reference: private UnityEngine.AsyncOperation m_RequestOperation
    [[deprecated("Use field access instead!")]] ::UnityEngine::AsyncOperation*& dyn_m_RequestOperation();
    // Get instance field reference: private UnityEngine.ResourceManagement.WebRequestQueueOperation m_WebRequestQueueOperation
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::WebRequestQueueOperation*& dyn_m_WebRequestQueueOperation();
    // Get instance field reference: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_ProvideHandle
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& dyn_m_ProvideHandle();
    // Get instance field reference: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleRequestOptions m_Options
    [[deprecated("Use field access instead!")]] ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions*& dyn_m_Options();
    // Get instance field reference: private System.Int32 m_Retries
    [[deprecated("Use field access instead!")]] int& dyn_m_Retries();
    // Get instance field reference: private System.Int64 m_BytesToDownload
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_BytesToDownload();
    // Get instance field reference: private System.Int64 m_DownloadedBytes
    [[deprecated("Use field access instead!")]] int64_t& dyn_m_DownloadedBytes();
    // Get instance field reference: private System.Boolean m_Completed
    [[deprecated("Use field access instead!")]] bool& dyn_m_Completed();
    // public System.Void .ctor()
    // Offset: 0x1F6F9A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssetBundleResource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssetBundleResource*, creationType>()));
    }
    // UnityEngine.Networking.UnityWebRequest CreateWebRequest(UnityEngine.ResourceManagement.ResourceLocations.IResourceLocation loc)
    // Offset: 0x1F70134
    ::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* loc);
    // private System.Single PercentComplete()
    // Offset: 0x1F70308
    float PercentComplete();
    // private UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus GetDownloadStatus()
    // Offset: 0x1F70320
    ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus();
    // public UnityEngine.AssetBundle GetAssetBundle()
    // Offset: 0x1F704DC
    ::UnityEngine::AssetBundle* GetAssetBundle();
    // System.Void Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle)
    // Offset: 0x1F6F9A8
    void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);
    // private System.Boolean WaitForCompletionHandler()
    // Offset: 0x1F70C8C
    bool WaitForCompletionHandler();
    // private System.Void BeginOperation()
    // Offset: 0x1F70968
    void BeginOperation();
    // private System.Void LocalRequestOperationCompleted(UnityEngine.AsyncOperation op)
    // Offset: 0x1F70DE0
    void LocalRequestOperationCompleted(::UnityEngine::AsyncOperation* op);
    // private System.Void WebRequestOperationCompleted(UnityEngine.AsyncOperation op)
    // Offset: 0x1F70FC0
    void WebRequestOperationCompleted(::UnityEngine::AsyncOperation* op);
    // public System.Void Unload()
    // Offset: 0x1F6FDAC
    void Unload();
    // private System.Void <BeginOperation>b__16_0(UnityEngine.Networking.UnityWebRequestAsyncOperation asyncOp)
    // Offset: 0x1F717A4
    void $BeginOperation$b__16_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOp);
  }; // UnityEngine.ResourceManagement.ResourceProviders.AssetBundleResource
  #pragma pack(pop)
  static check_size<sizeof(AssetBundleResource), 104 + sizeof(bool)> __UnityEngine_ResourceManagement_ResourceProviders_AssetBundleResourceSizeCheck;
  static_assert(sizeof(AssetBundleResource) == 0x69);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest
// Il2CppName: CreateWebRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::CreateWebRequest)> {
  static const MethodInfo* get() {
    static auto* loc = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceLocations", "IResourceLocation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "CreateWebRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loc});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::PercentComplete
// Il2CppName: PercentComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::PercentComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "PercentComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetDownloadStatus
// Il2CppName: GetDownloadStatus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetDownloadStatus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "GetDownloadStatus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetBundle
// Il2CppName: GetAssetBundle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AssetBundle* (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::GetAssetBundle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "GetAssetBundle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Start)> {
  static const MethodInfo* get() {
    static auto* provideHandle = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provideHandle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WaitForCompletionHandler
// Il2CppName: WaitForCompletionHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WaitForCompletionHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "WaitForCompletionHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginOperation
// Il2CppName: BeginOperation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::BeginOperation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "BeginOperation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LocalRequestOperationCompleted
// Il2CppName: LocalRequestOperationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::LocalRequestOperationCompleted)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "LocalRequestOperationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WebRequestOperationCompleted
// Il2CppName: WebRequestOperationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::AsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::WebRequestOperationCompleted)> {
  static const MethodInfo* get() {
    static auto* op = &::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "WebRequestOperationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{op});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Unload
// Il2CppName: Unload
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)()>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::Unload)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "Unload", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::$BeginOperation$b__16_0
// Il2CppName: <BeginOperation>b__16_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource::$BeginOperation$b__16_0)> {
  static const MethodInfo* get() {
    static auto* asyncOp = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequestAsyncOperation")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource*), "<BeginOperation>b__16_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncOp});
  }
};
