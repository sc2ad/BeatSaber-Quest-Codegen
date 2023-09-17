#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct CachedAssetBundle;
}
namespace UnityEngine {
struct Hash128;
}
namespace UnityEngine {
struct Cache;
}
// Forward declare root types
namespace UnityEngine {
class Caching;
}
// Type: UnityEngine::Caching
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10085))
// CS Name: UnityEngine.Caching
class CORDL_TYPE Caching : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Caching() = default;

// Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: " const&", def_value: None }]
constexpr Caching(Caching const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: "&&", def_value: None }]
constexpr Caching(Caching&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Caching(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Caching& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Caching& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Caching& operator=(Caching&& o) noexcept = default;
  constexpr Caching& operator=(Caching const& o) noexcept = default;
                


// Properties

static bool __declspec(property(put=set_compressionEnabled))  compressionEnabled;

static bool __declspec(property(get=get_ready))  ready;

static ::UnityEngine::Cache __declspec(property(get=get_defaultCache))  defaultCache;

static ::UnityEngine::Cache __declspec(property(get=get_currentCacheForWriting, put=set_currentCacheForWriting))  currentCacheForWriting;


// Methods

/// @brief Method set_compressionEnabled addr 0x2b4e91c size 0x3c virtual false final false
static void set_compressionEnabled(bool value) ;

/// @brief Method get_ready addr 0x2b4e958 size 0x28 virtual false final false
static bool get_ready() ;

/// @brief Method ClearCachedVersion addr 0x2b4e980 size 0x84 virtual false final false
static bool ClearCachedVersion(::StringW assetBundleName, ::UnityEngine::Hash128 hash) ;

/// @brief Method ClearCachedVersionInternal addr 0x2b4ea04 size 0x54 virtual false final false
static bool ClearCachedVersionInternal(::StringW assetBundleName, ::UnityEngine::Hash128 hash) ;

/// @brief Method ClearOtherCachedVersions addr 0x2b4ea9c size 0x88 virtual false final false
static bool ClearOtherCachedVersions(::StringW assetBundleName, ::UnityEngine::Hash128 hash) ;

/// @brief Method ClearAllCachedVersions addr 0x2b4eb80 size 0x78 virtual false final false
static bool ClearAllCachedVersions(::StringW assetBundleName) ;

/// @brief Method ClearCachedVersions addr 0x2b4eb24 size 0x5c virtual false final false
static bool ClearCachedVersions(::StringW assetBundleName, ::UnityEngine::Hash128 hash, bool keepInputVersion) ;

/// @brief Method IsVersionCached addr 0x2b4ec4c size 0xa8 virtual false final false
static bool IsVersionCached(::UnityEngine::CachedAssetBundle cachedBundle) ;

/// @brief Method IsVersionCached addr 0x2b4ed08 size 0x5c virtual false final false
static bool IsVersionCached(::StringW url, ::StringW assetBundleName, ::UnityEngine::Hash128 hash) ;

/// @brief Method AddCache addr 0x2b4edb8 size 0x254 virtual false final false
static ::UnityEngine::Cache AddCache(::StringW cachePath) ;

/// @brief Method AddCache addr 0x2b4f094 size 0x5c virtual false final false
static ::UnityEngine::Cache AddCache(::StringW cachePath, bool isReadonly) ;

/// @brief Method GetCacheByPath addr 0x2b4f00c size 0x4c virtual false final false
static ::UnityEngine::Cache GetCacheByPath(::StringW cachePath) ;

/// @brief Method get_defaultCache addr 0x2b4f188 size 0x44 virtual false final false
static ::UnityEngine::Cache get_defaultCache() ;

/// @brief Method get_currentCacheForWriting addr 0x2b4f208 size 0x44 virtual false final false
static ::UnityEngine::Cache get_currentCacheForWriting() ;

/// @brief Method set_currentCacheForWriting addr 0x2b4f288 size 0x40 virtual false final false
static void set_currentCacheForWriting(::UnityEngine::Cache value) ;

/// @brief Method ClearCachedVersionInternal_Injected addr 0x2b4ea58 size 0x44 virtual false final false
static bool ClearCachedVersionInternal_Injected(::StringW assetBundleName, ByRef<::UnityEngine::Hash128> hash) ;

/// @brief Method ClearCachedVersions_Injected addr 0x2b4ebf8 size 0x54 virtual false final false
static bool ClearCachedVersions_Injected(::StringW assetBundleName, ByRef<::UnityEngine::Hash128> hash, bool keepInputVersion) ;

/// @brief Method IsVersionCached_Injected addr 0x2b4ed64 size 0x54 virtual false final false
static bool IsVersionCached_Injected(::StringW url, ::StringW assetBundleName, ByRef<::UnityEngine::Hash128> hash) ;

/// @brief Method AddCache_Injected addr 0x2b4f0f0 size 0x54 virtual false final false
static void AddCache_Injected(::StringW cachePath, bool isReadonly, ByRef<::UnityEngine::Cache> ret) ;

/// @brief Method GetCacheByPath_Injected addr 0x2b4f144 size 0x44 virtual false final false
static void GetCacheByPath_Injected(::StringW cachePath, ByRef<::UnityEngine::Cache> ret) ;

/// @brief Method get_defaultCache_Injected addr 0x2b4f1cc size 0x3c virtual false final false
static void get_defaultCache_Injected(ByRef<::UnityEngine::Cache> ret) ;

/// @brief Method get_currentCacheForWriting_Injected addr 0x2b4f24c size 0x3c virtual false final false
static void get_currentCacheForWriting_Injected(ByRef<::UnityEngine::Cache> ret) ;

/// @brief Method set_currentCacheForWriting_Injected addr 0x2b4f2c8 size 0x3c virtual false final false
static void set_currentCacheForWriting_Injected(ByRef<::UnityEngine::Cache> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Caching);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Caching, "UnityEngine", "Caching");
