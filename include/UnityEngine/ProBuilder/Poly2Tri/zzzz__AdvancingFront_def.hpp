#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFront;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::AdvancingFront
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15346))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
class CORDL_TYPE AdvancingFront : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AdvancingFront() = default;

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFront", modifiers: " const&", def_value: None }]
constexpr AdvancingFront(AdvancingFront const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AdvancingFront", modifiers: "&&", def_value: None }]
constexpr AdvancingFront(AdvancingFront&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AdvancingFront(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AdvancingFront& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AdvancingFront& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AdvancingFront& operator=(AdvancingFront&& o) noexcept = default;
  constexpr AdvancingFront& operator=(AdvancingFront const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=__get_Head, put=__set_Head))  Head;

constexpr void __set_Head(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __get_Head() const;

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=__get_Tail, put=__set_Tail))  Tail;

constexpr void __set_Tail(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __get_Tail() const;

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=__get_Search, put=__set_Search))  Search;

constexpr void __set_Search(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __get_Search() const;


// Methods

// Ctor Parameters [CppParam { name: "head", ty: "UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode", modifiers: "", def_value: None }, CppParam { name: "tail", ty: "UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode", modifiers: "", def_value: None }]
explicit AdvancingFront(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode head, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode tail) ;

/// @brief Method .ctor addr 0x299d0e8 size 0x30 virtual false final false
 void _ctor(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode head, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode tail) ;

/// @brief Method AddNode addr 0x299d118 size 0x4 virtual false final false
 void AddNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method RemoveNode addr 0x299d11c size 0x4 virtual false final false
 void RemoveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method ToString addr 0x299d120 size 0xe8 virtual true final false
 ::StringW ToString() ;

/// @brief Method FindSearchNode addr 0x299d208 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode FindSearchNode(double_t x) ;

/// @brief Method LocateNode addr 0x299d210 size 0x18 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode LocateNode(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method LocateNode addr 0x299d228 size 0x5c virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode LocateNode(double_t x) ;

/// @brief Method LocatePoint addr 0x299d284 size 0xf4 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode LocatePoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront, "UnityEngine.ProBuilder.Poly2Tri", "AdvancingFront");
