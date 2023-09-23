#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HFLayerType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_LoadBufferVolumeLayer;
}
// Type: HoudiniEngineUnity::HEU_LoadBufferVolumeLayer
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9748))
// CS Name: HoudiniEngineUnity.HEU_LoadBufferVolumeLayer
class CORDL_TYPE HEU_LoadBufferVolumeLayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd8};

virtual ~HEU_LoadBufferVolumeLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolumeLayer", modifiers: " const&", def_value: None }]
constexpr HEU_LoadBufferVolumeLayer(HEU_LoadBufferVolumeLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_LoadBufferVolumeLayer", modifiers: "&&", def_value: None }]
constexpr HEU_LoadBufferVolumeLayer(HEU_LoadBufferVolumeLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_LoadBufferVolumeLayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_LoadBufferVolumeLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_LoadBufferVolumeLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_LoadBufferVolumeLayer& operator=(HEU_LoadBufferVolumeLayer&& o) noexcept = default;
  constexpr HEU_LoadBufferVolumeLayer& operator=(HEU_LoadBufferVolumeLayer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__layerName, put=__set__layerName))  _layerName;

constexpr void __set__layerName(::StringW value) ;

constexpr ::StringW __get__layerName() const;

 int32_t __declspec(property(get=__get__partID, put=__set__partID))  _partID;

constexpr void __set__partID(int32_t value) ;

constexpr int32_t __get__partID() const;

 int32_t __declspec(property(get=__get__heightMapWidth, put=__set__heightMapWidth))  _heightMapWidth;

constexpr void __set__heightMapWidth(int32_t value) ;

constexpr int32_t __get__heightMapWidth() const;

 int32_t __declspec(property(get=__get__heightMapHeight, put=__set__heightMapHeight))  _heightMapHeight;

constexpr void __set__heightMapHeight(int32_t value) ;

constexpr int32_t __get__heightMapHeight() const;

 float_t __declspec(property(get=__get__strength, put=__set__strength))  _strength;

constexpr void __set__strength(float_t value) ;

constexpr float_t __get__strength() const;

 ::StringW __declspec(property(get=__get__diffuseTexturePath, put=__set__diffuseTexturePath))  _diffuseTexturePath;

constexpr void __set__diffuseTexturePath(::StringW value) ;

constexpr ::StringW __get__diffuseTexturePath() const;

 ::StringW __declspec(property(get=__get__maskTexturePath, put=__set__maskTexturePath))  _maskTexturePath;

constexpr void __set__maskTexturePath(::StringW value) ;

constexpr ::StringW __get__maskTexturePath() const;

 float_t __declspec(property(get=__get__metallic, put=__set__metallic))  _metallic;

constexpr void __set__metallic(float_t value) ;

constexpr float_t __get__metallic() const;

 ::StringW __declspec(property(get=__get__normalTexturePath, put=__set__normalTexturePath))  _normalTexturePath;

constexpr void __set__normalTexturePath(::StringW value) ;

constexpr ::StringW __get__normalTexturePath() const;

 float_t __declspec(property(get=__get__normalScale, put=__set__normalScale))  _normalScale;

constexpr void __set__normalScale(float_t value) ;

constexpr float_t __get__normalScale() const;

 float_t __declspec(property(get=__get__smoothness, put=__set__smoothness))  _smoothness;

constexpr void __set__smoothness(float_t value) ;

constexpr float_t __get__smoothness() const;

 UnityEngine::Color __declspec(property(get=__get__specularColor, put=__set__specularColor))  _specularColor;

constexpr void __set__specularColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__specularColor() const;

 UnityEngine::Vector2 __declspec(property(get=__get__tileSize, put=__set__tileSize))  _tileSize;

constexpr void __set__tileSize(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__tileSize() const;

 UnityEngine::Vector2 __declspec(property(get=__get__tileOffset, put=__set__tileOffset))  _tileOffset;

constexpr void __set__tileOffset(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get__tileOffset() const;

 bool __declspec(property(get=__get__uiExpanded, put=__set__uiExpanded))  _uiExpanded;

constexpr void __set__uiExpanded(bool value) ;

constexpr bool __get__uiExpanded() const;

 int32_t __declspec(property(get=__get__tile, put=__set__tile))  _tile;

constexpr void __set__tile(int32_t value) ;

constexpr int32_t __get__tile() const;

 ::ArrayW<float_t> __declspec(property(get=__get__normalizedHeights, put=__set__normalizedHeights))  _normalizedHeights;

constexpr void __set__normalizedHeights(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__normalizedHeights() const;

 float_t __declspec(property(get=__get__minHeight, put=__set__minHeight))  _minHeight;

constexpr void __set__minHeight(float_t value) ;

constexpr float_t __get__minHeight() const;

 float_t __declspec(property(get=__get__maxHeight, put=__set__maxHeight))  _maxHeight;

constexpr void __set__maxHeight(float_t value) ;

constexpr float_t __get__maxHeight() const;

 float_t __declspec(property(get=__get__heightRange, put=__set__heightRange))  _heightRange;

constexpr void __set__heightRange(float_t value) ;

constexpr float_t __get__heightRange() const;

 float_t __declspec(property(get=__get__terrainSizeX, put=__set__terrainSizeX))  _terrainSizeX;

constexpr void __set__terrainSizeX(float_t value) ;

constexpr float_t __get__terrainSizeX() const;

 float_t __declspec(property(get=__get__terrainSizeY, put=__set__terrainSizeY))  _terrainSizeY;

constexpr void __set__terrainSizeY(float_t value) ;

constexpr float_t __get__terrainSizeY() const;

 UnityEngine::Vector3 __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position() const;

 UnityEngine::Vector3 __declspec(property(get=__get__minBounds, put=__set__minBounds))  _minBounds;

constexpr void __set__minBounds(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__minBounds() const;

 UnityEngine::Vector3 __declspec(property(get=__get__maxBounds, put=__set__maxBounds))  _maxBounds;

constexpr void __set__maxBounds(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__maxBounds() const;

 UnityEngine::Vector3 __declspec(property(get=__get__center, put=__set__center))  _center;

constexpr void __set__center(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__center() const;

 ::StringW __declspec(property(get=__get__layerPath, put=__set__layerPath))  _layerPath;

constexpr void __set__layerPath(::StringW value) ;

constexpr ::StringW __get__layerPath() const;

 bool __declspec(property(get=__get__hasLayerAttributes, put=__set__hasLayerAttributes))  _hasLayerAttributes;

constexpr void __set__hasLayerAttributes(bool value) ;

constexpr bool __get__hasLayerAttributes() const;

 HoudiniEngineUnity::HFLayerType __declspec(property(get=__get__layerType, put=__set__layerType))  _layerType;

constexpr void __set__layerType(HoudiniEngineUnity::HFLayerType value) ;

constexpr HoudiniEngineUnity::HFLayerType __get__layerType() const;


// Methods

// Ctor Parameters []
explicit HEU_LoadBufferVolumeLayer() ;

/// @brief Method .ctor addr 0x203a494 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_LoadBufferVolumeLayer);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_LoadBufferVolumeLayer, "HoudiniEngineUnity", "HEU_LoadBufferVolumeLayer");
