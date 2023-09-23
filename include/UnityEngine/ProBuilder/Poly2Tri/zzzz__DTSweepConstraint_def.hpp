#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationConstraint_def.hpp"
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepConstraint
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15362))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15351))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
class CORDL_TYPE DTSweepConstraint : public UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DTSweepConstraint() = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepConstraint", modifiers: " const&", def_value: None }]
constexpr DTSweepConstraint(DTSweepConstraint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepConstraint", modifiers: "&&", def_value: None }]
constexpr DTSweepConstraint(DTSweepConstraint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DTSweepConstraint(void* ptr) noexcept : UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint(ptr) {
}


  constexpr DTSweepConstraint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DTSweepConstraint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DTSweepConstraint& operator=(DTSweepConstraint&& o) noexcept = default;
  constexpr DTSweepConstraint& operator=(DTSweepConstraint const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "p1", ty: "UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint", modifiers: "", def_value: None }, CppParam { name: "p2", ty: "UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint", modifiers: "", def_value: None }]
explicit DTSweepConstraint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2) ;

/// @brief Method .ctor addr 0x299ff7c size 0x70 virtual false final false
 void _ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepConstraint");
