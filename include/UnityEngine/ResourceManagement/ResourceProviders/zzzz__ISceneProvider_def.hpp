#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::ISceneProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14286))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider
class CORDL_TYPE ISceneProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISceneProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISceneProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ProvideScene addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ProvideScene(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, UnityEngine::SceneManagement::LoadSceneMode loadMode, bool activateOnLoad, int32_t priority) ;

/// @brief Method ReleaseScene addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ReleaseScene(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider, "UnityEngine.ResourceManagement.ResourceProviders", "ISceneProvider");
