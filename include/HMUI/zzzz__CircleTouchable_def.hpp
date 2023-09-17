#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__Touchable_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HMUI {
class CircleTouchable;
}
// Type: HMUI::CircleTouchable
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13617))
// CS Name: HMUI.CircleTouchable
class CORDL_TYPE CircleTouchable : public ::HMUI::Touchable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~CircleTouchable() = default;

// Ctor Parameters [CppParam { name: "", ty: "CircleTouchable", modifiers: " const&", def_value: None }]
constexpr CircleTouchable(CircleTouchable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CircleTouchable", modifiers: "&&", def_value: None }]
constexpr CircleTouchable(CircleTouchable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CircleTouchable(void* ptr) noexcept : ::HMUI::Touchable(ptr) {
}


  constexpr CircleTouchable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CircleTouchable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CircleTouchable& operator=(CircleTouchable&& o) noexcept = default;
  constexpr CircleTouchable& operator=(CircleTouchable const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__minRadius, put=__set__minRadius))  _minRadius;

constexpr void __set__minRadius(float_t value) ;

constexpr float_t __get__minRadius() const;

 float_t __declspec(property(get=__get__maxRadius, put=__set__maxRadius))  _maxRadius;

constexpr void __set__maxRadius(float_t value) ;

constexpr float_t __get__maxRadius() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get__containerRect, put=__set__containerRect))  _containerRect;

constexpr void __set__containerRect(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__containerRect() const;


// Methods

/// @brief Method OnEnable addr 0x1fb1728 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method UpdateCachedReferences addr 0x1fb1744 size 0x6c virtual false final false
 void UpdateCachedReferences() ;

/// @brief Method Raycast addr 0x1fb17b0 size 0xcc virtual true final false
 bool Raycast(::UnityEngine::Vector2 sp, ::UnityEngine::Camera eventCamera) ;

/// @brief Method OnDrawGizmosSelected addr 0x1fb187c size 0x110 virtual false final false
 void OnDrawGizmosSelected() ;

/// @brief Method DrawGizmoCircle addr 0x1fb198c size 0xe0 virtual false final false
 void DrawGizmoCircle(::UnityEngine::Vector3 center, float_t radius, int32_t steps) ;

// Ctor Parameters []
explicit CircleTouchable() ;

/// @brief Method .ctor addr 0x1fb1a6c size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::CircleTouchable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CircleTouchable, "HMUI", "CircleTouchable");
