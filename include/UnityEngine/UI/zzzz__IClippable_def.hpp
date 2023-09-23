#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class IClippable;
}
// Type: UnityEngine.UI::IClippable
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12966))
// CS Name: UnityEngine.UI.IClippable
class CORDL_TYPE IClippable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IClippable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IClippable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::GameObject __declspec(property(get=get_gameObject))  gameObject;

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;


// Methods

/// @brief Method get_gameObject addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::GameObject get_gameObject() ;

/// @brief Method RecalculateClipping addr 0x0 size 0xffffffffffffffff virtual true final false
 void RecalculateClipping() ;

/// @brief Method get_rectTransform addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method Cull addr 0x0 size 0xffffffffffffffff virtual true final false
 void Cull(UnityEngine::Rect clipRect, bool validRect) ;

/// @brief Method SetClipRect addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetClipRect(UnityEngine::Rect value, bool validRect) ;

/// @brief Method SetClipSoftness addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetClipSoftness(UnityEngine::Vector2 clipSoftness) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::IClippable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IClippable, "UnityEngine.UI", "IClippable");
