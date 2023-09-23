#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::AdvancingFrontNode
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15347))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
class CORDL_TYPE AdvancingFrontNode : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AdvancingFrontNode() = default;

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFrontNode", modifiers: " const&", def_value: None }]
constexpr AdvancingFrontNode(AdvancingFrontNode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFrontNode", modifiers: "&&", def_value: None }]
constexpr AdvancingFrontNode(AdvancingFrontNode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AdvancingFrontNode(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AdvancingFrontNode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AdvancingFrontNode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AdvancingFrontNode& operator=(AdvancingFrontNode&& o) noexcept = default;
  constexpr AdvancingFrontNode& operator=(AdvancingFrontNode const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __get_Next() const;

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=__get_Prev, put=__set_Prev))  Prev;

constexpr void __set_Prev(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __get_Prev() const;

 double_t __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(double_t value) ;

constexpr double_t __get_Value() const;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get_Point, put=__set_Point))  Point;

constexpr void __set_Point(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get_Point() const;

 UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle __declspec(property(get=__get_Triangle, put=__set_Triangle))  Triangle;

constexpr void __set_Triangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle __get_Triangle() const;


// Properties

 bool __declspec(property(get=get_HasNext))  HasNext;

 bool __declspec(property(get=get_HasPrev))  HasPrev;


// Methods

// Ctor Parameters [CppParam { name: "point", ty: "UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint", modifiers: "", def_value: None }]
explicit AdvancingFrontNode(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method .ctor addr 0x299d378 size 0x38 virtual false final false
 void _ctor(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method get_HasNext addr 0x299d3b0 size 0x10 virtual false final false
 bool get_HasNext() ;

/// @brief Method get_HasPrev addr 0x299d3c0 size 0x10 virtual false final false
 bool get_HasPrev() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode, "UnityEngine.ProBuilder.Poly2Tri", "AdvancingFrontNode");
