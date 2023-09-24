#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceTexture2D;
}
// Type: UnityEngine.AddressableAssets::AssetReferenceTexture2D
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14363)), TypeDefinitionIndex(TypeDefinitionIndex(10015)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14363), inst: 385 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14366))
// CS Name: UnityEngine.AddressableAssets.AssetReferenceTexture2D
class CORDL_TYPE AssetReferenceTexture2D : public UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Texture2D> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AssetReferenceTexture2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture2D", modifiers: " const&", def_value: None }]
constexpr AssetReferenceTexture2D(AssetReferenceTexture2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture2D", modifiers: "&&", def_value: None }]
constexpr AssetReferenceTexture2D(AssetReferenceTexture2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReferenceTexture2D(void* ptr) noexcept : UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Texture2D>(ptr) {
}


  constexpr AssetReferenceTexture2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReferenceTexture2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReferenceTexture2D& operator=(AssetReferenceTexture2D&& o) noexcept = default;
  constexpr AssetReferenceTexture2D& operator=(AssetReferenceTexture2D const& o) noexcept = default;
                


// Methods

static UnityEngine::AddressableAssets::AssetReferenceTexture2D New_ctor(::StringW guid) ;

/// @brief Method .ctor addr 0x2892204 size 0x58 virtual false final false
 void _ctor(::StringW guid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::AssetReferenceTexture2D);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReferenceTexture2D, "UnityEngine.AddressableAssets", "AssetReferenceTexture2D");
