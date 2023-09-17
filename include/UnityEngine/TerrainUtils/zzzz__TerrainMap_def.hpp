#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine::TerrainUtils {
struct TerrainMapStatusCode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::TerrainUtils {
struct TerrainTileCoord;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::TerrainUtils {
class TerrainMap;
}
namespace UnityEngine::TerrainUtils {
class ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0;
}
// Type: ::<>c__DisplayClass3_0
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15454))
// CS Name: UnityEngine.TerrainUtils.TerrainMap::<>c__DisplayClass3_0
class CORDL_TYPE ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0(____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0(____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0& operator=(____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0&& o) noexcept = default;
  constexpr ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0& operator=(____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_groupID, put=__set_groupID))  groupID;

constexpr void __set_groupID(int32_t value) ;

constexpr int32_t __get_groupID() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x2ba79ec size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateFromPlacement>b__0 addr 0x2ba8934 size 0x58 virtual false final false
 bool _CreateFromPlacement_b__0(::UnityEngine::Terrain x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TerrainUtils
// Type: UnityEngine.TerrainUtils::TerrainMap
namespace UnityEngine::TerrainUtils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15455))
// CS Name: UnityEngine.TerrainUtils.TerrainMap
class CORDL_TYPE TerrainMap : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass3_0 = ::UnityEngine::TerrainUtils::____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TerrainMap() = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainMap", modifiers: " const&", def_value: None }]
constexpr TerrainMap(TerrainMap const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainMap", modifiers: "&&", def_value: None }]
constexpr TerrainMap(TerrainMap&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TerrainMap(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TerrainMap& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TerrainMap& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TerrainMap& operator=(TerrainMap&& o) noexcept = default;
  constexpr TerrainMap& operator=(TerrainMap const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get_m_patchSize, put=__set_m_patchSize))  m_patchSize;

constexpr void __set_m_patchSize(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_m_patchSize() const;

 ::UnityEngine::TerrainUtils::TerrainMapStatusCode __declspec(property(get=__get_m_errorCode, put=__set_m_errorCode))  m_errorCode;

constexpr void __set_m_errorCode(::UnityEngine::TerrainUtils::TerrainMapStatusCode value) ;

constexpr ::UnityEngine::TerrainUtils::TerrainMapStatusCode __get_m_errorCode() const;

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord,::UnityEngine::Terrain> __declspec(property(get=__get_m_terrainTiles, put=__set_m_terrainTiles))  m_terrainTiles;

constexpr void __set_m_terrainTiles(::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord,::UnityEngine::Terrain> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord,::UnityEngine::Terrain> __get_m_terrainTiles() const;


// Properties

 ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord,::UnityEngine::Terrain> __declspec(property(get=get_terrainTiles))  terrainTiles;


// Methods

/// @brief Method GetTerrain addr 0x2ba76c4 size 0x78 virtual false final false
 ::UnityEngine::Terrain GetTerrain(int32_t tileX, int32_t tileZ) ;

/// @brief Method CreateFromPlacement addr 0x2ba773c size 0x2b0 virtual false final false
static ::UnityEngine::TerrainUtils::TerrainMap CreateFromPlacement(::UnityEngine::Terrain originTerrain, ::System::Predicate_1<::UnityEngine::Terrain> filter, bool fullValidation) ;

/// @brief Method CreateFromPlacement addr 0x2ba79f4 size 0x3e0 virtual false final false
static ::UnityEngine::TerrainUtils::TerrainMap CreateFromPlacement(::UnityEngine::Vector2 gridOrigin, ::UnityEngine::Vector2 gridSize, ::System::Predicate_1<::UnityEngine::Terrain> filter, bool fullValidation) ;

/// @brief Method get_terrainTiles addr 0x2ba80d0 size 0x8 virtual false final false
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::TerrainUtils::TerrainTileCoord,::UnityEngine::Terrain> get_terrainTiles() ;

// Ctor Parameters []
explicit TerrainMap() ;

/// @brief Method .ctor addr 0x2ba7dd4 size 0x84 virtual false final false
 void _ctor() ;

/// @brief Method AddTerrainInternal addr 0x2ba80d8 size 0x128 virtual false final false
 void AddTerrainInternal(int32_t x, int32_t z, ::UnityEngine::Terrain terrain) ;

/// @brief Method TryToAddTerrain addr 0x2ba7e58 size 0x114 virtual false final false
 bool TryToAddTerrain(int32_t tileX, int32_t tileZ, ::UnityEngine::Terrain terrain) ;

/// @brief Method ValidateTerrain addr 0x2ba8200 size 0x734 virtual false final false
 void ValidateTerrain(int32_t tileX, int32_t tileZ) ;

/// @brief Method Validate addr 0x2ba7f6c size 0x164 virtual false final false
 ::UnityEngine::TerrainUtils::TerrainMapStatusCode Validate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TerrainUtils
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainMap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainMap, "UnityEngine.TerrainUtils", "TerrainMap");
NEED_NO_BOX(::UnityEngine::TerrainUtils::____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::____UnityEngine__TerrainUtils__TerrainMap____c__DisplayClass3_0, "UnityEngine.TerrainUtils", "TerrainMap/<>c__DisplayClass3_0");
