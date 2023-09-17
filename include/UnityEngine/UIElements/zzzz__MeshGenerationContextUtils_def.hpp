#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements {
struct ColorPage;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
struct SpritePackingRotation;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__MeshGenerationContext__MeshFlags;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct OverflowInternal;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine::UIElements {
struct TextOverflow;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MeshGenerationContextUtils;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;
}
// Type: ::BorderParams
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7432))
// CS Name: UnityEngine.UIElements.MeshGenerationContextUtils::BorderParams
struct CORDL_TYPE ____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "topColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "rightColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "bottomColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams(::UnityEngine::Rect rect, ::UnityEngine::Color playmodeTintColor, ::UnityEngine::Color leftColor, ::UnityEngine::Color topColor, ::UnityEngine::Color rightColor, ::UnityEngine::Color bottomColor, float_t leftWidth, float_t topWidth, float_t rightWidth, float_t bottomWidth, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius, ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::Material material, ::UnityEngine::UIElements::ColorPage leftColorPage, ::UnityEngine::UIElements::ColorPage topColorPage, ::UnityEngine::UIElements::ColorPage rightColorPage, ::UnityEngine::UIElements::ColorPage bottomColorPage) noexcept;


                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams(____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams const&) = default;
                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams(____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams&&) = default;
                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams& operator=(____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams& operator=(____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xb8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Rect __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_rect() const;

 ::UnityEngine::Color __declspec(property(get=__get_playmodeTintColor, put=__set_playmodeTintColor))  playmodeTintColor;

constexpr void __set_playmodeTintColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_playmodeTintColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_leftColor, put=__set_leftColor))  leftColor;

constexpr void __set_leftColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_leftColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_topColor, put=__set_topColor))  topColor;

constexpr void __set_topColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_topColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_rightColor, put=__set_rightColor))  rightColor;

constexpr void __set_rightColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_rightColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_bottomColor, put=__set_bottomColor))  bottomColor;

constexpr void __set_bottomColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_bottomColor() const;

 float_t __declspec(property(get=__get_leftWidth, put=__set_leftWidth))  leftWidth;

constexpr void __set_leftWidth(float_t value) ;

constexpr float_t __get_leftWidth() const;

 float_t __declspec(property(get=__get_topWidth, put=__set_topWidth))  topWidth;

constexpr void __set_topWidth(float_t value) ;

constexpr float_t __get_topWidth() const;

 float_t __declspec(property(get=__get_rightWidth, put=__set_rightWidth))  rightWidth;

constexpr void __set_rightWidth(float_t value) ;

constexpr float_t __get_rightWidth() const;

 float_t __declspec(property(get=__get_bottomWidth, put=__set_bottomWidth))  bottomWidth;

constexpr void __set_bottomWidth(float_t value) ;

constexpr float_t __get_bottomWidth() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_topLeftRadius, put=__set_topLeftRadius))  topLeftRadius;

constexpr void __set_topLeftRadius(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_topLeftRadius() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_topRightRadius, put=__set_topRightRadius))  topRightRadius;

constexpr void __set_topRightRadius(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_topRightRadius() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_bottomRightRadius, put=__set_bottomRightRadius))  bottomRightRadius;

constexpr void __set_bottomRightRadius(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_bottomRightRadius() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_bottomLeftRadius, put=__set_bottomLeftRadius))  bottomLeftRadius;

constexpr void __set_bottomLeftRadius(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_bottomLeftRadius() const;

 ::UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_material() const;

 ::UnityEngine::UIElements::ColorPage __declspec(property(get=__get_leftColorPage, put=__set_leftColorPage))  leftColorPage;

constexpr void __set_leftColorPage(::UnityEngine::UIElements::ColorPage value) ;

constexpr ::UnityEngine::UIElements::ColorPage __get_leftColorPage() const;

 ::UnityEngine::UIElements::ColorPage __declspec(property(get=__get_topColorPage, put=__set_topColorPage))  topColorPage;

constexpr void __set_topColorPage(::UnityEngine::UIElements::ColorPage value) ;

constexpr ::UnityEngine::UIElements::ColorPage __get_topColorPage() const;

 ::UnityEngine::UIElements::ColorPage __declspec(property(get=__get_rightColorPage, put=__set_rightColorPage))  rightColorPage;

constexpr void __set_rightColorPage(::UnityEngine::UIElements::ColorPage value) ;

constexpr ::UnityEngine::UIElements::ColorPage __get_rightColorPage() const;

 ::UnityEngine::UIElements::ColorPage __declspec(property(get=__get_bottomColorPage, put=__set_bottomColorPage))  bottomColorPage;

constexpr void __set_bottomColorPage(::UnityEngine::UIElements::ColorPage value) ;

constexpr ::UnityEngine::UIElements::ColorPage __get_bottomColorPage() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::RectangleParams
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7433))
// CS Name: UnityEngine.UIElements.MeshGenerationContextUtils::RectangleParams
struct CORDL_TYPE ____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "::UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "sprite", ty: "::UnityEngine::Sprite", modifiers: "", def_value: None }, CppParam { name: "vectorImage", ty: "::UnityEngine::UIElements::VectorImage", modifiers: "", def_value: None }, CppParam { name: "material", ty: "::UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: None }, CppParam { name: "meshFlags", ty: "::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Color color, ::UnityEngine::Texture texture, ::UnityEngine::Sprite sprite, ::UnityEngine::UIElements::VectorImage vectorImage, ::UnityEngine::Material material, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color playmodeTintColor, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius, ::UnityEngine::Vector2 bottomLeftRadius, int32_t leftSlice, int32_t topSlice, int32_t rightSlice, int32_t bottomSlice, float_t sliceScale, ::UnityEngine::Rect spriteGeomRect, ::UnityEngine::UIElements::ColorPage colorPage, ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags meshFlags) noexcept;


                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams(____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams const&) = default;
                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams(____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams&&) = default;
                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams& operator=(____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams& operator=(____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xb8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Rect __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_rect() const;

 ::UnityEngine::Rect __declspec(property(get=__get_uv, put=__set_uv))  uv;

constexpr void __set_uv(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_uv() const;

 ::UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_color() const;

 ::UnityEngine::Texture __declspec(property(get=__get_texture, put=__set_texture))  texture;

constexpr void __set_texture(::UnityEngine::Texture value) ;

constexpr ::UnityEngine::Texture __get_texture() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_sprite, put=__set_sprite))  sprite;

constexpr void __set_sprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_sprite() const;

 ::UnityEngine::UIElements::VectorImage __declspec(property(get=__get_vectorImage, put=__set_vectorImage))  vectorImage;

constexpr void __set_vectorImage(::UnityEngine::UIElements::VectorImage value) ;

constexpr ::UnityEngine::UIElements::VectorImage __get_vectorImage() const;

 ::UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_material() const;

 ::UnityEngine::ScaleMode __declspec(property(get=__get_scaleMode, put=__set_scaleMode))  scaleMode;

constexpr void __set_scaleMode(::UnityEngine::ScaleMode value) ;

constexpr ::UnityEngine::ScaleMode __get_scaleMode() const;

 ::UnityEngine::Color __declspec(property(get=__get_playmodeTintColor, put=__set_playmodeTintColor))  playmodeTintColor;

constexpr void __set_playmodeTintColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_playmodeTintColor() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_topLeftRadius, put=__set_topLeftRadius))  topLeftRadius;

constexpr void __set_topLeftRadius(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_topLeftRadius() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_topRightRadius, put=__set_topRightRadius))  topRightRadius;

constexpr void __set_topRightRadius(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_topRightRadius() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_bottomRightRadius, put=__set_bottomRightRadius))  bottomRightRadius;

constexpr void __set_bottomRightRadius(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_bottomRightRadius() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_bottomLeftRadius, put=__set_bottomLeftRadius))  bottomLeftRadius;

constexpr void __set_bottomLeftRadius(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_bottomLeftRadius() const;

 int32_t __declspec(property(get=__get_leftSlice, put=__set_leftSlice))  leftSlice;

constexpr void __set_leftSlice(int32_t value) ;

constexpr int32_t __get_leftSlice() const;

 int32_t __declspec(property(get=__get_topSlice, put=__set_topSlice))  topSlice;

constexpr void __set_topSlice(int32_t value) ;

constexpr int32_t __get_topSlice() const;

 int32_t __declspec(property(get=__get_rightSlice, put=__set_rightSlice))  rightSlice;

constexpr void __set_rightSlice(int32_t value) ;

constexpr int32_t __get_rightSlice() const;

 int32_t __declspec(property(get=__get_bottomSlice, put=__set_bottomSlice))  bottomSlice;

constexpr void __set_bottomSlice(int32_t value) ;

constexpr int32_t __get_bottomSlice() const;

 float_t __declspec(property(get=__get_sliceScale, put=__set_sliceScale))  sliceScale;

constexpr void __set_sliceScale(float_t value) ;

constexpr float_t __get_sliceScale() const;

 ::UnityEngine::Rect __declspec(property(get=__get_spriteGeomRect, put=__set_spriteGeomRect))  spriteGeomRect;

constexpr void __set_spriteGeomRect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_spriteGeomRect() const;

 ::UnityEngine::UIElements::ColorPage __declspec(property(get=__get_colorPage, put=__set_colorPage))  colorPage;

constexpr void __set_colorPage(::UnityEngine::UIElements::ColorPage value) ;

constexpr ::UnityEngine::UIElements::ColorPage __get_colorPage() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags __declspec(property(get=__get_meshFlags, put=__set_meshFlags))  meshFlags;

constexpr void __set_meshFlags(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContext__MeshFlags __get_meshFlags() const;


// Methods

/// @brief Method AdjustUVsForScaleMode addr 0x2d03080 size 0x320 virtual false final false
static void AdjustUVsForScaleMode(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Texture texture, ::UnityEngine::ScaleMode scaleMode, ByRef<::UnityEngine::Rect> rectOut, ByRef<::UnityEngine::Rect> uvOut) ;

/// @brief Method AdjustSpriteUVsForScaleMode addr 0x2d033a0 size 0x760 virtual false final false
static void AdjustSpriteUVsForScaleMode(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Rect geomRect, ::UnityEngine::Texture texture, ::UnityEngine::Sprite sprite, ::UnityEngine::ScaleMode scaleMode, ByRef<::UnityEngine::Rect> rectOut, ByRef<::UnityEngine::Rect> uvOut) ;

/// @brief Method RectIntersection addr 0x2d03b00 size 0x120 virtual false final false
static ::UnityEngine::Rect RectIntersection(::UnityEngine::Rect a, ::UnityEngine::Rect b) ;

/// @brief Method ComputeGeomRect addr 0x2d03c20 size 0xd8 virtual false final false
static ::UnityEngine::Rect ComputeGeomRect(::UnityEngine::Sprite sprite) ;

/// @brief Method ComputeUVRect addr 0x2d03cf8 size 0xd8 virtual false final false
static ::UnityEngine::Rect ComputeUVRect(::UnityEngine::Sprite sprite) ;

/// @brief Method ApplyPackingRotation addr 0x2d03dd0 size 0x12c virtual false final false
static ::UnityEngine::Rect ApplyPackingRotation(::UnityEngine::Rect uv, ::UnityEngine::SpritePackingRotation rotation) ;

/// @brief Method MakeTextured addr 0x2d03efc size 0x16c virtual false final false
static ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams MakeTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Texture texture, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::UIElements::ContextType panelContext) ;

/// @brief Method MakeSprite addr 0x2d04068 size 0x6c4 virtual false final false
static ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams MakeSprite(::UnityEngine::Rect rect, ::UnityEngine::Sprite sprite, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::UIElements::ContextType panelContext, bool hasRadius, ByRef<::UnityEngine::Vector4> slices) ;

/// @brief Method MakeVectorTextured addr 0x2d0472c size 0x11c virtual false final false
static ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams MakeVectorTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::UIElements::VectorImage vectorImage, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::UIElements::ContextType panelContext) ;

/// @brief Method HasRadius addr 0x2d04848 size 0x1074 virtual false final false
 bool HasRadius(float_t epsilon) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: ::TextParams
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7434))
// CS Name: UnityEngine.UIElements.MeshGenerationContextUtils::TextParams
struct CORDL_TYPE ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "font", ty: "::UnityEngine::Font", modifiers: "", def_value: None }, CppParam { name: "fontDefinition", ty: "::UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "letterSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "wordSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "paragraphSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "fontColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "textOverflow", ty: "::UnityEngine::UIElements::TextOverflow", modifiers: "", def_value: None }, CppParam { name: "textOverflowPosition", ty: "::UnityEngine::UIElements::TextOverflowPosition", modifiers: "", def_value: None }, CppParam { name: "overflow", ty: "::UnityEngine::UIElements::OverflowInternal", modifiers: "", def_value: None }, CppParam { name: "panel", ty: "::UnityEngine::UIElements::IPanel", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams(::UnityEngine::Rect rect, ::StringW text, ::UnityEngine::Font font, ::UnityEngine::UIElements::FontDefinition fontDefinition, int32_t fontSize, ::UnityEngine::UIElements::Length letterSpacing, ::UnityEngine::UIElements::Length wordSpacing, ::UnityEngine::UIElements::Length paragraphSpacing, ::UnityEngine::FontStyle fontStyle, ::UnityEngine::Color fontColor, ::UnityEngine::TextAnchor anchor, bool wordWrap, float_t wordWrapWidth, bool richText, ::UnityEngine::Color playmodeTintColor, ::UnityEngine::UIElements::TextOverflow textOverflow, ::UnityEngine::UIElements::TextOverflowPosition textOverflowPosition, ::UnityEngine::UIElements::OverflowInternal overflow, ::UnityEngine::UIElements::IPanel panel) noexcept;


                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams(____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams const&) = default;
                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams(____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams&&) = default;
                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams& operator=(____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams& operator=(____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x98};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Rect __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_rect() const;

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 ::UnityEngine::Font __declspec(property(get=__get_font, put=__set_font))  font;

constexpr void __set_font(::UnityEngine::Font value) ;

constexpr ::UnityEngine::Font __get_font() const;

 ::UnityEngine::UIElements::FontDefinition __declspec(property(get=__get_fontDefinition, put=__set_fontDefinition))  fontDefinition;

constexpr void __set_fontDefinition(::UnityEngine::UIElements::FontDefinition value) ;

constexpr ::UnityEngine::UIElements::FontDefinition __get_fontDefinition() const;

 int32_t __declspec(property(get=__get_fontSize, put=__set_fontSize))  fontSize;

constexpr void __set_fontSize(int32_t value) ;

constexpr int32_t __get_fontSize() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_letterSpacing, put=__set_letterSpacing))  letterSpacing;

constexpr void __set_letterSpacing(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_letterSpacing() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_wordSpacing, put=__set_wordSpacing))  wordSpacing;

constexpr void __set_wordSpacing(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_wordSpacing() const;

 ::UnityEngine::UIElements::Length __declspec(property(get=__get_paragraphSpacing, put=__set_paragraphSpacing))  paragraphSpacing;

constexpr void __set_paragraphSpacing(::UnityEngine::UIElements::Length value) ;

constexpr ::UnityEngine::UIElements::Length __get_paragraphSpacing() const;

 ::UnityEngine::FontStyle __declspec(property(get=__get_fontStyle, put=__set_fontStyle))  fontStyle;

constexpr void __set_fontStyle(::UnityEngine::FontStyle value) ;

constexpr ::UnityEngine::FontStyle __get_fontStyle() const;

 ::UnityEngine::Color __declspec(property(get=__get_fontColor, put=__set_fontColor))  fontColor;

constexpr void __set_fontColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_fontColor() const;

 ::UnityEngine::TextAnchor __declspec(property(get=__get_anchor, put=__set_anchor))  anchor;

constexpr void __set_anchor(::UnityEngine::TextAnchor value) ;

constexpr ::UnityEngine::TextAnchor __get_anchor() const;

 bool __declspec(property(get=__get_wordWrap, put=__set_wordWrap))  wordWrap;

constexpr void __set_wordWrap(bool value) ;

constexpr bool __get_wordWrap() const;

 float_t __declspec(property(get=__get_wordWrapWidth, put=__set_wordWrapWidth))  wordWrapWidth;

constexpr void __set_wordWrapWidth(float_t value) ;

constexpr float_t __get_wordWrapWidth() const;

 bool __declspec(property(get=__get_richText, put=__set_richText))  richText;

constexpr void __set_richText(bool value) ;

constexpr bool __get_richText() const;

 ::UnityEngine::Color __declspec(property(get=__get_playmodeTintColor, put=__set_playmodeTintColor))  playmodeTintColor;

constexpr void __set_playmodeTintColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_playmodeTintColor() const;

 ::UnityEngine::UIElements::TextOverflow __declspec(property(get=__get_textOverflow, put=__set_textOverflow))  textOverflow;

constexpr void __set_textOverflow(::UnityEngine::UIElements::TextOverflow value) ;

constexpr ::UnityEngine::UIElements::TextOverflow __get_textOverflow() const;

 ::UnityEngine::UIElements::TextOverflowPosition __declspec(property(get=__get_textOverflowPosition, put=__set_textOverflowPosition))  textOverflowPosition;

constexpr void __set_textOverflowPosition(::UnityEngine::UIElements::TextOverflowPosition value) ;

constexpr ::UnityEngine::UIElements::TextOverflowPosition __get_textOverflowPosition() const;

 ::UnityEngine::UIElements::OverflowInternal __declspec(property(get=__get_overflow, put=__set_overflow))  overflow;

constexpr void __set_overflow(::UnityEngine::UIElements::OverflowInternal value) ;

constexpr ::UnityEngine::UIElements::OverflowInternal __get_overflow() const;

 ::UnityEngine::UIElements::IPanel __declspec(property(get=__get_panel, put=__set_panel))  panel;

constexpr void __set_panel(::UnityEngine::UIElements::IPanel value) ;

constexpr ::UnityEngine::UIElements::IPanel __get_panel() const;


// Methods

/// @brief Method GetHashCode addr 0x2d058bc size 0x2a0 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method MakeStyleBased addr 0x2d05b5c size 0x3a8 virtual false final false
static ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams MakeStyleBased(::UnityEngine::UIElements::VisualElement ve, ::StringW text) ;

/// @brief Method GetTextNativeSettings addr 0x2d05f04 size 0xd4 virtual false final false
static ::UnityEngine::UIElements::TextNativeSettings GetTextNativeSettings(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, float_t scaling) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::MeshGenerationContextUtils
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7435))
// CS Name: UnityEngine.UIElements.MeshGenerationContextUtils
class CORDL_TYPE MeshGenerationContextUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TextParams = ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;

using RectangleParams = ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams;

using BorderParams = ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MeshGenerationContextUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContextUtils", modifiers: " const&", def_value: None }]
constexpr MeshGenerationContextUtils(MeshGenerationContextUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshGenerationContextUtils", modifiers: "&&", def_value: None }]
constexpr MeshGenerationContextUtils(MeshGenerationContextUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshGenerationContextUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshGenerationContextUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshGenerationContextUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshGenerationContextUtils& operator=(MeshGenerationContextUtils&& o) noexcept = default;
  constexpr MeshGenerationContextUtils& operator=(MeshGenerationContextUtils const& o) noexcept = default;
                


// Methods

/// @brief Method Rectangle addr 0x2d02720 size 0x100 virtual false final false
static void Rectangle(::UnityEngine::UIElements::MeshGenerationContext mgc, ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams) ;

/// @brief Method Text addr 0x2d02820 size 0x134 virtual false final false
static void Text(::UnityEngine::UIElements::MeshGenerationContext mgc, ::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint) ;

/// @brief Method ConvertBorderRadiusPercentToPoints addr 0x2d02954 size 0x3c virtual false final false
static ::UnityEngine::Vector2 ConvertBorderRadiusPercentToPoints(::UnityEngine::Vector2 borderRectSize, ::UnityEngine::UIElements::Length length) ;

/// @brief Method GetVisualElementRadii addr 0x2d02990 size 0x29c virtual false final false
static void GetVisualElementRadii(::UnityEngine::UIElements::VisualElement ve, ByRef<::UnityEngine::Vector2> topLeft, ByRef<::UnityEngine::Vector2> bottomLeft, ByRef<::UnityEngine::Vector2> topRight, ByRef<::UnityEngine::Vector2> bottomRight) ;

/// @brief Method AdjustBackgroundSizeForBorders addr 0x2d02c2c size 0x454 virtual false final false
static void AdjustBackgroundSizeForBorders(::UnityEngine::UIElements::VisualElement visualElement, ByRef<::UnityEngine::Rect> rect) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::MeshGenerationContextUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MeshGenerationContextUtils, "UnityEngine.UIElements", "MeshGenerationContextUtils");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/BorderParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/RectangleParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams, "UnityEngine.UIElements", "MeshGenerationContextUtils/TextParams");
