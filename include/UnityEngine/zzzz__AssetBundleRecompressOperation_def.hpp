#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
// Forward declare root types
namespace UnityEngine {
class AssetBundleRecompressOperation;
}
// Type: UnityEngine::AssetBundleRecompressOperation
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10143))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15924))
// CS Name: UnityEngine.AssetBundleRecompressOperation
class CORDL_TYPE AssetBundleRecompressOperation : public UnityEngine::AsyncOperation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AssetBundleRecompressOperation() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRecompressOperation", modifiers: " const&", def_value: None }]
constexpr AssetBundleRecompressOperation(AssetBundleRecompressOperation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRecompressOperation", modifiers: "&&", def_value: None }]
constexpr AssetBundleRecompressOperation(AssetBundleRecompressOperation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetBundleRecompressOperation(void* ptr) noexcept : UnityEngine::AsyncOperation(ptr) {
}


  constexpr AssetBundleRecompressOperation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetBundleRecompressOperation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetBundleRecompressOperation& operator=(AssetBundleRecompressOperation&& o) noexcept = default;
  constexpr AssetBundleRecompressOperation& operator=(AssetBundleRecompressOperation const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AssetBundleRecompressOperation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundleRecompressOperation, "UnityEngine", "AssetBundleRecompressOperation");
