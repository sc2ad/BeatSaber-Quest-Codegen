#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Align;
}
namespace UnityEngine::UIElements {
struct Wrap;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct Position;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct LayoutData;
}
// Type: UnityEngine.UIElements::LayoutData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7457))
// CS Name: UnityEngine.UIElements.LayoutData
struct CORDL_TYPE LayoutData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::LayoutData>
constexpr operator  ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::LayoutData>() const;

/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::LayoutData>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::LayoutData>() const;

// Ctor Parameters [CppParam { name: "alignContent", ty: "::UnityEngine::UIElements::Align", modifiers: "", def_value: None }, CppParam { name: "alignItems", ty: "::UnityEngine::UIElements::Align", modifiers: "", def_value: None }, CppParam { name: "alignSelf", ty: "::UnityEngine::UIElements::Align", modifiers: "", def_value: None }, CppParam { name: "borderBottomWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "borderLeftWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "borderRightWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "borderTopWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottom", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "display", ty: "::UnityEngine::UIElements::DisplayStyle", modifiers: "", def_value: None }, CppParam { name: "flexBasis", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "flexDirection", ty: "::UnityEngine::UIElements::FlexDirection", modifiers: "", def_value: None }, CppParam { name: "flexGrow", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "flexShrink", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "flexWrap", ty: "::UnityEngine::UIElements::Wrap", modifiers: "", def_value: None }, CppParam { name: "height", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "justifyContent", ty: "::UnityEngine::UIElements::Justify", modifiers: "", def_value: None }, CppParam { name: "left", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "marginBottom", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "marginLeft", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "marginRight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "marginTop", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "maxHeight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "maxWidth", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "minHeight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "minWidth", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paddingBottom", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paddingLeft", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paddingRight", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paddingTop", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::UIElements::Position", modifiers: "", def_value: None }, CppParam { name: "right", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "top", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "width", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }]
constexpr LayoutData(::UnityEngine::UIElements::Align alignContent, ::UnityEngine::UIElements::Align alignItems, ::UnityEngine::UIElements::Align alignSelf, float_t borderBottomWidth, float_t borderLeftWidth, float_t borderRightWidth, float_t borderTopWidth, ::UnityEngine::UIElements::Length bottom, ::UnityEngine::UIElements::DisplayStyle display, ::UnityEngine::UIElements::Length flexBasis, ::UnityEngine::UIElements::FlexDirection flexDirection, float_t flexGrow, float_t flexShrink, ::UnityEngine::UIElements::Wrap flexWrap, ::UnityEngine::UIElements::Length height, ::UnityEngine::UIElements::Justify justifyContent, ::UnityEngine::UIElements::Length left, ::UnityEngine::UIElements::Length marginBottom, ::UnityEngine::UIElements::Length marginLeft, ::UnityEngine::UIElements::Length marginRight, ::UnityEngine::UIElements::Length marginTop, ::UnityEngine::UIElements::Length maxHeight, ::UnityEngine::UIElements::Length maxWidth, ::UnityEngine::UIElements::Length minHeight, ::UnityEngine::UIElements::Length minWidth, ::UnityEngine::UIElements::Length paddingBottom, ::UnityEngine::UIElements::Length paddingLeft, ::UnityEngine::UIElements::Length paddingRight, ::UnityEngine::UIElements::Length paddingTop, ::UnityEngine::UIElements::Position position, ::UnityEngine::UIElements::Length right, ::UnityEngine::UIElements::Length top, ::UnityEngine::UIElements::Length width) noexcept;


                    constexpr LayoutData(LayoutData const&) = default;
                    constexpr LayoutData(LayoutData&&) = default;
                    constexpr LayoutData& operator=(LayoutData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LayoutData& operator=(LayoutData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xd0};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LayoutData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::Align __declspec(property(get=__get_alignContent, put=__set_alignContent))  alignContent;

constexpr void __set_alignContent(::UnityEngine::UIElements::Align value) ;

constexpr ::UnityEngine::UIElements::Align __get_alignContent() const;

 ::UnityEngine::UIElements::Align __declspec(property(get=__get_alignItems, put=__set_alignItems))  alignItems;

constexpr void __set_alignItems(::UnityEngine::UIElements::Align value) ;

constexpr ::UnityEngine::UIElements::Align __get_alignItems() const;

 ::UnityEngine::UIElements::Align __declspec(property(get=__get_alignSelf, put=__set_alignSelf))  alignSelf;

constexpr void __set_alignSelf(::UnityEngine::UIElements::Align value) ;

constexpr ::UnityEngine::UIElements::Align __get_alignSelf() const;

 float_t __declspec(property(get=__get_borderBottomWidth, put=__set_borderBottomWidth))  borderBottomWidth;

constexpr void __set_borderBottomWidth(float_t value) ;

constexpr float_t __get_borderBottomWidth() const;

 float_t __declspec(property(get=__get_borderLeftWidth, put=__set_borderLeftWidth))  borderLeftWidth;

constexpr void __set_borderLeftWidth(float_t value) ;

constexpr float_t __get_borderLeftWidth() const;

 float_t __declspec(property(get=__get_borderRightWidth, put=__set_borderRightWidth))  borderRightWidth;

constexpr void __set_borderRightWidth(float_t value) ;

constexpr float_t __get_borderRightWidth() const;

 float_t __declspec(property(get=__get_borderTopWidth, put=__set_borderTopWidth))  borderTopWidth;

constexpr void __set_borderTopWidth(float_t value) ;

constexpr float_t __get_borderTopWidth() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_bottom, put=__set_bottom))  bottom;

constexpr void __set_bottom(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_bottom() const;

 ::UnityEngine::UIElements::DisplayStyle __declspec(property(get=__get_display, put=__set_display))  display;

constexpr void __set_display(::UnityEngine::UIElements::DisplayStyle value) ;

constexpr ::UnityEngine::UIElements::DisplayStyle __get_display() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_flexBasis, put=__set_flexBasis))  flexBasis;

constexpr void __set_flexBasis(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_flexBasis() const;

 ::UnityEngine::UIElements::FlexDirection __declspec(property(get=__get_flexDirection, put=__set_flexDirection))  flexDirection;

constexpr void __set_flexDirection(::UnityEngine::UIElements::FlexDirection value) ;

constexpr ::UnityEngine::UIElements::FlexDirection __get_flexDirection() const;

 float_t __declspec(property(get=__get_flexGrow, put=__set_flexGrow))  flexGrow;

constexpr void __set_flexGrow(float_t value) ;

constexpr float_t __get_flexGrow() const;

 float_t __declspec(property(get=__get_flexShrink, put=__set_flexShrink))  flexShrink;

constexpr void __set_flexShrink(float_t value) ;

constexpr float_t __get_flexShrink() const;

 ::UnityEngine::UIElements::Wrap __declspec(property(get=__get_flexWrap, put=__set_flexWrap))  flexWrap;

constexpr void __set_flexWrap(::UnityEngine::UIElements::Wrap value) ;

constexpr ::UnityEngine::UIElements::Wrap __get_flexWrap() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_height() const;

 ::UnityEngine::UIElements::Justify __declspec(property(get=__get_justifyContent, put=__set_justifyContent))  justifyContent;

constexpr void __set_justifyContent(::UnityEngine::UIElements::Justify value) ;

constexpr ::UnityEngine::UIElements::Justify __get_justifyContent() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_left, put=__set_left))  left;

constexpr void __set_left(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_left() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_marginBottom, put=__set_marginBottom))  marginBottom;

constexpr void __set_marginBottom(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_marginBottom() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_marginLeft, put=__set_marginLeft))  marginLeft;

constexpr void __set_marginLeft(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_marginLeft() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_marginRight, put=__set_marginRight))  marginRight;

constexpr void __set_marginRight(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_marginRight() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_marginTop, put=__set_marginTop))  marginTop;

constexpr void __set_marginTop(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_marginTop() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_maxHeight, put=__set_maxHeight))  maxHeight;

constexpr void __set_maxHeight(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_maxHeight() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_maxWidth, put=__set_maxWidth))  maxWidth;

constexpr void __set_maxWidth(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_maxWidth() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_minHeight, put=__set_minHeight))  minHeight;

constexpr void __set_minHeight(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_minHeight() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_minWidth, put=__set_minWidth))  minWidth;

constexpr void __set_minWidth(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_minWidth() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_paddingBottom, put=__set_paddingBottom))  paddingBottom;

constexpr void __set_paddingBottom(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_paddingBottom() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_paddingLeft, put=__set_paddingLeft))  paddingLeft;

constexpr void __set_paddingLeft(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_paddingLeft() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_paddingRight, put=__set_paddingRight))  paddingRight;

constexpr void __set_paddingRight(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_paddingRight() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_paddingTop, put=__set_paddingTop))  paddingTop;

constexpr void __set_paddingTop(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_paddingTop() const;

 ::UnityEngine::UIElements::Position __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(::UnityEngine::UIElements::Position value) ;

constexpr ::UnityEngine::UIElements::Position __get_position() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_right, put=__set_right))  right;

constexpr void __set_right(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_right() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_top, put=__set_top))  top;

constexpr void __set_top(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_top() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_width() const;


// Methods

/// @brief Method Copy addr 0x2d0d884 size 0x1c virtual true final true
 ::UnityEngine::UIElements::LayoutData Copy() ;

/// @brief Method CopyFrom addr 0x2d0d8a0 size 0x14 virtual true final true
 void CopyFrom(ByRef<::UnityEngine::UIElements::LayoutData> other) ;

/// @brief Method op_Equality addr 0x2d0d8b4 size 0x280 virtual false final false
static bool op_Equality(::UnityEngine::UIElements::LayoutData lhs, ::UnityEngine::UIElements::LayoutData rhs) ;

/// @brief Method Equals addr 0x2d0db34 size 0x4c virtual true final true
 bool Equals(::UnityEngine::UIElements::LayoutData other) ;

/// @brief Method Equals addr 0x2d0db80 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d0dc28 size 0x264 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::LayoutData, "UnityEngine.UIElements", "LayoutData");
