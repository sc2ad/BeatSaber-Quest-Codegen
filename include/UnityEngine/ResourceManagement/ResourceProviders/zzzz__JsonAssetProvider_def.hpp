#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__TextDataProvider_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class JsonAssetProvider;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::JsonAssetProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14300))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14289))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.JsonAssetProvider
class CORDL_TYPE JsonAssetProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~JsonAssetProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonAssetProvider", modifiers: " const&", def_value: None }]
constexpr JsonAssetProvider(JsonAssetProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JsonAssetProvider", modifiers: "&&", def_value: None }]
constexpr JsonAssetProvider(JsonAssetProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JsonAssetProvider(void* ptr) noexcept : ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider(ptr) {
}


  constexpr JsonAssetProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JsonAssetProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JsonAssetProvider& operator=(JsonAssetProvider&& o) noexcept = default;
  constexpr JsonAssetProvider& operator=(JsonAssetProvider const& o) noexcept = default;
                


// Methods

/// @brief Method Convert addr 0x2a3fdb8 size 0xc virtual true final false
 ::bs_hook::Il2CppWrapperType Convert(::System::Type type, ::StringW text) ;

// Ctor Parameters []
explicit JsonAssetProvider() ;

/// @brief Method .ctor addr 0x2a3fdc4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::JsonAssetProvider, "UnityEngine.ResourceManagement.ResourceProviders", "JsonAssetProvider");
