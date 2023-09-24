#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_LoadBufferBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolumeLayer;
}
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_DetailProperties;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolume;
}
// Type: HoudiniEngineUnity::HEU_LoadBufferVolume
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9745))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9747))
// CS Name: HoudiniEngineUnity.HEU_LoadBufferVolume
class CORDL_TYPE HEU_LoadBufferVolume : public HoudiniEngineUnity::HEU_LoadBufferBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~HEU_LoadBufferVolume() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolume", modifiers: " const&", def_value: None }]
constexpr HEU_LoadBufferVolume(HEU_LoadBufferVolume const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolume", modifiers: "&&", def_value: None }]
constexpr HEU_LoadBufferVolume(HEU_LoadBufferVolume&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_LoadBufferVolume(void* ptr) noexcept : HoudiniEngineUnity::HEU_LoadBufferBase(ptr) {
}


  constexpr HEU_LoadBufferVolume& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_LoadBufferVolume& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_LoadBufferVolume& operator=(HEU_LoadBufferVolume&& o) noexcept = default;
  constexpr HEU_LoadBufferVolume& operator=(HEU_LoadBufferVolume const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__tileIndex, put=__set__tileIndex))  _tileIndex;

constexpr void __set__tileIndex(int32_t value) ;

constexpr int32_t __get__tileIndex() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferVolumeLayer> __declspec(property(get=__get__splatLayers, put=__set__splatLayers))  _splatLayers;

constexpr void __set__splatLayers(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferVolumeLayer> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_LoadBufferVolumeLayer> __get__splatLayers() const;

 int32_t __declspec(property(get=__get__heightMapWidth, put=__set__heightMapWidth))  _heightMapWidth;

constexpr void __set__heightMapWidth(int32_t value) ;

constexpr int32_t __get__heightMapWidth() const;

 int32_t __declspec(property(get=__get__heightMapHeight, put=__set__heightMapHeight))  _heightMapHeight;

constexpr void __set__heightMapHeight(int32_t value) ;

constexpr int32_t __get__heightMapHeight() const;

 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ __declspec(property(get=__get__heightMap, put=__set__heightMap))  _heightMap;

constexpr void __set__heightMap(/* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ value) ;

constexpr /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ __get__heightMap() const;

 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ __declspec(property(get=__get__splatMaps, put=__set__splatMaps))  _splatMaps;

constexpr void __set__splatMaps(/* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ value) ;

constexpr /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 6, ty: Array, byref: false, pinned: false, valuetype: false } */ __get__splatMaps() const;

 float_t __declspec(property(get=__get__terrainSizeX, put=__set__terrainSizeX))  _terrainSizeX;

constexpr void __set__terrainSizeX(float_t value) ;

constexpr float_t __get__terrainSizeX() const;

 float_t __declspec(property(get=__get__terrainSizeY, put=__set__terrainSizeY))  _terrainSizeY;

constexpr void __set__terrainSizeY(float_t value) ;

constexpr float_t __get__terrainSizeY() const;

 float_t __declspec(property(get=__get__heightRange, put=__set__heightRange))  _heightRange;

constexpr void __set__heightRange(float_t value) ;

constexpr float_t __get__heightRange() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position() const;

 ::StringW __declspec(property(get=__get__terrainDataPath, put=__set__terrainDataPath))  _terrainDataPath;

constexpr void __set__terrainDataPath(::StringW value) ;

constexpr ::StringW __get__terrainDataPath() const;

 ::StringW __declspec(property(get=__get__terrainDataExportPath, put=__set__terrainDataExportPath))  _terrainDataExportPath;

constexpr void __set__terrainDataExportPath(::StringW value) ;

constexpr ::StringW __get__terrainDataExportPath() const;

 HoudiniEngineUnity::HEU_VolumeScatterTrees __declspec(property(get=__get__scatterTrees, put=__set__scatterTrees))  _scatterTrees;

constexpr void __set__scatterTrees(HoudiniEngineUnity::HEU_VolumeScatterTrees value) ;

constexpr HoudiniEngineUnity::HEU_VolumeScatterTrees __get__scatterTrees() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_DetailPrototype> __declspec(property(get=__get__detailPrototypes, put=__set__detailPrototypes))  _detailPrototypes;

constexpr void __set__detailPrototypes(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_DetailPrototype> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_DetailPrototype> __get__detailPrototypes() const;

 System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */> __declspec(property(get=__get__detailMaps, put=__set__detailMaps))  _detailMaps;

constexpr void __set__detailMaps(System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */> value) ;

constexpr System::Collections::Generic::List_1</* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */> __get__detailMaps() const;

 HoudiniEngineUnity::HEU_DetailProperties __declspec(property(get=__get__detailProperties, put=__set__detailProperties))  _detailProperties;

constexpr void __set__detailProperties(HoudiniEngineUnity::HEU_DetailProperties value) ;

constexpr HoudiniEngineUnity::HEU_DetailProperties __get__detailProperties() const;

 ::StringW __declspec(property(get=__get__specifiedTerrainMaterialName, put=__set__specifiedTerrainMaterialName))  _specifiedTerrainMaterialName;

constexpr void __set__specifiedTerrainMaterialName(::StringW value) ;

constexpr ::StringW __get__specifiedTerrainMaterialName() const;


// Methods

static HoudiniEngineUnity::HEU_LoadBufferVolume New_ctor() ;

/// @brief Method .ctor addr 0x203a390 size 0x104 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_LoadBufferVolume);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_LoadBufferVolume, "HoudiniEngineUnity", "HEU_LoadBufferVolume");
