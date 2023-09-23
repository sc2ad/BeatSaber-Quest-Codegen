#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PointSet;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::PointSet
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15360))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PointSet
class CORDL_TYPE PointSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ProBuilder::Poly2Tri::Triangulatable
constexpr operator  UnityEngine::ProBuilder::Poly2Tri::Triangulatable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PointSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointSet", modifiers: " const&", def_value: None }]
constexpr PointSet(PointSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointSet", modifiers: "&&", def_value: None }]
constexpr PointSet(PointSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointSet& operator=(PointSet&& o) noexcept = default;
  constexpr PointSet& operator=(PointSet const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __declspec(property(get=__get__Points_k__BackingField, put=__set__Points_k__BackingField))  _Points_k__BackingField;

constexpr void __set__Points_k__BackingField(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> value) ;

constexpr System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __get__Points_k__BackingField() const;

 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __declspec(property(get=__get__Triangles_k__BackingField, put=__set__Triangles_k__BackingField))  _Triangles_k__BackingField;

constexpr void __set__Triangles_k__BackingField(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> value) ;

constexpr System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __get__Triangles_k__BackingField() const;


// Properties

 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __declspec(property(get=get_Points, put=set_Points))  Points;

 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __declspec(property(get=get_Triangles, put=set_Triangles))  Triangles;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationMode __declspec(property(get=get_TriangulationMode))  TriangulationMode;


// Methods

/// @brief Method get_Points addr 0x29a1834 size 0x8 virtual true final true
 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> get_Points() ;

/// @brief Method set_Points addr 0x29a183c size 0x8 virtual false final false
 void set_Points(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> value) ;

/// @brief Method get_Triangles addr 0x29a1844 size 0x8 virtual true final true
 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> get_Triangles() ;

/// @brief Method set_Triangles addr 0x29a184c size 0x8 virtual false final false
 void set_Triangles(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> value) ;

// Ctor Parameters [CppParam { name: "points", ty: "System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>", modifiers: "", def_value: None }]
explicit PointSet(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> points) ;

/// @brief Method .ctor addr 0x29a1450 size 0x90 virtual false final false
 void _ctor(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> points) ;

/// @brief Method get_TriangulationMode addr 0x29a1854 size 0x8 virtual true final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode() ;

/// @brief Method AddTriangle addr 0x29a185c size 0xac virtual true final true
 void AddTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t) ;

/// @brief Method AddTriangles addr 0x29a1908 size 0x35c virtual true final true
 void AddTriangles(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> list) ;

/// @brief Method ClearTriangles addr 0x29a1c64 size 0xa4 virtual true final true
 void ClearTriangles() ;

/// @brief Method Prepare addr 0x29a168c size 0x1a8 virtual true final false
 void Prepare(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext tcx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::PointSet);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::PointSet, "UnityEngine.ProBuilder.Poly2Tri", "PointSet");
