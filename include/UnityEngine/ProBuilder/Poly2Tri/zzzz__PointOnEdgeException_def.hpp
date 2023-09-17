#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__NotImplementedException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PointOnEdgeException;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::PointOnEdgeException
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2444))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15356))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
class CORDL_TYPE PointOnEdgeException : public ::System::NotImplementedException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~PointOnEdgeException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointOnEdgeException", modifiers: " const&", def_value: None }]
constexpr PointOnEdgeException(PointOnEdgeException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointOnEdgeException", modifiers: "&&", def_value: None }]
constexpr PointOnEdgeException(PointOnEdgeException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointOnEdgeException(void* ptr) noexcept : ::System::NotImplementedException(ptr) {
}


  constexpr PointOnEdgeException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointOnEdgeException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointOnEdgeException& operator=(PointOnEdgeException&& o) noexcept = default;
  constexpr PointOnEdgeException& operator=(PointOnEdgeException const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get_A, put=__set_A))  A;

constexpr void __set_A(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get_A() const;

 ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get_B, put=__set_B))  B;

constexpr void __set_B(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get_B() const;

 ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get_C, put=__set_C))  C;

constexpr void __set_C(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get_C() const;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "a", ty: "::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint", modifiers: "", def_value: None }, CppParam { name: "b", ty: "::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint", modifiers: "", def_value: None }, CppParam { name: "c", ty: "::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint", modifiers: "", def_value: None }]
explicit PointOnEdgeException(::StringW message, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint a, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint b, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint c) ;

/// @brief Method .ctor addr 0x299fa9c size 0x3c virtual false final false
 void _ctor(::StringW message, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint a, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint b, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException, "UnityEngine.ProBuilder.Poly2Tri", "PointOnEdgeException");
