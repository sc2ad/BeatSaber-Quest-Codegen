#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class IComponentRefresher;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
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
struct Vector3;
}
// Forward declare root types
namespace HMUI {
struct HMUI__ImageView__GradientDirection;
}
namespace HMUI {
class ImageView;
}
// Type: ::GradientDirection
namespace HMUI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13677))
// CS Name: HMUI.ImageView::GradientDirection
struct CORDL_TYPE HMUI__ImageView__GradientDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HMUI__ImageView__GradientDirection(int32_t value__) noexcept;


                    constexpr HMUI__ImageView__GradientDirection(HMUI__ImageView__GradientDirection const&) = default;
                    constexpr HMUI__ImageView__GradientDirection(HMUI__ImageView__GradientDirection&&) = default;
                    constexpr HMUI__ImageView__GradientDirection& operator=(HMUI__ImageView__GradientDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HMUI__ImageView__GradientDirection& operator=(HMUI__ImageView__GradientDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HMUI__ImageView__GradientDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HMUI__ImageView__GradientDirection_Unwrapped : int32_t {
__Horizontal = 0,
__Vertical = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HMUI__ImageView__GradientDirection_Unwrapped () const noexcept {
return std::bit_cast<__HMUI__ImageView__GradientDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Horizontal offset 0
static HMUI::HMUI__ImageView__GradientDirection const Horizontal;

/// @brief Field Vertical offset 0
static HMUI::HMUI__ImageView__GradientDirection const Vertical;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::ImageView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12994))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13678))
// CS Name: HMUI.ImageView
class CORDL_TYPE ImageView : public UnityEngine::UI::Image {
public:
// Declarations
using GradientDirection = HMUI::HMUI__ImageView__GradientDirection;

/// @brief Convert operator to GlobalNamespace::IComponentRefresher
constexpr operator  GlobalNamespace::IComponentRefresher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~ImageView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageView", modifiers: " const&", def_value: None }]
constexpr ImageView(ImageView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ImageView", modifiers: "&&", def_value: None }]
constexpr ImageView(ImageView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ImageView(void* ptr) noexcept : UnityEngine::UI::Image(ptr) {
}


  constexpr ImageView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ImageView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ImageView& operator=(ImageView&& o) noexcept = default;
  constexpr ImageView& operator=(ImageView const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__useScriptableObjectColors, put=__set__useScriptableObjectColors))  _useScriptableObjectColors;

constexpr void __set__useScriptableObjectColors(bool value) ;

constexpr bool __get__useScriptableObjectColors() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__colorSo, put=__set__colorSo))  _colorSo;

constexpr void __set__colorSo(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__colorSo() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__color0So, put=__set__color0So))  _color0So;

constexpr void __set__color0So(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__color0So() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__color1So, put=__set__color1So))  _color1So;

constexpr void __set__color1So(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__color1So() const;

 float_t __declspec(property(get=__get__skew, put=__set__skew))  _skew;

constexpr void __set__skew(float_t value) ;

constexpr float_t __get__skew() const;

 bool __declspec(property(get=__get__gradient, put=__set__gradient))  _gradient;

constexpr void __set__gradient(bool value) ;

constexpr bool __get__gradient() const;

 UnityEngine::Color __declspec(property(get=__get__color0, put=__set__color0))  _color0;

constexpr void __set__color0(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color0() const;

 UnityEngine::Color __declspec(property(get=__get__color1, put=__set__color1))  _color1;

constexpr void __set__color1(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color1() const;

 HMUI::HMUI__ImageView__GradientDirection __declspec(property(get=__get__gradientDirection, put=__set__gradientDirection))  _gradientDirection;

constexpr void __set__gradientDirection(HMUI::HMUI__ImageView__GradientDirection value) ;

constexpr HMUI::HMUI__ImageView__GradientDirection __get__gradientDirection() const;

 bool __declspec(property(get=__get__flipGradientColors, put=__set__flipGradientColors))  _flipGradientColors;

constexpr void __set__flipGradientColors(bool value) ;

constexpr bool __get__flipGradientColors() const;

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

static ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_s_UV1Scratch, put=__set_s_UV1Scratch))  s_UV1Scratch;

static void __set_s_UV1Scratch(::ArrayW<UnityEngine::Vector2> value) ;

static ::ArrayW<UnityEngine::Vector2> __get_s_UV1Scratch() ;

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

 bool __declspec(property(get=get_useScriptableObjectColors, put=set_useScriptableObjectColors))  useScriptableObjectColors;

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 float_t __declspec(property(get=get_skew))  skew;

 bool __declspec(property(get=get_gradient, put=set_gradient))  gradient;

 UnityEngine::Color __declspec(property(get=get_color0, put=set_color0))  color0;

 UnityEngine::Color __declspec(property(get=get_color1, put=set_color1))  color1;


// Methods

/// @brief Method get_useScriptableObjectColors addr 0x1fc4420 size 0x8 virtual false final false
 bool get_useScriptableObjectColors() ;

/// @brief Method set_useScriptableObjectColors addr 0x1fc4428 size 0xc virtual false final false
 void set_useScriptableObjectColors(bool value) ;

/// @brief Method get_color addr 0x1fc4434 size 0x88 virtual true final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x1fc44bc size 0x8 virtual true final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method get_skew addr 0x1fc44c4 size 0x8 virtual false final false
 float_t get_skew() ;

/// @brief Method get_gradient addr 0x1fc44cc size 0x8 virtual false final false
 bool get_gradient() ;

/// @brief Method set_gradient addr 0x1fc44d4 size 0x18 virtual false final false
 void set_gradient(bool value) ;

/// @brief Method get_color0 addr 0x1fc44ec size 0x90 virtual false final false
 UnityEngine::Color get_color0() ;

/// @brief Method set_color0 addr 0x1fbc794 size 0x20 virtual false final false
 void set_color0(UnityEngine::Color value) ;

/// @brief Method get_color1 addr 0x1fc457c size 0x90 virtual false final false
 UnityEngine::Color get_color1() ;

/// @brief Method set_color1 addr 0x1fbc7b4 size 0x20 virtual false final false
 void set_color1(UnityEngine::Color value) ;

/// @brief Method OnEnable addr 0x1fc460c size 0x28 virtual true final false
 void OnEnable() ;

/// @brief Method OnPopulateMesh addr 0x1fc4634 size 0x174 virtual true final false
 void OnPopulateMesh(UnityEngine::UI::VertexHelper toFill) ;

/// @brief Method __Refresh addr 0x1fcb0ac size 0x10 virtual true final true
 void __Refresh() ;

/// @brief Method GenerateSimpleSprite addr 0x1fc47a8 size 0x14c0 virtual false final false
 void GenerateSimpleSprite(UnityEngine::UI::VertexHelper vh, bool lPreserveAspect, float_t curvedUIRadius) ;

/// @brief Method GenerateSlicedSprite addr 0x1fc5c68 size 0x1bcc virtual false final false
 void GenerateSlicedSprite(UnityEngine::UI::VertexHelper toFill, float_t curvedUIRadius) ;

/// @brief Method GenerateTiledSprite addr 0x1fc7834 size 0x2394 virtual false final false
 void GenerateTiledSprite(UnityEngine::UI::VertexHelper toFill, float_t curvedUIRadius) ;

/// @brief Method AddQuad addr 0x1fcc8c0 size 0xe4 virtual false final false
static void AddQuad(UnityEngine::UI::VertexHelper vertexHelper, ::ArrayW<UnityEngine::Vector3> quadPositions, UnityEngine::Color32 color, ::ArrayW<UnityEngine::Vector3> quadUVs) ;

/// @brief Method AddQuad addr 0x1fcc64c size 0x274 virtual false final false
static void AddQuad(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax, float_t elementWidthScale, float_t curvedUIRadius) ;

/// @brief Method AddQuad addr 0x1fcc368 size 0x2e4 virtual false final false
static void AddQuad(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset) ;

/// @brief Method AddQuadWithHorizontalGradient addr 0x1fcb7b0 size 0x8c4 virtual false final false
static void AddQuadWithHorizontalGradient(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset) ;

/// @brief Method AddQuadWithVerticalGradient addr 0x1fcc074 size 0x2f4 virtual false final false
static void AddQuadWithVerticalGradient(UnityEngine::UI::VertexHelper vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset) ;

/// @brief Method GetAdjustedBorders addr 0x1fcb6d8 size 0xd8 virtual false final false
static UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect rect) ;

/// @brief Method GenerateFilledSprite addr 0x1fc9bc8 size 0x14e4 virtual false final false
 void GenerateFilledSprite(UnityEngine::UI::VertexHelper toFill, bool preserveAspect, float_t curvedUIRadius) ;

/// @brief Method RadialCut addr 0x1fcc9a4 size 0x120 virtual false final false
static bool RadialCut(::ArrayW<UnityEngine::Vector3> xy, ::ArrayW<UnityEngine::Vector3> uv, float_t fill, bool invert, int32_t corner) ;

/// @brief Method RadialCut addr 0x1fccac4 size 0x3ec virtual false final false
static void RadialCut(::ArrayW<UnityEngine::Vector3> xy, float_t cos, float_t sin, bool invert, int32_t corner) ;

/// @brief Method GetNumberOfElements addr 0x1fcb644 size 0x94 virtual false final false
static int32_t GetNumberOfElements(float_t curvedUIRadius, float_t width) ;

/// @brief Method GetDrawingDimensions addr 0x1fcb0bc size 0x588 virtual false final false
 UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect) ;

// Ctor Parameters []
explicit ImageView() ;

/// @brief Method .ctor addr 0x1fcceb0 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__ImageView__GradientDirection, "HMUI", "ImageView/GradientDirection");
NEED_NO_BOX(HMUI::ImageView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::ImageView, "HMUI", "ImageView");
