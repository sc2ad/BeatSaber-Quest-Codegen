#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutElement;
}
// Type: UnityEngine.UI::ILayoutElement
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13023))
// CS Name: UnityEngine.UI.ILayoutElement
class CORDL_TYPE ILayoutElement : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILayoutElement() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILayoutElement(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_minWidth))  minWidth;

 float_t __declspec(property(get=get_preferredWidth))  preferredWidth;

 float_t __declspec(property(get=get_flexibleWidth))  flexibleWidth;

 float_t __declspec(property(get=get_minHeight))  minHeight;

 float_t __declspec(property(get=get_preferredHeight))  preferredHeight;

 float_t __declspec(property(get=get_flexibleHeight))  flexibleHeight;

 int32_t __declspec(property(get=get_layoutPriority))  layoutPriority;


// Methods

/// @brief Method CalculateLayoutInputHorizontal addr 0x0 size 0xffffffffffffffff virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x0 size 0xffffffffffffffff virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method get_minWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_minWidth() ;

/// @brief Method get_preferredWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_preferredWidth() ;

/// @brief Method get_flexibleWidth addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_flexibleWidth() ;

/// @brief Method get_minHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_minHeight() ;

/// @brief Method get_preferredHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_preferredHeight() ;

/// @brief Method get_flexibleHeight addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_flexibleHeight() ;

/// @brief Method get_layoutPriority addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_layoutPriority() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::ILayoutElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ILayoutElement, "UnityEngine.UI", "ILayoutElement");
