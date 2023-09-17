#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AssetBundleProvider;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::AssetBundleProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14294))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14275))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AssetBundleProvider
class CORDL_TYPE AssetBundleProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AssetBundleProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleProvider", modifiers: " const&", def_value: None }]
constexpr AssetBundleProvider(AssetBundleProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleProvider", modifiers: "&&", def_value: None }]
constexpr AssetBundleProvider(AssetBundleProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetBundleProvider(void* ptr) noexcept : ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase(ptr) {
}


  constexpr AssetBundleProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetBundleProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetBundleProvider& operator=(AssetBundleProvider&& o) noexcept = default;
  constexpr AssetBundleProvider& operator=(AssetBundleProvider const& o) noexcept = default;
                


// Methods

/// @brief Method WaitForAllUnloadingBundlesToComplete addr 0x2a3df34 size 0x4 virtual false final false
static void WaitForAllUnloadingBundlesToComplete() ;

/// @brief Method Provide addr 0x2a3df38 size 0x80 virtual true final false
 void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface) ;

/// @brief Method GetDefaultType addr 0x2a3dfb8 size 0x6c virtual true final false
 ::System::Type GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method Release addr 0x2a3e024 size 0x184 virtual true final false
 void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::bs_hook::Il2CppWrapperType asset) ;

// Ctor Parameters []
explicit AssetBundleProvider() ;

/// @brief Method .ctor addr 0x2a3e1a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleProvider, "UnityEngine.ResourceManagement.ResourceProviders", "AssetBundleProvider");
