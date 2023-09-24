#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace HMUI {
class GradientImage;
}
// Type: HMUI::GradientImage
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13676))
// CS Name: HMUI.GradientImage
class CORDL_TYPE GradientImage : public UnityEngine::UI::Image {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x130};

virtual ~GradientImage() = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientImage", modifiers: " const&", def_value: None }]
constexpr GradientImage(GradientImage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientImage", modifiers: "&&", def_value: None }]
constexpr GradientImage(GradientImage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GradientImage(void* ptr) noexcept : UnityEngine::UI::Image(ptr) {
}


  constexpr GradientImage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GradientImage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GradientImage& operator=(GradientImage&& o) noexcept = default;
  constexpr GradientImage& operator=(GradientImage const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__color0, put=__set__color0))  _color0;

constexpr void __set__color0(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color0() const;

 UnityEngine::Color __declspec(property(get=__get__color1, put=__set__color1))  _color1;

constexpr void __set__color1(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color1() const;

static UnityEngine::Vector2 __declspec(property(get=__get_kVec2Zero, put=__set_kVec2Zero))  kVec2Zero;

static void __set_kVec2Zero(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_kVec2Zero() ;

static UnityEngine::Vector3 __declspec(property(get=__get_kVec3Zero, put=__set_kVec3Zero))  kVec3Zero;

static void __set_kVec3Zero(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_kVec3Zero() ;

static UnityEngine::Vector4 __declspec(property(get=__get_kVec4Zero, put=__set_kVec4Zero))  kVec4Zero;

static void __set_kVec4Zero(UnityEngine::Vector4 value) ;

static UnityEngine::Vector4 __get_kVec4Zero() ;

 HMUI::CurvedCanvasSettingsHelper __declspec(property(get=__get__curvedCanvasSettingsHelper, put=__set__curvedCanvasSettingsHelper))  _curvedCanvasSettingsHelper;

constexpr void __set__curvedCanvasSettingsHelper(HMUI::CurvedCanvasSettingsHelper value) ;

constexpr HMUI::CurvedCanvasSettingsHelper __get__curvedCanvasSettingsHelper() const;

static ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_s_VertScratch, put=__set_s_VertScratch))  s_VertScratch;

static void __set_s_VertScratch(::ArrayW<UnityEngine::Vector2> value) ;

static ::ArrayW<UnityEngine::Vector2> __get_s_VertScratch() ;

static ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_s_UVScratch, put=__set_s_UVScratch))  s_UVScratch;

static void __set_s_UVScratch(::ArrayW<UnityEngine::Vector2> value) ;

static ::ArrayW<UnityEngine::Vector2> __get_s_UVScratch() ;

static ::ArrayW<UnityEngine::Color> __declspec(property(get=__get_s_ColorScratch, put=__set_s_ColorScratch))  s_ColorScratch;

static void __set_s_ColorScratch(::ArrayW<UnityEngine::Color> value) ;

static ::ArrayW<UnityEngine::Color> __get_s_ColorScratch() ;

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_s_Xy, put=__set_s_Xy))  s_Xy;

static void __set_s_Xy(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_s_Xy() ;

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_s_Uv, put=__set_s_Uv))  s_Uv;

static void __set_s_Uv(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_s_Uv() ;


// Properties

 UnityEngine::Color __declspec(property(get=get_color0, put=set_color0))  color0;

 UnityEngine::Color __declspec(property(get=get_color1, put=set_color1))  color1;


// Methods

/// @brief Method get_color0 addr 0x1fbdac8 size 0x14 virtual false final false
 UnityEngine::Color get_color0() ;

/// @brief Method set_color0 addr 0x1fbdadc size 0x38 virtual false final false
 void set_color0(UnityEngine::Color value) ;

/// @brief Method get_color1 addr 0x1fbdb14 size 0x14 virtual false final false
 UnityEngine::Color get_color1() ;

/// @brief Method set_color1 addr 0x1fbdb28 size 0x38 virtual false final false
 void set_color1(UnityEngine::Color value) ;

/// @brief Method OnPopulateMesh addr 0x1fbdb60 size 0x174 virtual true final false
 void OnPopulateMesh(UnityEngine::UI::VertexHelper toFill) ;

/// @brief Method GenerateSimpleSprite addr 0x1fbdcd4 size 0xab8 virtual false final false
 void GenerateSimpleSprite(UnityEngine::UI::VertexHelper vh, bool lPreserveAspect, float_t curvedUIRadius) ;

/// @brief Method GenerateSlicedSprite addr 0x1fbe78c size 0xd80 virtual false final false
 void GenerateSlicedSprite(UnityEngine::UI::VertexHelper vh, float_t curvedUIRadius) ;

/// @brief Method GenerateTiledSprite addr 0x1fbf50c size 0x22ec virtual false final false
 void GenerateTiledSprite(UnityEngine::UI::VertexHelper toFill) ;

/// @brief Method AddQuad addr 0x1fc3c84 size 0xe4 virtual false final false
static void AddQuad(UnityEngine::UI::VertexHelper vertexHelper, ::ArrayW<UnityEngine::Vector3> quadPositions, UnityEngine::Color32 color, ::ArrayW<UnityEngine::Vector3> quadUVs) ;

/// @brief Method AddQuad addr 0x1fc3b30 size 0x154 virtual false final false
static void AddQuad(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax) ;

/// @brief Method AddQuad addr 0x1fc3288 size 0x8a8 virtual false final false
static void AddQuad(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, float_t elementWidthScale, float_t curvedUIRadius) ;

/// @brief Method GetAdjustedBorders addr 0x1fc31b0 size 0xd8 virtual false final false
 UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect rect) ;

/// @brief Method GenerateFilledSprite addr 0x1fc17f8 size 0x1430 virtual false final false
 void GenerateFilledSprite(UnityEngine::UI::VertexHelper toFill, bool preserveAspect) ;

/// @brief Method RadialCut addr 0x1fc3d68 size 0x120 virtual false final false
static bool RadialCut(::ArrayW<UnityEngine::Vector3> xy, ::ArrayW<UnityEngine::Vector3> uv, float_t fill, bool invert, int32_t corner) ;

/// @brief Method RadialCut addr 0x1fc3e88 size 0x3ec virtual false final false
static void RadialCut(::ArrayW<UnityEngine::Vector3> xy, float_t cos, float_t sin, bool invert, int32_t corner) ;

/// @brief Method GetDrawingDimensions addr 0x1fc2c28 size 0x588 virtual false final false
 UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect) ;

static HMUI::GradientImage New_ctor() ;

/// @brief Method .ctor addr 0x1fc4274 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::GradientImage);
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage, "HMUI", "GradientImage");
