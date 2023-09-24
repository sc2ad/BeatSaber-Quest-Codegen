#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class IBeatmapObjectSpawnController;
}
namespace Ice {
class FloorLightTilesGrid;
}
// Forward declare root types
namespace Ice {
class BeatmapFloorLightTilesGrid;
}
// Type: Ice::BeatmapFloorLightTilesGrid
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15996))
// CS Name: Ice.BeatmapFloorLightTilesGrid
class CORDL_TYPE BeatmapFloorLightTilesGrid : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapFloorLightTilesGrid() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapFloorLightTilesGrid", modifiers: " const&", def_value: None }]
constexpr BeatmapFloorLightTilesGrid(BeatmapFloorLightTilesGrid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapFloorLightTilesGrid", modifiers: "&&", def_value: None }]
constexpr BeatmapFloorLightTilesGrid(BeatmapFloorLightTilesGrid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapFloorLightTilesGrid(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapFloorLightTilesGrid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapFloorLightTilesGrid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapFloorLightTilesGrid& operator=(BeatmapFloorLightTilesGrid&& o) noexcept = default;
  constexpr BeatmapFloorLightTilesGrid& operator=(BeatmapFloorLightTilesGrid const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__numberOfRows, put=__set__numberOfRows))  _numberOfRows;

constexpr void __set__numberOfRows(int32_t value) ;

constexpr int32_t __get__numberOfRows() const;

 float_t __declspec(property(get=__get__tileWidth, put=__set__tileWidth))  _tileWidth;

constexpr void __set__tileWidth(float_t value) ;

constexpr float_t __get__tileWidth() const;

 float_t __declspec(property(get=__get__tileHeight, put=__set__tileHeight))  _tileHeight;

constexpr void __set__tileHeight(float_t value) ;

constexpr float_t __get__tileHeight() const;

 Ice::FloorLightTilesGrid __declspec(property(get=__get__floorLightTilesGrid, put=__set__floorLightTilesGrid))  _floorLightTilesGrid;

constexpr void __set__floorLightTilesGrid(Ice::FloorLightTilesGrid value) ;

constexpr Ice::FloorLightTilesGrid __get__floorLightTilesGrid() const;

 GlobalNamespace::IBeatmapObjectSpawnController __declspec(property(get=__get__beatmapObjectSpawnController, put=__set__beatmapObjectSpawnController))  _beatmapObjectSpawnController;

constexpr void __set__beatmapObjectSpawnController(GlobalNamespace::IBeatmapObjectSpawnController value) ;

constexpr GlobalNamespace::IBeatmapObjectSpawnController __get__beatmapObjectSpawnController() const;


// Methods

/// @brief Method Start addr 0x1210b04 size 0xf0 virtual false final false
 void Start() ;

static Ice::BeatmapFloorLightTilesGrid New_ctor() ;

/// @brief Method .ctor addr 0x1210d88 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Ice
NEED_NO_BOX(Ice::BeatmapFloorLightTilesGrid);
DEFINE_IL2CPP_ARG_TYPE(Ice::BeatmapFloorLightTilesGrid, "Ice", "BeatmapFloorLightTilesGrid");
