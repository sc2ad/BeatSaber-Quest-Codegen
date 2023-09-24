#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class TerrainLayer;
}
namespace HoudiniEngineUnity {
class HEU_GeoNode;
}
namespace UnityEngine {
struct Vector2;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Color;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_VolumeLayer;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Texture2D;
}
namespace HoudiniEngineUnity {
class HEU_VolumeCachePreset;
}
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeCache;
}
// Type: HoudiniEngineUnity::HEU_VolumeCache
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9898))
// CS Name: HoudiniEngineUnity.HEU_VolumeCache
class CORDL_TYPE HEU_VolumeCache : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeCache>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeCache>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HEU_VolumeCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCache", modifiers: " const&", def_value: None }]
constexpr HEU_VolumeCache(HEU_VolumeCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeCache", modifiers: "&&", def_value: None }]
constexpr HEU_VolumeCache(HEU_VolumeCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_VolumeCache(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_VolumeCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_VolumeCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_VolumeCache& operator=(HEU_VolumeCache&& o) noexcept = default;
  constexpr HEU_VolumeCache& operator=(HEU_VolumeCache const& o) noexcept = default;
                


// Fields

 HoudiniEngineUnity::HEU_GeoNode __declspec(property(get=__get__ownerNode, put=__set__ownerNode))  _ownerNode;

constexpr void __set__ownerNode(HoudiniEngineUnity::HEU_GeoNode value) ;

constexpr HoudiniEngineUnity::HEU_GeoNode __get__ownerNode() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeLayer> __declspec(property(get=__get__layers, put=__set__layers))  _layers;

constexpr void __set__layers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeLayer> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeLayer> __get__layers() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeLayer> __declspec(property(get=__get__updatedLayers, put=__set__updatedLayers))  _updatedLayers;

constexpr void __set__updatedLayers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeLayer> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeLayer> __get__updatedLayers() const;

 int32_t __declspec(property(get=__get__tileIndex, put=__set__tileIndex))  _tileIndex;

constexpr void __set__tileIndex(int32_t value) ;

constexpr int32_t __get__tileIndex() const;

 bool __declspec(property(get=__get__isDirty, put=__set__isDirty))  _isDirty;

constexpr void __set__isDirty(bool value) ;

constexpr bool __get__isDirty() const;

 ::StringW __declspec(property(get=__get__geoName, put=__set__geoName))  _geoName;

constexpr void __set__geoName(::StringW value) ;

constexpr ::StringW __get__geoName() const;

 ::StringW __declspec(property(get=__get__objName, put=__set__objName))  _objName;

constexpr void __set__objName(::StringW value) ;

constexpr ::StringW __get__objName() const;

 bool __declspec(property(get=__get__uiExpanded, put=__set__uiExpanded))  _uiExpanded;

constexpr void __set__uiExpanded(bool value) ;

constexpr bool __get__uiExpanded() const;

 UnityEngine::TerrainData __declspec(property(get=__get__terrainData, put=__set__terrainData))  _terrainData;

constexpr void __set__terrainData(UnityEngine::TerrainData value) ;

constexpr UnityEngine::TerrainData __get__terrainData() const;

 HoudiniEngineUnity::HEU_VolumeScatterTrees __declspec(property(get=__get__scatterTrees, put=__set__scatterTrees))  _scatterTrees;

constexpr void __set__scatterTrees(HoudiniEngineUnity::HEU_VolumeScatterTrees value) ;

constexpr HoudiniEngineUnity::HEU_VolumeScatterTrees __get__scatterTrees() const;

 HoudiniEngineUnity::HEU_DetailProperties __declspec(property(get=__get__detailProperties, put=__set__detailProperties))  _detailProperties;

constexpr void __set__detailProperties(HoudiniEngineUnity::HEU_DetailProperties value) ;

constexpr HoudiniEngineUnity::HEU_DetailProperties __get__detailProperties() const;


// Properties

 bool __declspec(property(get=get_IsDirty, put=set_IsDirty))  IsDirty;

 int32_t __declspec(property(get=get_TileIndex))  TileIndex;

 ::StringW __declspec(property(get=get_ObjectName))  ObjectName;

 ::StringW __declspec(property(get=get_GeoName))  GeoName;

 bool __declspec(property(get=get_UIExpanded, put=set_UIExpanded))  UIExpanded;


// Methods

/// @brief Method get_IsDirty addr 0x2078178 size 0x8 virtual false final false
 bool get_IsDirty() ;

/// @brief Method set_IsDirty addr 0x2078180 size 0xc virtual false final false
 void set_IsDirty(bool value) ;

/// @brief Method get_TileIndex addr 0x207818c size 0x8 virtual false final false
 int32_t get_TileIndex() ;

/// @brief Method get_ObjectName addr 0x2078194 size 0x8 virtual false final false
 ::StringW get_ObjectName() ;

/// @brief Method get_GeoName addr 0x207819c size 0x8 virtual false final false
 ::StringW get_GeoName() ;

/// @brief Method get_UIExpanded addr 0x20781a4 size 0x8 virtual false final false
 bool get_UIExpanded() ;

/// @brief Method set_UIExpanded addr 0x20781ac size 0xc virtual false final false
 void set_UIExpanded(bool value) ;

/// @brief Method UpdateVolumeCachesFromParts addr 0x20781b8 size 0x8dc virtual false final false
static System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> UpdateVolumeCachesFromParts(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_GeoNode ownerNode, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_PartData> volumeParts, System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_VolumeCache> volumeCaches) ;

/// @brief Method Initialize addr 0x2078ee8 size 0x3c virtual false final false
 void Initialize(HoudiniEngineUnity::HEU_GeoNode ownerNode, int32_t tileIndex) ;

/// @brief Method ResetParameters addr 0x2078f30 size 0x17c virtual false final false
 void ResetParameters() ;

/// @brief Method GetLayer addr 0x2079164 size 0x190 virtual false final false
 HoudiniEngineUnity::HEU_VolumeLayer GetLayer(::StringW layerName) ;

/// @brief Method StartUpdateLayers addr 0x2078a94 size 0x74 virtual false final false
 void StartUpdateLayers() ;

/// @brief Method FinishUpdateLayers addr 0x2078f24 size 0xc virtual false final false
 void FinishUpdateLayers() ;

/// @brief Method GetPartLayerAttributes addr 0x20792f4 size 0x15c virtual false final false
 void GetPartLayerAttributes(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, HoudiniEngineUnity::HEU_VolumeLayer layer) ;

/// @brief Method LoadLayerTextureFromAttribute addr 0x2079450 size 0xf8 virtual false final false
 bool LoadLayerTextureFromAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<UnityEngine::Texture2D> outTexture) ;

/// @brief Method LoadLayerFloatFromAttribute addr 0x2079648 size 0x134 virtual false final false
 bool LoadLayerFloatFromAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<float_t> floatValue) ;

/// @brief Method LoadLayerColorFromAttribute addr 0x207977c size 0x16c virtual false final false
 bool LoadLayerColorFromAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<UnityEngine::Color> colorValue) ;

/// @brief Method LoadLayerVector2FromAttribute addr 0x20798e8 size 0x144 virtual false final false
 bool LoadLayerVector2FromAttribute(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, ::StringW attrName, ByRef<UnityEngine::Vector2> vectorValue) ;

/// @brief Method UpdateLayerFromPart addr 0x2078b08 size 0x3e0 virtual false final false
 void UpdateLayerFromPart(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_PartData part) ;

/// @brief Method GenerateTerrainWithAlphamaps addr 0x2079a2c size 0x17cc virtual false final false
 void GenerateTerrainWithAlphamaps(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset houdiniAsset, bool bRebuild) ;

/// @brief Method LoadLayerPropertiesFromAttributes addr 0x207b558 size 0x408 virtual false final false
 void LoadLayerPropertiesFromAttributes(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, UnityEngine::TerrainLayer terrainLayer, bool bNewTerrainLayer, UnityEngine::Texture2D defaultTexture) ;

/// @brief Method PopulateScatterTrees addr 0x207b960 size 0x24 virtual false final false
 void PopulateScatterTrees(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, int32_t pointCount, bool throwWarningIfNoTileAttribute) ;

/// @brief Method PopulateDetailPrototype addr 0x207b984 size 0x28 virtual false final false
 void PopulateDetailPrototype(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, int32_t partID, HoudiniEngineUnity::HEU_VolumeLayer layer) ;

/// @brief Method PopulatePreset addr 0x207b9ac size 0x2bc virtual false final false
 void PopulatePreset(HoudiniEngineUnity::HEU_VolumeCachePreset cachePreset) ;

/// @brief Method ApplyPreset addr 0x207b1f8 size 0x2d8 virtual false final false
 bool ApplyPreset(HoudiniEngineUnity::HEU_VolumeCachePreset volumeCachePreset) ;

/// @brief Method CopyValuesTo addr 0x207bc68 size 0x244 virtual false final false
 void CopyValuesTo(HoudiniEngineUnity::HEU_VolumeCache destCache) ;

/// @brief Method CopyDetailProperties addr 0x207beac size 0x28 virtual false final false
static void CopyDetailProperties(HoudiniEngineUnity::HEU_DetailProperties srcProp, HoudiniEngineUnity::HEU_DetailProperties destProp) ;

/// @brief Method CopyLayer addr 0x20790ac size 0xb8 virtual false final false
static void CopyLayer(HoudiniEngineUnity::HEU_VolumeLayer srcLayer, HoudiniEngineUnity::HEU_VolumeLayer destLayer) ;

/// @brief Method CopyPrototype addr 0x207bed4 size 0x48 virtual false final false
static void CopyPrototype(HoudiniEngineUnity::HEU_DetailPrototype srcProto, HoudiniEngineUnity::HEU_DetailPrototype destProto) ;

/// @brief Method LoadDefaultSplatTexture addr 0x207b4d0 size 0x88 virtual false final false
static UnityEngine::Texture2D LoadDefaultSplatTexture() ;

/// @brief Method LoadAssetTexture addr 0x2079548 size 0x100 virtual false final false
static UnityEngine::Texture2D LoadAssetTexture(::StringW path) ;

/// @brief Method IsEquivalentTo addr 0x207bf1c size 0x31c virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_VolumeCache other) ;

static HoudiniEngineUnity::HEU_VolumeCache New_ctor() ;

/// @brief Method .ctor addr 0x207c238 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_VolumeCache);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_VolumeCache, "HoudiniEngineUnity", "HEU_VolumeCache");
