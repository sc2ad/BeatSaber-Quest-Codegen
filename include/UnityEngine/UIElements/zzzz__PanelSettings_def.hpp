#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct PanelScreenMatchMode;
}
namespace UnityEngine::UIElements {
class DynamicAtlasSettings;
}
namespace UnityEngine::UIElements {
struct PanelScaleMode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class RenderTexture;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine::UIElements {
class ThemeStyleSheet;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
class UIDocumentList;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelSettings;
}
namespace UnityEngine::UIElements {
class UnityEngine__UIElements__PanelSettings__RuntimePanelAccess;
}
// Type: ::RuntimePanelAccess
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7118))
// CS Name: UnityEngine.UIElements.PanelSettings::RuntimePanelAccess
class CORDL_TYPE UnityEngine__UIElements__PanelSettings__RuntimePanelAccess : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__UIElements__PanelSettings__RuntimePanelAccess() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PanelSettings__RuntimePanelAccess", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__PanelSettings__RuntimePanelAccess(UnityEngine__UIElements__PanelSettings__RuntimePanelAccess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__PanelSettings__RuntimePanelAccess", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__PanelSettings__RuntimePanelAccess(UnityEngine__UIElements__PanelSettings__RuntimePanelAccess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__PanelSettings__RuntimePanelAccess(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UIElements__PanelSettings__RuntimePanelAccess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__PanelSettings__RuntimePanelAccess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__PanelSettings__RuntimePanelAccess& operator=(UnityEngine__UIElements__PanelSettings__RuntimePanelAccess&& o) noexcept = default;
  constexpr UnityEngine__UIElements__PanelSettings__RuntimePanelAccess& operator=(UnityEngine__UIElements__PanelSettings__RuntimePanelAccess const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::PanelSettings __declspec(property(get=__get_m_Settings, put=__set_m_Settings))  m_Settings;

constexpr void __set_m_Settings(UnityEngine::UIElements::PanelSettings value) ;

constexpr UnityEngine::UIElements::PanelSettings __get_m_Settings() const;

 UnityEngine::UIElements::BaseRuntimePanel __declspec(property(get=__get_m_RuntimePanel, put=__set_m_RuntimePanel))  m_RuntimePanel;

constexpr void __set_m_RuntimePanel(UnityEngine::UIElements::BaseRuntimePanel value) ;

constexpr UnityEngine::UIElements::BaseRuntimePanel __get_m_RuntimePanel() const;


// Properties

 bool __declspec(property(get=get_isInitialized))  isInitialized;

 UnityEngine::UIElements::BaseRuntimePanel __declspec(property(get=get_panel))  panel;


// Methods

// Ctor Parameters [CppParam { name: "settings", ty: "UnityEngine::UIElements::PanelSettings", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__PanelSettings__RuntimePanelAccess(UnityEngine::UIElements::PanelSettings settings) ;

/// @brief Method .ctor addr 0x2ca23f8 size 0x28 virtual false final false
 void _ctor(UnityEngine::UIElements::PanelSettings settings) ;

/// @brief Method get_isInitialized addr 0x2ca2740 size 0x10 virtual false final false
 bool get_isInitialized() ;

/// @brief Method get_panel addr 0x2ca21d0 size 0x138 virtual false final false
 UnityEngine::UIElements::BaseRuntimePanel get_panel() ;

/// @brief Method DisposePanel addr 0x2ca26e4 size 0x20 virtual false final false
 void DisposePanel() ;

/// @brief Method SetTargetTexture addr 0x2ca1fb4 size 0x28 virtual false final false
 void SetTargetTexture() ;

/// @brief Method SetSortingPriority addr 0x2ca20d4 size 0x34 virtual false final false
 void SetSortingPriority() ;

/// @brief Method SetTargetDisplay addr 0x2ca2144 size 0x28 virtual false final false
 void SetTargetDisplay() ;

/// @brief Method CreateRelatedRuntimePanel addr 0x2ca2ab0 size 0xf8 virtual false final false
 UnityEngine::UIElements::BaseRuntimePanel CreateRelatedRuntimePanel() ;

/// @brief Method DisposeRelatedPanel addr 0x2ca2ba8 size 0x5c virtual false final false
 void DisposeRelatedPanel() ;

/// @brief Method MarkPotentiallyEmpty addr 0x2ca2a54 size 0x5c virtual false final false
 void MarkPotentiallyEmpty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PanelSettings
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7119))
// CS Name: UnityEngine.UIElements.PanelSettings
class CORDL_TYPE PanelSettings : public UnityEngine::ScriptableObject {
public:
// Declarations
using RuntimePanelAccess = UnityEngine::UIElements::UnityEngine__UIElements__PanelSettings__RuntimePanelAccess;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~PanelSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelSettings", modifiers: " const&", def_value: None }]
constexpr PanelSettings(PanelSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelSettings", modifiers: "&&", def_value: None }]
constexpr PanelSettings(PanelSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PanelSettings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr PanelSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PanelSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PanelSettings& operator=(PanelSettings&& o) noexcept = default;
  constexpr PanelSettings& operator=(PanelSettings const& o) noexcept = default;
                


// Fields

/// @brief Field k_DefaultSortingOrder offset 0
static constexpr int32_t  k_DefaultSortingOrder{0};

/// @brief Field k_DefaultScaleValue offset 0
static constexpr float_t  k_DefaultScaleValue{1};

/// @brief Field k_DefaultStyleSheetPath offset 0
static constexpr ::ConstString  k_DefaultStyleSheetPath{u"Packages/com.unity.ui/PackageResources/StyleSheets/Generated/Default.tss.asset"};

 UnityEngine::UIElements::ThemeStyleSheet __declspec(property(get=__get_themeUss, put=__set_themeUss))  themeUss;

constexpr void __set_themeUss(UnityEngine::UIElements::ThemeStyleSheet value) ;

constexpr UnityEngine::UIElements::ThemeStyleSheet __get_themeUss() const;

 UnityEngine::RenderTexture __declspec(property(get=__get_m_TargetTexture, put=__set_m_TargetTexture))  m_TargetTexture;

constexpr void __set_m_TargetTexture(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get_m_TargetTexture() const;

 UnityEngine::UIElements::PanelScaleMode __declspec(property(get=__get_m_ScaleMode, put=__set_m_ScaleMode))  m_ScaleMode;

constexpr void __set_m_ScaleMode(UnityEngine::UIElements::PanelScaleMode value) ;

constexpr UnityEngine::UIElements::PanelScaleMode __get_m_ScaleMode() const;

 float_t __declspec(property(get=__get_m_Scale, put=__set_m_Scale))  m_Scale;

constexpr void __set_m_Scale(float_t value) ;

constexpr float_t __get_m_Scale() const;

/// @brief Field DefaultDpi offset 0
static constexpr float_t  DefaultDpi{96};

 float_t __declspec(property(get=__get_m_ReferenceDpi, put=__set_m_ReferenceDpi))  m_ReferenceDpi;

constexpr void __set_m_ReferenceDpi(float_t value) ;

constexpr float_t __get_m_ReferenceDpi() const;

 float_t __declspec(property(get=__get_m_FallbackDpi, put=__set_m_FallbackDpi))  m_FallbackDpi;

constexpr void __set_m_FallbackDpi(float_t value) ;

constexpr float_t __get_m_FallbackDpi() const;

 UnityEngine::Vector2Int __declspec(property(get=__get_m_ReferenceResolution, put=__set_m_ReferenceResolution))  m_ReferenceResolution;

constexpr void __set_m_ReferenceResolution(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get_m_ReferenceResolution() const;

 UnityEngine::UIElements::PanelScreenMatchMode __declspec(property(get=__get_m_ScreenMatchMode, put=__set_m_ScreenMatchMode))  m_ScreenMatchMode;

constexpr void __set_m_ScreenMatchMode(UnityEngine::UIElements::PanelScreenMatchMode value) ;

constexpr UnityEngine::UIElements::PanelScreenMatchMode __get_m_ScreenMatchMode() const;

 float_t __declspec(property(get=__get_m_Match, put=__set_m_Match))  m_Match;

constexpr void __set_m_Match(float_t value) ;

constexpr float_t __get_m_Match() const;

 float_t __declspec(property(get=__get_m_SortingOrder, put=__set_m_SortingOrder))  m_SortingOrder;

constexpr void __set_m_SortingOrder(float_t value) ;

constexpr float_t __get_m_SortingOrder() const;

 int32_t __declspec(property(get=__get_m_TargetDisplay, put=__set_m_TargetDisplay))  m_TargetDisplay;

constexpr void __set_m_TargetDisplay(int32_t value) ;

constexpr int32_t __get_m_TargetDisplay() const;

 bool __declspec(property(get=__get_m_ClearDepthStencil, put=__set_m_ClearDepthStencil))  m_ClearDepthStencil;

constexpr void __set_m_ClearDepthStencil(bool value) ;

constexpr bool __get_m_ClearDepthStencil() const;

 bool __declspec(property(get=__get_m_ClearColor, put=__set_m_ClearColor))  m_ClearColor;

constexpr void __set_m_ClearColor(bool value) ;

constexpr bool __get_m_ClearColor() const;

 UnityEngine::Color __declspec(property(get=__get_m_ColorClearValue, put=__set_m_ColorClearValue))  m_ColorClearValue;

constexpr void __set_m_ColorClearValue(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_ColorClearValue() const;

 UnityEngine::UIElements::UnityEngine__UIElements__PanelSettings__RuntimePanelAccess __declspec(property(get=__get_m_PanelAccess, put=__set_m_PanelAccess))  m_PanelAccess;

constexpr void __set_m_PanelAccess(UnityEngine::UIElements::UnityEngine__UIElements__PanelSettings__RuntimePanelAccess value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__PanelSettings__RuntimePanelAccess __get_m_PanelAccess() const;

 UnityEngine::UIElements::UIDocumentList __declspec(property(get=__get_m_AttachedUIDocumentsList, put=__set_m_AttachedUIDocumentsList))  m_AttachedUIDocumentsList;

constexpr void __set_m_AttachedUIDocumentsList(UnityEngine::UIElements::UIDocumentList value) ;

constexpr UnityEngine::UIElements::UIDocumentList __get_m_AttachedUIDocumentsList() const;

 UnityEngine::UIElements::DynamicAtlasSettings __declspec(property(get=__get_m_DynamicAtlasSettings, put=__set_m_DynamicAtlasSettings))  m_DynamicAtlasSettings;

constexpr void __set_m_DynamicAtlasSettings(UnityEngine::UIElements::DynamicAtlasSettings value) ;

constexpr UnityEngine::UIElements::DynamicAtlasSettings __get_m_DynamicAtlasSettings() const;

 UnityEngine::Shader __declspec(property(get=__get_m_AtlasBlitShader, put=__set_m_AtlasBlitShader))  m_AtlasBlitShader;

constexpr void __set_m_AtlasBlitShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_m_AtlasBlitShader() const;

 UnityEngine::Shader __declspec(property(get=__get_m_RuntimeShader, put=__set_m_RuntimeShader))  m_RuntimeShader;

constexpr void __set_m_RuntimeShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_m_RuntimeShader() const;

 UnityEngine::Shader __declspec(property(get=__get_m_RuntimeWorldShader, put=__set_m_RuntimeWorldShader))  m_RuntimeWorldShader;

constexpr void __set_m_RuntimeWorldShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_m_RuntimeWorldShader() const;

 UnityEngine::UIElements::PanelTextSettings __declspec(property(get=__get_textSettings, put=__set_textSettings))  textSettings;

constexpr void __set_textSettings(UnityEngine::UIElements::PanelTextSettings value) ;

constexpr UnityEngine::UIElements::PanelTextSettings __get_textSettings() const;

 UnityEngine::Rect __declspec(property(get=__get_m_TargetRect, put=__set_m_TargetRect))  m_TargetRect;

constexpr void __set_m_TargetRect(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_m_TargetRect() const;

 float_t __declspec(property(get=__get_m_ResolvedScale, put=__set_m_ResolvedScale))  m_ResolvedScale;

constexpr void __set_m_ResolvedScale(float_t value) ;

constexpr float_t __get_m_ResolvedScale() const;

 UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_m_OldThemeUss, put=__set_m_OldThemeUss))  m_OldThemeUss;

constexpr void __set_m_OldThemeUss(UnityEngine::UIElements::StyleSheet value) ;

constexpr UnityEngine::UIElements::StyleSheet __get_m_OldThemeUss() const;

 int32_t __declspec(property(get=__get_m_EmptyPanelCounter, put=__set_m_EmptyPanelCounter))  m_EmptyPanelCounter;

constexpr void __set_m_EmptyPanelCounter(int32_t value) ;

constexpr int32_t __get_m_EmptyPanelCounter() const;

 float_t __declspec(property(get=__get__ScreenDPI_k__BackingField, put=__set__ScreenDPI_k__BackingField))  _ScreenDPI_k__BackingField;

constexpr void __set__ScreenDPI_k__BackingField(float_t value) ;

constexpr float_t __get__ScreenDPI_k__BackingField() const;

 System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> __declspec(property(get=__get_m_AssignedScreenToPanel, put=__set_m_AssignedScreenToPanel))  m_AssignedScreenToPanel;

constexpr void __set_m_AssignedScreenToPanel(System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> value) ;

constexpr System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> __get_m_AssignedScreenToPanel() const;


// Properties

 UnityEngine::UIElements::ThemeStyleSheet __declspec(property(get=get_themeStyleSheet, put=set_themeStyleSheet))  themeStyleSheet;

 UnityEngine::RenderTexture __declspec(property(get=get_targetTexture, put=set_targetTexture))  targetTexture;

 UnityEngine::UIElements::PanelScaleMode __declspec(property(get=get_scaleMode, put=set_scaleMode))  scaleMode;

 float_t __declspec(property(get=get_scale, put=set_scale))  scale;

 float_t __declspec(property(get=get_referenceDpi, put=set_referenceDpi))  referenceDpi;

 float_t __declspec(property(get=get_fallbackDpi, put=set_fallbackDpi))  fallbackDpi;

 UnityEngine::Vector2Int __declspec(property(get=get_referenceResolution, put=set_referenceResolution))  referenceResolution;

 UnityEngine::UIElements::PanelScreenMatchMode __declspec(property(get=get_screenMatchMode, put=set_screenMatchMode))  screenMatchMode;

 float_t __declspec(property(get=get_match, put=set_match))  match;

 float_t __declspec(property(get=get_sortingOrder, put=set_sortingOrder))  sortingOrder;

 int32_t __declspec(property(get=get_targetDisplay, put=set_targetDisplay))  targetDisplay;

 bool __declspec(property(get=get_clearDepthStencil, put=set_clearDepthStencil))  clearDepthStencil;

 float_t __declspec(property(get=get_depthClearValue))  depthClearValue;

 bool __declspec(property(get=get_clearColor, put=set_clearColor))  clearColor;

 UnityEngine::Color __declspec(property(get=get_colorClearValue, put=set_colorClearValue))  colorClearValue;

 UnityEngine::UIElements::BaseRuntimePanel __declspec(property(get=get_panel))  panel;

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_visualTree))  visualTree;

 UnityEngine::UIElements::DynamicAtlasSettings __declspec(property(get=get_dynamicAtlasSettings, put=set_dynamicAtlasSettings))  dynamicAtlasSettings;

 float_t __declspec(property(get=get_ScreenDPI, put=set_ScreenDPI))  ScreenDPI;


// Methods

/// @brief Method get_themeStyleSheet addr 0x2ca1e08 size 0x8 virtual false final false
 UnityEngine::UIElements::ThemeStyleSheet get_themeStyleSheet() ;

/// @brief Method set_themeStyleSheet addr 0x2ca1e10 size 0xc virtual false final false
 void set_themeStyleSheet(UnityEngine::UIElements::ThemeStyleSheet value) ;

/// @brief Method get_targetTexture addr 0x2ca1f78 size 0x8 virtual false final false
 UnityEngine::RenderTexture get_targetTexture() ;

/// @brief Method set_targetTexture addr 0x2ca1f80 size 0x34 virtual false final false
 void set_targetTexture(UnityEngine::RenderTexture value) ;

/// @brief Method get_scaleMode addr 0x2ca1fdc size 0x8 virtual false final false
 UnityEngine::UIElements::PanelScaleMode get_scaleMode() ;

/// @brief Method set_scaleMode addr 0x2ca1fe4 size 0x8 virtual false final false
 void set_scaleMode(UnityEngine::UIElements::PanelScaleMode value) ;

/// @brief Method get_scale addr 0x2ca1fec size 0x8 virtual false final false
 float_t get_scale() ;

/// @brief Method set_scale addr 0x2ca1ff4 size 0x8 virtual false final false
 void set_scale(float_t value) ;

/// @brief Method get_referenceDpi addr 0x2ca1ffc size 0x8 virtual false final false
 float_t get_referenceDpi() ;

/// @brief Method set_referenceDpi addr 0x2ca2004 size 0x2c virtual false final false
 void set_referenceDpi(float_t value) ;

/// @brief Method get_fallbackDpi addr 0x2ca2030 size 0x8 virtual false final false
 float_t get_fallbackDpi() ;

/// @brief Method set_fallbackDpi addr 0x2ca2038 size 0x2c virtual false final false
 void set_fallbackDpi(float_t value) ;

/// @brief Method get_referenceResolution addr 0x2ca2064 size 0x8 virtual false final false
 UnityEngine::Vector2Int get_referenceResolution() ;

/// @brief Method set_referenceResolution addr 0x2ca206c size 0x8 virtual false final false
 void set_referenceResolution(UnityEngine::Vector2Int value) ;

/// @brief Method get_screenMatchMode addr 0x2ca2074 size 0x8 virtual false final false
 UnityEngine::UIElements::PanelScreenMatchMode get_screenMatchMode() ;

/// @brief Method set_screenMatchMode addr 0x2ca207c size 0x8 virtual false final false
 void set_screenMatchMode(UnityEngine::UIElements::PanelScreenMatchMode value) ;

/// @brief Method get_match addr 0x2ca2084 size 0x8 virtual false final false
 float_t get_match() ;

/// @brief Method set_match addr 0x2ca208c size 0x8 virtual false final false
 void set_match(float_t value) ;

/// @brief Method get_sortingOrder addr 0x2ca2094 size 0x8 virtual false final false
 float_t get_sortingOrder() ;

/// @brief Method set_sortingOrder addr 0x2ca209c size 0x20 virtual false final false
 void set_sortingOrder(float_t value) ;

/// @brief Method ApplySortingOrder addr 0x2ca20bc size 0x18 virtual false final false
 void ApplySortingOrder() ;

/// @brief Method get_targetDisplay addr 0x2ca2108 size 0x8 virtual false final false
 int32_t get_targetDisplay() ;

/// @brief Method set_targetDisplay addr 0x2ca2110 size 0x34 virtual false final false
 void set_targetDisplay(int32_t value) ;

/// @brief Method get_clearDepthStencil addr 0x2ca216c size 0x8 virtual false final false
 bool get_clearDepthStencil() ;

/// @brief Method set_clearDepthStencil addr 0x2ca2174 size 0xc virtual false final false
 void set_clearDepthStencil(bool value) ;

/// @brief Method get_depthClearValue addr 0x2ca2180 size 0xc virtual false final false
 float_t get_depthClearValue() ;

/// @brief Method get_clearColor addr 0x2ca218c size 0x8 virtual false final false
 bool get_clearColor() ;

/// @brief Method set_clearColor addr 0x2ca2194 size 0xc virtual false final false
 void set_clearColor(bool value) ;

/// @brief Method get_colorClearValue addr 0x2ca21a0 size 0xc virtual false final false
 UnityEngine::Color get_colorClearValue() ;

/// @brief Method set_colorClearValue addr 0x2ca21ac size 0xc virtual false final false
 void set_colorClearValue(UnityEngine::Color value) ;

/// @brief Method get_panel addr 0x2ca21b8 size 0x18 virtual false final false
 UnityEngine::UIElements::BaseRuntimePanel get_panel() ;

/// @brief Method get_visualTree addr 0x2ca2308 size 0x2c virtual false final false
 UnityEngine::UIElements::VisualElement get_visualTree() ;

/// @brief Method get_dynamicAtlasSettings addr 0x2ca2334 size 0x8 virtual false final false
 UnityEngine::UIElements::DynamicAtlasSettings get_dynamicAtlasSettings() ;

/// @brief Method set_dynamicAtlasSettings addr 0x2ca233c size 0x8 virtual false final false
 void set_dynamicAtlasSettings(UnityEngine::UIElements::DynamicAtlasSettings value) ;

// Ctor Parameters []
explicit PanelSettings() ;

/// @brief Method .ctor addr 0x2ca2344 size 0xb4 virtual false final false
 void _ctor() ;

/// @brief Method Reset addr 0x2ca2420 size 0x4 virtual false final false
 void Reset() ;

/// @brief Method OnEnable addr 0x2ca2424 size 0x108 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2ca26b8 size 0x2c virtual false final false
 void OnDisable() ;

/// @brief Method DisposePanel addr 0x2ca2704 size 0x2c virtual false final false
 void DisposePanel() ;

/// @brief Method get_ScreenDPI addr 0x2ca2730 size 0x8 virtual false final false
 float_t get_ScreenDPI() ;

/// @brief Method set_ScreenDPI addr 0x2ca2738 size 0x8 virtual false final false
 void set_ScreenDPI(float_t value) ;

/// @brief Method UpdateScreenDPI addr 0x2ca252c size 0x1c virtual false final false
 void UpdateScreenDPI() ;

/// @brief Method ApplyThemeStyleSheet addr 0x2ca1e1c size 0x15c virtual false final false
 void ApplyThemeStyleSheet(UnityEngine::UIElements::VisualElement root) ;

/// @brief Method InitializeShaders addr 0x2ca2548 size 0x170 virtual false final false
 void InitializeShaders() ;

/// @brief Method ApplyPanelSettings addr 0x2c9fa7c size 0x5fc virtual false final false
 void ApplyPanelSettings() ;

/// @brief Method SetScreenToPanelSpaceFunction addr 0x2ca2a24 size 0x30 virtual false final false
 void SetScreenToPanelSpaceFunction(System::Func_2<UnityEngine::Vector2,UnityEngine::Vector2> screentoPanelSpaceFunction) ;

/// @brief Method ResolveScale addr 0x2ca290c size 0x118 virtual false final false
 float_t ResolveScale(UnityEngine::Rect targetRect, float_t screenDpi) ;

/// @brief Method GetDisplayRect addr 0x2ca2750 size 0x1bc virtual false final false
 UnityEngine::Rect GetDisplayRect() ;

/// @brief Method AttachAndInsertUIDocumentToVisualTree addr 0x2c9e808 size 0x94 virtual false final false
 void AttachAndInsertUIDocumentToVisualTree(UnityEngine::UIElements::UIDocument uiDocument) ;

/// @brief Method DetachUIDocument addr 0x2c9e78c size 0x7c virtual false final false
 void DetachUIDocument(UnityEngine::UIElements::UIDocument uiDocument) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PanelSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PanelSettings, "UnityEngine.UIElements", "PanelSettings");
NEED_NO_BOX(UnityEngine::UIElements::UnityEngine__UIElements__PanelSettings__RuntimePanelAccess);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__PanelSettings__RuntimePanelAccess, "UnityEngine.UIElements", "PanelSettings/RuntimePanelAccess");
