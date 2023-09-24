#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
class Random;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Polygon;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonGenerator;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::PolygonGenerator
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15369))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PolygonGenerator
class CORDL_TYPE PolygonGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PolygonGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PolygonGenerator", modifiers: " const&", def_value: None }]
constexpr PolygonGenerator(PolygonGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PolygonGenerator", modifiers: "&&", def_value: None }]
constexpr PolygonGenerator(PolygonGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PolygonGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PolygonGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PolygonGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PolygonGenerator& operator=(PolygonGenerator&& o) noexcept = default;
  constexpr PolygonGenerator& operator=(PolygonGenerator const& o) noexcept = default;
                


// Fields

static System::Random __declspec(property(get=__get_RNG, put=__set_RNG))  RNG;

static void __set_RNG(System::Random value) ;

static System::Random __get_RNG() ;

static double_t __declspec(property(get=__get_PI_2, put=__set_PI_2))  PI_2;

static void __set_PI_2(double_t value) ;

static double_t __get_PI_2() ;


// Methods

/// @brief Method RandomCircleSweep addr 0x29a2374 size 0x2f0 virtual false final false
static UnityEngine::ProBuilder::Poly2Tri::Polygon RandomCircleSweep(double_t scale, int32_t vertexCount) ;

/// @brief Method RandomCircleSweep2 addr 0x29a2664 size 0x25c virtual false final false
static UnityEngine::ProBuilder::Poly2Tri::Polygon RandomCircleSweep2(double_t scale, int32_t vertexCount) ;

static UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator New_ctor() ;

/// @brief Method .ctor addr 0x29a28c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::PolygonGenerator, "UnityEngine.ProBuilder.Poly2Tri", "PolygonGenerator");
