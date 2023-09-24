#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
// Type: UnityEngine.ProBuilder.Shapes::Shape
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12175))
// CS Name: UnityEngine.ProBuilder.Shapes.Shape
class CORDL_TYPE Shape : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Shape() = default;

// Ctor Parameters [CppParam { name: "", ty: "Shape", modifiers: " const&", def_value: None }]
constexpr Shape(Shape const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Shape", modifiers: "&&", def_value: None }]
constexpr Shape(Shape&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Shape(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Shape& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Shape& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Shape& operator=(Shape&& o) noexcept = default;
  constexpr Shape& operator=(Shape const& o) noexcept = default;
                


// Methods

/// @brief Method UpdateBounds addr 0x29f8278 size 0x4c virtual true final false
 UnityEngine::Bounds UpdateBounds(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation, UnityEngine::Bounds bounds) ;

/// @brief Method RebuildMesh addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

/// @brief Method CopyShape addr 0x0 size 0xffffffffffffffff virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

static UnityEngine::ProBuilder::Shapes::Shape New_ctor() ;

/// @brief Method .ctor addr 0x29f2168 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Shape);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Shape, "UnityEngine.ProBuilder.Shapes", "Shape");
