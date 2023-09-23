#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceTexture;
}
// Type: UnityEngine.AddressableAssets::AssetReferenceTexture
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14363), inst: 384 }), TypeDefinitionIndex(TypeDefinitionIndex(10013)), TypeDefinitionIndex(TypeDefinitionIndex(14363))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14365))
// CS Name: UnityEngine.AddressableAssets.AssetReferenceTexture
class CORDL_TYPE AssetReferenceTexture : public UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Texture> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AssetReferenceTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture", modifiers: " const&", def_value: None }]
constexpr AssetReferenceTexture(AssetReferenceTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture", modifiers: "&&", def_value: None }]
constexpr AssetReferenceTexture(AssetReferenceTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReferenceTexture(void* ptr) noexcept : UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Texture>(ptr) {
}


  constexpr AssetReferenceTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReferenceTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReferenceTexture& operator=(AssetReferenceTexture&& o) noexcept = default;
  constexpr AssetReferenceTexture& operator=(AssetReferenceTexture const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssetReferenceTexture(::StringW guid) ;

/// @brief Method .ctor addr 0x28921ac size 0x58 virtual false final false
 void _ctor(::StringW guid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::AssetReferenceTexture);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReferenceTexture, "UnityEngine.AddressableAssets", "AssetReferenceTexture");
