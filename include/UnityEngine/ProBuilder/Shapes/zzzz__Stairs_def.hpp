#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder::Shapes {
struct StepGenerationType;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Stairs;
}
// Type: UnityEngine.ProBuilder.Shapes::Stairs
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12180))
// CS Name: UnityEngine.ProBuilder.Shapes.Stairs
class CORDL_TYPE Stairs : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Stairs() = default;

// Ctor Parameters [CppParam { name: "", ty: "Stairs", modifiers: " const&", def_value: None }]
constexpr Stairs(Stairs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Stairs", modifiers: "&&", def_value: None }]
constexpr Stairs(Stairs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Stairs(void* ptr) noexcept : ::UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Stairs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Stairs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Stairs& operator=(Stairs&& o) noexcept = default;
  constexpr Stairs& operator=(Stairs const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ProBuilder::Shapes::StepGenerationType __declspec(property(get=__get_m_StepGenerationType, put=__set_m_StepGenerationType))  m_StepGenerationType;

constexpr void __set_m_StepGenerationType(::UnityEngine::ProBuilder::Shapes::StepGenerationType value) ;

constexpr ::UnityEngine::ProBuilder::Shapes::StepGenerationType __get_m_StepGenerationType() const;

 float_t __declspec(property(get=__get_m_StepsHeight, put=__set_m_StepsHeight))  m_StepsHeight;

constexpr void __set_m_StepsHeight(float_t value) ;

constexpr float_t __get_m_StepsHeight() const;

 int32_t __declspec(property(get=__get_m_StepsCount, put=__set_m_StepsCount))  m_StepsCount;

constexpr void __set_m_StepsCount(int32_t value) ;

constexpr int32_t __get_m_StepsCount() const;

 bool __declspec(property(get=__get_m_HomogeneousSteps, put=__set_m_HomogeneousSteps))  m_HomogeneousSteps;

constexpr void __set_m_HomogeneousSteps(bool value) ;

constexpr bool __get_m_HomogeneousSteps() const;

 float_t __declspec(property(get=__get_m_Circumference, put=__set_m_Circumference))  m_Circumference;

constexpr void __set_m_Circumference(float_t value) ;

constexpr float_t __get_m_Circumference() const;

 bool __declspec(property(get=__get_m_Sides, put=__set_m_Sides))  m_Sides;

constexpr void __set_m_Sides(bool value) ;

constexpr bool __get_m_Sides() const;

 float_t __declspec(property(get=__get_m_InnerRadius, put=__set_m_InnerRadius))  m_InnerRadius;

constexpr void __set_m_InnerRadius(float_t value) ;

constexpr float_t __get_m_InnerRadius() const;


// Properties

 bool __declspec(property(get=get_sides, put=set_sides))  sides;


// Methods

/// @brief Method get_sides addr 0x29f9838 size 0x8 virtual false final false
 bool get_sides() ;

/// @brief Method set_sides addr 0x29f9840 size 0xc virtual false final false
 void set_sides(bool value) ;

/// @brief Method CopyShape addr 0x29f984c size 0x9c virtual true final false
 void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method RebuildMesh addr 0x29f98e8 size 0x60 virtual true final false
 ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation) ;

/// @brief Method UpdateBounds addr 0x29fb9e4 size 0x164 virtual true final false
 ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds) ;

/// @brief Method BuildStairs addr 0x29faabc size 0xf28 virtual false final false
 ::UnityEngine::Bounds BuildStairs(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation) ;

/// @brief Method BuildCurvedStairs addr 0x29f9948 size 0x1174 virtual false final false
 ::UnityEngine::Bounds BuildCurvedStairs(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation) ;

// Ctor Parameters []
explicit Stairs() ;

/// @brief Method .ctor addr 0x29fbb48 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Stairs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Stairs, "UnityEngine.ProBuilder.Shapes", "Stairs");
