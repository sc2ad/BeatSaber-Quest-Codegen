#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceGameObject;
}
// Type: UnityEngine.AddressableAssets::AssetReferenceGameObject
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14363)), TypeDefinitionIndex(TypeDefinitionIndex(10138)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14363), inst: 298 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14364))
// CS Name: UnityEngine.AddressableAssets.AssetReferenceGameObject
class CORDL_TYPE AssetReferenceGameObject : public UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::GameObject> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AssetReferenceGameObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceGameObject", modifiers: " const&", def_value: None }]
constexpr AssetReferenceGameObject(AssetReferenceGameObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceGameObject", modifiers: "&&", def_value: None }]
constexpr AssetReferenceGameObject(AssetReferenceGameObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReferenceGameObject(void* ptr) noexcept : UnityEngine::AddressableAssets::AssetReferenceT_1<UnityEngine::GameObject>(ptr) {
}


  constexpr AssetReferenceGameObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReferenceGameObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReferenceGameObject& operator=(AssetReferenceGameObject&& o) noexcept = default;
  constexpr AssetReferenceGameObject& operator=(AssetReferenceGameObject const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "guid", ty: "::StringW", modifiers: "", def_value: None }]
explicit AssetReferenceGameObject(::StringW guid) ;

/// @brief Method .ctor addr 0x2892154 size 0x58 virtual false final false
 void _ctor(::StringW guid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(UnityEngine::AddressableAssets::AssetReferenceGameObject);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AddressableAssets::AssetReferenceGameObject, "UnityEngine.AddressableAssets", "AssetReferenceGameObject");
