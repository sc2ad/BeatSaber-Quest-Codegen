#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Torus;
}
// Type: UnityEngine.ProBuilder.Shapes::Torus
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12181))
// CS Name: UnityEngine.ProBuilder.Shapes.Torus
class CORDL_TYPE Torus : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Torus() = default;

// Ctor Parameters [CppParam { name: "", ty: "Torus", modifiers: " const&", def_value: None }]
constexpr Torus(Torus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Torus", modifiers: "&&", def_value: None }]
constexpr Torus(Torus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Torus(void* ptr) noexcept : ::UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Torus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Torus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Torus& operator=(Torus&& o) noexcept = default;
  constexpr Torus& operator=(Torus const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Rows, put=__set_m_Rows))  m_Rows;

constexpr void __set_m_Rows(int32_t value) ;

constexpr int32_t __get_m_Rows() const;

 int32_t __declspec(property(get=__get_m_Columns, put=__set_m_Columns))  m_Columns;

constexpr void __set_m_Columns(int32_t value) ;

constexpr int32_t __get_m_Columns() const;

 float_t __declspec(property(get=__get_m_TubeRadius, put=__set_m_TubeRadius))  m_TubeRadius;

constexpr void __set_m_TubeRadius(float_t value) ;

constexpr float_t __get_m_TubeRadius() const;

 float_t __declspec(property(get=__get_m_HorizontalCircumference, put=__set_m_HorizontalCircumference))  m_HorizontalCircumference;

constexpr void __set_m_HorizontalCircumference(float_t value) ;

constexpr float_t __get_m_HorizontalCircumference() const;

 float_t __declspec(property(get=__get_m_VerticalCircumference, put=__set_m_VerticalCircumference))  m_VerticalCircumference;

constexpr void __set_m_VerticalCircumference(float_t value) ;

constexpr float_t __get_m_VerticalCircumference() const;

 bool __declspec(property(get=__get_m_Smooth, put=__set_m_Smooth))  m_Smooth;

constexpr void __set_m_Smooth(bool value) ;

constexpr bool __get_m_Smooth() const;


// Methods

/// @brief Method CopyShape addr 0x29fbb74 size 0x8c virtual true final false
 void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method UpdateBounds addr 0x29fbc00 size 0x88 virtual true final false
 ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds) ;

/// @brief Method RebuildMesh addr 0x29fbc88 size 0x984 virtual true final false
 ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation) ;

/// @brief Method GetCirclePoints addr 0x29fc60c size 0x34c virtual false final false
static ::ArrayW<::UnityEngine::Vector3> GetCirclePoints(int32_t segments, float_t radius, float_t circumference, ::UnityEngine::Quaternion rotation, float_t offset) ;

/// @brief Method GetCirclePoints addr 0x29fc958 size 0x298 virtual false final false
static ::ArrayW<::UnityEngine::Vector3> GetCirclePoints(int32_t segments, float_t radius, float_t circumference, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 offset) ;

// Ctor Parameters []
explicit Torus() ;

/// @brief Method .ctor addr 0x29fcbf0 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Torus);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Torus, "UnityEngine.ProBuilder.Shapes", "Torus");
