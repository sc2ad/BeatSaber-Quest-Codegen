#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationConstraint;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationConstraint
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15362))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationConstraint
class CORDL_TYPE TriangulationConstraint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TriangulationConstraint() = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: " const&", def_value: None }]
constexpr TriangulationConstraint(TriangulationConstraint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationConstraint", modifiers: "&&", def_value: None }]
constexpr TriangulationConstraint(TriangulationConstraint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TriangulationConstraint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TriangulationConstraint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TriangulationConstraint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TriangulationConstraint& operator=(TriangulationConstraint&& o) noexcept = default;
  constexpr TriangulationConstraint& operator=(TriangulationConstraint const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get_P, put=__set_P))  P;

constexpr void __set_P(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get_P() const;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get_Q, put=__set_Q))  Q;

constexpr void __set_Q(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get_Q() const;


// Methods

// Ctor Parameters []
explicit TriangulationConstraint() ;

/// @brief Method .ctor addr 0x29a0a10 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationConstraint");
