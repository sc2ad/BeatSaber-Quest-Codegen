#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceSprite;
}
// Type: UnityEngine.AddressableAssets::AssetReferenceSprite
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14363)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14363), inst: 752 }), TypeDefinitionIndex(TypeDefinitionIndex(10227))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14368))
// CS Name: UnityEngine.AddressableAssets.AssetReferenceSprite
class CORDL_TYPE AssetReferenceSprite : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Sprite> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AssetReferenceSprite() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceSprite", modifiers: " const&", def_value: None }]
constexpr AssetReferenceSprite(AssetReferenceSprite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceSprite", modifiers: "&&", def_value: None }]
constexpr AssetReferenceSprite(AssetReferenceSprite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReferenceSprite(void* ptr) noexcept : ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityEngine::Sprite>(ptr) {
}


  constexpr AssetReferenceSprite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReferenceSprite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReferenceSprite& operator=(AssetReferenceSprite&& o) noexcept = default;
  constexpr AssetReferenceSprite& operator=(AssetReferenceSprite const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssetReferenceSprite(::StringW guid) ;

/// @brief Method .ctor addr 0x28922b4 size 0x58 virtual false final false
 void _ctor(::StringW guid) ;

/// @brief Method ValidateAsset addr 0x289230c size 0x8 virtual true final false
 bool ValidateAsset(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceSprite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceSprite, "UnityEngine.AddressableAssets", "AssetReferenceSprite");
