#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonSet;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class PointSet;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class ConstrainedPointSet;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Polygon;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class P2T;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::P2T
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15341))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.P2T
class CORDL_TYPE P2T : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~P2T() = default;

// Ctor Parameters [CppParam { name: "", ty: "P2T", modifiers: " const&", def_value: None }]
constexpr P2T(P2T const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "P2T", modifiers: "&&", def_value: None }]
constexpr P2T(P2T&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit P2T(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr P2T& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr P2T& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr P2T& operator=(P2T&& o) noexcept = default;
  constexpr P2T& operator=(P2T const& o) noexcept = default;
                


// Fields

static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm __declspec(property(get=__get__defaultAlgorithm, put=__set__defaultAlgorithm))  _defaultAlgorithm;

static void __set__defaultAlgorithm(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm value) ;

static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm __get__defaultAlgorithm() ;


// Methods

/// @brief Method Triangulate addr 0x2999eb0 size 0x324 virtual false final false
static void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::PolygonSet ps) ;

/// @brief Method Triangulate addr 0x299a2bc size 0x3c virtual false final false
static void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::Polygon p) ;

/// @brief Method Triangulate addr 0x299a334 size 0x3c virtual false final false
static void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet cps) ;

/// @brief Method Triangulate addr 0x299a370 size 0x3c virtual false final false
static void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::PointSet ps) ;

/// @brief Method CreateContext addr 0x299a1d4 size 0x58 virtual false final false
static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext CreateContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm algorithm) ;

/// @brief Method Triangulate addr 0x299a2f8 size 0x3c virtual false final false
static void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm algorithm, ::UnityEngine::ProBuilder::Poly2Tri::Triangulatable t) ;

/// @brief Method Triangulate addr 0x299a22c size 0x90 virtual false final false
static void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext tcx) ;

/// @brief Method Warmup addr 0x299a4d8 size 0x4 virtual false final false
static void Warmup() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::P2T);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::P2T, "UnityEngine.ProBuilder.Poly2Tri", "P2T");
