#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepEdgeEvent;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepEdgeEvent
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15354))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweepEdgeEvent
class CORDL_TYPE DTSweepEdgeEvent : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DTSweepEdgeEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepEdgeEvent", modifiers: " const&", def_value: None }]
constexpr DTSweepEdgeEvent(DTSweepEdgeEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepEdgeEvent", modifiers: "&&", def_value: None }]
constexpr DTSweepEdgeEvent(DTSweepEdgeEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DTSweepEdgeEvent(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DTSweepEdgeEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DTSweepEdgeEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DTSweepEdgeEvent& operator=(DTSweepEdgeEvent&& o) noexcept = default;
  constexpr DTSweepEdgeEvent& operator=(DTSweepEdgeEvent const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint __declspec(property(get=__get_ConstrainedEdge, put=__set_ConstrainedEdge))  ConstrainedEdge;

constexpr void __set_ConstrainedEdge(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint __get_ConstrainedEdge() const;

 bool __declspec(property(get=__get_Right, put=__set_Right))  Right;

constexpr void __set_Right(bool value) ;

constexpr bool __get_Right() const;


// Methods

// Ctor Parameters []
explicit DTSweepEdgeEvent() ;

/// @brief Method .ctor addr 0x29a0b28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepEdgeEvent");
