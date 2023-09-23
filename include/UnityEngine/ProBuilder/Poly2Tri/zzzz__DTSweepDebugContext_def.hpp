#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationDebugContext_def.hpp"
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepDebugContext;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepDebugContext
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15364))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15353))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweepDebugContext
class CORDL_TYPE DTSweepDebugContext : public UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~DTSweepDebugContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepDebugContext", modifiers: " const&", def_value: None }]
constexpr DTSweepDebugContext(DTSweepDebugContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepDebugContext", modifiers: "&&", def_value: None }]
constexpr DTSweepDebugContext(DTSweepDebugContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DTSweepDebugContext(void* ptr) noexcept : UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext(ptr) {
}


  constexpr DTSweepDebugContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DTSweepDebugContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DTSweepDebugContext& operator=(DTSweepDebugContext&& o) noexcept = default;
  constexpr DTSweepDebugContext& operator=(DTSweepDebugContext const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle __declspec(property(get=__get__primaryTriangle, put=__set__primaryTriangle))  _primaryTriangle;

constexpr void __set__primaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle __get__primaryTriangle() const;

 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle __declspec(property(get=__get__secondaryTriangle, put=__set__secondaryTriangle))  _secondaryTriangle;

constexpr void __set__secondaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle __get__secondaryTriangle() const;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get__activePoint, put=__set__activePoint))  _activePoint;

constexpr void __set__activePoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get__activePoint() const;

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=__get__activeNode, put=__set__activeNode))  _activeNode;

constexpr void __set__activeNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __get__activeNode() const;

 UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint __declspec(property(get=__get__activeConstraint, put=__set__activeConstraint))  _activeConstraint;

constexpr void __set__activeConstraint(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint __get__activeConstraint() const;


// Properties

 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle __declspec(property(get=get_PrimaryTriangle, put=set_PrimaryTriangle))  PrimaryTriangle;

 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle __declspec(property(get=get_SecondaryTriangle, put=set_SecondaryTriangle))  SecondaryTriangle;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=get_ActivePoint, put=set_ActivePoint))  ActivePoint;

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=get_ActiveNode, put=set_ActiveNode))  ActiveNode;

 UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint __declspec(property(get=get_ActiveConstraint, put=set_ActiveConstraint))  ActiveConstraint;

 bool __declspec(property(get=get_IsDebugContext))  IsDebugContext;


// Methods

/// @brief Method get_PrimaryTriangle addr 0x29a12e4 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle get_PrimaryTriangle() ;

/// @brief Method set_PrimaryTriangle addr 0x299eef4 size 0x4c virtual false final false
 void set_PrimaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle value) ;

/// @brief Method get_SecondaryTriangle addr 0x29a12ec size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle get_SecondaryTriangle() ;

/// @brief Method set_SecondaryTriangle addr 0x299ffec size 0x4c virtual false final false
 void set_SecondaryTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle value) ;

/// @brief Method get_ActivePoint addr 0x29a12f4 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint get_ActivePoint() ;

/// @brief Method set_ActivePoint addr 0x29a12fc size 0x4c virtual false final false
 void set_ActivePoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

/// @brief Method get_ActiveNode addr 0x29a1348 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode get_ActiveNode() ;

/// @brief Method set_ActiveNode addr 0x299e6fc size 0x4c virtual false final false
 void set_ActiveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

/// @brief Method get_ActiveConstraint addr 0x29a1350 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint get_ActiveConstraint() ;

/// @brief Method set_ActiveConstraint addr 0x299dce0 size 0x4c virtual false final false
 void set_ActiveConstraint(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint value) ;

// Ctor Parameters [CppParam { name: "tcx", ty: "UnityEngine::ProBuilder::Poly2Tri::DTSweepContext", modifiers: "", def_value: None }]
explicit DTSweepDebugContext(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx) ;

/// @brief Method .ctor addr 0x29a0c7c size 0x28 virtual false final false
 void _ctor(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx) ;

/// @brief Method get_IsDebugContext addr 0x29a1380 size 0x8 virtual false final false
 bool get_IsDebugContext() ;

/// @brief Method Clear addr 0x29a1388 size 0x44 virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepDebugContext");
