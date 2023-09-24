#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
struct ColorPage;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__Tessellation__Edges;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__Tessellation__Edges;
}
namespace UnityEngine::UIElements::UIR {
class Tessellation;
}
// Type: ::Edges
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7509))
// CS Name: UnityEngine.UIElements.UIR.Tessellation::Edges
struct CORDL_TYPE UnityEngine__UIElements__UIR__Tessellation__Edges : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__Tessellation__Edges(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__UIR__Tessellation__Edges(UnityEngine__UIElements__UIR__Tessellation__Edges const&) = default;
                    constexpr UnityEngine__UIElements__UIR__Tessellation__Edges(UnityEngine__UIElements__UIR__Tessellation__Edges&&) = default;
                    constexpr UnityEngine__UIElements__UIR__Tessellation__Edges& operator=(UnityEngine__UIElements__UIR__Tessellation__Edges const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__Tessellation__Edges& operator=(UnityEngine__UIElements__UIR__Tessellation__Edges&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__Tessellation__Edges(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__UIR__Tessellation__Edges_Unwrapped : int32_t {
__None = 0,
__Left = 1,
__Top = 2,
__Right = 4,
__Bottom = 8,
__All = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__UIR__Tessellation__Edges_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__UIR__Tessellation__Edges_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges const None;

/// @brief Field Left offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges const Left;

/// @brief Field Top offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges const Top;

/// @brief Field Right offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges const Right;

/// @brief Field Bottom offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges const Bottom;

/// @brief Field All offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::Tessellation
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7510))
// CS Name: UnityEngine.UIElements.UIR.Tessellation
class CORDL_TYPE Tessellation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Edges = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Tessellation() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tessellation", modifiers: " const&", def_value: None }]
constexpr Tessellation(Tessellation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tessellation", modifiers: "&&", def_value: None }]
constexpr Tessellation(Tessellation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tessellation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tessellation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tessellation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tessellation& operator=(Tessellation&& o) noexcept = default;
  constexpr Tessellation& operator=(Tessellation const& o) noexcept = default;
                


// Fields

static float_t __declspec(property(get=__get_kEpsilon, put=__set_kEpsilon))  kEpsilon;

static void __set_kEpsilon(float_t value) ;

static float_t __get_kEpsilon() ;

static float_t __declspec(property(get=__get_kUnusedArc, put=__set_kUnusedArc))  kUnusedArc;

static void __set_kUnusedArc(float_t value) ;

static float_t __get_kUnusedArc() ;

static uint16_t __declspec(property(get=__get_kSubdivisions, put=__set_kSubdivisions))  kSubdivisions;

static void __set_kSubdivisions(uint16_t value) ;

static uint16_t __get_kSubdivisions() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerTessellateRect, put=__set_s_MarkerTessellateRect))  s_MarkerTessellateRect;

static void __set_s_MarkerTessellateRect(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerTessellateRect() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_MarkerTessellateBorder, put=__set_s_MarkerTessellateBorder))  s_MarkerTessellateBorder;

static void __set_s_MarkerTessellateBorder(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_MarkerTessellateBorder() ;

static ::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges> __declspec(property(get=__get_s_AllEdges, put=__set_s_AllEdges))  s_AllEdges;

static void __set_s_AllEdges(::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges> value) ;

static ::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges> __get_s_AllEdges() ;


// Methods

/// @brief Method TessellateRect addr 0x2d1b8b0 size 0x308 virtual false final false
static void TessellateRect(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc, bool computeUVs) ;

/// @brief Method TessellateQuad addr 0x2d1b124 size 0x78c virtual false final false
static void TessellateQuad(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc) ;

/// @brief Method TessellateBorder addr 0x2d1ad54 size 0x27c virtual false final false
static void TessellateBorder(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams borderParams, float_t posZ, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc) ;

/// @brief Method TessellateRoundedCorners addr 0x2d23564 size 0xe64 virtual false final false
static void TessellateRoundedCorners(ByRef<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams> rectParams, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method TessellateRoundedBorders addr 0x2d24710 size 0xec8 virtual false final false
static void TessellateRoundedBorders(ByRef<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams> border, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method TessellateRoundedCorner addr 0x2d255d8 size 0x344 virtual false final false
static void TessellateRoundedCorner(UnityEngine::Rect rect, UnityEngine::Color32 color, float_t posZ, UnityEngine::Vector2 radius, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method TessellateRoundedBorder addr 0x2d25c28 size 0x784 virtual false final false
static void TessellateRoundedBorder(UnityEngine::Rect rect, UnityEngine::Color32 leftColor, UnityEngine::Color32 topColor, float_t posZ, UnityEngine::Vector2 radius, float_t leftWidth, float_t topWidth, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage leftColorPage, UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method IntersectLines addr 0x2d29534 size 0x104 virtual false final false
static UnityEngine::Vector2 IntersectLines(UnityEngine::Vector2 p0, UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, UnityEngine::Vector2 p3) ;

/// @brief Method LooseCompare addr 0x2d28a28 size 0xa0 virtual false final false
static int32_t LooseCompare(float_t a, float_t b) ;

/// @brief Method TessellateComplexBorderCorner addr 0x2d28e48 size 0x6ec virtual false final false
static void TessellateComplexBorderCorner(UnityEngine::Rect rect, UnityEngine::Vector2 radius, float_t leftWidth, float_t topWidth, UnityEngine::Color32 leftColor, UnityEngine::Color32 topColor, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage leftColorPage, UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method TessellateQuad addr 0x2d29e28 size 0x33c virtual false final false
static void TessellateQuad(UnityEngine::Rect rect, UnityEngine::Color32 color, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method TessellateQuad addr 0x2d24624 size 0xec virtual false final false
static void TessellateQuad(UnityEngine::Rect rect, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges smoothedEdges, UnityEngine::Color32 color, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method EdgesCount addr 0x2d2a164 size 0x24 virtual false final false
static int32_t EdgesCount(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges edges) ;

/// @brief Method TessellateQuad addr 0x2d29638 size 0x7f0 virtual false final false
static void TessellateQuad(UnityEngine::Rect rect, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges smoothedEdges, void* offsets, UnityEngine::Color32 color, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method EncodeStraightArc addr 0x2d2a6ac size 0x188 virtual false final false
static void EncodeStraightArc(ByRef<UnityEngine::UIElements::Vertex> v0, ByRef<UnityEngine::UIElements::Vertex> v1, ByRef<UnityEngine::UIElements::Vertex> center, float_t radius) ;

/// @brief Method ExpandTriangle addr 0x2d2a834 size 0x1ec virtual false final false
static void ExpandTriangle(ByRef<UnityEngine::Vector3> v0, ByRef<UnityEngine::Vector3> v1, UnityEngine::Vector3 center, float_t factor) ;

/// @brief Method TessellateQuadSingleEdge addr 0x2d2a188 size 0x524 virtual false final false
static void TessellateQuadSingleEdge(UnityEngine::Rect rect, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges smoothedEdge, UnityEngine::Color32 color, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method TessellateStraightBorder addr 0x2d26b34 size 0x1ef4 virtual false final false
static void TessellateStraightBorder(UnityEngine::Rect rect, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges smoothedEdge, float_t miterOffset, UnityEngine::Color color, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage colorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method GetInterpolatedCircle addr 0x2d2aa20 size 0x118 virtual false final false
static UnityEngine::Vector4 GetInterpolatedCircle(UnityEngine::Vector2 p, ByRef<UnityEngine::UIElements::Vertex> v0, ByRef<UnityEngine::UIElements::Vertex> v1, ByRef<UnityEngine::UIElements::Vertex> v2) ;

/// @brief Method ComputeBarycentricCoordinates addr 0x2d2ab38 size 0xa0 virtual false final false
static void ComputeBarycentricCoordinates(UnityEngine::Vector2 p, UnityEngine::Vector2 a, UnityEngine::Vector2 b, UnityEngine::Vector2 c, ByRef<float_t> u, ByRef<float_t> v, ByRef<float_t> w) ;

/// @brief Method TessellateFilledFan addr 0x2d263ac size 0x788 virtual false final false
static void TessellateFilledFan(UnityEngine::Vector2 center, UnityEngine::Vector2 radius, UnityEngine::Vector2 miterOffset, float_t leftWidth, float_t topWidth, UnityEngine::Color32 leftColor, UnityEngine::Color32 topColor, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage leftColorPage, UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method TessellateBorderedFan addr 0x2d28ac8 size 0x380 virtual false final false
static void TessellateBorderedFan(UnityEngine::Vector2 center, UnityEngine::Vector2 outerRadius, float_t leftWidth, float_t topWidth, UnityEngine::Color32 leftColor, UnityEngine::Color32 topColor, float_t posZ, UnityEngine::UIElements::MeshWriteData mesh, UnityEngine::UIElements::ColorPage leftColorPage, UnityEngine::UIElements::ColorPage topColorPage, ByRef<uint16_t> vertexCount, ByRef<uint16_t> indexCount, bool countOnly) ;

/// @brief Method MirrorVertices addr 0x2d2591c size 0x224 virtual false final false
static void MirrorVertices(UnityEngine::Rect rect, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> vertices, int32_t vertexStart, int32_t vertexCount, bool flipHorizontal) ;

/// @brief Method FlipWinding addr 0x2d25b40 size 0xe8 virtual false final false
static void FlipWinding(Unity::Collections::NativeSlice_1<uint16_t> indices, int32_t indexStart, int32_t indexCount) ;

/// @brief Method ComputeUVs addr 0x2d243c8 size 0x25c virtual false final false
static void ComputeUVs(UnityEngine::Rect tessellatedRect, UnityEngine::Rect textureRect, UnityEngine::Rect uvRegion, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> vertices) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__Tessellation__Edges, "UnityEngine.UIElements.UIR", "Tessellation/Edges");
NEED_NO_BOX(UnityEngine::UIElements::UIR::Tessellation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::Tessellation, "UnityEngine.UIElements.UIR", "Tessellation");
