#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct Orientation;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationUtil;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationUtil
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15367))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationUtil
class CORDL_TYPE TriangulationUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TriangulationUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationUtil", modifiers: " const&", def_value: None }]
constexpr TriangulationUtil(TriangulationUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationUtil", modifiers: "&&", def_value: None }]
constexpr TriangulationUtil(TriangulationUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TriangulationUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TriangulationUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TriangulationUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TriangulationUtil& operator=(TriangulationUtil&& o) noexcept = default;
  constexpr TriangulationUtil& operator=(TriangulationUtil const& o) noexcept = default;
                


// Fields

static double_t __declspec(property(get=__get_EPSILON, put=__set_EPSILON))  EPSILON;

static void __set_EPSILON(double_t value) ;

static double_t __get_EPSILON() ;


// Methods

/// @brief Method SmartIncircle addr 0x29a090c size 0xc4 virtual false final false
static bool SmartIncircle(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pb, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pc, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pd) ;

/// @brief Method InScanArea addr 0x29a0038 size 0x78 virtual false final false
static bool InScanArea(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pb, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pc, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pd) ;

/// @brief Method Orient2d addr 0x299e748 size 0xe8 virtual false final false
static ::UnityEngine::ProBuilder::Poly2Tri::Orientation Orient2d(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pa, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pb, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint pc) ;

// Ctor Parameters []
explicit TriangulationUtil() ;

/// @brief Method .ctor addr 0x29a1f40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationUtil, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationUtil");
