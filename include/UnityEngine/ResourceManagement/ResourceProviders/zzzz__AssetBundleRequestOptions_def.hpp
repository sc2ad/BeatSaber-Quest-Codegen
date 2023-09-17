#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct AssetLoadMode;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ILocationSizeData;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleRequestOptions;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetBundleRequestOptions
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14272))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleRequestOptions
class CORDL_TYPE AssetBundleRequestOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData
constexpr operator  ::UnityEngine::ResourceManagement::ResourceLocations::ILocationSizeData() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~AssetBundleRequestOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestOptions", modifiers: " const&", def_value: None }]
constexpr AssetBundleRequestOptions(AssetBundleRequestOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestOptions", modifiers: "&&", def_value: None }]
constexpr AssetBundleRequestOptions(AssetBundleRequestOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetBundleRequestOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AssetBundleRequestOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetBundleRequestOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetBundleRequestOptions& operator=(AssetBundleRequestOptions&& o) noexcept = default;
  constexpr AssetBundleRequestOptions& operator=(AssetBundleRequestOptions const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Hash, put=__set_m_Hash))  m_Hash;

constexpr void __set_m_Hash(::StringW value) ;

constexpr ::StringW __get_m_Hash() const;

 uint32_t __declspec(property(get=__get_m_Crc, put=__set_m_Crc))  m_Crc;

constexpr void __set_m_Crc(uint32_t value) ;

constexpr uint32_t __get_m_Crc() const;

 int32_t __declspec(property(get=__get_m_Timeout, put=__set_m_Timeout))  m_Timeout;

constexpr void __set_m_Timeout(int32_t value) ;

constexpr int32_t __get_m_Timeout() const;

 bool __declspec(property(get=__get_m_ChunkedTransfer, put=__set_m_ChunkedTransfer))  m_ChunkedTransfer;

constexpr void __set_m_ChunkedTransfer(bool value) ;

constexpr bool __get_m_ChunkedTransfer() const;

 int32_t __declspec(property(get=__get_m_RedirectLimit, put=__set_m_RedirectLimit))  m_RedirectLimit;

constexpr void __set_m_RedirectLimit(int32_t value) ;

constexpr int32_t __get_m_RedirectLimit() const;

 int32_t __declspec(property(get=__get_m_RetryCount, put=__set_m_RetryCount))  m_RetryCount;

constexpr void __set_m_RetryCount(int32_t value) ;

constexpr int32_t __get_m_RetryCount() const;

 ::StringW __declspec(property(get=__get_m_BundleName, put=__set_m_BundleName))  m_BundleName;

constexpr void __set_m_BundleName(::StringW value) ;

constexpr ::StringW __get_m_BundleName() const;

 ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode __declspec(property(get=__get_m_AssetLoadMode, put=__set_m_AssetLoadMode))  m_AssetLoadMode;

constexpr void __set_m_AssetLoadMode(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode __get_m_AssetLoadMode() const;

 int64_t __declspec(property(get=__get_m_BundleSize, put=__set_m_BundleSize))  m_BundleSize;

constexpr void __set_m_BundleSize(int64_t value) ;

constexpr int64_t __get_m_BundleSize() const;

 bool __declspec(property(get=__get_m_UseCrcForCachedBundles, put=__set_m_UseCrcForCachedBundles))  m_UseCrcForCachedBundles;

constexpr void __set_m_UseCrcForCachedBundles(bool value) ;

constexpr bool __get_m_UseCrcForCachedBundles() const;

 bool __declspec(property(get=__get_m_UseUWRForLocalBundles, put=__set_m_UseUWRForLocalBundles))  m_UseUWRForLocalBundles;

constexpr void __set_m_UseUWRForLocalBundles(bool value) ;

constexpr bool __get_m_UseUWRForLocalBundles() const;

 bool __declspec(property(get=__get_m_ClearOtherCachedVersionsWhenLoaded, put=__set_m_ClearOtherCachedVersionsWhenLoaded))  m_ClearOtherCachedVersionsWhenLoaded;

constexpr void __set_m_ClearOtherCachedVersionsWhenLoaded(bool value) ;

constexpr bool __get_m_ClearOtherCachedVersionsWhenLoaded() const;


// Properties

 ::StringW __declspec(property(get=get_Hash, put=set_Hash))  Hash;

 uint32_t __declspec(property(get=get_Crc, put=set_Crc))  Crc;

 int32_t __declspec(property(get=get_Timeout, put=set_Timeout))  Timeout;

 bool __declspec(property(get=get_ChunkedTransfer, put=set_ChunkedTransfer))  ChunkedTransfer;

 int32_t __declspec(property(get=get_RedirectLimit, put=set_RedirectLimit))  RedirectLimit;

 int32_t __declspec(property(get=get_RetryCount, put=set_RetryCount))  RetryCount;

 ::StringW __declspec(property(get=get_BundleName, put=set_BundleName))  BundleName;

 ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode __declspec(property(get=get_AssetLoadMode, put=set_AssetLoadMode))  AssetLoadMode;

 int64_t __declspec(property(get=get_BundleSize, put=set_BundleSize))  BundleSize;

 bool __declspec(property(get=get_UseCrcForCachedBundle, put=set_UseCrcForCachedBundle))  UseCrcForCachedBundle;

 bool __declspec(property(get=get_UseUnityWebRequestForLocalBundles, put=set_UseUnityWebRequestForLocalBundles))  UseUnityWebRequestForLocalBundles;

 bool __declspec(property(get=get_ClearOtherCachedVersionsWhenLoaded, put=set_ClearOtherCachedVersionsWhenLoaded))  ClearOtherCachedVersionsWhenLoaded;


// Methods

/// @brief Method get_Hash addr 0x2a3bf0c size 0x8 virtual false final false
 ::StringW get_Hash() ;

/// @brief Method set_Hash addr 0x2a3bf14 size 0x8 virtual false final false
 void set_Hash(::StringW value) ;

/// @brief Method get_Crc addr 0x2a3bf1c size 0x8 virtual false final false
 uint32_t get_Crc() ;

/// @brief Method set_Crc addr 0x2a3bf24 size 0x8 virtual false final false
 void set_Crc(uint32_t value) ;

/// @brief Method get_Timeout addr 0x2a3bf2c size 0x8 virtual false final false
 int32_t get_Timeout() ;

/// @brief Method set_Timeout addr 0x2a3bf34 size 0x8 virtual false final false
 void set_Timeout(int32_t value) ;

/// @brief Method get_ChunkedTransfer addr 0x2a3bf3c size 0x8 virtual false final false
 bool get_ChunkedTransfer() ;

/// @brief Method set_ChunkedTransfer addr 0x2a3bf44 size 0xc virtual false final false
 void set_ChunkedTransfer(bool value) ;

/// @brief Method get_RedirectLimit addr 0x2a3bf50 size 0x8 virtual false final false
 int32_t get_RedirectLimit() ;

/// @brief Method set_RedirectLimit addr 0x2a3bf58 size 0x8 virtual false final false
 void set_RedirectLimit(int32_t value) ;

/// @brief Method get_RetryCount addr 0x2a3bf60 size 0x8 virtual false final false
 int32_t get_RetryCount() ;

/// @brief Method set_RetryCount addr 0x2a3bf68 size 0x8 virtual false final false
 void set_RetryCount(int32_t value) ;

/// @brief Method get_BundleName addr 0x2a3bf70 size 0x8 virtual false final false
 ::StringW get_BundleName() ;

/// @brief Method set_BundleName addr 0x2a3bf78 size 0x8 virtual false final false
 void set_BundleName(::StringW value) ;

/// @brief Method get_AssetLoadMode addr 0x2a3bf80 size 0x8 virtual false final false
 ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode get_AssetLoadMode() ;

/// @brief Method set_AssetLoadMode addr 0x2a3bf88 size 0x8 virtual false final false
 void set_AssetLoadMode(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode value) ;

/// @brief Method get_BundleSize addr 0x2a3bf90 size 0x8 virtual false final false
 int64_t get_BundleSize() ;

/// @brief Method set_BundleSize addr 0x2a3bf98 size 0x8 virtual false final false
 void set_BundleSize(int64_t value) ;

/// @brief Method get_UseCrcForCachedBundle addr 0x2a3bfa0 size 0x8 virtual false final false
 bool get_UseCrcForCachedBundle() ;

/// @brief Method set_UseCrcForCachedBundle addr 0x2a3bfa8 size 0xc virtual false final false
 void set_UseCrcForCachedBundle(bool value) ;

/// @brief Method get_UseUnityWebRequestForLocalBundles addr 0x2a3bfb4 size 0x8 virtual false final false
 bool get_UseUnityWebRequestForLocalBundles() ;

/// @brief Method set_UseUnityWebRequestForLocalBundles addr 0x2a3bfbc size 0xc virtual false final false
 void set_UseUnityWebRequestForLocalBundles(bool value) ;

/// @brief Method get_ClearOtherCachedVersionsWhenLoaded addr 0x2a3bfc8 size 0x8 virtual false final false
 bool get_ClearOtherCachedVersionsWhenLoaded() ;

/// @brief Method set_ClearOtherCachedVersionsWhenLoaded addr 0x2a3bfd0 size 0xc virtual false final false
 void set_ClearOtherCachedVersionsWhenLoaded(bool value) ;

/// @brief Method ComputeSize addr 0x2a3bfdc size 0x148 virtual true final false
 int64_t ComputeSize(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::UnityEngine::ResourceManagement::ResourceManager resourceManager) ;

// Ctor Parameters []
explicit AssetBundleRequestOptions() ;

/// @brief Method .ctor addr 0x2a3c124 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleRequestOptions");
