#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Random;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PointGenerator;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::PointGenerator
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15368))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PointGenerator
class CORDL_TYPE PointGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PointGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointGenerator", modifiers: " const&", def_value: None }]
constexpr PointGenerator(PointGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointGenerator", modifiers: "&&", def_value: None }]
constexpr PointGenerator(PointGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PointGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointGenerator& operator=(PointGenerator&& o) noexcept = default;
  constexpr PointGenerator& operator=(PointGenerator const& o) noexcept = default;
                


// Fields

static ::System::Random __declspec(property(get=__get_RNG, put=__set_RNG))  RNG;

static void __set_RNG(::System::Random value) ;

static ::System::Random __get_RNG() ;


// Methods

/// @brief Method UniformDistribution addr 0x29a1fa0 size 0x1c8 virtual false final false
static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> UniformDistribution(int32_t n, double_t scale) ;

/// @brief Method UniformGrid addr 0x29a2168 size 0x18c virtual false final false
static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> UniformGrid(int32_t n, double_t scale) ;

// Ctor Parameters []
explicit PointGenerator() ;

/// @brief Method .ctor addr 0x29a22f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::PointGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::PointGenerator, "UnityEngine.ProBuilder.Poly2Tri", "PointGenerator");
