#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct TreeInstance;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class TreePrototype;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class TerrainLayer;
}
namespace UnityEngine {
class DetailPrototype;
}
// Forward declare root types
namespace UnityEngine {
struct ____UnityEngine__TerrainData__BoundaryValueType;
}
namespace UnityEngine {
class TerrainData;
}
// Type: ::BoundaryValueType
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15447))
// CS Name: UnityEngine.TerrainData::BoundaryValueType
struct CORDL_TYPE ____UnityEngine__TerrainData__BoundaryValueType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__TerrainData__BoundaryValueType(int32_t value__) noexcept;


                    constexpr ____UnityEngine__TerrainData__BoundaryValueType(____UnityEngine__TerrainData__BoundaryValueType const&) = default;
                    constexpr ____UnityEngine__TerrainData__BoundaryValueType(____UnityEngine__TerrainData__BoundaryValueType&&) = default;
                    constexpr ____UnityEngine__TerrainData__BoundaryValueType& operator=(____UnityEngine__TerrainData__BoundaryValueType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__TerrainData__BoundaryValueType& operator=(____UnityEngine__TerrainData__BoundaryValueType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__TerrainData__BoundaryValueType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__TerrainData__BoundaryValueType_Unwrapped : int32_t {
__MaxHeightmapRes = 0,
__MinDetailResPerPatch = 1,
__MaxDetailResPerPatch = 2,
__MaxDetailPatchCount = 3,
__MaxDetailsPerRes = 4,
__MinAlphamapRes = 5,
__MaxAlphamapRes = 6,
__MinBaseMapRes = 7,
__MaxBaseMapRes = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__TerrainData__BoundaryValueType_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__TerrainData__BoundaryValueType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MaxHeightmapRes offset 0
static ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType const MaxHeightmapRes;

/// @brief Field MinDetailResPerPatch offset 0
static ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType const MinDetailResPerPatch;

/// @brief Field MaxDetailResPerPatch offset 0
static ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType const MaxDetailResPerPatch;

/// @brief Field MaxDetailPatchCount offset 0
static ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType const MaxDetailPatchCount;

/// @brief Field MaxDetailsPerRes offset 0
static ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType const MaxDetailsPerRes;

/// @brief Field MinAlphamapRes offset 0
static ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType const MinAlphamapRes;

/// @brief Field MaxAlphamapRes offset 0
static ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType const MaxAlphamapRes;

/// @brief Field MinBaseMapRes offset 0
static ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType const MinBaseMapRes;

/// @brief Field MaxBaseMapRes offset 0
static ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType const MaxBaseMapRes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::TerrainData
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15448))
// CS Name: UnityEngine.TerrainData
class CORDL_TYPE TerrainData : public ::UnityEngine::Object {
public:
// Declarations
using BoundaryValueType = ::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TerrainData() = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: " const&", def_value: None }]
constexpr TerrainData(TerrainData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainData", modifiers: "&&", def_value: None }]
constexpr TerrainData(TerrainData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TerrainData(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr TerrainData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TerrainData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TerrainData& operator=(TerrainData&& o) noexcept = default;
  constexpr TerrainData& operator=(TerrainData const& o) noexcept = default;
                


// Fields

/// @brief Field k_ScriptingInterfaceName offset 0
static constexpr ::ConstString  k_ScriptingInterfaceName{u"TerrainDataScriptingInterface"};

/// @brief Field k_ScriptingInterfacePrefix offset 0
static constexpr ::ConstString  k_ScriptingInterfacePrefix{u"TerrainDataScriptingInterface::"};

/// @brief Field k_HeightmapPrefix offset 0
static constexpr ::ConstString  k_HeightmapPrefix{u"GetHeightmap()."};

/// @brief Field k_DetailDatabasePrefix offset 0
static constexpr ::ConstString  k_DetailDatabasePrefix{u"GetDetailDatabase()."};

/// @brief Field k_TreeDatabasePrefix offset 0
static constexpr ::ConstString  k_TreeDatabasePrefix{u"GetTreeDatabase()."};

/// @brief Field k_SplatDatabasePrefix offset 0
static constexpr ::ConstString  k_SplatDatabasePrefix{u"GetSplatDatabase()."};

static int32_t __declspec(property(get=__get_k_MaximumResolution, put=__set_k_MaximumResolution))  k_MaximumResolution;

static void __set_k_MaximumResolution(int32_t value) ;

static int32_t __get_k_MaximumResolution() ;

static int32_t __declspec(property(get=__get_k_MinimumDetailResolutionPerPatch, put=__set_k_MinimumDetailResolutionPerPatch))  k_MinimumDetailResolutionPerPatch;

static void __set_k_MinimumDetailResolutionPerPatch(int32_t value) ;

static int32_t __get_k_MinimumDetailResolutionPerPatch() ;

static int32_t __declspec(property(get=__get_k_MaximumDetailResolutionPerPatch, put=__set_k_MaximumDetailResolutionPerPatch))  k_MaximumDetailResolutionPerPatch;

static void __set_k_MaximumDetailResolutionPerPatch(int32_t value) ;

static int32_t __get_k_MaximumDetailResolutionPerPatch() ;

static int32_t __declspec(property(get=__get_k_MaximumDetailPatchCount, put=__set_k_MaximumDetailPatchCount))  k_MaximumDetailPatchCount;

static void __set_k_MaximumDetailPatchCount(int32_t value) ;

static int32_t __get_k_MaximumDetailPatchCount() ;

static int32_t __declspec(property(get=__get_k_MaximumDetailsPerRes, put=__set_k_MaximumDetailsPerRes))  k_MaximumDetailsPerRes;

static void __set_k_MaximumDetailsPerRes(int32_t value) ;

static int32_t __get_k_MaximumDetailsPerRes() ;

static int32_t __declspec(property(get=__get_k_MinimumAlphamapResolution, put=__set_k_MinimumAlphamapResolution))  k_MinimumAlphamapResolution;

static void __set_k_MinimumAlphamapResolution(int32_t value) ;

static int32_t __get_k_MinimumAlphamapResolution() ;

static int32_t __declspec(property(get=__get_k_MaximumAlphamapResolution, put=__set_k_MaximumAlphamapResolution))  k_MaximumAlphamapResolution;

static void __set_k_MaximumAlphamapResolution(int32_t value) ;

static int32_t __get_k_MaximumAlphamapResolution() ;

static int32_t __declspec(property(get=__get_k_MinimumBaseMapResolution, put=__set_k_MinimumBaseMapResolution))  k_MinimumBaseMapResolution;

static void __set_k_MinimumBaseMapResolution(int32_t value) ;

static int32_t __get_k_MinimumBaseMapResolution() ;

static int32_t __declspec(property(get=__get_k_MaximumBaseMapResolution, put=__set_k_MaximumBaseMapResolution))  k_MaximumBaseMapResolution;

static void __set_k_MaximumBaseMapResolution(int32_t value) ;

static int32_t __get_k_MaximumBaseMapResolution() ;


// Properties

 int32_t __declspec(property(get=get_heightmapResolution, put=set_heightmapResolution))  heightmapResolution;

 int32_t __declspec(property(get=get_internalHeightmapResolution, put=set_internalHeightmapResolution))  internalHeightmapResolution;

 ::UnityEngine::Vector3 __declspec(property(get=get_size, put=set_size))  size;

 int32_t __declspec(property(get=get_detailResolutionPerPatch))  detailResolutionPerPatch;

 ::ArrayW<::UnityEngine::DetailPrototype> __declspec(property(put=set_detailPrototypes))  detailPrototypes;

 ::ArrayW<::UnityEngine::TreeInstance> __declspec(property(get=get_treeInstances))  treeInstances;

 ::ArrayW<::UnityEngine::TreePrototype> __declspec(property(get=get_treePrototypes, put=set_treePrototypes))  treePrototypes;

 int32_t __declspec(property(get=get_alphamapLayers))  alphamapLayers;

 int32_t __declspec(property(get=get_alphamapResolution, put=set_alphamapResolution))  alphamapResolution;

 int32_t __declspec(property(get=get_Internal_alphamapResolution, put=set_Internal_alphamapResolution))  Internal_alphamapResolution;

 int32_t __declspec(property(get=get_alphamapWidth))  alphamapWidth;

 int32_t __declspec(property(get=get_alphamapHeight))  alphamapHeight;

 ::ArrayW<::UnityEngine::TerrainLayer> __declspec(property(get=get_terrainLayers, put=set_terrainLayers))  terrainLayers;

 ::ArrayW<::UnityEngine::Terrain> __declspec(property(get=get_users))  users;


// Methods

/// @brief Method GetBoundaryValue addr 0x2ba5678 size 0x3c virtual false final false
static int32_t GetBoundaryValue(::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType type) ;

// Ctor Parameters []
explicit TerrainData() ;

/// @brief Method .ctor addr 0x2ba56b4 size 0xa4 virtual false final false
 void _ctor() ;

/// @brief Method Internal_Create addr 0x2ba5758 size 0x3c virtual false final false
static void Internal_Create(::UnityEngine::TerrainData terrainData) ;

/// @brief Method get_heightmapResolution addr 0x2ba5794 size 0x3c virtual false final false
 int32_t get_heightmapResolution() ;

/// @brief Method set_heightmapResolution addr 0x2ba580c size 0x1a8 virtual false final false
 void set_heightmapResolution(int32_t value) ;

/// @brief Method get_internalHeightmapResolution addr 0x2ba57d0 size 0x3c virtual false final false
 int32_t get_internalHeightmapResolution() ;

/// @brief Method set_internalHeightmapResolution addr 0x2ba59b4 size 0x44 virtual false final false
 void set_internalHeightmapResolution(int32_t value) ;

/// @brief Method get_size addr 0x2ba59f8 size 0x5c virtual false final false
 ::UnityEngine::Vector3 get_size() ;

/// @brief Method set_size addr 0x2ba5a98 size 0x54 virtual false final false
 void set_size(::UnityEngine::Vector3 value) ;

/// @brief Method GetHeights addr 0x2ba5b30 size 0x134 virtual false final false
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height) ;

/// @brief Method Internal_GetHeights addr 0x2ba5c64 size 0x6c virtual false final false
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ Internal_GetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height) ;

/// @brief Method SetHeights addr 0x2ba5cd0 size 0x310 virtual false final false
 void SetHeights(int32_t xBase, int32_t yBase, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ heights) ;

/// @brief Method Internal_SetHeights addr 0x2ba5fe0 size 0x74 virtual false final false
 void Internal_SetHeights(int32_t xBase, int32_t yBase, int32_t width, int32_t height, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ heights) ;

/// @brief Method SetDetailResolution addr 0x2ba6054 size 0x438 virtual false final false
 void SetDetailResolution(int32_t detailResolution, int32_t resolutionPerPatch) ;

/// @brief Method Internal_SetDetailResolution addr 0x2ba648c size 0x54 virtual false final false
 void Internal_SetDetailResolution(int32_t patchCount, int32_t resolutionPerPatch) ;

/// @brief Method get_detailResolutionPerPatch addr 0x2ba64e0 size 0x3c virtual false final false
 int32_t get_detailResolutionPerPatch() ;

/// @brief Method RefreshPrototypes addr 0x2ba651c size 0x3c virtual false final false
 void RefreshPrototypes() ;

/// @brief Method set_detailPrototypes addr 0x2ba6558 size 0x44 virtual false final false
 void set_detailPrototypes(::ArrayW<::UnityEngine::DetailPrototype> value) ;

/// @brief Method SetDetailLayer addr 0x2ba659c size 0xac virtual false final false
 void SetDetailLayer(int32_t xBase, int32_t yBase, int32_t layer, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ details) ;

/// @brief Method Internal_SetDetailLayer addr 0x2ba6648 size 0x84 virtual false final false
 void Internal_SetDetailLayer(int32_t xBase, int32_t yBase, int32_t totalWidth, int32_t totalHeight, int32_t detailIndex, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ data) ;

/// @brief Method get_treeInstances addr 0x2ba66cc size 0x3c virtual false final false
 ::ArrayW<::UnityEngine::TreeInstance> get_treeInstances() ;

/// @brief Method Internal_GetTreeInstances addr 0x2ba6708 size 0x3c virtual false final false
 ::ArrayW<::UnityEngine::TreeInstance> Internal_GetTreeInstances() ;

/// @brief Method SetTreeInstances addr 0x2ba6744 size 0x54 virtual false final false
 void SetTreeInstances(::ArrayW<::UnityEngine::TreeInstance> instances, bool snapToHeightmap) ;

/// @brief Method get_treePrototypes addr 0x2ba6798 size 0x3c virtual false final false
 ::ArrayW<::UnityEngine::TreePrototype> get_treePrototypes() ;

/// @brief Method set_treePrototypes addr 0x2ba67d4 size 0x44 virtual false final false
 void set_treePrototypes(::ArrayW<::UnityEngine::TreePrototype> value) ;

/// @brief Method get_alphamapLayers addr 0x2ba6818 size 0x3c virtual false final false
 int32_t get_alphamapLayers() ;

/// @brief Method GetAlphamaps addr 0x2ba6854 size 0xc8 virtual false final false
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ GetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height) ;

/// @brief Method Internal_GetAlphamaps addr 0x2ba691c size 0x6c virtual false final false
 /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ Internal_GetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height) ;

/// @brief Method get_alphamapResolution addr 0x2ba6988 size 0x3c virtual false final false
 int32_t get_alphamapResolution() ;

/// @brief Method set_alphamapResolution addr 0x2ba6a00 size 0x2f8 virtual false final false
 void set_alphamapResolution(int32_t value) ;

/// @brief Method GetAlphamapResolutionInternal addr 0x2ba6d3c size 0x3c virtual false final false
 float_t GetAlphamapResolutionInternal() ;

/// @brief Method get_Internal_alphamapResolution addr 0x2ba69c4 size 0x3c virtual false final false
 int32_t get_Internal_alphamapResolution() ;

/// @brief Method set_Internal_alphamapResolution addr 0x2ba6cf8 size 0x44 virtual false final false
 void set_Internal_alphamapResolution(int32_t value) ;

/// @brief Method get_alphamapWidth addr 0x2ba6d78 size 0x3c virtual false final false
 int32_t get_alphamapWidth() ;

/// @brief Method get_alphamapHeight addr 0x2ba6db4 size 0x3c virtual false final false
 int32_t get_alphamapHeight() ;

/// @brief Method SetAlphamaps addr 0x2ba6df0 size 0x1a4 virtual false final false
 void SetAlphamaps(int32_t x, int32_t y, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ map) ;

/// @brief Method Internal_SetAlphamaps addr 0x2ba6f94 size 0x74 virtual false final false
 void Internal_SetAlphamaps(int32_t x, int32_t y, int32_t width, int32_t height, /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 0, ty: Array, byref: false, pinned: false, valuetype: false } */ map) ;

/// @brief Method get_terrainLayers addr 0x2ba7008 size 0x3c virtual false final false
 ::ArrayW<::UnityEngine::TerrainLayer> get_terrainLayers() ;

/// @brief Method set_terrainLayers addr 0x2ba7044 size 0x44 virtual false final false
 void set_terrainLayers(::ArrayW<::UnityEngine::TerrainLayer> value) ;

/// @brief Method get_users addr 0x2ba7088 size 0x3c virtual false final false
 ::ArrayW<::UnityEngine::Terrain> get_users() ;

/// @brief Method get_size_Injected addr 0x2ba5a54 size 0x44 virtual false final false
 void get_size_Injected(ByRef<::UnityEngine::Vector3> ret) ;

/// @brief Method set_size_Injected addr 0x2ba5aec size 0x44 virtual false final false
 void set_size_Injected(ByRef<::UnityEngine::Vector3> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::____UnityEngine__TerrainData__BoundaryValueType, "UnityEngine", "TerrainData/BoundaryValueType");
NEED_NO_BOX(::UnityEngine::TerrainData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainData, "UnityEngine", "TerrainData");
