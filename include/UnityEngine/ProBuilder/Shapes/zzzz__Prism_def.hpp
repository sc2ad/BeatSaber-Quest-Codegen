#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Prism;
}
// Type: UnityEngine.ProBuilder.Shapes::Prism
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12173))
// CS Name: UnityEngine.ProBuilder.Shapes.Prism
class CORDL_TYPE Prism : public UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Prism() = default;

// Ctor Parameters [CppParam { name: "", ty: "Prism", modifiers: " const&", def_value: None }]
constexpr Prism(Prism const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Prism", modifiers: "&&", def_value: None }]
constexpr Prism(Prism&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Prism(void* ptr) noexcept : UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Prism& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Prism& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Prism& operator=(Prism&& o) noexcept = default;
  constexpr Prism& operator=(Prism const& o) noexcept = default;
                


// Methods

/// @brief Method CopyShape addr 0x29f6a28 size 0x4 virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method RebuildMesh addr 0x29f6a2c size 0x814 virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

static UnityEngine::ProBuilder::Shapes::Prism New_ctor() ;

/// @brief Method .ctor addr 0x29f7240 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Prism);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Prism, "UnityEngine.ProBuilder.Shapes", "Prism");
