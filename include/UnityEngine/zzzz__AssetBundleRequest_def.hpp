#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleRequest;
}
// Type: UnityEngine::AssetBundleRequest
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15925))
// CS Name: UnityEngine.AssetBundleRequest
class CORDL_TYPE AssetBundleRequest : public UnityEngine::ResourceRequest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AssetBundleRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: " const&", def_value: None }]
constexpr AssetBundleRequest(AssetBundleRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequest", modifiers: "&&", def_value: None }]
constexpr AssetBundleRequest(AssetBundleRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetBundleRequest(void* ptr) noexcept : UnityEngine::ResourceRequest(ptr) {
}


  constexpr AssetBundleRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetBundleRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetBundleRequest& operator=(AssetBundleRequest&& o) noexcept = default;
  constexpr AssetBundleRequest& operator=(AssetBundleRequest const& o) noexcept = default;
                


// Properties

 UnityEngine::Object __declspec(property(get=get_asset))  asset;

 ::ArrayW<UnityEngine::Object> __declspec(property(get=get_allAssets))  allAssets;


// Methods

/// @brief Method GetResult addr 0x2b2435c size 0x3c virtual true final false
 UnityEngine::Object GetResult() ;

/// @brief Method get_asset addr 0x2b24398 size 0xc virtual false final false
 UnityEngine::Object get_asset() ;

/// @brief Method get_allAssets addr 0x2b243a4 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Object> get_allAssets() ;

static UnityEngine::AssetBundleRequest New_ctor() ;

/// @brief Method .ctor addr 0x2b243e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AssetBundleRequest);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundleRequest, "UnityEngine", "AssetBundleRequest");
