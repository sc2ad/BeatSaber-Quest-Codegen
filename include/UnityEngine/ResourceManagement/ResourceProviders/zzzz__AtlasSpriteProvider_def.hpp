#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AtlasSpriteProvider;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::AtlasSpriteProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14294))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14276))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.AtlasSpriteProvider
class CORDL_TYPE AtlasSpriteProvider : public UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AtlasSpriteProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "AtlasSpriteProvider", modifiers: " const&", def_value: None }]
constexpr AtlasSpriteProvider(AtlasSpriteProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AtlasSpriteProvider", modifiers: "&&", def_value: None }]
constexpr AtlasSpriteProvider(AtlasSpriteProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AtlasSpriteProvider(void* ptr) noexcept : UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase(ptr) {
}


  constexpr AtlasSpriteProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AtlasSpriteProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AtlasSpriteProvider& operator=(AtlasSpriteProvider&& o) noexcept = default;
  constexpr AtlasSpriteProvider& operator=(AtlasSpriteProvider const& o) noexcept = default;
                


// Methods

/// @brief Method Provide addr 0x2a3e1b8 size 0x34c virtual true final false
 void Provide(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface) ;

// Ctor Parameters []
explicit AtlasSpriteProvider() ;

/// @brief Method .ctor addr 0x2a3e504 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider, "UnityEngine.ResourceManagement.ResourceProviders", "AtlasSpriteProvider");
