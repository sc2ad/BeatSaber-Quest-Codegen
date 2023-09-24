#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::IInstanceProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14280))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.IInstanceProvider
class CORDL_TYPE IInstanceProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInstanceProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInstanceProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ProvideInstance addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::GameObject ProvideInstance(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<UnityEngine::GameObject> prefabHandle, UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters instantiateParameters) ;

/// @brief Method ReleaseInstance addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReleaseInstance(UnityEngine::ResourceManagement::ResourceManager resourceManager, UnityEngine::GameObject instance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider, "UnityEngine.ResourceManagement.ResourceProviders", "IInstanceProvider");
