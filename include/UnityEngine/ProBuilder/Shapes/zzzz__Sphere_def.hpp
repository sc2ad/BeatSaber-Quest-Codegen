#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Quaternion;
}
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
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Sphere;
}
// Type: UnityEngine.ProBuilder.Shapes::Sphere
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12177))
// CS Name: UnityEngine.ProBuilder.Shapes.Sphere
class CORDL_TYPE Sphere : public UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Sphere() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: " const&", def_value: None }]
constexpr Sphere(Sphere const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sphere", modifiers: "&&", def_value: None }]
constexpr Sphere(Sphere&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sphere(void* ptr) noexcept : UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Sphere& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sphere& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sphere& operator=(Sphere&& o) noexcept = default;
  constexpr Sphere& operator=(Sphere const& o) noexcept = default;
                


// Fields

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_k_IcosphereVertices, put=__set_k_IcosphereVertices))  k_IcosphereVertices;

static void __set_k_IcosphereVertices(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_k_IcosphereVertices() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_k_IcosphereTriangles, put=__set_k_IcosphereTriangles))  k_IcosphereTriangles;

static void __set_k_IcosphereTriangles(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_k_IcosphereTriangles() ;

 int32_t __declspec(property(get=__get_m_Subdivisions, put=__set_m_Subdivisions))  m_Subdivisions;

constexpr void __set_m_Subdivisions(int32_t value) ;

constexpr int32_t __get_m_Subdivisions() const;

 int32_t __declspec(property(get=__get_m_BottomMostVertexIndex, put=__set_m_BottomMostVertexIndex))  m_BottomMostVertexIndex;

constexpr void __set_m_BottomMostVertexIndex(int32_t value) ;

constexpr int32_t __get_m_BottomMostVertexIndex() const;

 bool __declspec(property(get=__get_m_Smooth, put=__set_m_Smooth))  m_Smooth;

constexpr void __set_m_Smooth(bool value) ;

constexpr bool __get_m_Smooth() const;


// Methods

/// @brief Method CopyShape addr 0x29f82ec size 0x84 virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method UpdateBounds addr 0x29f8370 size 0x6c virtual true final false
 UnityEngine::Bounds UpdateBounds(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation, UnityEngine::Bounds bounds) ;

/// @brief Method RebuildMesh addr 0x29f83dc size 0x8fc virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

/// @brief Method SubdivideIcosahedron addr 0x29f8cd8 size 0x62c virtual false final false
static ::ArrayW<UnityEngine::Vector3> SubdivideIcosahedron(::ArrayW<UnityEngine::Vector3> vertices, float_t radius) ;

static UnityEngine::ProBuilder::Shapes::Sphere New_ctor() ;

/// @brief Method .ctor addr 0x29f9304 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Sphere);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Sphere, "UnityEngine.ProBuilder.Shapes", "Sphere");
