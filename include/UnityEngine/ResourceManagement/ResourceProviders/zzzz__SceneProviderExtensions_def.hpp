#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ISceneProvider;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class SceneProviderExtensions;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::SceneProviderExtensions
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14288))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.SceneProviderExtensions
class CORDL_TYPE SceneProviderExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SceneProviderExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneProviderExtensions", modifiers: " const&", def_value: None }]
constexpr SceneProviderExtensions(SceneProviderExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneProviderExtensions", modifiers: "&&", def_value: None }]
constexpr SceneProviderExtensions(SceneProviderExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneProviderExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneProviderExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneProviderExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneProviderExtensions& operator=(SceneProviderExtensions&& o) noexcept = default;
  constexpr SceneProviderExtensions& operator=(SceneProviderExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method ReleaseScene addr 0x2a3fbc0 size 0x1f8 virtual false final false
static UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> ReleaseScene(UnityEngine::ResourceManagement::ResourceProviders::ISceneProvider provider, UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> sceneLoadHandle, UnityEngine::SceneManagement::UnloadSceneOptions unloadOptions) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::SceneProviderExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::SceneProviderExtensions, "UnityEngine.ResourceManagement.ResourceProviders", "SceneProviderExtensions");
