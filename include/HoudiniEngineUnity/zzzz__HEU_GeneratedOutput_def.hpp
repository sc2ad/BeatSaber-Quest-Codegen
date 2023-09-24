#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
class HEU_GeneratedOutputData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
// Type: HoudiniEngineUnity::HEU_GeneratedOutput
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9568))
// CS Name: HoudiniEngineUnity.HEU_GeneratedOutput
class CORDL_TYPE HEU_GeneratedOutput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_GeneratedOutput>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_GeneratedOutput>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_GeneratedOutput() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutput", modifiers: " const&", def_value: None }]
constexpr HEU_GeneratedOutput(HEU_GeneratedOutput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutput", modifiers: "&&", def_value: None }]
constexpr HEU_GeneratedOutput(HEU_GeneratedOutput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_GeneratedOutput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_GeneratedOutput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_GeneratedOutput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_GeneratedOutput& operator=(HEU_GeneratedOutput&& o) noexcept = default;
  constexpr HEU_GeneratedOutput& operator=(HEU_GeneratedOutput const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HEU_GeneratedOutputData __declspec(property(get=__get__outputData, put=__set__outputData))  _outputData;

constexpr void __set__outputData(HoudiniEngineUnity::HEU_GeneratedOutputData value) ;

constexpr HoudiniEngineUnity::HEU_GeneratedOutputData __get__outputData() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeneratedOutputData> __declspec(property(get=__get__childOutputs, put=__set__childOutputs))  _childOutputs;

constexpr void __set__childOutputs(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeneratedOutputData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_GeneratedOutputData> __get__childOutputs() const;

 bool __declspec(property(get=__get_isInstancer, put=__set_isInstancer))  isInstancer;

constexpr void __set_isInstancer(bool value) ;

constexpr bool __get_isInstancer() const;


// Properties

 bool __declspec(property(get=get_IsInstancer, put=set_IsInstancer))  IsInstancer;


// Methods

/// @brief Method get_IsInstancer addr 0x1fe2494 size 0x8 virtual false final false
 bool get_IsInstancer() ;

/// @brief Method set_IsInstancer addr 0x1fe249c size 0xc virtual false final false
 void set_IsInstancer(bool value) ;

/// @brief Method ResetMaterialOverrides addr 0x1fe24a8 size 0x15c virtual false final false
static void ResetMaterialOverrides(HoudiniEngineUnity::HEU_GeneratedOutput output) ;

/// @brief Method ResetMaterialOverrides addr 0x1fe2658 size 0xac virtual false final false
static void ResetMaterialOverrides(HoudiniEngineUnity::HEU_GeneratedOutputData outputData) ;

/// @brief Method GetGeneratedMaterialsForGameObject addr 0x1fe2704 size 0x1ec virtual false final false
static ::ArrayW<UnityEngine::Material> GetGeneratedMaterialsForGameObject(HoudiniEngineUnity::HEU_GeneratedOutput output, UnityEngine::GameObject inGameObject) ;

/// @brief Method HasLODGroup addr 0x1fe2604 size 0x54 virtual false final false
static bool HasLODGroup(HoudiniEngineUnity::HEU_GeneratedOutput output) ;

/// @brief Method IsOutputUsingMaterial addr 0x1fe28f0 size 0x160 virtual false final false
static bool IsOutputUsingMaterial(UnityEngine::Material checkMaterial, HoudiniEngineUnity::HEU_GeneratedOutput output) ;

/// @brief Method IsOutputDataUsingMaterial addr 0x1fe2a50 size 0x1b4 virtual false final false
static bool IsOutputDataUsingMaterial(UnityEngine::Material checkMaterial, HoudiniEngineUnity::HEU_GeneratedOutputData outputData) ;

/// @brief Method ClearGeneratedMaterialReferences addr 0x1fe2c04 size 0x18 virtual false final false
static void ClearGeneratedMaterialReferences(HoudiniEngineUnity::HEU_GeneratedOutputData generatedOutputData) ;

/// @brief Method DestroyAllGeneratedColliders addr 0x1fe2c1c size 0x238 virtual false final false
static void DestroyAllGeneratedColliders(HoudiniEngineUnity::HEU_GeneratedOutputData outputData) ;

/// @brief Method DestroyGeneratedOutput addr 0x1fe2e54 size 0x180 virtual false final false
static void DestroyGeneratedOutput(HoudiniEngineUnity::HEU_GeneratedOutput generatedOutput) ;

/// @brief Method DestroyGeneratedOutputChildren addr 0x1fe2fd4 size 0x174 virtual false final false
static void DestroyGeneratedOutputChildren(HoudiniEngineUnity::HEU_GeneratedOutput generatedOutput) ;

/// @brief Method DestroyGeneratedOutputData addr 0x1fe3148 size 0x4c virtual false final false
static void DestroyGeneratedOutputData(HoudiniEngineUnity::HEU_GeneratedOutputData generatedOutputData, bool bDontDeletePersistantResources) ;

/// @brief Method ClearMaterialsNoLongerUsed addr 0x1fe3194 size 0x114 virtual false final false
static void ClearMaterialsNoLongerUsed(::ArrayW<UnityEngine::Material> materialsToCheck, ::ArrayW<UnityEngine::Material> materialsInUse) ;

/// @brief Method CopyMaterialOverrides addr 0x1fe32a8 size 0x290 virtual false final false
static void CopyMaterialOverrides(HoudiniEngineUnity::HEU_GeneratedOutputData sourceOutputData, HoudiniEngineUnity::HEU_GeneratedOutputData destOutputData) ;

/// @brief Method WriteOutputToAssetCache addr 0x1fe3538 size 0x5c virtual false final false
 void WriteOutputToAssetCache(UnityEngine::GameObject parentObject, ::StringW outputPath, bool bIsInstancer) ;

/// @brief Method BakeGameObjectComponents addr 0x1fe3594 size 0x128 virtual false final false
static void BakeGameObjectComponents(UnityEngine::GameObject sourceGO, UnityEngine::GameObject targetGO, ::StringW assetName, ::StringW outputPath, bool bIsInstancer) ;

/// @brief Method IsEquivalentTo addr 0x1fe36bc size 0x1a8 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_GeneratedOutput other) ;

static HoudiniEngineUnity::HEU_GeneratedOutput New_ctor() ;

/// @brief Method .ctor addr 0x1fda08c size 0xa8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_GeneratedOutput);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_GeneratedOutput, "HoudiniEngineUnity", "HEU_GeneratedOutput");
