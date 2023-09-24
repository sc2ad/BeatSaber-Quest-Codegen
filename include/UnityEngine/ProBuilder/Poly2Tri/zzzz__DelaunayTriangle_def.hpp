#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder::Poly2Tri {
template<typename T>
struct FixedArray3_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct FixedBitArray3;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::DelaunayTriangle
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15345))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
class CORDL_TYPE DelaunayTriangle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DelaunayTriangle() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelaunayTriangle", modifiers: " const&", def_value: None }]
constexpr DelaunayTriangle(DelaunayTriangle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelaunayTriangle", modifiers: "&&", def_value: None }]
constexpr DelaunayTriangle(DelaunayTriangle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelaunayTriangle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelaunayTriangle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelaunayTriangle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelaunayTriangle& operator=(DelaunayTriangle&& o) noexcept = default;
  constexpr DelaunayTriangle& operator=(DelaunayTriangle const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __declspec(property(get=__get_Points, put=__set_Points))  Points;

constexpr void __set_Points(UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __get_Points() const;

 UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __declspec(property(get=__get_Neighbors, put=__set_Neighbors))  Neighbors;

constexpr void __set_Neighbors(UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __get_Neighbors() const;

 UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __declspec(property(get=__get_EdgeIsConstrained, put=__set_EdgeIsConstrained))  EdgeIsConstrained;

constexpr void __set_EdgeIsConstrained(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __get_EdgeIsConstrained() const;

 UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __declspec(property(get=__get_EdgeIsDelaunay, put=__set_EdgeIsDelaunay))  EdgeIsDelaunay;

constexpr void __set_EdgeIsDelaunay(UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 __get_EdgeIsDelaunay() const;

 bool __declspec(property(get=__get__IsInterior_k__BackingField, put=__set__IsInterior_k__BackingField))  _IsInterior_k__BackingField;

constexpr void __set__IsInterior_k__BackingField(bool value) ;

constexpr bool __get__IsInterior_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsInterior, put=set_IsInterior))  IsInterior;


// Methods

/// @brief Method get_IsInterior addr 0x299bab4 size 0x8 virtual false final false
 bool get_IsInterior() ;

/// @brief Method set_IsInterior addr 0x299babc size 0xc virtual false final false
 void set_IsInterior(bool value) ;

static UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle New_ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p3) ;

/// @brief Method .ctor addr 0x299bac8 size 0xa4 virtual false final false
 void _ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p3) ;

/// @brief Method IndexOf addr 0x299bb6c size 0xb0 virtual false final false
 int32_t IndexOf(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method IndexCWFrom addr 0x299bc1c size 0x34 virtual false final false
 int32_t IndexCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method IndexCCWFrom addr 0x299bc50 size 0x34 virtual false final false
 int32_t IndexCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method Contains addr 0x299bc84 size 0x58 virtual false final false
 bool Contains(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method MarkNeighbor addr 0x299bcdc size 0xc8 virtual false final false
 void MarkNeighbor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t) ;

/// @brief Method MarkNeighbor addr 0x299be8c size 0x1ac virtual false final false
 void MarkNeighbor(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t) ;

/// @brief Method OppositePoint addr 0x299c038 size 0x2c virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint OppositePoint(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method NeighborCWFrom addr 0x299c0ec size 0xa0 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle NeighborCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method NeighborCCWFrom addr 0x299c18c size 0xa0 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle NeighborCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method NeighborAcrossFrom addr 0x299c22c size 0x80 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle NeighborAcrossFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method PointCCWFrom addr 0x299c2ac size 0x88 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint PointCCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method PointCWFrom addr 0x299c064 size 0x88 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint PointCWFrom(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method RotateCW addr 0x299c334 size 0xcc virtual false final false
 void RotateCW() ;

/// @brief Method Legalize addr 0x299c400 size 0x98 virtual false final false
 void Legalize(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint oPoint, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint nPoint) ;

/// @brief Method ToString addr 0x299c498 size 0x1f0 virtual true final false
 ::StringW ToString() ;

/// @brief Method MarkNeighborEdges addr 0x299c688 size 0x12c virtual false final false
 void MarkNeighborEdges() ;

/// @brief Method MarkEdge addr 0x299c850 size 0xf4 virtual false final false
 void MarkEdge(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle triangle) ;

/// @brief Method MarkEdge addr 0x299c944 size 0x21c virtual false final false
 void MarkEdge(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> tList) ;

/// @brief Method MarkConstrainedEdge addr 0x299cb60 size 0xc virtual false final false
 void MarkConstrainedEdge(int32_t index) ;

/// @brief Method MarkConstrainedEdge addr 0x299cbdc size 0x1c virtual false final false
 void MarkConstrainedEdge(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge) ;

/// @brief Method MarkConstrainedEdge addr 0x299c820 size 0x30 virtual false final false
 void MarkConstrainedEdge(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint q) ;

/// @brief Method Area addr 0x299cbf8 size 0xf8 virtual false final false
 double_t Area() ;

/// @brief Method Centroid addr 0x299ccf0 size 0x148 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint Centroid() ;

/// @brief Method EdgeIndex addr 0x299bda4 size 0xe8 virtual false final false
 int32_t EdgeIndex(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2) ;

/// @brief Method GetConstrainedEdgeCCW addr 0x299ce38 size 0x3c virtual false final false
 bool GetConstrainedEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method GetConstrainedEdgeCW addr 0x299ce74 size 0x3c virtual false final false
 bool GetConstrainedEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method GetConstrainedEdgeAcross addr 0x299ceb0 size 0x1c virtual false final false
 bool GetConstrainedEdgeAcross(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method SetConstrainedEdgeCCW addr 0x299cecc size 0x4c virtual false final false
 void SetConstrainedEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p, bool ce) ;

/// @brief Method SetConstrainedEdgeCW addr 0x299cf18 size 0x4c virtual false final false
 void SetConstrainedEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p, bool ce) ;

/// @brief Method SetConstrainedEdgeAcross addr 0x299cf64 size 0x2c virtual false final false
 void SetConstrainedEdgeAcross(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p, bool ce) ;

/// @brief Method GetDelaunayEdgeCCW addr 0x299cf90 size 0x3c virtual false final false
 bool GetDelaunayEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method GetDelaunayEdgeCW addr 0x299cfcc size 0x3c virtual false final false
 bool GetDelaunayEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method GetDelaunayEdgeAcross addr 0x299d008 size 0x1c virtual false final false
 bool GetDelaunayEdgeAcross(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method SetDelaunayEdgeCCW addr 0x299d024 size 0x4c virtual false final false
 void SetDelaunayEdgeCCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p, bool ce) ;

/// @brief Method SetDelaunayEdgeCW addr 0x299d070 size 0x4c virtual false final false
 void SetDelaunayEdgeCW(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p, bool ce) ;

/// @brief Method SetDelaunayEdgeAcross addr 0x299d0bc size 0x2c virtual false final false
 void SetDelaunayEdgeAcross(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p, bool ce) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle, "UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle");
