#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Arch;
}
// Type: UnityEngine.ProBuilder.Shapes::Arch
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12166))
// CS Name: UnityEngine.ProBuilder.Shapes.Arch
class CORDL_TYPE Arch : public UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Arch() = default;

// Ctor Parameters [CppParam { name: "", ty: "Arch", modifiers: " const&", def_value: None }]
constexpr Arch(Arch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Arch", modifiers: "&&", def_value: None }]
constexpr Arch(Arch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Arch(void* ptr) noexcept : UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Arch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Arch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Arch& operator=(Arch&& o) noexcept = default;
  constexpr Arch& operator=(Arch const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_Thickness, put=__set_m_Thickness))  m_Thickness;

constexpr void __set_m_Thickness(float_t value) ;

constexpr float_t __get_m_Thickness() const;

 int32_t __declspec(property(get=__get_m_NumberOfSides, put=__set_m_NumberOfSides))  m_NumberOfSides;

constexpr void __set_m_NumberOfSides(int32_t value) ;

constexpr int32_t __get_m_NumberOfSides() const;

 float_t __declspec(property(get=__get_m_ArchDegrees, put=__set_m_ArchDegrees))  m_ArchDegrees;

constexpr void __set_m_ArchDegrees(float_t value) ;

constexpr float_t __get_m_ArchDegrees() const;

 bool __declspec(property(get=__get_m_EndCaps, put=__set_m_EndCaps))  m_EndCaps;

constexpr void __set_m_EndCaps(bool value) ;

constexpr bool __get_m_EndCaps() const;

 bool __declspec(property(get=__get_m_Smooth, put=__set_m_Smooth))  m_Smooth;

constexpr void __set_m_Smooth(bool value) ;

constexpr bool __get_m_Smooth() const;


// Methods

/// @brief Method CopyShape addr 0x29f13e8 size 0x94 virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method GetFace addr 0x29f147c size 0xc4 virtual false final false
 ::ArrayW<UnityEngine::Vector3> GetFace(UnityEngine::Vector2 vertex1, UnityEngine::Vector2 vertex2, float_t depth) ;

/// @brief Method RebuildMesh addr 0x29f1540 size 0xc00 virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

// Ctor Parameters []
explicit Arch() ;

/// @brief Method .ctor addr 0x29f2140 size 0x28 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Arch);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Arch, "UnityEngine.ProBuilder.Shapes", "Arch");
