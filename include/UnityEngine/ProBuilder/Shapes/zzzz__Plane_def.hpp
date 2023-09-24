#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Plane;
}
// Type: UnityEngine.ProBuilder.Shapes::Plane
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12172))
// CS Name: UnityEngine.ProBuilder.Shapes.Plane
class CORDL_TYPE Plane : public UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Plane() = default;

// Ctor Parameters [CppParam { name: "", ty: "Plane", modifiers: " const&", def_value: None }]
constexpr Plane(Plane const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Plane", modifiers: "&&", def_value: None }]
constexpr Plane(Plane&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Plane(void* ptr) noexcept : UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Plane& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Plane& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Plane& operator=(Plane&& o) noexcept = default;
  constexpr Plane& operator=(Plane const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_HeightSegments, put=__set_m_HeightSegments))  m_HeightSegments;

constexpr void __set_m_HeightSegments(int32_t value) ;

constexpr int32_t __get_m_HeightSegments() const;

 int32_t __declspec(property(get=__get_m_WidthSegments, put=__set_m_WidthSegments))  m_WidthSegments;

constexpr void __set_m_WidthSegments(int32_t value) ;

constexpr int32_t __get_m_WidthSegments() const;


// Methods

/// @brief Method CopyShape addr 0x29f6720 size 0xac virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method RebuildMesh addr 0x29f67cc size 0x24c virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

static UnityEngine::ProBuilder::Shapes::Plane New_ctor() ;

/// @brief Method .ctor addr 0x29f6a18 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Plane);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Plane, "UnityEngine.ProBuilder.Shapes", "Plane");
