#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine {
class AssetBundle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IAssetBundleResource;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::IAssetBundleResource
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14271))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.IAssetBundleResource
class CORDL_TYPE IAssetBundleResource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAssetBundleResource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAssetBundleResource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetAssetBundle addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::AssetBundle GetAssetBundle() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::IAssetBundleResource, "UnityEngine.ResourceManagement.ResourceProviders", "IAssetBundleResource");
