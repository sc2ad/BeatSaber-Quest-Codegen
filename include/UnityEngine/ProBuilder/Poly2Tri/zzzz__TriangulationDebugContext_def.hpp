#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationDebugContext;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationDebugContext
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15364))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationDebugContext
class CORDL_TYPE TriangulationDebugContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TriangulationDebugContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationDebugContext", modifiers: " const&", def_value: None }]
constexpr TriangulationDebugContext(TriangulationDebugContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationDebugContext", modifiers: "&&", def_value: None }]
constexpr TriangulationDebugContext(TriangulationDebugContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TriangulationDebugContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TriangulationDebugContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TriangulationDebugContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TriangulationDebugContext& operator=(TriangulationDebugContext&& o) noexcept = default;
  constexpr TriangulationDebugContext& operator=(TriangulationDebugContext const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext __declspec(property(get=__get__tcx, put=__set__tcx))  _tcx;

constexpr void __set__tcx(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext __get__tcx() const;


// Methods

// Ctor Parameters [CppParam { name: "tcx", ty: "::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext", modifiers: "", def_value: None }]
explicit TriangulationDebugContext(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext tcx) ;

/// @brief Method .ctor addr 0x29a1358 size 0x28 virtual false final false
 void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext tcx) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationDebugContext");
