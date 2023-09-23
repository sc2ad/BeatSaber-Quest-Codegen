#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundle;
}
// Type: UnityEngine::AssetBundle
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15923))
// CS Name: UnityEngine.AssetBundle
class CORDL_TYPE AssetBundle : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AssetBundle() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: " const&", def_value: None }]
constexpr AssetBundle(AssetBundle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "&&", def_value: None }]
constexpr AssetBundle(AssetBundle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetBundle(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr AssetBundle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetBundle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetBundle& operator=(AssetBundle&& o) noexcept = default;
  constexpr AssetBundle& operator=(AssetBundle const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit AssetBundle() ;

/// @brief Method .ctor addr 0x2b23a98 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method UnloadAllAssetBundles addr 0x2b23af0 size 0x3c virtual false final false
static void UnloadAllAssetBundles(bool unloadAllObjects) ;

/// @brief Method LoadFromFileAsync_Internal addr 0x2b23b2c size 0x54 virtual false final false
static UnityEngine::AssetBundleCreateRequest LoadFromFileAsync_Internal(::StringW path, uint32_t crc, uint64_t offset) ;

/// @brief Method LoadFromFileAsync addr 0x2b23b80 size 0x44 virtual false final false
static UnityEngine::AssetBundleCreateRequest LoadFromFileAsync(::StringW path) ;

/// @brief Method LoadFromFileAsync addr 0x2b23bc4 size 0x48 virtual false final false
static UnityEngine::AssetBundleCreateRequest LoadFromFileAsync(::StringW path, uint32_t crc) ;

/// @brief Method LoadFromFile_Internal addr 0x2b23c0c size 0x54 virtual false final false
static UnityEngine::AssetBundle LoadFromFile_Internal(::StringW path, uint32_t crc, uint64_t offset) ;

/// @brief Method LoadFromFile addr 0x2b23c60 size 0x44 virtual false final false
static UnityEngine::AssetBundle LoadFromFile(::StringW path) ;

/// @brief Method LoadAsset addr 0x2b23ca4 size 0x8c virtual false final false
 UnityEngine::Object LoadAsset(::StringW name) ;

/// @brief Method LoadAsset addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T LoadAsset(::StringW name) ;

/// @brief Method LoadAsset addr 0x2b23d30 size 0x10c virtual false final false
 UnityEngine::Object LoadAsset(::StringW name, System::Type type) ;

/// @brief Method LoadAsset_Internal addr 0x2b23e3c size 0x54 virtual false final false
 UnityEngine::Object LoadAsset_Internal(::StringW name, System::Type type) ;

/// @brief Method LoadAssetAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 UnityEngine::AssetBundleRequest LoadAssetAsync(::StringW name) ;

/// @brief Method LoadAssetAsync addr 0x2b23e90 size 0x10c virtual false final false
 UnityEngine::AssetBundleRequest LoadAssetAsync(::StringW name, System::Type type) ;

/// @brief Method LoadAssetWithSubAssetsAsync addr 0x2b23ff0 size 0x10c virtual false final false
 UnityEngine::AssetBundleRequest LoadAssetWithSubAssetsAsync(::StringW name, System::Type type) ;

/// @brief Method LoadAllAssetsAsync addr 0x2b24150 size 0x84 virtual false final false
 UnityEngine::AssetBundleRequest LoadAllAssetsAsync() ;

/// @brief Method LoadAllAssetsAsync addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 UnityEngine::AssetBundleRequest LoadAllAssetsAsync() ;

/// @brief Method LoadAllAssetsAsync addr 0x2b241d4 size 0xcc virtual false final false
 UnityEngine::AssetBundleRequest LoadAllAssetsAsync(System::Type type) ;

/// @brief Method LoadAssetAsync_Internal addr 0x2b23f9c size 0x54 virtual false final false
 UnityEngine::AssetBundleRequest LoadAssetAsync_Internal(::StringW name, System::Type type) ;

/// @brief Method Unload addr 0x2b242a0 size 0x44 virtual false final false
 void Unload(bool unloadAllLoadedObjects) ;

/// @brief Method GetAllAssetNames addr 0x2b242e4 size 0x3c virtual false final false
 ::ArrayW<::StringW> GetAllAssetNames() ;

/// @brief Method GetAllScenePaths addr 0x2b24320 size 0x3c virtual false final false
 ::ArrayW<::StringW> GetAllScenePaths() ;

/// @brief Method LoadAssetWithSubAssetsAsync_Internal addr 0x2b240fc size 0x54 virtual false final false
 UnityEngine::AssetBundleRequest LoadAssetWithSubAssetsAsync_Internal(::StringW name, System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AssetBundle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundle, "UnityEngine", "AssetBundle");
