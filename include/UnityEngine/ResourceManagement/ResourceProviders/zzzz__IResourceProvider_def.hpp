#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProviderBehaviourFlags;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::IResourceProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14284))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
class CORDL_TYPE IResourceProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IResourceProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IResourceProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_ProviderId))  ProviderId;

 UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags __declspec(property(get=get_BehaviourFlags))  BehaviourFlags;


// Methods

/// @brief Method get_ProviderId addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_ProviderId() ;

/// @brief Method GetDefaultType addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Type GetDefaultType(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method CanProvide addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanProvide(System::Type type, UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location) ;

/// @brief Method Provide addr 0x0 size 0xffffffffffffffff virtual true final false
 void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual true final false
 void Release(UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation location, ::bs_hook::Il2CppWrapperType asset) ;

/// @brief Method get_BehaviourFlags addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags get_BehaviourFlags() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider, "UnityEngine.ResourceManagement.ResourceProviders", "IResourceProvider");
