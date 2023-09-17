#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
template<typename T>
class MemoryPoolContainer_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace Ice {
class FloorLightTile;
}
namespace Ice {
class ____Ice__FloorLightTile__Pool;
}
// Forward declare root types
namespace Ice {
class FloorLightTilesGrid;
}
// Type: Ice::FloorLightTilesGrid
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16002))
// CS Name: Ice.FloorLightTilesGrid
class CORDL_TYPE FloorLightTilesGrid : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~FloorLightTilesGrid() = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTilesGrid", modifiers: " const&", def_value: None }]
constexpr FloorLightTilesGrid(FloorLightTilesGrid const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTilesGrid", modifiers: "&&", def_value: None }]
constexpr FloorLightTilesGrid(FloorLightTilesGrid&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FloorLightTilesGrid(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FloorLightTilesGrid& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FloorLightTilesGrid& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FloorLightTilesGrid& operator=(FloorLightTilesGrid&& o) noexcept = default;
  constexpr FloorLightTilesGrid& operator=(FloorLightTilesGrid const& o) noexcept = default;
                


// Fields

 ::Ice::____Ice__FloorLightTile__Pool __declspec(property(get=__get__floorLightTileMemoryPool, put=__set__floorLightTileMemoryPool))  _floorLightTileMemoryPool;

constexpr void __set__floorLightTileMemoryPool(::Ice::____Ice__FloorLightTile__Pool value) ;

constexpr ::Ice::____Ice__FloorLightTile__Pool __get__floorLightTileMemoryPool() const;

 ::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile> __declspec(property(get=__get__floorLightTileMemoryPoolContainer, put=__set__floorLightTileMemoryPoolContainer))  _floorLightTileMemoryPoolContainer;

constexpr void __set__floorLightTileMemoryPoolContainer(::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile> value) ;

constexpr ::GlobalNamespace::MemoryPoolContainer_1<::Ice::FloorLightTile> __get__floorLightTileMemoryPoolContainer() const;

 ::ArrayW<::ArrayW<::Ice::FloorLightTile>> __declspec(property(get=__get__grid, put=__set__grid))  _grid;

constexpr void __set__grid(::ArrayW<::ArrayW<::Ice::FloorLightTile>> value) ;

constexpr ::ArrayW<::ArrayW<::Ice::FloorLightTile>> __get__grid() const;

 float_t __declspec(property(get=__get__tileWidth, put=__set__tileWidth))  _tileWidth;

constexpr void __set__tileWidth(float_t value) ;

constexpr float_t __get__tileWidth() const;

 float_t __declspec(property(get=__get__tileHeight, put=__set__tileHeight))  _tileHeight;

constexpr void __set__tileHeight(float_t value) ;

constexpr float_t __get__tileHeight() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__anchorPoint, put=__set__anchorPoint))  _anchorPoint;

constexpr void __set__anchorPoint(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__anchorPoint() const;

 int32_t __declspec(property(get=__get__ySize, put=__set__ySize))  _ySize;

constexpr void __set__ySize(int32_t value) ;

constexpr int32_t __get__ySize() const;


// Properties

 int32_t __declspec(property(get=get_ySize))  ySize;


// Methods

/// @brief Method get_ySize addr 0x1211ae4 size 0x8 virtual false final false
 int32_t get_ySize() ;

/// @brief Method Init addr 0x1210bf4 size 0x194 virtual false final false
 void Init(::UnityEngine::Vector3 anchorPoint, int32_t xSize, int32_t ySize, float_t tileWidth, float_t tileHeight) ;

/// @brief Method HighlightTile addr 0x1211190 size 0x1b8 virtual false final false
 void HighlightTile(int32_t x, int32_t y, float_t fadeInDuration, float_t fadeOutDuration, ::UnityEngine::Color color) ;

/// @brief Method DespawnAllTiles addr 0x1211aec size 0xc0 virtual false final false
 void DespawnAllTiles() ;

/// @brief Method HandleFloorLightTileDidFinish addr 0x1211c0c size 0x4 virtual false final false
 void HandleFloorLightTileDidFinish(::Ice::FloorLightTile floorLightTile) ;

/// @brief Method DespawnTile addr 0x1211bac size 0x60 virtual false final false
 void DespawnTile(::Ice::FloorLightTile floorLightTile) ;

// Ctor Parameters []
explicit FloorLightTilesGrid() ;

/// @brief Method .ctor addr 0x1211c10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Ice
} // end anonymous namespace
NEED_NO_BOX(::Ice::FloorLightTilesGrid);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTilesGrid, "Ice", "FloorLightTilesGrid");
