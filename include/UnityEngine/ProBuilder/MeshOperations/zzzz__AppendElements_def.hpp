#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::ProBuilder {
class PolyShape;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class AppendElements;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12182))
// CS Name: UnityEngine.ProBuilder.MeshOperations.AppendElements::<>c
class CORDL_TYPE ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__ProBuilder__MeshOperations__AppendElements____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__MeshOperations__AppendElements____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c(____UnityEngine__ProBuilder__MeshOperations__AppendElements____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__MeshOperations__AppendElements____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c(____UnityEngine__ProBuilder__MeshOperations__AppendElements____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c& operator=(____UnityEngine__ProBuilder__MeshOperations__AppendElements____c&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c& operator=(____UnityEngine__ProBuilder__MeshOperations__AppendElements____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__AppendElements____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__AppendElements____c value) ;

static ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__AppendElements____c __get___9() ;

static ::System::Func_2<::ArrayW<::UnityEngine::Vector3>,int32_t> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(::System::Func_2<::ArrayW<::UnityEngine::Vector3>,int32_t> value) ;

static ::System::Func_2<::ArrayW<::UnityEngine::Vector3>,int32_t> __get___9__8_0() ;

static ::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> __declspec(property(get=__get___9__10_0, put=__set___9__10_0))  __9__10_0;

static void __set___9__10_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> value) ;

static ::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> __get___9__10_0() ;

static ::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> __declspec(property(get=__get___9__10_1, put=__set___9__10_1))  __9__10_1;

static void __set___9__10_1(::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> value) ;

static ::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> __get___9__10_1() ;

static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> __declspec(property(get=__get___9__18_0, put=__set___9__18_0))  __9__18_0;

static void __set___9__18_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> value) ;

static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> __get___9__18_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c() ;

/// @brief Method .ctor addr 0x2a06fe8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CreateShapeFromPolygon>b__8_0 addr 0x2a06ff0 size 0x18 virtual false final false
 int32_t _CreateShapeFromPolygon_b__8_0(::ArrayW<::UnityEngine::Vector3> arr) ;

/// @brief Method <FaceWithVerticesAndHole>b__10_0 addr 0x2a07008 size 0x1c virtual false final false
 ::UnityEngine::Vector3 _FaceWithVerticesAndHole_b__10_0(::UnityEngine::ProBuilder::Vertex v) ;

/// @brief Method <FaceWithVerticesAndHole>b__10_1 addr 0x2a07024 size 0x1c virtual false final false
 ::UnityEngine::Vector3 _FaceWithVerticesAndHole_b__10_1(::UnityEngine::ProBuilder::Vertex v) ;

/// @brief Method <InsertVertexInFace>b__18_0 addr 0x2a07040 size 0x18 virtual false final false
 ::UnityEngine::ProBuilder::Face _InsertVertexInFace_b__18_0(::UnityEngine::ProBuilder::FaceRebuildData f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: ::<>c__DisplayClass17_0
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12183))
// CS Name: UnityEngine.ProBuilder.MeshOperations.AppendElements::<>c__DisplayClass17_0
class CORDL_TYPE ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0(____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0(____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0& operator=(____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0& operator=(____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_delCount, put=__set_delCount))  delCount;

constexpr void __set_delCount(int32_t value) ;

constexpr int32_t __get_delCount() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0() ;

/// @brief Method .ctor addr 0x2a044a8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AppendVerticesToEdge>b__0 addr 0x2a07058 size 0x6c virtual false final false
 ::UnityEngine::ProBuilder::Edge _AppendVerticesToEdge_b__0(::UnityEngine::ProBuilder::EdgeLookup x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::AppendElements
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12184))
// CS Name: UnityEngine.ProBuilder.MeshOperations.AppendElements
class CORDL_TYPE AppendElements : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass17_0 = ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0;

using __c = ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__AppendElements____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AppendElements() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppendElements", modifiers: " const&", def_value: None }]
constexpr AppendElements(AppendElements const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppendElements", modifiers: "&&", def_value: None }]
constexpr AppendElements(AppendElements&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppendElements(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AppendElements& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppendElements& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppendElements& operator=(AppendElements&& o) noexcept = default;
  constexpr AppendElements& operator=(AppendElements const& o) noexcept = default;
                


// Methods

/// @brief Method AppendFace addr 0x29fcc1c size 0x830 virtual false final false
static ::UnityEngine::ProBuilder::Face AppendFace(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<::UnityEngine::Vector3> positions, ::ArrayW<::UnityEngine::Color> colors, ::ArrayW<::UnityEngine::Vector2> uv0s, ::ArrayW<::UnityEngine::Vector4> uv2s, ::ArrayW<::UnityEngine::Vector4> uv3s, ::UnityEngine::ProBuilder::Face face, ::ArrayW<int32_t> common) ;

/// @brief Method AppendFaces addr 0x29fd44c size 0x5d4 virtual false final false
static ::ArrayW<::UnityEngine::ProBuilder::Face> AppendFaces(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<::ArrayW<::UnityEngine::Vector3>> positions, ::ArrayW<::ArrayW<::UnityEngine::Color>> colors, ::ArrayW<::ArrayW<::UnityEngine::Vector2>> uvs, ::ArrayW<::UnityEngine::ProBuilder::Face> faces, ::ArrayW<::ArrayW<int32_t>> shared) ;

/// @brief Method CreatePolygon addr 0x29fda20 size 0x564 virtual false final false
static ::UnityEngine::ProBuilder::Face CreatePolygon(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<int32_t> indexes, bool unordered) ;

/// @brief Method CreatePolygonWithHole addr 0x29fe050 size 0x994 virtual false final false
static ::UnityEngine::ProBuilder::Face CreatePolygonWithHole(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<int32_t> indexes, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<int32_t>> holes) ;

/// @brief Method CreateShapeFromPolygon addr 0x29fee64 size 0x30 virtual false final false
static ::UnityEngine::ProBuilder::ActionResult CreateShapeFromPolygon(::UnityEngine::ProBuilder::PolyShape poly) ;

/// @brief Method ClearAndRefreshMesh addr 0x29feea0 size 0x3c virtual false final false
static void ClearAndRefreshMesh(::UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method CreateShapeFromPolygon addr 0x29fee94 size 0xc virtual false final false
static ::UnityEngine::ProBuilder::ActionResult CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3> points, float_t extrude, bool flipNormals) ;

/// @brief Method CreateShapeFromPolygon addr 0x29ffaa4 size 0xc virtual false final false
static ::UnityEngine::ProBuilder::ActionResult CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3> points, float_t extrude, bool flipNormals, ::UnityEngine::Vector3 cameraLookAt, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>> holePoints) ;

/// @brief Method CreateShapeFromPolygon addr 0x29feedc size 0xbc8 virtual false final false
static ::UnityEngine::ProBuilder::ActionResult CreateShapeFromPolygon(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3> points, float_t extrude, bool flipNormals, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>> holePoints) ;

/// @brief Method FaceWithVertices addr 0x29fdf84 size 0xcc virtual false final false
static ::UnityEngine::ProBuilder::FaceRebuildData FaceWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex> vertices, bool unordered) ;

/// @brief Method FaceWithVerticesAndHole addr 0x29fe9e4 size 0x480 virtual false final false
static ::UnityEngine::ProBuilder::FaceRebuildData FaceWithVerticesAndHole(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex> borderVertices, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex>> holes) ;

/// @brief Method TentCapWithVertices addr 0x2a00130 size 0x394 virtual false final false
static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData> TentCapWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex> path) ;

/// @brief Method DuplicateAndFlip addr 0x29ffab0 size 0x680 virtual false final false
static void DuplicateAndFlip(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::ArrayW<::UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method Bridge addr 0x2a004c4 size 0x1298 virtual false final false
static ::UnityEngine::ProBuilder::Face Bridge(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b, bool allowNonManifoldGeometry) ;

/// @brief Method AppendVerticesToFace addr 0x2a01a30 size 0x8 virtual false final false
static ::UnityEngine::ProBuilder::Face AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face, ::ArrayW<::UnityEngine::Vector3> points) ;

/// @brief Method AppendVerticesToFace addr 0x2a01a38 size 0xbac virtual false final false
static ::UnityEngine::ProBuilder::Face AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face, ::ArrayW<::UnityEngine::Vector3> points, bool insertOnEdge) ;

/// @brief Method AppendVerticesToEdge addr 0x2a02684 size 0x80 virtual false final false
static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Edge edge, int32_t count) ;

/// @brief Method AppendVerticesToEdge addr 0x2a02704 size 0x1da4 virtual false final false
static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge> AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge> edges, int32_t count) ;

/// @brief Method InsertVertexInFace addr 0x2a04984 size 0xe88 virtual false final false
static ::ArrayW<::UnityEngine::ProBuilder::Face> InsertVertexInFace(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face, ::UnityEngine::Vector3 point) ;

/// @brief Method InsertVertexOnEdge addr 0x2a0580c size 0x13d8 virtual false final false
static ::UnityEngine::ProBuilder::Vertex InsertVertexOnEdge(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Edge originalEdge, ::UnityEngine::Vector3 point) ;

/// @brief Method InsertVertexInMesh addr 0x2a06be4 size 0x3a0 virtual false final false
static ::UnityEngine::ProBuilder::Vertex InsertVertexInMesh(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::AppendElements);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::AppendElements, "UnityEngine.ProBuilder.MeshOperations", "AppendElements");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__AppendElements____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__AppendElements____c, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__AppendElements____c__DisplayClass17_0, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c__DisplayClass17_0");
