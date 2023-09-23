#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HEU_TreePrototypeInfo;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VolumeScatterTrees;
}
// Type: HoudiniEngineUnity::HEU_VolumeScatterTrees
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9894))
// CS Name: HoudiniEngineUnity.HEU_VolumeScatterTrees
class CORDL_TYPE HEU_VolumeScatterTrees : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeScatterTrees>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_VolumeScatterTrees>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HEU_VolumeScatterTrees() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeScatterTrees", modifiers: " const&", def_value: None }]
constexpr HEU_VolumeScatterTrees(HEU_VolumeScatterTrees const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_VolumeScatterTrees", modifiers: "&&", def_value: None }]
constexpr HEU_VolumeScatterTrees(HEU_VolumeScatterTrees&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_VolumeScatterTrees(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_VolumeScatterTrees& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_VolumeScatterTrees& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_VolumeScatterTrees& operator=(HEU_VolumeScatterTrees&& o) noexcept = default;
  constexpr HEU_VolumeScatterTrees& operator=(HEU_VolumeScatterTrees const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo> __declspec(property(get=__get__treePrototypInfos, put=__set__treePrototypInfos))  _treePrototypInfos;

constexpr void __set__treePrototypInfos(System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HEU_TreePrototypeInfo> __get__treePrototypInfos() const;

 ::ArrayW<UnityEngine::Color32> __declspec(property(get=__get__colors, put=__set__colors))  _colors;

constexpr void __set__colors(::ArrayW<UnityEngine::Color32> value) ;

constexpr ::ArrayW<UnityEngine::Color32> __get__colors() const;

 ::ArrayW<float_t> __declspec(property(get=__get__heightScales, put=__set__heightScales))  _heightScales;

constexpr void __set__heightScales(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__heightScales() const;

 ::ArrayW<UnityEngine::Color32> __declspec(property(get=__get__lightmapColors, put=__set__lightmapColors))  _lightmapColors;

constexpr void __set__lightmapColors(::ArrayW<UnityEngine::Color32> value) ;

constexpr ::ArrayW<UnityEngine::Color32> __get__lightmapColors() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__positions, put=__set__positions))  _positions;

constexpr void __set__positions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__positions() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__prototypeIndices, put=__set__prototypeIndices))  _prototypeIndices;

constexpr void __set__prototypeIndices(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__prototypeIndices() const;

 ::ArrayW<float_t> __declspec(property(get=__get__rotations, put=__set__rotations))  _rotations;

constexpr void __set__rotations(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__rotations() const;

 ::ArrayW<float_t> __declspec(property(get=__get__widthScales, put=__set__widthScales))  _widthScales;

constexpr void __set__widthScales(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__widthScales() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__terrainTiles, put=__set__terrainTiles))  _terrainTiles;

constexpr void __set__terrainTiles(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__terrainTiles() const;


// Methods

/// @brief Method IsEquivalentTo addr 0x20778b8 size 0x374 virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_VolumeScatterTrees other) ;

// Ctor Parameters []
explicit HEU_VolumeScatterTrees() ;

/// @brief Method .ctor addr 0x2077c2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_VolumeScatterTrees);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_VolumeScatterTrees, "HoudiniEngineUnity", "HEU_VolumeScatterTrees");
