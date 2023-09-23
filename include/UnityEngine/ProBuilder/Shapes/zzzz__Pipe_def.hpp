#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
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
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Pipe;
}
// Type: UnityEngine.ProBuilder.Shapes::Pipe
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12171))
// CS Name: UnityEngine.ProBuilder.Shapes.Pipe
class CORDL_TYPE Pipe : public UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Pipe() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pipe", modifiers: " const&", def_value: None }]
constexpr Pipe(Pipe const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pipe", modifiers: "&&", def_value: None }]
constexpr Pipe(Pipe&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pipe(void* ptr) noexcept : UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Pipe& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pipe& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pipe& operator=(Pipe&& o) noexcept = default;
  constexpr Pipe& operator=(Pipe const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_Thickness, put=__set_m_Thickness))  m_Thickness;

constexpr void __set_m_Thickness(float_t value) ;

constexpr float_t __get_m_Thickness() const;

 int32_t __declspec(property(get=__get_m_NumberOfSides, put=__set_m_NumberOfSides))  m_NumberOfSides;

constexpr void __set_m_NumberOfSides(int32_t value) ;

constexpr int32_t __get_m_NumberOfSides() const;

 int32_t __declspec(property(get=__get_m_HeightCuts, put=__set_m_HeightCuts))  m_HeightCuts;

constexpr void __set_m_HeightCuts(int32_t value) ;

constexpr int32_t __get_m_HeightCuts() const;

 bool __declspec(property(get=__get_m_Smooth, put=__set_m_Smooth))  m_Smooth;

constexpr void __set_m_Smooth(bool value) ;

constexpr bool __get_m_Smooth() const;


// Methods

/// @brief Method CopyShape addr 0x29f5bd0 size 0x8c virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method UpdateBounds addr 0x29f5c5c size 0x38 virtual true final false
 UnityEngine::Bounds UpdateBounds(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation, UnityEngine::Bounds bounds) ;

/// @brief Method RebuildMesh addr 0x29f5c94 size 0xa70 virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

// Ctor Parameters []
explicit Pipe() ;

/// @brief Method .ctor addr 0x29f6704 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Pipe);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Pipe, "UnityEngine.ProBuilder.Shapes", "Pipe");
