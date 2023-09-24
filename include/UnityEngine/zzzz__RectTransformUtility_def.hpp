#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine {
class RectTransformUtility;
}
// Type: UnityEngine::RectTransformUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15755))
// CS Name: UnityEngine.RectTransformUtility
class CORDL_TYPE RectTransformUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RectTransformUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "RectTransformUtility", modifiers: " const&", def_value: None }]
constexpr RectTransformUtility(RectTransformUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RectTransformUtility", modifiers: "&&", def_value: None }]
constexpr RectTransformUtility(RectTransformUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RectTransformUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RectTransformUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RectTransformUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RectTransformUtility& operator=(RectTransformUtility&& o) noexcept = default;
  constexpr RectTransformUtility& operator=(RectTransformUtility const& o) noexcept = default;
                


// Fields

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_s_Corners, put=__set_s_Corners))  s_Corners;

static void __set_s_Corners(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_s_Corners() ;


// Methods

/// @brief Method PixelAdjustPoint addr 0x2d306a8 size 0xa4 virtual false final false
static UnityEngine::Vector2 PixelAdjustPoint(UnityEngine::Vector2 point, UnityEngine::Transform elementTransform, UnityEngine::Canvas canvas) ;

/// @brief Method PixelAdjustRect addr 0x2d307a8 size 0xa0 virtual false final false
static UnityEngine::Rect PixelAdjustRect(UnityEngine::RectTransform rectTransform, UnityEngine::Canvas canvas) ;

/// @brief Method PointInRectangle addr 0x2d3089c size 0xa8 virtual false final false
static bool PointInRectangle(UnityEngine::Vector2 screenPoint, UnityEngine::RectTransform rect, UnityEngine::Camera cam, UnityEngine::Vector4 offset) ;

/// @brief Method RectangleContainsScreenPoint addr 0x2d309a0 size 0xd4 virtual false final false
static bool RectangleContainsScreenPoint(UnityEngine::RectTransform rect, UnityEngine::Vector2 screenPoint, UnityEngine::Camera cam) ;

/// @brief Method RectangleContainsScreenPoint addr 0x2d30a74 size 0xac virtual false final false
static bool RectangleContainsScreenPoint(UnityEngine::RectTransform rect, UnityEngine::Vector2 screenPoint, UnityEngine::Camera cam, UnityEngine::Vector4 offset) ;

/// @brief Method ScreenPointToWorldPointInRectangle addr 0x2d30b20 size 0x2ec virtual false final false
static bool ScreenPointToWorldPointInRectangle(UnityEngine::RectTransform rect, UnityEngine::Vector2 screenPoint, UnityEngine::Camera cam, ByRef<UnityEngine::Vector3> worldPoint) ;

/// @brief Method ScreenPointToLocalPointInRectangle addr 0x2d30f3c size 0x100 virtual false final false
static bool ScreenPointToLocalPointInRectangle(UnityEngine::RectTransform rect, UnityEngine::Vector2 screenPoint, UnityEngine::Camera cam, ByRef<UnityEngine::Vector2> localPoint) ;

/// @brief Method ScreenPointToRay addr 0x2d30e0c size 0x130 virtual false final false
static UnityEngine::Ray ScreenPointToRay(UnityEngine::Camera cam, UnityEngine::Vector2 screenPos) ;

/// @brief Method WorldToScreenPoint addr 0x2d3103c size 0xb0 virtual false final false
static UnityEngine::Vector2 WorldToScreenPoint(UnityEngine::Camera cam, UnityEngine::Vector3 worldPoint) ;

/// @brief Method FlipLayoutOnAxis addr 0x2d310ec size 0x2c4 virtual false final false
static void FlipLayoutOnAxis(UnityEngine::RectTransform rect, int32_t axis, bool keepPositioning, bool recursive) ;

/// @brief Method FlipLayoutAxes addr 0x2d313b0 size 0x250 virtual false final false
static void FlipLayoutAxes(UnityEngine::RectTransform rect, bool keepPositioning, bool recursive) ;

/// @brief Method GetTransposed addr 0x2d31600 size 0x10 virtual false final false
static UnityEngine::Vector2 GetTransposed(UnityEngine::Vector2 input) ;

/// @brief Method PixelAdjustPoint_Injected addr 0x2d3074c size 0x5c virtual false final false
static void PixelAdjustPoint_Injected(ByRef<UnityEngine::Vector2> point, UnityEngine::Transform elementTransform, UnityEngine::Canvas canvas, ByRef<UnityEngine::Vector2> ret) ;

/// @brief Method PixelAdjustRect_Injected addr 0x2d30848 size 0x54 virtual false final false
static void PixelAdjustRect_Injected(UnityEngine::RectTransform rectTransform, UnityEngine::Canvas canvas, ByRef<UnityEngine::Rect> ret) ;

/// @brief Method PointInRectangle_Injected addr 0x2d30944 size 0x5c virtual false final false
static bool PointInRectangle_Injected(ByRef<UnityEngine::Vector2> screenPoint, UnityEngine::RectTransform rect, UnityEngine::Camera cam, ByRef<UnityEngine::Vector4> offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::RectTransformUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectTransformUtility, "UnityEngine", "RectTransformUtility");
