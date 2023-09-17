#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::Networking {
class DownloadHandlerAssetBundle;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement {
class IUpdateReceiver;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IAssetBundleResource;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleRequestOptions;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace UnityEngine {
class AssetBundleRequest;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleResource;
}
// Type: ::LoadType
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14273))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleResource::LoadType
struct CORDL_TYPE ____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType(____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType const&) = default;
                    constexpr ____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType(____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType&&) = default;
                    constexpr ____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType& operator=(____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType& operator=(____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType_Unwrapped : int32_t {
__None = 0,
__Local = 1,
__Web = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType const None;

/// @brief Field Local offset 0
static ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType const Local;

/// @brief Field Web offset 0
static ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType const Web;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetBundleResource
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14274))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleResource
class CORDL_TYPE AssetBundleResource : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LoadType = ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType;

/// @brief Convert operator to ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource
constexpr operator  ::UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource() const noexcept;

/// @brief Convert operator to ::UnityEngine::ResourceManagement::IUpdateReceiver
constexpr operator  ::UnityEngine::ResourceManagement::IUpdateReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~AssetBundleResource() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleResource", modifiers: " const&", def_value: None }]
constexpr AssetBundleResource(AssetBundleResource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleResource", modifiers: "&&", def_value: None }]
constexpr AssetBundleResource(AssetBundleResource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetBundleResource(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetBundleResource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetBundleResource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetBundleResource& operator=(AssetBundleResource&& o) noexcept = default;
  constexpr AssetBundleResource& operator=(AssetBundleResource const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AssetBundle __declspec(property(get=__get_m_AssetBundle, put=__set_m_AssetBundle))  m_AssetBundle;

constexpr void __set_m_AssetBundle(::UnityEngine::AssetBundle value) ;

constexpr ::UnityEngine::AssetBundle __get_m_AssetBundle() const;

 ::UnityEngine::Networking::DownloadHandlerAssetBundle __declspec(property(get=__get_m_downloadHandler, put=__set_m_downloadHandler))  m_downloadHandler;

constexpr void __set_m_downloadHandler(::UnityEngine::Networking::DownloadHandlerAssetBundle value) ;

constexpr ::UnityEngine::Networking::DownloadHandlerAssetBundle __get_m_downloadHandler() const;

 ::UnityEngine::AsyncOperation __declspec(property(get=__get_m_RequestOperation, put=__set_m_RequestOperation))  m_RequestOperation;

constexpr void __set_m_RequestOperation(::UnityEngine::AsyncOperation value) ;

constexpr ::UnityEngine::AsyncOperation __get_m_RequestOperation() const;

 ::UnityEngine::ResourceManagement::WebRequestQueueOperation __declspec(property(get=__get_m_WebRequestQueueOperation, put=__set_m_WebRequestQueueOperation))  m_WebRequestQueueOperation;

constexpr void __set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation value) ;

constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation __get_m_WebRequestQueueOperation() const;

 ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __declspec(property(get=__get_m_ProvideHandle, put=__set_m_ProvideHandle))  m_ProvideHandle;

constexpr void __set_m_ProvideHandle(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __get_m_ProvideHandle() const;

 ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions __declspec(property(get=__get_m_Options, put=__set_m_Options))  m_Options;

constexpr void __set_m_Options(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions __get_m_Options() const;

 bool __declspec(property(get=__get_m_WebRequestCompletedCallbackCalled, put=__set_m_WebRequestCompletedCallbackCalled))  m_WebRequestCompletedCallbackCalled;

constexpr void __set_m_WebRequestCompletedCallbackCalled(bool value) ;

constexpr bool __get_m_WebRequestCompletedCallbackCalled() const;

 int32_t __declspec(property(get=__get_m_Retries, put=__set_m_Retries))  m_Retries;

constexpr void __set_m_Retries(int32_t value) ;

constexpr int32_t __get_m_Retries() const;

 int64_t __declspec(property(get=__get_m_BytesToDownload, put=__set_m_BytesToDownload))  m_BytesToDownload;

constexpr void __set_m_BytesToDownload(int64_t value) ;

constexpr int64_t __get_m_BytesToDownload() const;

 int64_t __declspec(property(get=__get_m_DownloadedBytes, put=__set_m_DownloadedBytes))  m_DownloadedBytes;

constexpr void __set_m_DownloadedBytes(int64_t value) ;

constexpr int64_t __get_m_DownloadedBytes() const;

 bool __declspec(property(get=__get_m_Completed, put=__set_m_Completed))  m_Completed;

constexpr void __set_m_Completed(bool value) ;

constexpr bool __get_m_Completed() const;

/// @brief Field k_WaitForWebRequestMainThreadSleep offset 0
static constexpr int32_t  k_WaitForWebRequestMainThreadSleep{1};

 ::StringW __declspec(property(get=__get_m_TransformedInternalId, put=__set_m_TransformedInternalId))  m_TransformedInternalId;

constexpr void __set_m_TransformedInternalId(::StringW value) ;

constexpr ::StringW __get_m_TransformedInternalId() const;

 ::UnityEngine::AssetBundleRequest __declspec(property(get=__get_m_PreloadRequest, put=__set_m_PreloadRequest))  m_PreloadRequest;

constexpr void __set_m_PreloadRequest(::UnityEngine::AssetBundleRequest value) ;

constexpr ::UnityEngine::AssetBundleRequest __get_m_PreloadRequest() const;

 bool __declspec(property(get=__get_m_PreloadCompleted, put=__set_m_PreloadCompleted))  m_PreloadCompleted;

constexpr void __set_m_PreloadCompleted(bool value) ;

constexpr bool __get_m_PreloadCompleted() const;

 uint64_t __declspec(property(get=__get_m_LastDownloadedByteCount, put=__set_m_LastDownloadedByteCount))  m_LastDownloadedByteCount;

constexpr void __set_m_LastDownloadedByteCount(uint64_t value) ;

constexpr uint64_t __get_m_LastDownloadedByteCount() const;

 float_t __declspec(property(get=__get_m_TimeoutTimer, put=__set_m_TimeoutTimer))  m_TimeoutTimer;

constexpr void __set_m_TimeoutTimer(float_t value) ;

constexpr float_t __get_m_TimeoutTimer() const;

 int32_t __declspec(property(get=__get_m_TimeoutOverFrames, put=__set_m_TimeoutOverFrames))  m_TimeoutOverFrames;

constexpr void __set_m_TimeoutOverFrames(int32_t value) ;

constexpr int32_t __get_m_TimeoutOverFrames() const;


// Properties

 bool __declspec(property(get=get_HasTimedOut))  HasTimedOut;

 int64_t __declspec(property(get=get_BytesToDownload))  BytesToDownload;


// Methods

/// @brief Method get_HasTimedOut addr 0x2a3c17c size 0x40 virtual false final false
 bool get_HasTimedOut() ;

/// @brief Method get_BytesToDownload addr 0x2a3c1bc size 0x58 virtual false final false
 int64_t get_BytesToDownload() ;

/// @brief Method CreateWebRequest addr 0x2a3c2c0 size 0x28 virtual false final false
 ::UnityEngine::Networking::UnityWebRequest CreateWebRequest(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation loc) ;

/// @brief Method CreateWebRequest addr 0x2a3c2e8 size 0x1bc virtual false final false
 ::UnityEngine::Networking::UnityWebRequest CreateWebRequest(::StringW url) ;

/// @brief Method GetAssetPreloadRequest addr 0x2a3c4a4 size 0x124 virtual false final false
 ::UnityEngine::AssetBundleRequest GetAssetPreloadRequest() ;

/// @brief Method PercentComplete addr 0x2a3c6c0 size 0x18 virtual false final false
 float_t PercentComplete() ;

/// @brief Method GetDownloadStatus addr 0x2a3c6d8 size 0x150 virtual false final false
 ::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus GetDownloadStatus() ;

/// @brief Method GetAssetBundle addr 0x2a3c5c8 size 0xf8 virtual true final true
 ::UnityEngine::AssetBundle GetAssetBundle() ;

/// @brief Method Start addr 0x2a3c828 size 0x238 virtual false final false
 void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) ;

/// @brief Method WaitForCompletionHandler addr 0x2a3cff4 size 0x240 virtual false final false
 bool WaitForCompletionHandler() ;

/// @brief Method AddCallbackInvokeIfDone addr 0x2a3d824 size 0x60 virtual false final false
 void AddCallbackInvokeIfDone(::UnityEngine::AsyncOperation operation, ::System::Action_1<::UnityEngine::AsyncOperation> callback) ;

/// @brief Method GetLoadInfo addr 0x2a3d884 size 0x30 virtual false final false
static void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle handle, ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType> loadType, ByRef<::StringW> path) ;

/// @brief Method GetLoadInfo addr 0x2a3d8b4 size 0x1f4 virtual false final false
static void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::UnityEngine::ResourceManagement::ResourceManager resourceManager, ByRef<::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType> loadType, ByRef<::StringW> path) ;

/// @brief Method BeginOperation addr 0x2a3cc7c size 0x378 virtual false final false
 void BeginOperation() ;

/// @brief Method BeginWebRequestOperation addr 0x2a3daa8 size 0xec virtual false final false
 void BeginWebRequestOperation(::UnityEngine::AsyncOperation asyncOp) ;

/// @brief Method Update addr 0x2a3db94 size 0x120 virtual true final true
 void Update(float_t unscaledDeltaTime) ;

/// @brief Method LocalRequestOperationCompleted addr 0x2a3dcb4 size 0x8c virtual false final false
 void LocalRequestOperationCompleted(::UnityEngine::AsyncOperation op) ;

/// @brief Method CompleteBundleLoad addr 0x2a3dd40 size 0x13c virtual false final false
 void CompleteBundleLoad(::UnityEngine::AssetBundle bundle) ;

/// @brief Method WebRequestOperationCompleted addr 0x2a3d234 size 0x5f0 virtual false final false
 void WebRequestOperationCompleted(::UnityEngine::AsyncOperation op) ;

/// @brief Method Unload addr 0x2a3de7c size 0xa0 virtual false final false
 void Unload() ;

// Ctor Parameters []
explicit AssetBundleResource() ;

/// @brief Method .ctor addr 0x2a3df1c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAssetPreloadRequest>b__25_0 addr 0x2a3df24 size 0xc virtual false final false
 void _GetAssetPreloadRequest_b__25_0(::UnityEngine::AsyncOperation operation) ;

/// @brief Method <BeginOperation>b__34_0 addr 0x2a3df30 size 0x4 virtual false final false
 void _BeginOperation_b__34_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation asyncOp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__AssetBundleResource__LoadType, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource/LoadType");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleResource, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleResource");
