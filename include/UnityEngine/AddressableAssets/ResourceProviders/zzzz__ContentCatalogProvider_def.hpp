#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class ContentCatalogData;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::ResourceProviders {
struct ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex;
}
namespace GlobalNamespace {
class ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class ContentCatalogProvider;
}
namespace UnityEngine::AddressableAssets::ResourceProviders {
class ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp;
}
// Type: ::DependencyHashIndex
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14385))
// CS Name: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider::DependencyHashIndex
struct CORDL_TYPE ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex(int32_t value__) noexcept;


                    constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex(____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex const&) = default;
                    constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex(____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex&&) = default;
                    constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex& operator=(____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex& operator=(____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex_Unwrapped : int32_t {
__Remote = 0,
__Cache = 1,
__Count = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Remote offset 0
static ::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex const Remote;

/// @brief Field Cache offset 0
static ::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex const Cache;

/// @brief Field Count offset 0
static ::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex const Count;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceProviders
// Type: ::BundledCatalog
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14386))
// CS Name: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider::InternalOp::BundledCatalog
class CORDL_TYPE ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog() = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog", modifiers: " const&", def_value: None }]
constexpr ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog(______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog", modifiers: "&&", def_value: None }]
constexpr ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog(______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog& operator=(______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog&& o) noexcept = default;
  constexpr ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog& operator=(______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_BundlePath, put=__set_m_BundlePath))  m_BundlePath;

constexpr void __set_m_BundlePath(::StringW value) ;

constexpr ::StringW __get_m_BundlePath() const;

 bool __declspec(property(get=__get_m_OpInProgress, put=__set_m_OpInProgress))  m_OpInProgress;

constexpr void __set_m_OpInProgress(bool value) ;

constexpr bool __get_m_OpInProgress() const;

 ::UnityEngine::AssetBundleCreateRequest __declspec(property(get=__get_m_LoadBundleRequest, put=__set_m_LoadBundleRequest))  m_LoadBundleRequest;

constexpr void __set_m_LoadBundleRequest(::UnityEngine::AssetBundleCreateRequest value) ;

constexpr ::UnityEngine::AssetBundleCreateRequest __get_m_LoadBundleRequest() const;

 ::UnityEngine::AssetBundle __declspec(property(get=__get_m_CatalogAssetBundle, put=__set_m_CatalogAssetBundle))  m_CatalogAssetBundle;

constexpr void __set_m_CatalogAssetBundle(::UnityEngine::AssetBundle value) ;

constexpr ::UnityEngine::AssetBundle __get_m_CatalogAssetBundle() const;

 ::UnityEngine::AssetBundleRequest __declspec(property(get=__get_m_LoadTextAssetRequest, put=__set_m_LoadTextAssetRequest))  m_LoadTextAssetRequest;

constexpr void __set_m_LoadTextAssetRequest(::UnityEngine::AssetBundleRequest value) ;

constexpr ::UnityEngine::AssetBundleRequest __get_m_LoadTextAssetRequest() const;

 ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData __declspec(property(get=__get_m_CatalogData, put=__set_m_CatalogData))  m_CatalogData;

constexpr void __set_m_CatalogData(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData value) ;

constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData __get_m_CatalogData() const;

 ::UnityEngine::ResourceManagement::WebRequestQueueOperation __declspec(property(get=__get_m_WebRequestQueueOperation, put=__set_m_WebRequestQueueOperation))  m_WebRequestQueueOperation;

constexpr void __set_m_WebRequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation value) ;

constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation __get_m_WebRequestQueueOperation() const;

 ::UnityEngine::AsyncOperation __declspec(property(get=__get_m_RequestOperation, put=__set_m_RequestOperation))  m_RequestOperation;

constexpr void __set_m_RequestOperation(::UnityEngine::AsyncOperation value) ;

constexpr ::UnityEngine::AsyncOperation __get_m_RequestOperation() const;

 int32_t __declspec(property(get=__get_m_WebRequestTimeout, put=__set_m_WebRequestTimeout))  m_WebRequestTimeout;

constexpr void __set_m_WebRequestTimeout(int32_t value) ;

constexpr int32_t __get_m_WebRequestTimeout() const;

 ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> __declspec(property(get=__get_OnLoaded, put=__set_OnLoaded))  OnLoaded;

constexpr void __set_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> value) ;

constexpr ::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> __get_OnLoaded() const;


// Properties

 bool __declspec(property(get=get_OpInProgress))  OpInProgress;

 bool __declspec(property(get=get_OpIsSuccess))  OpIsSuccess;


// Methods

/// @brief Method add_OnLoaded addr 0x289a2d8 size 0xb0 virtual false final false
 void add_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> value) ;

/// @brief Method remove_OnLoaded addr 0x289aec4 size 0xb0 virtual false final false
 void remove_OnLoaded(::System::Action_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> value) ;

/// @brief Method get_OpInProgress addr 0x289af74 size 0x8 virtual false final false
 bool get_OpInProgress() ;

/// @brief Method get_OpIsSuccess addr 0x289af7c size 0x20 virtual false final false
 bool get_OpIsSuccess() ;

// Ctor Parameters [CppParam { name: "bundlePath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "webRequestTimeout", ty: "int32_t", modifiers: "", def_value: None }]
explicit ______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog(::StringW bundlePath, int32_t webRequestTimeout) ;

/// @brief Method .ctor addr 0x289a1b0 size 0x128 virtual false final false
 void _ctor(::StringW bundlePath, int32_t webRequestTimeout) ;

/// @brief Method Finalize addr 0x289af9c size 0xa8 virtual true final false
 void Finalize() ;

/// @brief Method Unload addr 0x289b044 size 0x28 virtual false final false
 void Unload() ;

/// @brief Method LoadCatalogFromBundleAsync addr 0x289a388 size 0x294 virtual false final false
 void LoadCatalogFromBundleAsync() ;

/// @brief Method WebRequestOperationCompleted addr 0x289b06c size 0x1fc virtual false final false
 void WebRequestOperationCompleted(::UnityEngine::AsyncOperation op) ;

/// @brief Method LoadTextAssetRequestComplete addr 0x289b268 size 0x198 virtual false final false
 void LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation op) ;

/// @brief Method WaitForCompletion addr 0x2899fb8 size 0xe4 virtual false final false
 bool WaitForCompletion() ;

/// @brief Method <LoadCatalogFromBundleAsync>b__19_1 addr 0x289b400 size 0x98 virtual false final false
 void _LoadCatalogFromBundleAsync_b__19_1(::UnityEngine::Networking::UnityWebRequestAsyncOperation asyncOp) ;

/// @brief Method <LoadCatalogFromBundleAsync>b__19_0 addr 0x289b498 size 0x1d8 virtual false final false
 void _LoadCatalogFromBundleAsync_b__19_0(::UnityEngine::AsyncOperation loadOp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InternalOp
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14387))
// CS Name: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider::InternalOp
class CORDL_TYPE ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BundledCatalog = ::GlobalNamespace::______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp(____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp(____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp& operator=(____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp&& o) noexcept = default;
  constexpr ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp& operator=(____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_LocalDataPath, put=__set_m_LocalDataPath))  m_LocalDataPath;

constexpr void __set_m_LocalDataPath(::StringW value) ;

constexpr ::StringW __get_m_LocalDataPath() const;

 ::StringW __declspec(property(get=__get_m_RemoteHashValue, put=__set_m_RemoteHashValue))  m_RemoteHashValue;

constexpr void __set_m_RemoteHashValue(::StringW value) ;

constexpr ::StringW __get_m_RemoteHashValue() const;

 ::StringW __declspec(property(get=__get_m_LocalHashValue, put=__set_m_LocalHashValue))  m_LocalHashValue;

constexpr void __set_m_LocalHashValue(::StringW value) ;

constexpr ::StringW __get_m_LocalHashValue() const;

 ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __declspec(property(get=__get_m_ProviderInterface, put=__set_m_ProviderInterface))  m_ProviderInterface;

constexpr void __set_m_ProviderInterface(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __get_m_ProviderInterface() const;

 ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData __declspec(property(get=__get_m_ContentCatalogData, put=__set_m_ContentCatalogData))  m_ContentCatalogData;

constexpr void __set_m_ContentCatalogData(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData value) ;

constexpr ::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData __get_m_ContentCatalogData() const;

 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> __declspec(property(get=__get_m_ContentCatalogDataLoadOp, put=__set_m_ContentCatalogDataLoadOp))  m_ContentCatalogDataLoadOp;

constexpr void __set_m_ContentCatalogDataLoadOp(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> __get_m_ContentCatalogDataLoadOp() const;

 ::GlobalNamespace::______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog __declspec(property(get=__get_m_BundledCatalog, put=__set_m_BundledCatalog))  m_BundledCatalog;

constexpr void __set_m_BundledCatalog(::GlobalNamespace::______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog value) ;

constexpr ::GlobalNamespace::______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog __get_m_BundledCatalog() const;

 bool __declspec(property(get=__get_m_Retried, put=__set_m_Retried))  m_Retried;

constexpr void __set_m_Retried(bool value) ;

constexpr bool __get_m_Retried() const;

 bool __declspec(property(get=__get_m_DisableCatalogUpdateOnStart, put=__set_m_DisableCatalogUpdateOnStart))  m_DisableCatalogUpdateOnStart;

constexpr void __set_m_DisableCatalogUpdateOnStart(bool value) ;

constexpr bool __get_m_DisableCatalogUpdateOnStart() const;

 bool __declspec(property(get=__get_m_IsLocalCatalogInBundle, put=__set_m_IsLocalCatalogInBundle))  m_IsLocalCatalogInBundle;

constexpr void __set_m_IsLocalCatalogInBundle(bool value) ;

constexpr bool __get_m_IsLocalCatalogInBundle() const;


// Methods

/// @brief Method Start addr 0x28990cc size 0x17c virtual false final false
 void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface, bool disableCatalogUpdateOnStart, bool isLocalCatalogInBundle) ;

/// @brief Method WaitForCompletionCallback addr 0x2899ef0 size 0xc8 virtual false final false
 bool WaitForCompletionCallback() ;

/// @brief Method Release addr 0x2898f58 size 0x10 virtual false final false
 void Release() ;

/// @brief Method CanLoadCatalogFromBundle addr 0x2899990 size 0xc4 virtual false final false
 bool CanLoadCatalogFromBundle(::StringW idToLoad, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method LoadCatalog addr 0x2899a54 size 0x49c virtual false final false
 void LoadCatalog(::StringW idToLoad, bool loadCatalogFromLocalBundle) ;

/// @brief Method CatalogLoadOpCompleteCallback addr 0x289a61c size 0xe0 virtual false final false
 void CatalogLoadOpCompleteCallback(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData> op) ;

/// @brief Method GetTransformedInternalId addr 0x289a0f4 size 0xbc virtual false final false
 ::StringW GetTransformedInternalId(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation loc) ;

/// @brief Method DetermineIdToLoad addr 0x2899248 size 0x748 virtual false final false
 ::StringW DetermineIdToLoad(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> dependencyObjects, bool disableCatalogUpdateOnStart) ;

/// @brief Method OnCatalogLoaded addr 0x289a6fc size 0x7c0 virtual false final false
 void OnCatalogLoaded(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData ccd) ;

// Ctor Parameters []
explicit ____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp() ;

/// @brief Method .ctor addr 0x28990c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LoadCatalog>b__14_0 addr 0x289aebc size 0x8 virtual false final false
 void _LoadCatalog_b__14_0(::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData ccd) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceProviders
// Type: UnityEngine.AddressableAssets.ResourceProviders::ContentCatalogProvider
namespace UnityEngine::AddressableAssets::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14294))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14388))
// CS Name: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider
class CORDL_TYPE ContentCatalogProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
using InternalOp = ::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp;

using DependencyHashIndex = ::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ContentCatalogProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider", modifiers: " const&", def_value: None }]
constexpr ContentCatalogProvider(ContentCatalogProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentCatalogProvider", modifiers: "&&", def_value: None }]
constexpr ContentCatalogProvider(ContentCatalogProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentCatalogProvider(void* ptr) noexcept : ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase(ptr) {
}


  constexpr ContentCatalogProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentCatalogProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentCatalogProvider& operator=(ContentCatalogProvider&& o) noexcept = default;
  constexpr ContentCatalogProvider& operator=(ContentCatalogProvider const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_DisableCatalogUpdateOnStart, put=__set_DisableCatalogUpdateOnStart))  DisableCatalogUpdateOnStart;

constexpr void __set_DisableCatalogUpdateOnStart(bool value) ;

constexpr bool __get_DisableCatalogUpdateOnStart() const;

 bool __declspec(property(get=__get_IsLocalCatalogInBundle, put=__set_IsLocalCatalogInBundle))  IsLocalCatalogInBundle;

constexpr void __set_IsLocalCatalogInBundle(bool value) ;

constexpr bool __get_IsLocalCatalogInBundle() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp> __declspec(property(get=__get_m_LocationToCatalogLoadOpMap, put=__set_m_LocationToCatalogLoadOpMap))  m_LocationToCatalogLoadOpMap;

constexpr void __set_m_LocationToCatalogLoadOpMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation,::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp> __get_m_LocationToCatalogLoadOpMap() const;

 ::UnityEngine::ResourceManagement::ResourceManager __declspec(property(get=__get_m_RM, put=__set_m_RM))  m_RM;

constexpr void __set_m_RM(::UnityEngine::ResourceManagement::ResourceManager value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceManager __get_m_RM() const;


// Methods

// Ctor Parameters [CppParam { name: "resourceManagerInstance", ty: "::UnityEngine::ResourceManagement::ResourceManager", modifiers: "", def_value: None }]
explicit ContentCatalogProvider(::UnityEngine::ResourceManagement::ResourceManager resourceManagerInstance) ;

/// @brief Method .ctor addr 0x2898de4 size 0x98 virtual false final false
 void _ctor(::UnityEngine::ResourceManagement::ResourceManager resourceManagerInstance) ;

/// @brief Method Release addr 0x2898e7c size 0xdc virtual true final false
 void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Provide addr 0x2898f68 size 0x15c virtual true final false
 void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets::ResourceProviders
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__DependencyHashIndex, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/DependencyHashIndex");
NEED_NO_BOX(::GlobalNamespace::______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp__BundledCatalog, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/InternalOp/BundledCatalog");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider");
NEED_NO_BOX(::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::____UnityEngine__AddressableAssets__ResourceProviders__ContentCatalogProvider__InternalOp, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/InternalOp");
