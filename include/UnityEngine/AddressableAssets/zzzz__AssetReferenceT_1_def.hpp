#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
template<typename TObject>
class AssetReferenceT_1;
}
namespace UnityEngine::AddressableAssets {
template<::cordl_internals::il2cpp_reference_type TObject>
class AssetReferenceT_1<TObject>;
}
// Type: UnityEngine.AddressableAssets::AssetReferenceT`1
// Type: UnityEngine.AddressableAssets::AssetReferenceT`1
namespace UnityEngine::AddressableAssets {
// cpp template
template<::cordl_internals::il2cpp_reference_type TObject>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14363)), TypeDefinitionIndex(TypeDefinitionIndex(14370))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14363), inst: 2 })
// CS Name: UnityEngine.AddressableAssets.AssetReferenceT`1
class CORDL_TYPE AssetReferenceT_1<TObject> : public UnityEngine::AddressableAssets::AssetReference {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AssetReferenceT_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceT_1", modifiers: " const&", def_value: None }]
constexpr AssetReferenceT_1(AssetReferenceT_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceT_1", modifiers: "&&", def_value: None }]
constexpr AssetReferenceT_1(AssetReferenceT_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetReferenceT_1(void* ptr) noexcept : UnityEngine::AddressableAssets::AssetReference(ptr) {
}


  constexpr AssetReferenceT_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetReferenceT_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetReferenceT_1& operator=(AssetReferenceT_1&& o) noexcept = default;
  constexpr AssetReferenceT_1& operator=(AssetReferenceT_1 const& o) noexcept = default;
                


// Methods

static UnityEngine::AddressableAssets::AssetReferenceT_1<TObject> New_ctor(::StringW guid) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW guid) ;

/// @brief Method LoadAsset addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAsset() ;

/// @brief Method LoadAssetAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync() ;

/// @brief Method ValidateAsset addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ValidateAsset(UnityEngine::Object obj) ;

/// @brief Method ValidateAsset addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ValidateAsset(::StringW mainAssetPath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::AddressableAssets
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::AddressableAssets::AssetReferenceT_1, "UnityEngine.AddressableAssets", "AssetReferenceT`1");
