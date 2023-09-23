#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepPointComparator;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepPointComparator
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15355))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
class CORDL_TYPE DTSweepPointComparator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>
constexpr operator  System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DTSweepPointComparator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepPointComparator", modifiers: " const&", def_value: None }]
constexpr DTSweepPointComparator(DTSweepPointComparator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepPointComparator", modifiers: "&&", def_value: None }]
constexpr DTSweepPointComparator(DTSweepPointComparator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DTSweepPointComparator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DTSweepPointComparator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DTSweepPointComparator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DTSweepPointComparator& operator=(DTSweepPointComparator&& o) noexcept = default;
  constexpr DTSweepPointComparator& operator=(DTSweepPointComparator const& o) noexcept = default;
                


// Methods

/// @brief Method Compare addr 0x29a13cc size 0x50 virtual true final true
 int32_t Compare(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p2) ;

// Ctor Parameters []
explicit DTSweepPointComparator() ;

/// @brief Method .ctor addr 0x29a0b30 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepPointComparator");
