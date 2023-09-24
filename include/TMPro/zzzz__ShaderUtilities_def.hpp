#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace TMPro {
class ShaderUtilities;
}
// Type: TMPro::ShaderUtilities
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12358))
// CS Name: TMPro.ShaderUtilities
class CORDL_TYPE ShaderUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ShaderUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderUtilities", modifiers: " const&", def_value: None }]
constexpr ShaderUtilities(ShaderUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderUtilities", modifiers: "&&", def_value: None }]
constexpr ShaderUtilities(ShaderUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ShaderUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderUtilities& operator=(ShaderUtilities&& o) noexcept = default;
  constexpr ShaderUtilities& operator=(ShaderUtilities const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_ID_MainTex, put=__set_ID_MainTex))  ID_MainTex;

static void __set_ID_MainTex(int32_t value) ;

static int32_t __get_ID_MainTex() ;

static int32_t __declspec(property(get=__get_ID_FaceTex, put=__set_ID_FaceTex))  ID_FaceTex;

static void __set_ID_FaceTex(int32_t value) ;

static int32_t __get_ID_FaceTex() ;

static int32_t __declspec(property(get=__get_ID_FaceColor, put=__set_ID_FaceColor))  ID_FaceColor;

static void __set_ID_FaceColor(int32_t value) ;

static int32_t __get_ID_FaceColor() ;

static int32_t __declspec(property(get=__get_ID_FaceDilate, put=__set_ID_FaceDilate))  ID_FaceDilate;

static void __set_ID_FaceDilate(int32_t value) ;

static int32_t __get_ID_FaceDilate() ;

static int32_t __declspec(property(get=__get_ID_Shininess, put=__set_ID_Shininess))  ID_Shininess;

static void __set_ID_Shininess(int32_t value) ;

static int32_t __get_ID_Shininess() ;

static int32_t __declspec(property(get=__get_ID_UnderlayColor, put=__set_ID_UnderlayColor))  ID_UnderlayColor;

static void __set_ID_UnderlayColor(int32_t value) ;

static int32_t __get_ID_UnderlayColor() ;

static int32_t __declspec(property(get=__get_ID_UnderlayOffsetX, put=__set_ID_UnderlayOffsetX))  ID_UnderlayOffsetX;

static void __set_ID_UnderlayOffsetX(int32_t value) ;

static int32_t __get_ID_UnderlayOffsetX() ;

static int32_t __declspec(property(get=__get_ID_UnderlayOffsetY, put=__set_ID_UnderlayOffsetY))  ID_UnderlayOffsetY;

static void __set_ID_UnderlayOffsetY(int32_t value) ;

static int32_t __get_ID_UnderlayOffsetY() ;

static int32_t __declspec(property(get=__get_ID_UnderlayDilate, put=__set_ID_UnderlayDilate))  ID_UnderlayDilate;

static void __set_ID_UnderlayDilate(int32_t value) ;

static int32_t __get_ID_UnderlayDilate() ;

static int32_t __declspec(property(get=__get_ID_UnderlaySoftness, put=__set_ID_UnderlaySoftness))  ID_UnderlaySoftness;

static void __set_ID_UnderlaySoftness(int32_t value) ;

static int32_t __get_ID_UnderlaySoftness() ;

static int32_t __declspec(property(get=__get_ID_UnderlayOffset, put=__set_ID_UnderlayOffset))  ID_UnderlayOffset;

static void __set_ID_UnderlayOffset(int32_t value) ;

static int32_t __get_ID_UnderlayOffset() ;

static int32_t __declspec(property(get=__get_ID_UnderlayIsoPerimeter, put=__set_ID_UnderlayIsoPerimeter))  ID_UnderlayIsoPerimeter;

static void __set_ID_UnderlayIsoPerimeter(int32_t value) ;

static int32_t __get_ID_UnderlayIsoPerimeter() ;

static int32_t __declspec(property(get=__get_ID_WeightNormal, put=__set_ID_WeightNormal))  ID_WeightNormal;

static void __set_ID_WeightNormal(int32_t value) ;

static int32_t __get_ID_WeightNormal() ;

static int32_t __declspec(property(get=__get_ID_WeightBold, put=__set_ID_WeightBold))  ID_WeightBold;

static void __set_ID_WeightBold(int32_t value) ;

static int32_t __get_ID_WeightBold() ;

static int32_t __declspec(property(get=__get_ID_OutlineTex, put=__set_ID_OutlineTex))  ID_OutlineTex;

static void __set_ID_OutlineTex(int32_t value) ;

static int32_t __get_ID_OutlineTex() ;

static int32_t __declspec(property(get=__get_ID_OutlineWidth, put=__set_ID_OutlineWidth))  ID_OutlineWidth;

static void __set_ID_OutlineWidth(int32_t value) ;

static int32_t __get_ID_OutlineWidth() ;

static int32_t __declspec(property(get=__get_ID_OutlineSoftness, put=__set_ID_OutlineSoftness))  ID_OutlineSoftness;

static void __set_ID_OutlineSoftness(int32_t value) ;

static int32_t __get_ID_OutlineSoftness() ;

static int32_t __declspec(property(get=__get_ID_OutlineColor, put=__set_ID_OutlineColor))  ID_OutlineColor;

static void __set_ID_OutlineColor(int32_t value) ;

static int32_t __get_ID_OutlineColor() ;

static int32_t __declspec(property(get=__get_ID_Outline2Color, put=__set_ID_Outline2Color))  ID_Outline2Color;

static void __set_ID_Outline2Color(int32_t value) ;

static int32_t __get_ID_Outline2Color() ;

static int32_t __declspec(property(get=__get_ID_Outline2Width, put=__set_ID_Outline2Width))  ID_Outline2Width;

static void __set_ID_Outline2Width(int32_t value) ;

static int32_t __get_ID_Outline2Width() ;

static int32_t __declspec(property(get=__get_ID_Padding, put=__set_ID_Padding))  ID_Padding;

static void __set_ID_Padding(int32_t value) ;

static int32_t __get_ID_Padding() ;

static int32_t __declspec(property(get=__get_ID_GradientScale, put=__set_ID_GradientScale))  ID_GradientScale;

static void __set_ID_GradientScale(int32_t value) ;

static int32_t __get_ID_GradientScale() ;

static int32_t __declspec(property(get=__get_ID_ScaleX, put=__set_ID_ScaleX))  ID_ScaleX;

static void __set_ID_ScaleX(int32_t value) ;

static int32_t __get_ID_ScaleX() ;

static int32_t __declspec(property(get=__get_ID_ScaleY, put=__set_ID_ScaleY))  ID_ScaleY;

static void __set_ID_ScaleY(int32_t value) ;

static int32_t __get_ID_ScaleY() ;

static int32_t __declspec(property(get=__get_ID_PerspectiveFilter, put=__set_ID_PerspectiveFilter))  ID_PerspectiveFilter;

static void __set_ID_PerspectiveFilter(int32_t value) ;

static int32_t __get_ID_PerspectiveFilter() ;

static int32_t __declspec(property(get=__get_ID_Sharpness, put=__set_ID_Sharpness))  ID_Sharpness;

static void __set_ID_Sharpness(int32_t value) ;

static int32_t __get_ID_Sharpness() ;

static int32_t __declspec(property(get=__get_ID_TextureWidth, put=__set_ID_TextureWidth))  ID_TextureWidth;

static void __set_ID_TextureWidth(int32_t value) ;

static int32_t __get_ID_TextureWidth() ;

static int32_t __declspec(property(get=__get_ID_TextureHeight, put=__set_ID_TextureHeight))  ID_TextureHeight;

static void __set_ID_TextureHeight(int32_t value) ;

static int32_t __get_ID_TextureHeight() ;

static int32_t __declspec(property(get=__get_ID_BevelAmount, put=__set_ID_BevelAmount))  ID_BevelAmount;

static void __set_ID_BevelAmount(int32_t value) ;

static int32_t __get_ID_BevelAmount() ;

static int32_t __declspec(property(get=__get_ID_GlowColor, put=__set_ID_GlowColor))  ID_GlowColor;

static void __set_ID_GlowColor(int32_t value) ;

static int32_t __get_ID_GlowColor() ;

static int32_t __declspec(property(get=__get_ID_GlowOffset, put=__set_ID_GlowOffset))  ID_GlowOffset;

static void __set_ID_GlowOffset(int32_t value) ;

static int32_t __get_ID_GlowOffset() ;

static int32_t __declspec(property(get=__get_ID_GlowPower, put=__set_ID_GlowPower))  ID_GlowPower;

static void __set_ID_GlowPower(int32_t value) ;

static int32_t __get_ID_GlowPower() ;

static int32_t __declspec(property(get=__get_ID_GlowOuter, put=__set_ID_GlowOuter))  ID_GlowOuter;

static void __set_ID_GlowOuter(int32_t value) ;

static int32_t __get_ID_GlowOuter() ;

static int32_t __declspec(property(get=__get_ID_GlowInner, put=__set_ID_GlowInner))  ID_GlowInner;

static void __set_ID_GlowInner(int32_t value) ;

static int32_t __get_ID_GlowInner() ;

static int32_t __declspec(property(get=__get_ID_LightAngle, put=__set_ID_LightAngle))  ID_LightAngle;

static void __set_ID_LightAngle(int32_t value) ;

static int32_t __get_ID_LightAngle() ;

static int32_t __declspec(property(get=__get_ID_EnvMap, put=__set_ID_EnvMap))  ID_EnvMap;

static void __set_ID_EnvMap(int32_t value) ;

static int32_t __get_ID_EnvMap() ;

static int32_t __declspec(property(get=__get_ID_EnvMatrix, put=__set_ID_EnvMatrix))  ID_EnvMatrix;

static void __set_ID_EnvMatrix(int32_t value) ;

static int32_t __get_ID_EnvMatrix() ;

static int32_t __declspec(property(get=__get_ID_EnvMatrixRotation, put=__set_ID_EnvMatrixRotation))  ID_EnvMatrixRotation;

static void __set_ID_EnvMatrixRotation(int32_t value) ;

static int32_t __get_ID_EnvMatrixRotation() ;

static int32_t __declspec(property(get=__get_ID_MaskCoord, put=__set_ID_MaskCoord))  ID_MaskCoord;

static void __set_ID_MaskCoord(int32_t value) ;

static int32_t __get_ID_MaskCoord() ;

static int32_t __declspec(property(get=__get_ID_ClipRect, put=__set_ID_ClipRect))  ID_ClipRect;

static void __set_ID_ClipRect(int32_t value) ;

static int32_t __get_ID_ClipRect() ;

static int32_t __declspec(property(get=__get_ID_MaskSoftnessX, put=__set_ID_MaskSoftnessX))  ID_MaskSoftnessX;

static void __set_ID_MaskSoftnessX(int32_t value) ;

static int32_t __get_ID_MaskSoftnessX() ;

static int32_t __declspec(property(get=__get_ID_MaskSoftnessY, put=__set_ID_MaskSoftnessY))  ID_MaskSoftnessY;

static void __set_ID_MaskSoftnessY(int32_t value) ;

static int32_t __get_ID_MaskSoftnessY() ;

static int32_t __declspec(property(get=__get_ID_VertexOffsetX, put=__set_ID_VertexOffsetX))  ID_VertexOffsetX;

static void __set_ID_VertexOffsetX(int32_t value) ;

static int32_t __get_ID_VertexOffsetX() ;

static int32_t __declspec(property(get=__get_ID_VertexOffsetY, put=__set_ID_VertexOffsetY))  ID_VertexOffsetY;

static void __set_ID_VertexOffsetY(int32_t value) ;

static int32_t __get_ID_VertexOffsetY() ;

static int32_t __declspec(property(get=__get_ID_UseClipRect, put=__set_ID_UseClipRect))  ID_UseClipRect;

static void __set_ID_UseClipRect(int32_t value) ;

static int32_t __get_ID_UseClipRect() ;

static int32_t __declspec(property(get=__get_ID_StencilID, put=__set_ID_StencilID))  ID_StencilID;

static void __set_ID_StencilID(int32_t value) ;

static int32_t __get_ID_StencilID() ;

static int32_t __declspec(property(get=__get_ID_StencilOp, put=__set_ID_StencilOp))  ID_StencilOp;

static void __set_ID_StencilOp(int32_t value) ;

static int32_t __get_ID_StencilOp() ;

static int32_t __declspec(property(get=__get_ID_StencilComp, put=__set_ID_StencilComp))  ID_StencilComp;

static void __set_ID_StencilComp(int32_t value) ;

static int32_t __get_ID_StencilComp() ;

static int32_t __declspec(property(get=__get_ID_StencilReadMask, put=__set_ID_StencilReadMask))  ID_StencilReadMask;

static void __set_ID_StencilReadMask(int32_t value) ;

static int32_t __get_ID_StencilReadMask() ;

static int32_t __declspec(property(get=__get_ID_StencilWriteMask, put=__set_ID_StencilWriteMask))  ID_StencilWriteMask;

static void __set_ID_StencilWriteMask(int32_t value) ;

static int32_t __get_ID_StencilWriteMask() ;

static int32_t __declspec(property(get=__get_ID_ShaderFlags, put=__set_ID_ShaderFlags))  ID_ShaderFlags;

static void __set_ID_ShaderFlags(int32_t value) ;

static int32_t __get_ID_ShaderFlags() ;

static int32_t __declspec(property(get=__get_ID_ScaleRatio_A, put=__set_ID_ScaleRatio_A))  ID_ScaleRatio_A;

static void __set_ID_ScaleRatio_A(int32_t value) ;

static int32_t __get_ID_ScaleRatio_A() ;

static int32_t __declspec(property(get=__get_ID_ScaleRatio_B, put=__set_ID_ScaleRatio_B))  ID_ScaleRatio_B;

static void __set_ID_ScaleRatio_B(int32_t value) ;

static int32_t __get_ID_ScaleRatio_B() ;

static int32_t __declspec(property(get=__get_ID_ScaleRatio_C, put=__set_ID_ScaleRatio_C))  ID_ScaleRatio_C;

static void __set_ID_ScaleRatio_C(int32_t value) ;

static int32_t __get_ID_ScaleRatio_C() ;

static ::StringW __declspec(property(get=__get_Keyword_Bevel, put=__set_Keyword_Bevel))  Keyword_Bevel;

static void __set_Keyword_Bevel(::StringW value) ;

static ::StringW __get_Keyword_Bevel() ;

static ::StringW __declspec(property(get=__get_Keyword_Glow, put=__set_Keyword_Glow))  Keyword_Glow;

static void __set_Keyword_Glow(::StringW value) ;

static ::StringW __get_Keyword_Glow() ;

static ::StringW __declspec(property(get=__get_Keyword_Underlay, put=__set_Keyword_Underlay))  Keyword_Underlay;

static void __set_Keyword_Underlay(::StringW value) ;

static ::StringW __get_Keyword_Underlay() ;

static ::StringW __declspec(property(get=__get_Keyword_Ratios, put=__set_Keyword_Ratios))  Keyword_Ratios;

static void __set_Keyword_Ratios(::StringW value) ;

static ::StringW __get_Keyword_Ratios() ;

static ::StringW __declspec(property(get=__get_Keyword_MASK_SOFT, put=__set_Keyword_MASK_SOFT))  Keyword_MASK_SOFT;

static void __set_Keyword_MASK_SOFT(::StringW value) ;

static ::StringW __get_Keyword_MASK_SOFT() ;

static ::StringW __declspec(property(get=__get_Keyword_MASK_HARD, put=__set_Keyword_MASK_HARD))  Keyword_MASK_HARD;

static void __set_Keyword_MASK_HARD(::StringW value) ;

static ::StringW __get_Keyword_MASK_HARD() ;

static ::StringW __declspec(property(get=__get_Keyword_MASK_TEX, put=__set_Keyword_MASK_TEX))  Keyword_MASK_TEX;

static void __set_Keyword_MASK_TEX(::StringW value) ;

static ::StringW __get_Keyword_MASK_TEX() ;

static ::StringW __declspec(property(get=__get_Keyword_Outline, put=__set_Keyword_Outline))  Keyword_Outline;

static void __set_Keyword_Outline(::StringW value) ;

static ::StringW __get_Keyword_Outline() ;

static ::StringW __declspec(property(get=__get_ShaderTag_ZTestMode, put=__set_ShaderTag_ZTestMode))  ShaderTag_ZTestMode;

static void __set_ShaderTag_ZTestMode(::StringW value) ;

static ::StringW __get_ShaderTag_ZTestMode() ;

static ::StringW __declspec(property(get=__get_ShaderTag_CullMode, put=__set_ShaderTag_CullMode))  ShaderTag_CullMode;

static void __set_ShaderTag_CullMode(::StringW value) ;

static ::StringW __get_ShaderTag_CullMode() ;

static float_t __declspec(property(get=__get_m_clamp, put=__set_m_clamp))  m_clamp;

static void __set_m_clamp(float_t value) ;

static float_t __get_m_clamp() ;

static bool __declspec(property(get=__get_isInitialized, put=__set_isInitialized))  isInitialized;

static void __set_isInitialized(bool value) ;

static bool __get_isInitialized() ;

static UnityEngine::Shader __declspec(property(get=__get_k_ShaderRef_MobileSDF, put=__set_k_ShaderRef_MobileSDF))  k_ShaderRef_MobileSDF;

static void __set_k_ShaderRef_MobileSDF(UnityEngine::Shader value) ;

static UnityEngine::Shader __get_k_ShaderRef_MobileSDF() ;

static UnityEngine::Shader __declspec(property(get=__get_k_ShaderRef_MobileBitmap, put=__set_k_ShaderRef_MobileBitmap))  k_ShaderRef_MobileBitmap;

static void __set_k_ShaderRef_MobileBitmap(UnityEngine::Shader value) ;

static UnityEngine::Shader __get_k_ShaderRef_MobileBitmap() ;


// Properties

static UnityEngine::Shader __declspec(property(get=get_ShaderRef_MobileSDF))  ShaderRef_MobileSDF;

static UnityEngine::Shader __declspec(property(get=get_ShaderRef_MobileBitmap))  ShaderRef_MobileBitmap;


// Methods

/// @brief Method get_ShaderRef_MobileSDF addr 0x2aa8ccc size 0xfc virtual false final false
static UnityEngine::Shader get_ShaderRef_MobileSDF() ;

/// @brief Method get_ShaderRef_MobileBitmap addr 0x2aa8dc8 size 0xfc virtual false final false
static UnityEngine::Shader get_ShaderRef_MobileBitmap() ;

/// @brief Method GetShaderPropertyIDs addr 0x2aa2554 size 0xaec virtual false final false
static void GetShaderPropertyIDs() ;

/// @brief Method UpdateShaderRatios addr 0x2aa9054 size 0x45c virtual false final false
static void UpdateShaderRatios(UnityEngine::Material mat) ;

/// @brief Method GetFontExtent addr 0x2aa94b0 size 0x44 virtual false final false
static UnityEngine::Vector4 GetFontExtent(UnityEngine::Material material) ;

/// @brief Method IsMaskingEnabled addr 0x2aa94f4 size 0x19c virtual false final false
static bool IsMaskingEnabled(UnityEngine::Material material) ;

/// @brief Method GetPadding addr 0x2aa9690 size 0x6a8 virtual false final false
static float_t GetPadding(UnityEngine::Material material, bool enableExtraPadding, bool isBold) ;

/// @brief Method GetPadding addr 0x2aa9d38 size 0x880 virtual false final false
static float_t GetPadding(::ArrayW<UnityEngine::Material> materials, bool enableExtraPadding, bool isBold) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::ShaderUtilities);
DEFINE_IL2CPP_ARG_TYPE(TMPro::ShaderUtilities, "TMPro", "ShaderUtilities");
