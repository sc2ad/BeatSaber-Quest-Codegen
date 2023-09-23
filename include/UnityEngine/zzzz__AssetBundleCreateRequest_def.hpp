#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
namespace UnityEngine {
class AssetBundle;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundleCreateRequest;
}
// Type: UnityEngine::AssetBundleCreateRequest
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10143))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15926))
// CS Name: UnityEngine.AssetBundleCreateRequest
class CORDL_TYPE AssetBundleCreateRequest : public UnityEngine::AsyncOperation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AssetBundleCreateRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest", modifiers: " const&", def_value: None }]
constexpr AssetBundleCreateRequest(AssetBundleCreateRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequest", modifiers: "&&", def_value: None }]
constexpr AssetBundleCreateRequest(AssetBundleCreateRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetBundleCreateRequest(void* ptr) noexcept : UnityEngine::AsyncOperation(ptr) {
}


  constexpr AssetBundleCreateRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetBundleCreateRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetBundleCreateRequest& operator=(AssetBundleCreateRequest&& o) noexcept = default;
  constexpr AssetBundleCreateRequest& operator=(AssetBundleCreateRequest const& o) noexcept = default;
                


// Properties

 UnityEngine::AssetBundle __declspec(property(get=get_assetBundle))  assetBundle;


// Methods

/// @brief Method get_assetBundle addr 0x2b243e8 size 0x3c virtual false final false
 UnityEngine::AssetBundle get_assetBundle() ;

// Ctor Parameters []
explicit AssetBundleCreateRequest() ;

/// @brief Method .ctor addr 0x2b24424 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AssetBundleCreateRequest);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundleCreateRequest, "UnityEngine", "AssetBundleCreateRequest");
