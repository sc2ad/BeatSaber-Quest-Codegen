#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class Cube;
}
// Type: UnityEngine.ProBuilder.Shapes::Cube
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12168))
// CS Name: UnityEngine.ProBuilder.Shapes.Cube
class CORDL_TYPE Cube : public UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Cube() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cube", modifiers: " const&", def_value: None }]
constexpr Cube(Cube const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cube", modifiers: "&&", def_value: None }]
constexpr Cube(Cube&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cube(void* ptr) noexcept : UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Cube& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cube& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cube& operator=(Cube&& o) noexcept = default;
  constexpr Cube& operator=(Cube const& o) noexcept = default;
                


// Fields

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_k_CubeVertices, put=__set_k_CubeVertices))  k_CubeVertices;

static void __set_k_CubeVertices(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_k_CubeVertices() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_k_CubeTriangles, put=__set_k_CubeTriangles))  k_CubeTriangles;

static void __set_k_CubeTriangles(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_k_CubeTriangles() ;


// Methods

/// @brief Method CopyShape addr 0x29f2fcc size 0x4 virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method RebuildMesh addr 0x29f2fd0 size 0x20c virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

static UnityEngine::ProBuilder::Shapes::Cube New_ctor() ;

/// @brief Method .ctor addr 0x29f31dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Cube);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Cube, "UnityEngine.ProBuilder.Shapes", "Cube");
