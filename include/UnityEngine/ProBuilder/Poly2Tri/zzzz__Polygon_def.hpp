#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class Polygon;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::Polygon
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15342))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.Polygon
class CORDL_TYPE Polygon : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable
constexpr operator  ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Polygon() = default;

// Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: " const&", def_value: None }]
constexpr Polygon(Polygon const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Polygon", modifiers: "&&", def_value: None }]
constexpr Polygon(Polygon&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Polygon(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Polygon& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Polygon& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Polygon& operator=(Polygon&& o) noexcept = default;
  constexpr Polygon& operator=(Polygon const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __declspec(property(get=__get__points, put=__set__points))  _points;

constexpr void __set__points(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __get__points() const;

 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __declspec(property(get=__get__steinerPoints, put=__set__steinerPoints))  _steinerPoints;

constexpr void __set__steinerPoints(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __get__steinerPoints() const;

 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon> __declspec(property(get=__get__holes, put=__set__holes))  _holes;

constexpr void __set__holes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon> __get__holes() const;

 ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __declspec(property(get=__get__triangles, put=__set__triangles))  _triangles;

constexpr void __set__triangles(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __get__triangles() const;

 ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint __declspec(property(get=__get__last, put=__set__last))  _last;

constexpr void __set__last(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint __get__last() const;


// Properties

 ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode __declspec(property(get=get_TriangulationMode))  TriangulationMode;

 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __declspec(property(get=get_Points))  Points;

 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __declspec(property(get=get_Triangles))  Triangles;

 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon> __declspec(property(get=get_Holes))  Holes;


// Methods

// Ctor Parameters [CppParam { name: "points", ty: "::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint>", modifiers: "", def_value: None }]
explicit Polygon(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> points) ;

/// @brief Method .ctor addr 0x299a4dc size 0x3b8 virtual false final false
 void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> points) ;

// Ctor Parameters [CppParam { name: "points", ty: "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint>", modifiers: "", def_value: None }]
explicit Polygon(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> points) ;

/// @brief Method .ctor addr 0x299a894 size 0x88 virtual false final false
 void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> points) ;

// Ctor Parameters [CppParam { name: "points", ty: "::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint>", modifiers: "", def_value: None }]
explicit Polygon(::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> points) ;

/// @brief Method .ctor addr 0x299a91c size 0x4 virtual false final false
 void _ctor(::ArrayW<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> points) ;

/// @brief Method get_TriangulationMode addr 0x299a920 size 0x8 virtual true final true
 ::UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode() ;

/// @brief Method AddSteinerPoint addr 0x299a928 size 0xf0 virtual false final false
 void AddSteinerPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method AddSteinerPoints addr 0x299aa18 size 0xa0 virtual false final false
 void AddSteinerPoints(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> points) ;

/// @brief Method ClearSteinerPoints addr 0x299aab8 size 0x6c virtual false final false
 void ClearSteinerPoints() ;

/// @brief Method AddHole addr 0x299ab24 size 0xf0 virtual false final false
 void AddHole(::UnityEngine::ProBuilder::Poly2Tri::Polygon poly) ;

/// @brief Method InsertPointAfter addr 0x299ac14 size 0x11c virtual false final false
 void InsertPointAfter(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint point, ::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint newPoint) ;

/// @brief Method AddPoints addr 0x299ad30 size 0x414 virtual false final false
 void AddPoints(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint> list) ;

/// @brief Method AddPoint addr 0x299b144 size 0xc4 virtual false final false
 void AddPoint(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint p) ;

/// @brief Method RemovePoint addr 0x299b208 size 0x74 virtual false final false
 void RemovePoint(::UnityEngine::ProBuilder::Poly2Tri::PolygonPoint p) ;

/// @brief Method get_Points addr 0x299b27c size 0x8 virtual true final true
 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> get_Points() ;

/// @brief Method get_Triangles addr 0x299b284 size 0x8 virtual true final true
 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> get_Triangles() ;

/// @brief Method get_Holes addr 0x299b28c size 0x8 virtual false final false
 ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Poly2Tri::Polygon> get_Holes() ;

/// @brief Method AddTriangle addr 0x299b294 size 0xa8 virtual true final true
 void AddTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t) ;

/// @brief Method AddTriangles addr 0x299b33c size 0x58 virtual true final true
 void AddTriangles(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> list) ;

/// @brief Method ClearTriangles addr 0x299b394 size 0x6c virtual true final true
 void ClearTriangles() ;

/// @brief Method Prepare addr 0x299b400 size 0x3ec virtual true final true
 void Prepare(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext tcx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::Polygon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::Polygon, "UnityEngine.ProBuilder.Poly2Tri", "Polygon");
