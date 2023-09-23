#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Sprite;
}
// Type: UnityEngine.ProBuilder.Shapes::Sprite
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12178))
// CS Name: UnityEngine.ProBuilder.Shapes.Sprite
class CORDL_TYPE Sprite : public UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Sprite() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: " const&", def_value: None }]
constexpr Sprite(Sprite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sprite", modifiers: "&&", def_value: None }]
constexpr Sprite(Sprite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sprite(void* ptr) noexcept : UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Sprite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sprite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sprite& operator=(Sprite&& o) noexcept = default;
  constexpr Sprite& operator=(Sprite const& o) noexcept = default;
                


// Methods

/// @brief Method CopyShape addr 0x29f9500 size 0x4 virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method RebuildMesh addr 0x29f9504 size 0x32c virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

// Ctor Parameters []
explicit Sprite() ;

/// @brief Method .ctor addr 0x29f9830 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Sprite);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Sprite, "UnityEngine.ProBuilder.Shapes", "Sprite");
