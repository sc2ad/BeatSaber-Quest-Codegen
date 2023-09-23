#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_HoudiniAssetRoot;
}
// Type: HoudiniEngineUnity::HEU_HoudiniAssetRoot
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9581))
// CS Name: HoudiniEngineUnity.HEU_HoudiniAssetRoot
class CORDL_TYPE HEU_HoudiniAssetRoot : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_HoudiniAssetRoot() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAssetRoot", modifiers: " const&", def_value: None }]
constexpr HEU_HoudiniAssetRoot(HEU_HoudiniAssetRoot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_HoudiniAssetRoot", modifiers: "&&", def_value: None }]
constexpr HEU_HoudiniAssetRoot(HEU_HoudiniAssetRoot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_HoudiniAssetRoot(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HEU_HoudiniAssetRoot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_HoudiniAssetRoot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_HoudiniAssetRoot& operator=(HEU_HoudiniAssetRoot&& o) noexcept = default;
  constexpr HEU_HoudiniAssetRoot& operator=(HEU_HoudiniAssetRoot const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get__houdiniAsset, put=__set__houdiniAsset))  _houdiniAsset;

constexpr void __set__houdiniAsset(HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr HoudiniEngineUnity::HEU_HoudiniAsset __get__houdiniAsset() const;

 System::Collections::Generic::List_1<UnityEngine::GameObject> __declspec(property(get=__get__bakeTargets, put=__set__bakeTargets))  _bakeTargets;

constexpr void __set__bakeTargets(System::Collections::Generic::List_1<UnityEngine::GameObject> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::GameObject> __get__bakeTargets() const;


// Methods

/// @brief Method OnDestroy addr 0x1ff9c04 size 0x1c8 virtual false final false
 void OnDestroy() ;

/// @brief Method RemoveHoudiniEngineAssetData addr 0x1ff9dcc size 0xdc virtual false final false
 void RemoveHoudiniEngineAssetData() ;

/// @brief Method ClearHoudiniEngineReferences addr 0x1ff9ea8 size 0x74 virtual false final false
 void ClearHoudiniEngineReferences() ;

/// @brief Method DestroyRootComponent addr 0x1ff9f1c size 0x10 virtual false final false
static void DestroyRootComponent(HoudiniEngineUnity::HEU_HoudiniAssetRoot assetRoot) ;

/// @brief Method Reset addr 0x1ff9f2c size 0xe8 virtual false final false
 void Reset() ;

// Ctor Parameters []
explicit HEU_HoudiniAssetRoot() ;

/// @brief Method .ctor addr 0x1ffa014 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_HoudiniAssetRoot);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_HoudiniAssetRoot, "HoudiniEngineUnity", "HEU_HoudiniAssetRoot");
