#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace HoudiniEngineUnity {
class HEU_BaseSync;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetUpdater;
}
// Type: HoudiniEngineUnity::HEU_AssetUpdater
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9559))
// CS Name: HoudiniEngineUnity.HEU_AssetUpdater
class CORDL_TYPE HEU_AssetUpdater : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_AssetUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetUpdater", modifiers: " const&", def_value: None }]
constexpr HEU_AssetUpdater(HEU_AssetUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetUpdater", modifiers: "&&", def_value: None }]
constexpr HEU_AssetUpdater(HEU_AssetUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_AssetUpdater(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_AssetUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_AssetUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_AssetUpdater& operator=(HEU_AssetUpdater&& o) noexcept = default;
  constexpr HEU_AssetUpdater& operator=(HEU_AssetUpdater const& o) noexcept = default;
                


// Methods

/// @brief Method OnBeforeAssemblyReload addr 0x1fdd1ec size 0x50 virtual false final false
static void OnBeforeAssemblyReload() ;

/// @brief Method Update addr 0x1fdd23c size 0x4 virtual false final false
static void Update() ;

/// @brief Method AddAssetForUpdate addr 0x1fdd240 size 0x4 virtual false final false
static void AddAssetForUpdate(HoudiniEngineUnity::HEU_HoudiniAsset asset) ;

/// @brief Method RemoveAsset addr 0x1fdd244 size 0x4 virtual false final false
static void RemoveAsset(HoudiniEngineUnity::HEU_HoudiniAsset asset) ;

/// @brief Method AddNodeSyncForUpdate addr 0x1fdd248 size 0x4 virtual false final false
static void AddNodeSyncForUpdate(HoudiniEngineUnity::HEU_BaseSync nodeSync) ;

/// @brief Method RemoveNodeSync addr 0x1fdd24c size 0x4 virtual false final false
static void RemoveNodeSync(HoudiniEngineUnity::HEU_BaseSync nodeSync) ;

/// @brief Method OnPrefabInstanceUpdate addr 0x1fdd250 size 0x4 virtual false final false
static void OnPrefabInstanceUpdate(UnityEngine::GameObject instance) ;

static HoudiniEngineUnity::HEU_AssetUpdater New_ctor() ;

/// @brief Method .ctor addr 0x1fdd254 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_AssetUpdater);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_AssetUpdater, "HoudiniEngineUnity", "HEU_AssetUpdater");
