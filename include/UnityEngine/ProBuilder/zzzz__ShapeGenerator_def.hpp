#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ProBuilder {
struct ShapeType;
}
namespace UnityEngine::ProBuilder {
struct Axis;
}
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ShapeGenerator;
}
// Type: UnityEngine.ProBuilder::ShapeGenerator
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12140))
// CS Name: UnityEngine.ProBuilder.ShapeGenerator
class CORDL_TYPE ShapeGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ShapeGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShapeGenerator", modifiers: " const&", def_value: None }]
constexpr ShapeGenerator(ShapeGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShapeGenerator", modifiers: "&&", def_value: None }]
constexpr ShapeGenerator(ShapeGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShapeGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ShapeGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShapeGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShapeGenerator& operator=(ShapeGenerator&& o) noexcept = default;
  constexpr ShapeGenerator& operator=(ShapeGenerator const& o) noexcept = default;
                


// Fields

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_k_IcosphereVertices, put=__set_k_IcosphereVertices))  k_IcosphereVertices;

static void __set_k_IcosphereVertices(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_k_IcosphereVertices() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_k_IcosphereTriangles, put=__set_k_IcosphereTriangles))  k_IcosphereTriangles;

static void __set_k_IcosphereTriangles(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_k_IcosphereTriangles() ;

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_k_CubeVertices, put=__set_k_CubeVertices))  k_CubeVertices;

static void __set_k_CubeVertices(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_k_CubeVertices() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_k_CubeTriangles, put=__set_k_CubeTriangles))  k_CubeTriangles;

static void __set_k_CubeTriangles(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_k_CubeTriangles() ;


// Methods

/// @brief Method CreateShape addr 0x29d9340 size 0x4d8 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh CreateShape(UnityEngine::ProBuilder::ShapeType shape, UnityEngine::ProBuilder::PivotLocation pivotType) ;

/// @brief Method GenerateStair addr 0x29d9a88 size 0xa04 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateStair(UnityEngine::ProBuilder::PivotLocation pivotType, UnityEngine::Vector3 size, int32_t steps, bool buildSides) ;

/// @brief Method GenerateCurvedStair addr 0x29da48c size 0xdf8 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateCurvedStair(UnityEngine::ProBuilder::PivotLocation pivotType, float_t stairWidth, float_t height, float_t innerRadius, float_t circumference, int32_t steps, bool buildSides) ;

/// @brief Method GenerateStair addr 0x29e08d0 size 0x4e8 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateStair(UnityEngine::ProBuilder::PivotLocation pivotType, int32_t steps, float_t width, float_t height, float_t depth, bool sidesGoToFloor, bool generateBack, bool platformsOnly) ;

/// @brief Method GenerateCube addr 0x29d9818 size 0x270 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateCube(UnityEngine::ProBuilder::PivotLocation pivotType, UnityEngine::Vector3 size) ;

/// @brief Method GenerateCylinder addr 0x29db938 size 0x924 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateCylinder(UnityEngine::ProBuilder::PivotLocation pivotType, int32_t axisDivisions, float_t radius, float_t height, int32_t heightCuts, int32_t smoothing) ;

/// @brief Method GeneratePrism addr 0x29db284 size 0x6b4 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GeneratePrism(UnityEngine::ProBuilder::PivotLocation pivotType, UnityEngine::Vector3 size) ;

/// @brief Method GenerateDoor addr 0x29dc850 size 0x16f4 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateDoor(UnityEngine::ProBuilder::PivotLocation pivotType, float_t totalWidth, float_t totalHeight, float_t ledgeHeight, float_t legWidth, float_t depth) ;

/// @brief Method GeneratePlane addr 0x29dc25c size 0x5f4 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GeneratePlane(UnityEngine::ProBuilder::PivotLocation pivotType, float_t width, float_t height, int32_t widthCuts, int32_t heightCuts, UnityEngine::ProBuilder::Axis axis) ;

/// @brief Method GeneratePipe addr 0x29ddf44 size 0x778 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GeneratePipe(UnityEngine::ProBuilder::PivotLocation pivotType, float_t radius, float_t height, float_t thickness, int32_t subdivAxis, int32_t subdivHeight) ;

/// @brief Method GenerateCone addr 0x29de6bc size 0x9e0 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateCone(UnityEngine::ProBuilder::PivotLocation pivotType, float_t radius, float_t height, int32_t subdivAxis) ;

/// @brief Method GenerateArch addr 0x29df09c size 0x780 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateArch(UnityEngine::ProBuilder::PivotLocation pivotType, float_t angle, float_t radius, float_t width, float_t depth, int32_t radialCuts, bool insideFaces, bool outsideFaces, bool frontFaces, bool backFaces, bool endCaps) ;

/// @brief Method GenerateIcosahedron addr 0x29df81c size 0xa70 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateIcosahedron(UnityEngine::ProBuilder::PivotLocation pivotType, float_t radius, int32_t subdivisions, bool weldVertices, bool manualUvs) ;

/// @brief Method SubdivideIcosahedron addr 0x29e0fec size 0x62c virtual false final false
static ::ArrayW<UnityEngine::Vector3> SubdivideIcosahedron(::ArrayW<UnityEngine::Vector3> vertices, float_t radius) ;

/// @brief Method GetCirclePoints addr 0x29e1ca0 size 0x390 virtual false final false
static ::ArrayW<UnityEngine::Vector3> GetCirclePoints(int32_t segments, float_t radius, float_t circumference, UnityEngine::Quaternion rotation, float_t offset) ;

/// @brief Method GenerateTorus addr 0x29e028c size 0x644 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh GenerateTorus(UnityEngine::ProBuilder::PivotLocation pivotType, int32_t rows, int32_t columns, float_t innerRadius, float_t outerRadius, bool smooth, float_t horizontalCircumference, float_t verticalCircumference, bool manualUvs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::ShapeGenerator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ShapeGenerator, "UnityEngine.ProBuilder", "ShapeGenerator");
