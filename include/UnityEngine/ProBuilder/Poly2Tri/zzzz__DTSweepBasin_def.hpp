#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepBasin;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepBasin
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15350))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin
class CORDL_TYPE DTSweepBasin : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DTSweepBasin() = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepBasin", modifiers: " const&", def_value: None }]
constexpr DTSweepBasin(DTSweepBasin const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepBasin", modifiers: "&&", def_value: None }]
constexpr DTSweepBasin(DTSweepBasin&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DTSweepBasin(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DTSweepBasin& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DTSweepBasin& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DTSweepBasin& operator=(DTSweepBasin&& o) noexcept = default;
  constexpr DTSweepBasin& operator=(DTSweepBasin const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=__get_leftNode, put=__set_leftNode))  leftNode;

constexpr void __set_leftNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __get_leftNode() const;

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=__get_bottomNode, put=__set_bottomNode))  bottomNode;

constexpr void __set_bottomNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __get_bottomNode() const;

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __declspec(property(get=__get_rightNode, put=__set_rightNode))  rightNode;

constexpr void __set_rightNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode __get_rightNode() const;

 double_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(double_t value) ;

constexpr double_t __get_width() const;

 bool __declspec(property(get=__get_leftHighest, put=__set_leftHighest))  leftHighest;

constexpr void __set_leftHighest(bool value) ;

constexpr bool __get_leftHighest() const;


// Methods

static UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin New_ctor() ;

/// @brief Method .ctor addr 0x29a0a08 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepBasin");
