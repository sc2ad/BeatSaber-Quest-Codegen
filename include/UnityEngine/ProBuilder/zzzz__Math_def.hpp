#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine::ProBuilder {
struct Normal;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine::ProBuilder {
class Bounds2D;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Rect;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Math;
}
// Type: UnityEngine.ProBuilder::Math
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12081))
// CS Name: UnityEngine.ProBuilder.Math
class CORDL_TYPE Math : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Math() = default;

// Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: " const&", def_value: None }]
constexpr Math(Math const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Math", modifiers: "&&", def_value: None }]
constexpr Math(Math&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Math(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Math& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Math& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Math& operator=(Math&& o) noexcept = default;
  constexpr Math& operator=(Math const& o) noexcept = default;
                


// Fields

/// @brief Field phi offset 0
static constexpr float_t  phi{1.618034};

/// @brief Field k_FltEpsilon offset 0
static constexpr float_t  k_FltEpsilon{0.000000000000000000000000000000000000000000001};

/// @brief Field k_FltCompareEpsilon offset 0
static constexpr float_t  k_FltCompareEpsilon{0.0001};

/// @brief Field handleEpsilon offset 0
static constexpr float_t  handleEpsilon{0.0001};

static UnityEngine::Vector3 __declspec(property(get=__get_tv1, put=__set_tv1))  tv1;

static void __set_tv1(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_tv1() ;

static UnityEngine::Vector3 __declspec(property(get=__get_tv2, put=__set_tv2))  tv2;

static void __set_tv2(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_tv2() ;

static UnityEngine::Vector3 __declspec(property(get=__get_tv3, put=__set_tv3))  tv3;

static void __set_tv3(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_tv3() ;

static UnityEngine::Vector3 __declspec(property(get=__get_tv4, put=__set_tv4))  tv4;

static void __set_tv4(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_tv4() ;


// Methods

/// @brief Method PointInCircumference addr 0x29b480c size 0x5c virtual false final false
static UnityEngine::Vector2 PointInCircumference(float_t radius, float_t angleInDegrees, UnityEngine::Vector2 origin) ;

/// @brief Method PointInEllipseCircumference addr 0x29b4868 size 0x12c virtual false final false
static UnityEngine::Vector2 PointInEllipseCircumference(float_t xRadius, float_t yRadius, float_t angleInDegrees, UnityEngine::Vector2 origin, ByRef<UnityEngine::Vector2> tangent) ;

/// @brief Method PointInEllipseCircumferenceWithConstantAngle addr 0x29b4994 size 0x170 virtual false final false
static UnityEngine::Vector2 PointInEllipseCircumferenceWithConstantAngle(float_t xRadius, float_t yRadius, float_t angleInDegrees, UnityEngine::Vector2 origin, ByRef<UnityEngine::Vector2> tangent) ;

/// @brief Method PointInSphere addr 0x29b4b04 size 0x78 virtual false final false
static UnityEngine::Vector3 PointInSphere(float_t radius, float_t latitudeAngle, float_t longitudeAngle) ;

/// @brief Method SignedAngle addr 0x29b4b7c size 0x104 virtual false final false
static float_t SignedAngle(UnityEngine::Vector2 a, UnityEngine::Vector2 b) ;

/// @brief Method SqrDistance addr 0x29b4c80 size 0x24 virtual false final false
static float_t SqrDistance(UnityEngine::Vector3 a, UnityEngine::Vector3 b) ;

/// @brief Method TriangleArea addr 0x29b4ca4 size 0xb4 virtual false final false
static float_t TriangleArea(UnityEngine::Vector3 x, UnityEngine::Vector3 y, UnityEngine::Vector3 z) ;

/// @brief Method PolygonArea addr 0x29b4d58 size 0x110 virtual false final false
static float_t PolygonArea(::ArrayW<UnityEngine::Vector3> vertices, ::ArrayW<int32_t> indexes) ;

/// @brief Method RotateAroundPoint addr 0x29b4e68 size 0x70 virtual false final false
static UnityEngine::Vector2 RotateAroundPoint(UnityEngine::Vector2 v, UnityEngine::Vector2 origin, float_t theta) ;

/// @brief Method ScaleAroundPoint addr 0x29b4ed8 size 0x1c virtual false final false
static UnityEngine::Vector2 ScaleAroundPoint(UnityEngine::Vector2 v, UnityEngine::Vector2 origin, UnityEngine::Vector2 scale) ;

/// @brief Method Perpendicular addr 0x29b4ef4 size 0x14 virtual false final false
static UnityEngine::Vector2 Perpendicular(UnityEngine::Vector2 value) ;

/// @brief Method ReflectPoint addr 0x29b4f08 size 0x18c virtual false final false
static UnityEngine::Vector2 ReflectPoint(UnityEngine::Vector2 point, UnityEngine::Vector2 lineStart, UnityEngine::Vector2 lineEnd) ;

/// @brief Method SqrDistanceRayPoint addr 0x29b5094 size 0x98 virtual false final false
static float_t SqrDistanceRayPoint(UnityEngine::Ray ray, UnityEngine::Vector3 point) ;

/// @brief Method DistancePointLineSegment addr 0x29b512c size 0x16c virtual false final false
static float_t DistancePointLineSegment(UnityEngine::Vector2 point, UnityEngine::Vector2 lineStart, UnityEngine::Vector2 lineEnd) ;

/// @brief Method DistancePointLineSegment addr 0x29b5298 size 0x230 virtual false final false
static float_t DistancePointLineSegment(UnityEngine::Vector3 point, UnityEngine::Vector3 lineStart, UnityEngine::Vector3 lineEnd) ;

/// @brief Method GetNearestPointRayRay addr 0x29b54c8 size 0xc0 virtual false final false
static UnityEngine::Vector3 GetNearestPointRayRay(UnityEngine::Ray a, UnityEngine::Ray b) ;

/// @brief Method GetNearestPointRayRay addr 0x29b5588 size 0x164 virtual false final false
static UnityEngine::Vector3 GetNearestPointRayRay(UnityEngine::Vector3 ao, UnityEngine::Vector3 ad, UnityEngine::Vector3 bo, UnityEngine::Vector3 bd) ;

/// @brief Method GetLineSegmentIntersect addr 0x29b56ec size 0x114 virtual false final false
static bool GetLineSegmentIntersect(UnityEngine::Vector2 p0, UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, UnityEngine::Vector2 p3, ByRef<UnityEngine::Vector2> intersect) ;

/// @brief Method GetLineSegmentIntersect addr 0x29a5c80 size 0x78 virtual false final false
static bool GetLineSegmentIntersect(UnityEngine::Vector2 p0, UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, UnityEngine::Vector2 p3) ;

/// @brief Method PointInPolygon addr 0x29b5800 size 0x278 virtual false final false
static bool PointInPolygon(::ArrayW<UnityEngine::Vector2> polygon, UnityEngine::Vector2 point, ::ArrayW<int32_t> indexes) ;

/// @brief Method PointInPolygon addr 0x29b5a78 size 0x124 virtual false final false
static bool PointInPolygon(::ArrayW<UnityEngine::Vector2> positions, UnityEngine::ProBuilder::Bounds2D polyBounds, ::ArrayW<UnityEngine::ProBuilder::Edge> edges, UnityEngine::Vector2 point) ;

/// @brief Method PointInPolygon addr 0x29b5b9c size 0x124 virtual false final false
static bool PointInPolygon(::ArrayW<UnityEngine::Vector3> positions, UnityEngine::ProBuilder::Bounds2D polyBounds, ::ArrayW<UnityEngine::ProBuilder::Edge> edges, UnityEngine::Vector2 point) ;

/// @brief Method RectIntersectsLineSegment addr 0x29b5cc0 size 0x4 virtual false final false
static bool RectIntersectsLineSegment(UnityEngine::Rect rect, UnityEngine::Vector2 a, UnityEngine::Vector2 b) ;

/// @brief Method RectIntersectsLineSegment addr 0x29b5cc4 size 0x8 virtual false final false
static bool RectIntersectsLineSegment(UnityEngine::Rect rect, UnityEngine::Vector3 a, UnityEngine::Vector3 b) ;

/// @brief Method RayIntersectsTriangle addr 0x29af480 size 0x2dc virtual false final false
static bool RayIntersectsTriangle(UnityEngine::Ray InRay, UnityEngine::Vector3 InTriangleA, UnityEngine::Vector3 InTriangleB, UnityEngine::Vector3 InTriangleC, ByRef<float_t> OutDistance, ByRef<UnityEngine::Vector3> OutPoint) ;

/// @brief Method RayIntersectsTriangle2 addr 0x29b06c8 size 0x238 virtual false final false
static bool RayIntersectsTriangle2(UnityEngine::Vector3 origin, UnityEngine::Vector3 dir, UnityEngine::Vector3 vert0, UnityEngine::Vector3 vert1, UnityEngine::Vector3 vert2, ByRef<float_t> distance, ByRef<UnityEngine::Vector3> normal) ;

/// @brief Method Secant addr 0x29b5d14 size 0x18 virtual false final false
static float_t Secant(float_t x) ;

/// @brief Method Normal addr 0x29b5d2c size 0x1b4 virtual false final false
static UnityEngine::Vector3 Normal(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2) ;

/// @brief Method Normal addr 0x29b5ee0 size 0x77c virtual false final false
static UnityEngine::Vector3 Normal(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method Normal addr 0x29b665c size 0x20c virtual false final false
static UnityEngine::Vector3 Normal(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face) ;

/// @brief Method NormalTangentBitangent addr 0x29b1540 size 0x3ec virtual false final false
static UnityEngine::ProBuilder::Normal NormalTangentBitangent(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face) ;

/// @brief Method IsCardinalAxis addr 0x29b6868 size 0x248 virtual false final false
static bool IsCardinalAxis(UnityEngine::Vector3 v, float_t epsilon) ;

/// @brief Method DivideBy addr 0x29b6ab0 size 0xc virtual false final false
static UnityEngine::Vector2 DivideBy(UnityEngine::Vector2 v, UnityEngine::Vector2 o) ;

/// @brief Method DivideBy addr 0x29b6abc size 0x10 virtual false final false
static UnityEngine::Vector3 DivideBy(UnityEngine::Vector3 v, UnityEngine::Vector3 o) ;

/// @brief Method Max addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Max(::ArrayW<T> array) ;

/// @brief Method Min addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Min(::ArrayW<T> array) ;

/// @brief Method LargestValue addr 0x29b6acc size 0x24 virtual false final false
static float_t LargestValue(UnityEngine::Vector3 v) ;

/// @brief Method LargestValue addr 0x29b6af0 size 0xc virtual false final false
static float_t LargestValue(UnityEngine::Vector2 v) ;

/// @brief Method SmallestVector2 addr 0x29b6afc size 0x54 virtual false final false
static UnityEngine::Vector2 SmallestVector2(::ArrayW<UnityEngine::Vector2> v) ;

/// @brief Method SmallestVector2 addr 0x29b6b50 size 0x338 virtual false final false
static UnityEngine::Vector2 SmallestVector2(::ArrayW<UnityEngine::Vector2> v, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method LargestVector2 addr 0x29b6e88 size 0x54 virtual false final false
static UnityEngine::Vector2 LargestVector2(::ArrayW<UnityEngine::Vector2> v) ;

/// @brief Method LargestVector2 addr 0x29b6edc size 0x338 virtual false final false
static UnityEngine::Vector2 LargestVector2(::ArrayW<UnityEngine::Vector2> v, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method GetBounds addr 0x29b1dec size 0x5d0 virtual false final false
static UnityEngine::Bounds GetBounds(::ArrayW<UnityEngine::Vector3> positions, System::Collections::Generic::IList_1<int32_t> indices) ;

/// @brief Method Average addr 0x29b7214 size 0x348 virtual false final false
static UnityEngine::Vector2 Average(System::Collections::Generic::IList_1<UnityEngine::Vector2> array, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method Average addr 0x29b755c size 0x5a0 virtual false final false
static UnityEngine::Vector3 Average(System::Collections::Generic::IList_1<UnityEngine::Vector3> array, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method Average addr 0x29b7afc size 0x5a8 virtual false final false
static UnityEngine::Vector4 Average(System::Collections::Generic::IList_1<UnityEngine::Vector4> array, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method InvertScaleVector addr 0x29b80a4 size 0x60 virtual false final false
static UnityEngine::Vector3 InvertScaleVector(UnityEngine::Vector3 scaleVector) ;

/// @brief Method Approx2 addr 0x29b8104 size 0x24 virtual false final false
static bool Approx2(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float_t delta) ;

/// @brief Method Approx3 addr 0x29b8128 size 0x30 virtual false final false
static bool Approx3(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float_t delta) ;

/// @brief Method Approx4 addr 0x29b8158 size 0x40 virtual false final false
static bool Approx4(UnityEngine::Vector4 a, UnityEngine::Vector4 b, float_t delta) ;

/// @brief Method ApproxC addr 0x29b8198 size 0x40 virtual false final false
static bool ApproxC(UnityEngine::Color a, UnityEngine::Color b, float_t delta) ;

/// @brief Method Approx addr 0x29b81d8 size 0x14 virtual false final false
static bool Approx(float_t a, float_t b, float_t delta) ;

/// @brief Method Clamp addr 0x29b4764 size 0x1c virtual false final false
static int32_t Clamp(int32_t value, int32_t lowerBound, int32_t upperBound) ;

/// @brief Method Abs addr 0x29b81ec size 0x10 virtual false final false
static UnityEngine::Vector3 Abs(UnityEngine::Vector3 v) ;

/// @brief Method Sign addr 0x29b81fc size 0x24 virtual false final false
static UnityEngine::Vector3 Sign(UnityEngine::Vector3 v) ;

/// @brief Method Sum addr 0x29b8220 size 0x18 virtual false final false
static float_t Sum(UnityEngine::Vector3 v) ;

/// @brief Method Cross addr 0x29b5ce4 size 0x30 virtual false final false
static void Cross(UnityEngine::Vector3 a, UnityEngine::Vector3 b, ByRef<UnityEngine::Vector3> res) ;

/// @brief Method Subtract addr 0x29b5ccc size 0x18 virtual false final false
static void Subtract(UnityEngine::Vector3 a, UnityEngine::Vector3 b, ByRef<UnityEngine::Vector3> res) ;

/// @brief Method IsNumber addr 0x29b8238 size 0xb4 virtual false final false
static bool IsNumber(float_t value) ;

/// @brief Method IsNumber addr 0x29b82ec size 0x34 virtual false final false
static bool IsNumber(UnityEngine::Vector2 value) ;

/// @brief Method IsNumber addr 0x29b8320 size 0x44 virtual false final false
static bool IsNumber(UnityEngine::Vector3 value) ;

/// @brief Method IsNumber addr 0x29b8364 size 0x60 virtual false final false
static bool IsNumber(UnityEngine::Vector4 value) ;

/// @brief Method MakeNonZero addr 0x29b83c4 size 0xd0 virtual false final false
static float_t MakeNonZero(float_t value, float_t min) ;

/// @brief Method FixNaN addr 0x29b8494 size 0x80 virtual false final false
static UnityEngine::Vector4 FixNaN(UnityEngine::Vector4 value) ;

/// @brief Method EnsureUnitVector addr 0x29b8514 size 0x108 virtual false final false
static UnityEngine::Vector2 EnsureUnitVector(UnityEngine::Vector2 value) ;

/// @brief Method EnsureUnitVector addr 0x29b861c size 0x120 virtual false final false
static UnityEngine::Vector3 EnsureUnitVector(UnityEngine::Vector3 value) ;

/// @brief Method EnsureUnitVector addr 0x29b873c size 0x4c virtual false final false
static UnityEngine::Vector4 EnsureUnitVector(UnityEngine::Vector4 value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Math);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Math, "UnityEngine.ProBuilder", "Math");
