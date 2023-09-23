#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_TreePrototypeInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
namespace UnityEngine {
class TerrainData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HAPI_VolumeInfo;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace HoudiniEngineUnity {
struct HFLayerType;
}
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TerrainUtility;
}
// Type: HoudiniEngineUnity::HEU_TerrainUtility
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9823))
// CS Name: HoudiniEngineUnity.HEU_TerrainUtility
class CORDL_TYPE HEU_TerrainUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HEU_TerrainUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TerrainUtility", modifiers: " const&", def_value: None }]
constexpr HEU_TerrainUtility(HEU_TerrainUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_TerrainUtility", modifiers: "&&", def_value: None }]
constexpr HEU_TerrainUtility(HEU_TerrainUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_TerrainUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_TerrainUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_TerrainUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_TerrainUtility& operator=(HEU_TerrainUtility&& o) noexcept = default;
  constexpr HEU_TerrainUtility& operator=(HEU_TerrainUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateTerrainFromVolume addr 0x206a5bc size 0x9a4 virtual false final false
static bool GenerateTerrainFromVolume(HoudiniEngineUnity::HEU_SessionBase session, ByRef<HoudiniEngineUnity::HAPI_VolumeInfo> volumeInfo, int32_t geoID, int32_t partID, UnityEngine::GameObject gameObject, ByRef<UnityEngine::TerrainData> terrainData, ByRef<UnityEngine::Vector3> volumePositionOffset, ByRef<UnityEngine::Terrain> terrain, ::StringW bakedMaterialPath) ;

/// @brief Method SetTerrainMaterial addr 0x206af60 size 0x1d8 virtual false final false
static void SetTerrainMaterial(UnityEngine::Terrain terrain, ::StringW specifiedMaterialName, ::StringW bakedMaterialPath) ;

/// @brief Method GetDefaultTerrainShaderName addr 0x206b83c size 0xa0 virtual false final false
static ::StringW GetDefaultTerrainShaderName() ;

/// @brief Method GetDefaultTerrainMaterialPath addr 0x206b8dc size 0xa0 virtual false final false
static ::StringW GetDefaultTerrainMaterialPath() ;

/// @brief Method GetNormalizedHeightmapFromPartWithMinMax addr 0x206b138 size 0x604 virtual false final false
static ::ArrayW<float_t> GetNormalizedHeightmapFromPartWithMinMax(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, int32_t heightMapWidth, int32_t heightMapHeight, ByRef<float_t> minHeight, ByRef<float_t> maxHeight, ByRef<float_t> heightRange, bool bUseHeightRangeOverride) ;

/// @brief Method GetDetailMapFromPart addr 0x206bb7c size 0x2fc virtual false final false
static /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ GetDetailMapFromPart(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ByRef<int32_t> detailResolution) ;

/// @brief Method GetHeightmapFromPart addr 0x206b97c size 0x184 virtual false final false
static bool GetHeightmapFromPart(HoudiniEngineUnity::HEU_SessionBase session, int32_t xLength, int32_t yLength, int32_t geoID, int32_t partID, ByRef<::ArrayW<float_t>> heightValues, ByRef<float_t> minHeight, ByRef<float_t> maxHeight) ;

/// @brief Method ConvertHeightMapHoudiniToUnity addr 0x206b73c size 0x100 virtual false final false
static /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ ConvertHeightMapHoudiniToUnity(int32_t heightMapWidth, int32_t heightMapHeight, ::ArrayW<float_t> heightValues) ;

/// @brief Method ConvertHeightFieldToAlphaMap addr 0x206be78 size 0x19c virtual false final false
static /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ ConvertHeightFieldToAlphaMap(int32_t heightMapWidth, int32_t heightMapHeight, System::Collections::Generic::List_1<::ArrayW<float_t>> heightFields) ;

/// @brief Method AppendConvertedHeightFieldToAlphaMap addr 0x206c014 size 0x2b4 virtual false final false
static /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ AppendConvertedHeightFieldToAlphaMap(int32_t heightMapWidth, int32_t heightMapHeight, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ existingAlphaMaps, System::Collections::Generic::List_1<::ArrayW<float_t>> heightFields, ::ArrayW<float_t> strengths, System::Collections::Generic::List_1<int32_t> alphaMapIndices) ;

/// @brief Method GetVolumePositionOffset addr 0x206c2c8 size 0xc0 virtual false final false
static UnityEngine::Vector3 GetVolumePositionOffset(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::Vector3 volumePosition, float_t terrainSizeX, float_t heightMapSize, int32_t mapWidth, int32_t mapHeight, float_t minHeight) ;

/// @brief Method GetTreePrototypeInfosFromPart addr 0x206c388 size 0x2c0 virtual false final false
static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo> GetTreePrototypeInfosFromPart(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID) ;

/// @brief Method PopulateScatterTrees addr 0x206c648 size 0xc84 virtual false final false
static void PopulateScatterTrees(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, int32_t pointCount, ByRef<HoudiniEngineUnity::HEU_VolumeScatterTrees> scatterTrees, bool throwWarningIfNoTileAttribute) ;

/// @brief Method ApplyScatterTrees addr 0x206d2cc size 0x4f0 virtual false final false
static void ApplyScatterTrees(UnityEngine::TerrainData terrainData, HoudiniEngineUnity::HEU_VolumeScatterTrees scatterTrees, int32_t tileIndex) ;

/// @brief Method PopulateDetailPrototype addr 0x206d7bc size 0x3f0 virtual false final false
static void PopulateDetailPrototype(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ByRef<HoudiniEngineUnity::HEU_DetailPrototype> detailPrototype) ;

/// @brief Method PopulateDetailProperties addr 0x206dbac size 0x31c virtual false final false
static void PopulateDetailProperties(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ByRef<HoudiniEngineUnity::HEU_DetailProperties> detailProperties) ;

/// @brief Method ApplyDetailLayers addr 0x206dec8 size 0x4cc virtual false final false
static void ApplyDetailLayers(UnityEngine::Terrain terrain, UnityEngine::TerrainData terrainData, HoudiniEngineUnity::HEU_DetailProperties detailProperties, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_DetailPrototype> heuDetailPrototypes, System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */> convertedDetailMaps) ;

/// @brief Method GetTerrainLayerIndexByName addr 0x206e394 size 0x164 virtual false final false
static int32_t GetTerrainLayerIndexByName(::StringW layerName, ::ArrayW<UnityEngine::TerrainLayer> terrainLayers) ;

/// @brief Method GetTerrainLayerIndex addr 0x206e4f8 size 0xc0 virtual false final false
static int32_t GetTerrainLayerIndex(UnityEngine::TerrainLayer layer, ::ArrayW<UnityEngine::TerrainLayer> terrainLayers) ;

/// @brief Method VolumeLayerHasAttributes addr 0x206e5b8 size 0x350 virtual false final false
static bool VolumeLayerHasAttributes(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID) ;

/// @brief Method GetHeightfieldLayerType addr 0x206e908 size 0x148 virtual false final false
static HoudiniEngineUnity::HFLayerType GetHeightfieldLayerType(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW volumeName) ;

/// @brief Method GetHeightRangeFromHeightfield addr 0x206bb00 size 0x7c virtual false final false
static float_t GetHeightRangeFromHeightfield(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID) ;

/// @brief Method GetTerrainDataExportPathFromHeightfieldAttribute addr 0x206ea50 size 0xd8 virtual false final false
static ::StringW GetTerrainDataExportPathFromHeightfieldAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID) ;

/// @brief Method ResampleData addr 0x2059280 size 0x350 virtual false final false
static ::ArrayW<float_t> ResampleData(::ArrayW<float_t> data, int32_t oldWidth, int32_t oldHeight, int32_t newWidth, int32_t newHeight) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_TerrainUtility);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_TerrainUtility, "HoudiniEngineUnity", "HEU_TerrainUtility");
