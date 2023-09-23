#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__GridLayout_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Grid;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct BoundsInt;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Tilemaps {
class TileBase;
}
// Forward declare root types
namespace UnityEngine::Tilemaps {
class Tilemap;
}
// Type: UnityEngine.Tilemaps::Tilemap
namespace UnityEngine::Tilemaps {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16008))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15823))
// CS Name: UnityEngine.Tilemaps.Tilemap
class CORDL_TYPE Tilemap : public UnityEngine::GridLayout {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Tilemap() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: " const&", def_value: None }]
constexpr Tilemap(Tilemap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tilemap", modifiers: "&&", def_value: None }]
constexpr Tilemap(Tilemap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tilemap(void* ptr) noexcept : UnityEngine::GridLayout(ptr) {
}


  constexpr Tilemap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tilemap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tilemap& operator=(Tilemap&& o) noexcept = default;
  constexpr Tilemap& operator=(Tilemap const& o) noexcept = default;
                


// Properties

 UnityEngine::Grid __declspec(property(get=get_layoutGrid))  layoutGrid;

 UnityEngine::BoundsInt __declspec(property(get=get_cellBounds))  cellBounds;

 UnityEngine::Vector3Int __declspec(property(get=get_origin))  origin;

 UnityEngine::Vector3Int __declspec(property(get=get_size))  size;

 UnityEngine::Vector3 __declspec(property(get=get_tileAnchor))  tileAnchor;

 UnityEngine::Matrix4x4 __declspec(property(get=get_orientationMatrix))  orientationMatrix;


// Methods

/// @brief Method get_layoutGrid addr 0x2bd6714 size 0x3c virtual false final false
 UnityEngine::Grid get_layoutGrid() ;

/// @brief Method get_cellBounds addr 0x2bd6750 size 0x84 virtual false final false
 UnityEngine::BoundsInt get_cellBounds() ;

/// @brief Method get_origin addr 0x2bd67d4 size 0x5c virtual false final false
 UnityEngine::Vector3Int get_origin() ;

/// @brief Method get_size addr 0x2bd6830 size 0x5c virtual false final false
 UnityEngine::Vector3Int get_size() ;

/// @brief Method get_tileAnchor addr 0x2bd6914 size 0x5c virtual false final false
 UnityEngine::Vector3 get_tileAnchor() ;

/// @brief Method get_orientationMatrix addr 0x2bd69b4 size 0x6c virtual false final false
 UnityEngine::Matrix4x4 get_orientationMatrix() ;

/// @brief Method GetTileAsset addr 0x2bd6a64 size 0x54 virtual false final false
 UnityEngine::Object GetTileAsset(UnityEngine::Vector3Int position) ;

/// @brief Method GetTile addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetTile(UnityEngine::Vector3Int position) ;

/// @brief Method GetTileAssetsBlock addr 0x2bd6afc size 0x60 virtual false final false
 ::ArrayW<UnityEngine::Object> GetTileAssetsBlock(UnityEngine::Vector3Int position, UnityEngine::Vector3Int blockDimensions) ;

/// @brief Method GetTilesBlock addr 0x2bd6bb0 size 0x194 virtual false final false
 ::ArrayW<UnityEngine::Tilemaps::TileBase> GetTilesBlock(UnityEngine::BoundsInt bounds) ;

/// @brief Method HasTile addr 0x2bd6d44 size 0x84 virtual false final false
 bool HasTile(UnityEngine::Vector3Int position) ;

/// @brief Method RefreshTile addr 0x2bd6dc8 size 0x54 virtual false final false
 void RefreshTile(UnityEngine::Vector3Int position) ;

/// @brief Method RefreshTilesNative addr 0x2bd6e60 size 0x54 virtual false final false
 void RefreshTilesNative(void* positions, int32_t count) ;

/// @brief Method GetUsedTilesCount addr 0x2bd6eb4 size 0x3c virtual false final false
 int32_t GetUsedTilesCount() ;

/// @brief Method GetUsedTilesNonAlloc addr 0x2bd6ef0 size 0x44 virtual false final false
 int32_t GetUsedTilesNonAlloc(::ArrayW<UnityEngine::Tilemaps::TileBase> usedTiles) ;

/// @brief Method Internal_GetUsedTilesNonAlloc addr 0x2bd6f34 size 0x44 virtual false final false
 int32_t Internal_GetUsedTilesNonAlloc(::ArrayW<UnityEngine::Object> usedTiles) ;

/// @brief Method get_origin_Injected addr 0x2bd688c size 0x44 virtual false final false
 void get_origin_Injected(ByRef<UnityEngine::Vector3Int> ret) ;

/// @brief Method get_size_Injected addr 0x2bd68d0 size 0x44 virtual false final false
 void get_size_Injected(ByRef<UnityEngine::Vector3Int> ret) ;

/// @brief Method get_tileAnchor_Injected addr 0x2bd6970 size 0x44 virtual false final false
 void get_tileAnchor_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_orientationMatrix_Injected addr 0x2bd6a20 size 0x44 virtual false final false
 void get_orientationMatrix_Injected(ByRef<UnityEngine::Matrix4x4> ret) ;

/// @brief Method GetTileAsset_Injected addr 0x2bd6ab8 size 0x44 virtual false final false
 UnityEngine::Object GetTileAsset_Injected(ByRef<UnityEngine::Vector3Int> position) ;

/// @brief Method GetTileAssetsBlock_Injected addr 0x2bd6b5c size 0x54 virtual false final false
 ::ArrayW<UnityEngine::Object> GetTileAssetsBlock_Injected(ByRef<UnityEngine::Vector3Int> position, ByRef<UnityEngine::Vector3Int> blockDimensions) ;

/// @brief Method RefreshTile_Injected addr 0x2bd6e1c size 0x44 virtual false final false
 void RefreshTile_Injected(ByRef<UnityEngine::Vector3Int> position) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Tilemaps
NEED_NO_BOX(UnityEngine::Tilemaps::Tilemap);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Tilemaps::Tilemap, "UnityEngine.Tilemaps", "Tilemap");
