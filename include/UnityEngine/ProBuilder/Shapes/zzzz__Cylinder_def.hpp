#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Cylinder;
}
// Type: UnityEngine.ProBuilder.Shapes::Cylinder
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12169))
// CS Name: UnityEngine.ProBuilder.Shapes.Cylinder
class CORDL_TYPE Cylinder : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Cylinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cylinder", modifiers: " const&", def_value: None }]
constexpr Cylinder(Cylinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cylinder", modifiers: "&&", def_value: None }]
constexpr Cylinder(Cylinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cylinder(void* ptr) noexcept : ::UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Cylinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cylinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cylinder& operator=(Cylinder&& o) noexcept = default;
  constexpr Cylinder& operator=(Cylinder const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_AxisDivisions, put=__set_m_AxisDivisions))  m_AxisDivisions;

constexpr void __set_m_AxisDivisions(int32_t value) ;

constexpr int32_t __get_m_AxisDivisions() const;

 int32_t __declspec(property(get=__get_m_HeightCuts, put=__set_m_HeightCuts))  m_HeightCuts;

constexpr void __set_m_HeightCuts(int32_t value) ;

constexpr int32_t __get_m_HeightCuts() const;

 bool __declspec(property(get=__get_m_Smooth, put=__set_m_Smooth))  m_Smooth;

constexpr void __set_m_Smooth(bool value) ;

constexpr bool __get_m_Smooth() const;


// Methods

/// @brief Method CopyShape addr 0x29f3354 size 0xd4 virtual true final false
 void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method UpdateBounds addr 0x29f3428 size 0x38 virtual true final false
 ::UnityEngine::Bounds UpdateBounds(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation, ::UnityEngine::Bounds bounds) ;

/// @brief Method RebuildMesh addr 0x29f3460 size 0xbfc virtual true final false
 ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation) ;

// Ctor Parameters []
explicit Cylinder() ;

/// @brief Method .ctor addr 0x29f405c size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Cylinder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Cylinder, "UnityEngine.ProBuilder.Shapes", "Cylinder");
