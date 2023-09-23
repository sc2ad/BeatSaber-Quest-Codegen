#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceTexture3D;
}
// Type: UnityEngine.AddressableAssets::AssetReferenceTexture3D
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14363)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14363), inst: 753 }), TypeDefinitionIndex(TypeDefinitionIndex(10017))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14367))
// CS Name: UnityEngine.AddressableAssets.AssetReferenceTexture3D
class CORDL_TYPE AssetReferenceTexture3D : public UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Texture3D> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AssetReferenceTexture3D() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture3D", modifiers: " const&", def_value: None }]
constexpr AssetReferenceTexture3D(AssetReferenceTexture3D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceTexture3D", modifiers: "&&", def_value: None }]
constexpr AssetReferenceTexture3D(AssetReferenceTexture3D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReferenceTexture3D(void* ptr) noexcept : UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::Texture3D>(ptr) {
}


  constexpr AssetReferenceTexture3D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReferenceTexture3D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReferenceTexture3D& operator=(AssetReferenceTexture3D&& o) noexcept = default;
  constexpr AssetReferenceTexture3D& operator=(AssetReferenceTexture3D const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssetReferenceTexture3D(::StringW guid) ;

/// @brief Method .ctor addr 0x289225c size 0x58 virtual false final false
 void _ctor(::StringW guid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::AssetReferenceTexture3D);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReferenceTexture3D, "UnityEngine.AddressableAssets", "AssetReferenceTexture3D");
