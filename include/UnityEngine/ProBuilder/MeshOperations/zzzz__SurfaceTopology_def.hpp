#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class FaceRebuildData;
}
namespace UnityEngine::ProBuilder {
struct WindingOrder;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::ProBuilder {
class ActionResult;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class SurfaceTopology;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12223))
// CS Name: UnityEngine.ProBuilder.MeshOperations.SurfaceTopology::<>c
class CORDL_TYPE ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c(____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c(____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c& operator=(____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c& operator=(____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c value) ;

static ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c __get___9() ;

static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> value) ;

static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData,::UnityEngine::ProBuilder::Face> __get___9__0_0() ;

static ::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> __declspec(property(get=__get___9__3_0, put=__set___9__3_0))  __9__3_0;

static void __set___9__3_0(::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> value) ;

static ::System::Func_2<::UnityEngine::ProBuilder::Vertex,::UnityEngine::Vector3> __get___9__3_0() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c() ;

/// @brief Method .ctor addr 0x2a2a66c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToTriangles>b__0_0 addr 0x2a2a674 size 0x18 virtual false final false
 ::UnityEngine::ProBuilder::Face _ToTriangles_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData x) ;

/// @brief Method <GetWindingOrder>b__3_0 addr 0x2a2a68c size 0x1c virtual false final false
 ::UnityEngine::Vector3 _GetWindingOrder_b__3_0(::UnityEngine::ProBuilder::Vertex x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::SurfaceTopology
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12224))
// CS Name: UnityEngine.ProBuilder.MeshOperations.SurfaceTopology
class CORDL_TYPE SurfaceTopology : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SurfaceTopology() = default;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceTopology", modifiers: " const&", def_value: None }]
constexpr SurfaceTopology(SurfaceTopology const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceTopology", modifiers: "&&", def_value: None }]
constexpr SurfaceTopology(SurfaceTopology&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SurfaceTopology(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SurfaceTopology& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SurfaceTopology& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SurfaceTopology& operator=(SurfaceTopology&& o) noexcept = default;
  constexpr SurfaceTopology& operator=(SurfaceTopology const& o) noexcept = default;
                


// Methods

/// @brief Method ToTriangles addr 0x2a28874 size 0x5bc virtual false final false
static ::ArrayW<::UnityEngine::ProBuilder::Face> ToTriangles(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method BreakFaceIntoTris addr 0x2a28e30 size 0x61c virtual false final false
static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData> BreakFaceIntoTris(::UnityEngine::ProBuilder::Face face, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex> vertices, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup) ;

/// @brief Method GetWindingOrder addr 0x2a2944c size 0x38 virtual false final false
static ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face) ;

/// @brief Method GetWindingOrder addr 0x2a29708 size 0x1a0 virtual false final false
static ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex> vertices, ::System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method GetWindingOrder addr 0x2a29484 size 0x284 virtual false final false
static ::UnityEngine::ProBuilder::WindingOrder GetWindingOrder(::System::Collections::Generic::IList_1<::UnityEngine::Vector2> points) ;

/// @brief Method FlipEdge addr 0x2a298a8 size 0x368 virtual false final false
static bool FlipEdge(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::ProBuilder::Face face) ;

/// @brief Method ConformNormals addr 0x2a29c10 size 0x51c virtual false final false
static ::UnityEngine::ProBuilder::ActionResult ConformNormals(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method GetWindingFlags addr 0x2a2a12c size 0xec virtual false final false
static void GetWindingFlags(::UnityEngine::ProBuilder::WingedEdge edge, bool flag, ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face,bool> flags) ;

/// @brief Method ConformOppositeNormal addr 0x2a2a374 size 0x120 virtual false final false
static ::UnityEngine::ProBuilder::ActionResult ConformOppositeNormal(::UnityEngine::ProBuilder::WingedEdge source) ;

/// @brief Method GetCommonEdgeInWindingOrder addr 0x2a2a218 size 0x15c virtual false final false
static ::UnityEngine::ProBuilder::Edge GetCommonEdgeInWindingOrder(::UnityEngine::ProBuilder::WingedEdge wing) ;

/// @brief Method MatchNormal addr 0x2a2a494 size 0x174 virtual false final false
static void MatchNormal(::UnityEngine::ProBuilder::Face source, ::UnityEngine::ProBuilder::Face target, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t> lookup) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::SurfaceTopology, "UnityEngine.ProBuilder.MeshOperations", "SurfaceTopology");
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::____UnityEngine__ProBuilder__MeshOperations__SurfaceTopology____c, "UnityEngine.ProBuilder.MeshOperations", "SurfaceTopology/<>c");
