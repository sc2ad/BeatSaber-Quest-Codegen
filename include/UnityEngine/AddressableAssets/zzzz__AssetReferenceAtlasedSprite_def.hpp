#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceAtlasedSprite;
}
// Type: UnityEngine.AddressableAssets::AssetReferenceAtlasedSprite
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14363)), TypeDefinitionIndex(TypeDefinitionIndex(10227)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14363), inst: 752 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14369))
// CS Name: UnityEngine.AddressableAssets.AssetReferenceAtlasedSprite
class CORDL_TYPE AssetReferenceAtlasedSprite : public UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Sprite> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AssetReferenceAtlasedSprite() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceAtlasedSprite", modifiers: " const&", def_value: None }]
constexpr AssetReferenceAtlasedSprite(AssetReferenceAtlasedSprite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceAtlasedSprite", modifiers: "&&", def_value: None }]
constexpr AssetReferenceAtlasedSprite(AssetReferenceAtlasedSprite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReferenceAtlasedSprite(void* ptr) noexcept : UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Sprite>(ptr) {
}


  constexpr AssetReferenceAtlasedSprite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReferenceAtlasedSprite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReferenceAtlasedSprite& operator=(AssetReferenceAtlasedSprite&& o) noexcept = default;
  constexpr AssetReferenceAtlasedSprite& operator=(AssetReferenceAtlasedSprite const& o) noexcept = default;
                


// Methods

static UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite New_ctor(::StringW guid) ;

/// @brief Method .ctor addr 0x2892314 size 0x58 virtual false final false
 void _ctor(::StringW guid) ;

/// @brief Method ValidateAsset addr 0x289236c size 0x78 virtual true final false
 bool ValidateAsset(UnityEngine::Object obj) ;

/// @brief Method ValidateAsset addr 0x28923e4 size 0x8 virtual true final false
 bool ValidateAsset(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReferenceAtlasedSprite, "UnityEngine.AddressableAssets", "AssetReferenceAtlasedSprite");
