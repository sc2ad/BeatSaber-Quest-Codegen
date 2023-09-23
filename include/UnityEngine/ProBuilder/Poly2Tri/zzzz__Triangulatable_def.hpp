#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::Triangulatable
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15357))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
class CORDL_TYPE Triangulatable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~Triangulatable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Triangulatable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __declspec(property(get=get_Points))  Points;

 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __declspec(property(get=get_Triangles))  Triangles;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationMode __declspec(property(get=get_TriangulationMode))  TriangulationMode;


// Methods

/// @brief Method Prepare addr 0x0 size 0xffffffffffffffff virtual true final false
 void Prepare(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext tcx) ;

/// @brief Method get_Points addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> get_Points() ;

/// @brief Method get_Triangles addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> get_Triangles() ;

/// @brief Method AddTriangle addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t) ;

/// @brief Method AddTriangles addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddTriangles(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> list) ;

/// @brief Method ClearTriangles addr 0x0 size 0xffffffffffffffff virtual true final false
 void ClearTriangles() ;

/// @brief Method get_TriangulationMode addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::Triangulatable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::Triangulatable, "UnityEngine.ProBuilder.Poly2Tri", "Triangulatable");
