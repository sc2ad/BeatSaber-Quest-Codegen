#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider2;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::ISceneProvider2
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14287))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ISceneProvider2
class CORDL_TYPE ISceneProvider2 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider
constexpr operator  UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider() const noexcept;

~ISceneProvider2() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISceneProvider2(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ReleaseScene addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ReleaseScene(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider2, "UnityEngine.ResourceManagement.ResourceProviders", "ISceneProvider2");
