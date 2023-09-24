#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class TerrainData;
}
// Forward declare root types
namespace UnityEngine {
class Terrain;
}
// Type: UnityEngine::Terrain
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15442))
// CS Name: UnityEngine.Terrain
class CORDL_TYPE Terrain : public UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Terrain() = default;

// Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: " const&", def_value: None }]
constexpr Terrain(Terrain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Terrain", modifiers: "&&", def_value: None }]
constexpr Terrain(Terrain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Terrain(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr Terrain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Terrain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Terrain& operator=(Terrain&& o) noexcept = default;
  constexpr Terrain& operator=(Terrain const& o) noexcept = default;
                


// Properties

 UnityEngine::TerrainData __declspec(property(get=get_terrainData, put=set_terrainData))  terrainData;

 float_t __declspec(property(put=set_detailObjectDistance))  detailObjectDistance;

 float_t __declspec(property(put=set_detailObjectDensity))  detailObjectDensity;

 UnityEngine::Material __declspec(property(get=get_materialTemplate, put=set_materialTemplate))  materialTemplate;

 bool __declspec(property(get=get_allowAutoConnect, put=set_allowAutoConnect))  allowAutoConnect;

 int32_t __declspec(property(get=get_groupingID))  groupingID;

 bool __declspec(property(put=set_drawInstanced))  drawInstanced;

static ::ArrayW<UnityEngine::Terrain> __declspec(property(get=get_activeTerrains))  activeTerrains;


// Methods

/// @brief Method get_terrainData addr 0x2ba4d7c size 0x3c virtual false final false
 UnityEngine::TerrainData get_terrainData() ;

/// @brief Method set_terrainData addr 0x2ba4db8 size 0x44 virtual false final false
 void set_terrainData(UnityEngine::TerrainData value) ;

/// @brief Method set_detailObjectDistance addr 0x2ba4dfc size 0x4c virtual false final false
 void set_detailObjectDistance(float_t value) ;

/// @brief Method set_detailObjectDensity addr 0x2ba4e48 size 0x4c virtual false final false
 void set_detailObjectDensity(float_t value) ;

/// @brief Method get_materialTemplate addr 0x2ba4e94 size 0x3c virtual false final false
 UnityEngine::Material get_materialTemplate() ;

/// @brief Method set_materialTemplate addr 0x2ba4ed0 size 0x44 virtual false final false
 void set_materialTemplate(UnityEngine::Material value) ;

/// @brief Method get_allowAutoConnect addr 0x2ba4f14 size 0x3c virtual false final false
 bool get_allowAutoConnect() ;

/// @brief Method set_allowAutoConnect addr 0x2ba4f50 size 0x44 virtual false final false
 void set_allowAutoConnect(bool value) ;

/// @brief Method get_groupingID addr 0x2ba4f94 size 0x3c virtual false final false
 int32_t get_groupingID() ;

/// @brief Method set_drawInstanced addr 0x2ba4fd0 size 0x44 virtual false final false
 void set_drawInstanced(bool value) ;

/// @brief Method SetNeighbors addr 0x2ba5014 size 0x6c virtual false final false
 void SetNeighbors(UnityEngine::Terrain left, UnityEngine::Terrain top, UnityEngine::Terrain right, UnityEngine::Terrain bottom) ;

/// @brief Method Flush addr 0x2ba5080 size 0x3c virtual false final false
 void Flush() ;

/// @brief Method get_activeTerrains addr 0x2ba50bc size 0x28 virtual false final false
static ::ArrayW<UnityEngine::Terrain> get_activeTerrains() ;

static UnityEngine::Terrain New_ctor() ;

/// @brief Method .ctor addr 0x2ba50e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Terrain);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Terrain, "UnityEngine", "Terrain");
