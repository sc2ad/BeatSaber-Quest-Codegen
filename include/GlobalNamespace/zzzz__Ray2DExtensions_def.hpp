#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Ray2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class Ray2DExtensions;
}
// Type: ::Ray2DExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13822))
// CS Name: Ray2DExtensions
class CORDL_TYPE Ray2DExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Ray2DExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ray2DExtensions", modifiers: " const&", def_value: None }]
constexpr Ray2DExtensions(Ray2DExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ray2DExtensions", modifiers: "&&", def_value: None }]
constexpr Ray2DExtensions(Ray2DExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ray2DExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Ray2DExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ray2DExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ray2DExtensions& operator=(Ray2DExtensions&& o) noexcept = default;
  constexpr Ray2DExtensions& operator=(Ray2DExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method CircleIntersections addr 0x1f79d70 size 0x22c virtual false final false
static int32_t CircleIntersections(UnityEngine::Ray2D ray, UnityEngine::Vector2 circleCenter, float_t radius, ::ArrayW<float_t> distances) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Ray2DExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Ray2DExtensions, "", "Ray2DExtensions");
