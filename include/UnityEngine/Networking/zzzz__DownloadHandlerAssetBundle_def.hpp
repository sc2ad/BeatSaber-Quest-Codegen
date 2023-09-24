#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct CachedAssetBundle;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerAssetBundle;
}
// Type: UnityEngine.Networking::DownloadHandlerAssetBundle
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15984))
// CS Name: UnityEngine.Networking.DownloadHandlerAssetBundle
class CORDL_TYPE DownloadHandlerAssetBundle : public UnityEngine::Networking::DownloadHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DownloadHandlerAssetBundle() = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAssetBundle", modifiers: " const&", def_value: None }]
constexpr DownloadHandlerAssetBundle(DownloadHandlerAssetBundle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAssetBundle", modifiers: "&&", def_value: None }]
constexpr DownloadHandlerAssetBundle(DownloadHandlerAssetBundle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DownloadHandlerAssetBundle(void* ptr) noexcept : UnityEngine::Networking::DownloadHandler(ptr) {
}


  constexpr DownloadHandlerAssetBundle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DownloadHandlerAssetBundle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DownloadHandlerAssetBundle& operator=(DownloadHandlerAssetBundle&& o) noexcept = default;
  constexpr DownloadHandlerAssetBundle& operator=(DownloadHandlerAssetBundle const& o) noexcept = default;
                


// Properties

 UnityEngine::AssetBundle __declspec(property(get=get_assetBundle))  assetBundle;

 bool __declspec(property(get=get_autoLoadAssetBundle, put=set_autoLoadAssetBundle))  autoLoadAssetBundle;

 bool __declspec(property(get=get_isDownloadComplete))  isDownloadComplete;


// Methods

/// @brief Method Create addr 0x2d336d0 size 0x54 virtual false final false
static ::cordl_internals::intptr_t Create(UnityEngine::Networking::DownloadHandlerAssetBundle obj, ::StringW url, uint32_t crc) ;

/// @brief Method CreateCached addr 0x2d33724 size 0x70 virtual false final false
static ::cordl_internals::intptr_t CreateCached(UnityEngine::Networking::DownloadHandlerAssetBundle obj, ::StringW url, ::StringW name, UnityEngine::Hash128 hash, uint32_t crc) ;

/// @brief Method InternalCreateAssetBundle addr 0x2d33800 size 0x5c virtual false final false
 void InternalCreateAssetBundle(::StringW url, uint32_t crc) ;

/// @brief Method InternalCreateAssetBundleCached addr 0x2d3385c size 0x18 virtual false final false
 void InternalCreateAssetBundleCached(::StringW url, ::StringW name, UnityEngine::Hash128 hash, uint32_t crc) ;

static UnityEngine::Networking::DownloadHandlerAssetBundle New_ctor(::StringW url, uint32_t crc) ;

/// @brief Method .ctor addr 0x2d3350c size 0x64 virtual false final false
 void _ctor(::StringW url, uint32_t crc) ;

static UnityEngine::Networking::DownloadHandlerAssetBundle New_ctor(::StringW url, UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc) ;

/// @brief Method .ctor addr 0x2d33660 size 0x70 virtual false final false
 void _ctor(::StringW url, UnityEngine::CachedAssetBundle cachedBundle, uint32_t crc) ;

/// @brief Method GetData addr 0x2d33874 size 0x50 virtual true final false
 ::ArrayW<uint8_t> GetData() ;

/// @brief Method GetText addr 0x2d338c4 size 0x50 virtual true final false
 ::StringW GetText() ;

/// @brief Method get_assetBundle addr 0x2d33914 size 0x3c virtual false final false
 UnityEngine::AssetBundle get_assetBundle() ;

/// @brief Method get_autoLoadAssetBundle addr 0x2d33950 size 0x3c virtual false final false
 bool get_autoLoadAssetBundle() ;

/// @brief Method set_autoLoadAssetBundle addr 0x2d3398c size 0x44 virtual false final false
 void set_autoLoadAssetBundle(bool value) ;

/// @brief Method get_isDownloadComplete addr 0x2d339d0 size 0x3c virtual false final false
 bool get_isDownloadComplete() ;

/// @brief Method CreateCached_Injected addr 0x2d33794 size 0x6c virtual false final false
static ::cordl_internals::intptr_t CreateCached_Injected(UnityEngine::Networking::DownloadHandlerAssetBundle obj, ::StringW url, ::StringW name, ByRef<UnityEngine::Hash128> hash, uint32_t crc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::DownloadHandlerAssetBundle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerAssetBundle, "UnityEngine.Networking", "DownloadHandlerAssetBundle");
