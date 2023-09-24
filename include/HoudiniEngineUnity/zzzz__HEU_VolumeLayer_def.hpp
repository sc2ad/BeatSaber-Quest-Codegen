#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HFLayerType;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace HoudiniEngineUnity {
class HEU_DetailPrototype;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeLayer;
}
// Type: HoudiniEngineUnity::HEU_VolumeLayer
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9893))
// CS Name: HoudiniEngineUnity.HEU_VolumeLayer
class CORDL_TYPE HEU_VolumeLayer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeLayer>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeLayer>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~HEU_VolumeLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayer", modifiers: " const&", def_value: None }]
constexpr HEU_VolumeLayer(HEU_VolumeLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeLayer", modifiers: "&&", def_value: None }]
constexpr HEU_VolumeLayer(HEU_VolumeLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_VolumeLayer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_VolumeLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_VolumeLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_VolumeLayer& operator=(HEU_VolumeLayer&& o) noexcept = default;
  constexpr HEU_VolumeLayer& operator=(HEU_VolumeLayer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__layerName, put=__set__layerName))  _layerName;

constexpr void __set__layerName(::StringW value) ;

constexpr ::StringW __get__layerName() const;

 HoudiniEngineUnity::HEU_PartData __declspec(property(get=__get__part, put=__set__part))  _part;

constexpr void __set__part(HoudiniEngineUnity::HEU_PartData value) ;

constexpr HoudiniEngineUnity::HEU_PartData __get__part() const;

 float_t __declspec(property(get=__get__strength, put=__set__strength))  _strength;

constexpr void __set__strength(float_t value) ;

constexpr float_t __get__strength() const;

 bool __declspec(property(get=__get__uiExpanded, put=__set__uiExpanded))  _uiExpanded;

constexpr void __set__uiExpanded(bool value) ;

constexpr bool __get__uiExpanded() const;

 int32_t __declspec(property(get=__get__tile, put=__set__tile))  _tile;

constexpr void __set__tile(int32_t value) ;

constexpr int32_t __get__tile() const;

 int32_t __declspec(property(get=__get__xLength, put=__set__xLength))  _xLength;

constexpr void __set__xLength(int32_t value) ;

constexpr int32_t __get__xLength() const;

 int32_t __declspec(property(get=__get__yLength, put=__set__yLength))  _yLength;

constexpr void __set__yLength(int32_t value) ;

constexpr int32_t __get__yLength() const;

 bool __declspec(property(get=__get__hasLayerAttributes, put=__set__hasLayerAttributes))  _hasLayerAttributes;

constexpr void __set__hasLayerAttributes(bool value) ;

constexpr bool __get__hasLayerAttributes() const;

 UnityEngine::TerrainLayer __declspec(property(get=__get__terrainLayer, put=__set__terrainLayer))  _terrainLayer;

constexpr void __set__terrainLayer(UnityEngine::TerrainLayer value) ;

constexpr UnityEngine::TerrainLayer __get__terrainLayer() const;

 HoudiniEngineUnity::HFLayerType __declspec(property(get=__get__layerType, put=__set__layerType))  _layerType;

constexpr void __set__layerType(HoudiniEngineUnity::HFLayerType value) ;

constexpr HoudiniEngineUnity::HFLayerType __get__layerType() const;

 HoudiniEngineUnity::HEU_DetailPrototype __declspec(property(get=__get__detailPrototype, put=__set__detailPrototype))  _detailPrototype;

constexpr void __set__detailPrototype(HoudiniEngineUnity::HEU_DetailPrototype value) ;

constexpr HoudiniEngineUnity::HEU_DetailPrototype __get__detailPrototype() const;


// Methods

/// @brief Method IsEquivalentTo addr 0x2077538 size 0x370 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_VolumeLayer other) ;

static HoudiniEngineUnity::HEU_VolumeLayer New_ctor() ;

/// @brief Method .ctor addr 0x20778a8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_VolumeLayer);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_VolumeLayer, "HoudiniEngineUnity", "HEU_VolumeLayer");
