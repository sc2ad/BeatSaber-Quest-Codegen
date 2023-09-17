#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace TMPro {
struct ____TMPro__TMP_Text__UnicodeChar;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
struct MaskingTypes;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Bounds;
}
namespace TMPro {
class TMP_SubMesh;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Mesh;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace TMPro {
class TextContainer;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace TMPro {
class TextMeshPro;
}
// Type: TMPro::TextMeshPro
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12388))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12249))
// CS Name: TMPro.TextMeshPro
class CORDL_TYPE TextMeshPro : public ::TMPro::TMP_Text {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UI::ILayoutElement
constexpr operator  ::UnityEngine::UI::ILayoutElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x760};

virtual ~TextMeshPro() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshPro", modifiers: " const&", def_value: None }]
constexpr TextMeshPro(TextMeshPro const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshPro", modifiers: "&&", def_value: None }]
constexpr TextMeshPro(TextMeshPro&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextMeshPro(void* ptr) noexcept : ::TMPro::TMP_Text(ptr) {
}


  constexpr TextMeshPro& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextMeshPro& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextMeshPro& operator=(TextMeshPro&& o) noexcept = default;
  constexpr TextMeshPro& operator=(TextMeshPro const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__SortingLayer, put=__set__SortingLayer))  _SortingLayer;

constexpr void __set__SortingLayer(int32_t value) ;

constexpr int32_t __get__SortingLayer() const;

 int32_t __declspec(property(get=__get__SortingLayerID, put=__set__SortingLayerID))  _SortingLayerID;

constexpr void __set__SortingLayerID(int32_t value) ;

constexpr int32_t __get__SortingLayerID() const;

 int32_t __declspec(property(get=__get__SortingOrder, put=__set__SortingOrder))  _SortingOrder;

constexpr void __set__SortingOrder(int32_t value) ;

constexpr int32_t __get__SortingOrder() const;

 ::System::Action_1<::TMPro::TMP_TextInfo> __declspec(property(get=__get_OnPreRenderText, put=__set_OnPreRenderText))  OnPreRenderText;

constexpr void __set_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo> value) ;

constexpr ::System::Action_1<::TMPro::TMP_TextInfo> __get_OnPreRenderText() const;

 bool __declspec(property(get=__get_m_currentAutoSizeMode, put=__set_m_currentAutoSizeMode))  m_currentAutoSizeMode;

constexpr void __set_m_currentAutoSizeMode(bool value) ;

constexpr bool __get_m_currentAutoSizeMode() const;

 bool __declspec(property(get=__get_m_hasFontAssetChanged, put=__set_m_hasFontAssetChanged))  m_hasFontAssetChanged;

constexpr void __set_m_hasFontAssetChanged(bool value) ;

constexpr bool __get_m_hasFontAssetChanged() const;

 float_t __declspec(property(get=__get_m_previousLossyScaleY, put=__set_m_previousLossyScaleY))  m_previousLossyScaleY;

constexpr void __set_m_previousLossyScaleY(float_t value) ;

constexpr float_t __get_m_previousLossyScaleY() const;

 ::UnityEngine::Renderer __declspec(property(get=__get_m_renderer, put=__set_m_renderer))  m_renderer;

constexpr void __set_m_renderer(::UnityEngine::Renderer value) ;

constexpr ::UnityEngine::Renderer __get_m_renderer() const;

 ::UnityEngine::MeshFilter __declspec(property(get=__get_m_meshFilter, put=__set_m_meshFilter))  m_meshFilter;

constexpr void __set_m_meshFilter(::UnityEngine::MeshFilter value) ;

constexpr ::UnityEngine::MeshFilter __get_m_meshFilter() const;

 bool __declspec(property(get=__get_m_isFirstAllocation, put=__set_m_isFirstAllocation))  m_isFirstAllocation;

constexpr void __set_m_isFirstAllocation(bool value) ;

constexpr bool __get_m_isFirstAllocation() const;

 int32_t __declspec(property(get=__get_m_max_characters, put=__set_m_max_characters))  m_max_characters;

constexpr void __set_m_max_characters(int32_t value) ;

constexpr int32_t __get_m_max_characters() const;

 int32_t __declspec(property(get=__get_m_max_numberOfLines, put=__set_m_max_numberOfLines))  m_max_numberOfLines;

constexpr void __set_m_max_numberOfLines(int32_t value) ;

constexpr int32_t __get_m_max_numberOfLines() const;

 ::ArrayW<::TMPro::TMP_SubMesh> __declspec(property(get=__get_m_subTextObjects, put=__set_m_subTextObjects))  m_subTextObjects;

constexpr void __set_m_subTextObjects(::ArrayW<::TMPro::TMP_SubMesh> value) ;

constexpr ::ArrayW<::TMPro::TMP_SubMesh> __get_m_subTextObjects() const;

 ::TMPro::MaskingTypes __declspec(property(get=__get_m_maskType, put=__set_m_maskType))  m_maskType;

constexpr void __set_m_maskType(::TMPro::MaskingTypes value) ;

constexpr ::TMPro::MaskingTypes __get_m_maskType() const;

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get_m_EnvMapMatrix, put=__set_m_EnvMapMatrix))  m_EnvMapMatrix;

constexpr void __set_m_EnvMapMatrix(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get_m_EnvMapMatrix() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get_m_RectTransformCorners, put=__set_m_RectTransformCorners))  m_RectTransformCorners;

constexpr void __set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get_m_RectTransformCorners() const;

 bool __declspec(property(get=__get_m_isRegisteredForEvents, put=__set_m_isRegisteredForEvents))  m_isRegisteredForEvents;

constexpr void __set_m_isRegisteredForEvents(bool value) ;

constexpr bool __get_m_isRegisteredForEvents() const;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_GenerateTextMarker, put=__set_k_GenerateTextMarker))  k_GenerateTextMarker;

static void __set_k_GenerateTextMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_GenerateTextMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_SetArraySizesMarker, put=__set_k_SetArraySizesMarker))  k_SetArraySizesMarker;

static void __set_k_SetArraySizesMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_SetArraySizesMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_GenerateTextPhaseIMarker, put=__set_k_GenerateTextPhaseIMarker))  k_GenerateTextPhaseIMarker;

static void __set_k_GenerateTextPhaseIMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_GenerateTextPhaseIMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ParseMarkupTextMarker, put=__set_k_ParseMarkupTextMarker))  k_ParseMarkupTextMarker;

static void __set_k_ParseMarkupTextMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_ParseMarkupTextMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_CharacterLookupMarker, put=__set_k_CharacterLookupMarker))  k_CharacterLookupMarker;

static void __set_k_CharacterLookupMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_CharacterLookupMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleGPOSFeaturesMarker, put=__set_k_HandleGPOSFeaturesMarker))  k_HandleGPOSFeaturesMarker;

static void __set_k_HandleGPOSFeaturesMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_HandleGPOSFeaturesMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_CalculateVerticesPositionMarker, put=__set_k_CalculateVerticesPositionMarker))  k_CalculateVerticesPositionMarker;

static void __set_k_CalculateVerticesPositionMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_CalculateVerticesPositionMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ComputeTextMetricsMarker, put=__set_k_ComputeTextMetricsMarker))  k_ComputeTextMetricsMarker;

static void __set_k_ComputeTextMetricsMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_ComputeTextMetricsMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleVisibleCharacterMarker, put=__set_k_HandleVisibleCharacterMarker))  k_HandleVisibleCharacterMarker;

static void __set_k_HandleVisibleCharacterMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_HandleVisibleCharacterMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleWhiteSpacesMarker, put=__set_k_HandleWhiteSpacesMarker))  k_HandleWhiteSpacesMarker;

static void __set_k_HandleWhiteSpacesMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_HandleWhiteSpacesMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleHorizontalLineBreakingMarker, put=__set_k_HandleHorizontalLineBreakingMarker))  k_HandleHorizontalLineBreakingMarker;

static void __set_k_HandleHorizontalLineBreakingMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_HandleHorizontalLineBreakingMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleVerticalLineBreakingMarker, put=__set_k_HandleVerticalLineBreakingMarker))  k_HandleVerticalLineBreakingMarker;

static void __set_k_HandleVerticalLineBreakingMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_HandleVerticalLineBreakingMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_SaveGlyphVertexDataMarker, put=__set_k_SaveGlyphVertexDataMarker))  k_SaveGlyphVertexDataMarker;

static void __set_k_SaveGlyphVertexDataMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_SaveGlyphVertexDataMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ComputeCharacterAdvanceMarker, put=__set_k_ComputeCharacterAdvanceMarker))  k_ComputeCharacterAdvanceMarker;

static void __set_k_ComputeCharacterAdvanceMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_ComputeCharacterAdvanceMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleCarriageReturnMarker, put=__set_k_HandleCarriageReturnMarker))  k_HandleCarriageReturnMarker;

static void __set_k_HandleCarriageReturnMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_HandleCarriageReturnMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_HandleLineTerminationMarker, put=__set_k_HandleLineTerminationMarker))  k_HandleLineTerminationMarker;

static void __set_k_HandleLineTerminationMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_HandleLineTerminationMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_SavePageInfoMarker, put=__set_k_SavePageInfoMarker))  k_SavePageInfoMarker;

static void __set_k_SavePageInfoMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_SavePageInfoMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_SaveProcessingStatesMarker, put=__set_k_SaveProcessingStatesMarker))  k_SaveProcessingStatesMarker;

static void __set_k_SaveProcessingStatesMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_SaveProcessingStatesMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_GenerateTextPhaseIIMarker, put=__set_k_GenerateTextPhaseIIMarker))  k_GenerateTextPhaseIIMarker;

static void __set_k_GenerateTextPhaseIIMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_GenerateTextPhaseIIMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_GenerateTextPhaseIIIMarker, put=__set_k_GenerateTextPhaseIIIMarker))  k_GenerateTextPhaseIIIMarker;

static void __set_k_GenerateTextPhaseIIIMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_GenerateTextPhaseIIIMarker() ;


// Properties

 int32_t __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID))  sortingLayerID;

 int32_t __declspec(property(get=get_sortingOrder, put=set_sortingOrder))  sortingOrder;

 bool __declspec(property(get=get_autoSizeTextContainer, put=set_autoSizeTextContainer))  autoSizeTextContainer;

 ::TMPro::TextContainer __declspec(property(get=get_textContainer))  textContainer;

 ::UnityEngine::Transform __declspec(property(get=get_transform))  transform;

 ::UnityEngine::Renderer __declspec(property(get=get_renderer))  renderer;

 ::UnityEngine::Mesh __declspec(property(get=get_mesh))  mesh;

 ::UnityEngine::MeshFilter __declspec(property(get=get_meshFilter))  meshFilter;

 ::TMPro::MaskingTypes __declspec(property(get=get_maskType, put=set_maskType))  maskType;


// Methods

/// @brief Method get_sortingLayerID addr 0x2a59548 size 0x94 virtual false final false
 int32_t get_sortingLayerID() ;

/// @brief Method set_sortingLayerID addr 0x2a59670 size 0xb4 virtual false final false
 void set_sortingLayerID(int32_t value) ;

/// @brief Method get_sortingOrder addr 0x2a59830 size 0x94 virtual false final false
 int32_t get_sortingOrder() ;

/// @brief Method set_sortingOrder addr 0x2a598c4 size 0xb4 virtual false final false
 void set_sortingOrder(int32_t value) ;

/// @brief Method get_autoSizeTextContainer addr 0x2a59a84 size 0x8 virtual true final false
 bool get_autoSizeTextContainer() ;

/// @brief Method set_autoSizeTextContainer addr 0x2a59a8c size 0xa0 virtual true final false
 void set_autoSizeTextContainer(bool value) ;

/// @brief Method get_textContainer addr 0x2a59b2c size 0x8 virtual false final false
 ::TMPro::TextContainer get_textContainer() ;

/// @brief Method get_transform addr 0x2a59b34 size 0x94 virtual false final false
 ::UnityEngine::Transform get_transform() ;

/// @brief Method get_renderer addr 0x2a595dc size 0x94 virtual false final false
 ::UnityEngine::Renderer get_renderer() ;

/// @brief Method get_mesh addr 0x2a59bc8 size 0xb0 virtual true final false
 ::UnityEngine::Mesh get_mesh() ;

/// @brief Method get_meshFilter addr 0x2a59c78 size 0xfc virtual false final false
 ::UnityEngine::MeshFilter get_meshFilter() ;

/// @brief Method get_maskType addr 0x2a59d74 size 0x8 virtual false final false
 ::TMPro::MaskingTypes get_maskType() ;

/// @brief Method set_maskType addr 0x2a59d7c size 0x8 virtual false final false
 void set_maskType(::TMPro::MaskingTypes value) ;

/// @brief Method SetMask addr 0x2a59ecc size 0x48 virtual false final false
 void SetMask(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords) ;

/// @brief Method SetMask addr 0x2a59fb4 size 0x60 virtual false final false
 void SetMask(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords, float_t softnessX, float_t softnessY) ;

/// @brief Method SetVerticesDirty addr 0x2a5a104 size 0xb0 virtual true final false
 void SetVerticesDirty() ;

/// @brief Method SetLayoutDirty addr 0x2a5a1b4 size 0xd0 virtual true final false
 void SetLayoutDirty() ;

/// @brief Method SetMaterialDirty addr 0x2a5a284 size 0x10 virtual true final false
 void SetMaterialDirty() ;

/// @brief Method SetAllDirty addr 0x2a5a294 size 0x44 virtual true final false
 void SetAllDirty() ;

/// @brief Method Rebuild addr 0x2a5a2d8 size 0xe8 virtual true final false
 void Rebuild(::UnityEngine::UI::CanvasUpdate update) ;

/// @brief Method UpdateMaterial addr 0x2a5a61c size 0x134 virtual true final false
 void UpdateMaterial() ;

/// @brief Method UpdateMeshPadding addr 0x2a5a750 size 0x100 virtual true final false
 void UpdateMeshPadding() ;

/// @brief Method ForceMeshUpdate addr 0x2a5a850 size 0x14 virtual true final false
 void ForceMeshUpdate(bool ignoreActiveState, bool forceTextReparsing) ;

/// @brief Method GetTextInfo addr 0x2a5a864 size 0x6c virtual true final false
 ::TMPro::TMP_TextInfo GetTextInfo(::StringW text) ;

/// @brief Method ClearMesh addr 0x2a5a8d0 size 0xc0 virtual true final false
 void ClearMesh(bool updateMesh) ;

/// @brief Method add_OnPreRenderText addr 0x2a5a990 size 0xb4 virtual true final false
 void add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo> value) ;

/// @brief Method remove_OnPreRenderText addr 0x2a5aa44 size 0xb4 virtual true final false
 void remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo> value) ;

/// @brief Method UpdateGeometry addr 0x2a5aaf8 size 0x18 virtual true final false
 void UpdateGeometry(::UnityEngine::Mesh mesh, int32_t index) ;

/// @brief Method UpdateVertexData addr 0x2a5ab10 size 0x198 virtual true final false
 void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags flags) ;

/// @brief Method UpdateVertexData addr 0x2a5aca8 size 0x198 virtual true final false
 void UpdateVertexData() ;

/// @brief Method UpdateFontAsset addr 0x2a5ae40 size 0x10 virtual false final false
 void UpdateFontAsset() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2a5ae50 size 0x4 virtual true final true
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2a5ae54 size 0x4 virtual true final true
 void CalculateLayoutInputVertical() ;

/// @brief Method Awake addr 0x2a5ae58 size 0x3a8 virtual true final false
 void Awake() ;

/// @brief Method OnEnable addr 0x2a5b200 size 0xfc virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2a5b2fc size 0xac virtual true final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2a5b3a8 size 0xcc virtual true final false
 void OnDestroy() ;

/// @brief Method LoadFontAsset addr 0x2a5b474 size 0x670 virtual true final false
 void LoadFontAsset() ;

/// @brief Method UpdateEnvMapMatrix addr 0x2a5bae4 size 0x27c virtual false final false
 void UpdateEnvMapMatrix() ;

/// @brief Method SetMask addr 0x2a59d84 size 0x148 virtual false final false
 void SetMask(::TMPro::MaskingTypes maskType) ;

/// @brief Method SetMaskCoordinates addr 0x2a59f14 size 0xa0 virtual false final false
 void SetMaskCoordinates(::UnityEngine::Vector4 coords) ;

/// @brief Method SetMaskCoordinates addr 0x2a5a014 size 0xf0 virtual false final false
 void SetMaskCoordinates(::UnityEngine::Vector4 coords, float_t softX, float_t softY) ;

/// @brief Method EnableMasking addr 0x2a5bd60 size 0xf8 virtual false final false
 void EnableMasking() ;

/// @brief Method DisableMasking addr 0x2a5bed8 size 0xf4 virtual false final false
 void DisableMasking() ;

/// @brief Method UpdateMask addr 0x2a5be58 size 0x80 virtual false final false
 void UpdateMask() ;

/// @brief Method GetMaterial addr 0x2a5c090 size 0x110 virtual true final false
 ::UnityEngine::Material GetMaterial(::UnityEngine::Material mat) ;

/// @brief Method GetMaterials addr 0x2a5c1a0 size 0x1a8 virtual true final false
 ::ArrayW<::UnityEngine::Material> GetMaterials(::ArrayW<::UnityEngine::Material> mats) ;

/// @brief Method SetSharedMaterial addr 0x2a5c348 size 0x38 virtual true final false
 void SetSharedMaterial(::UnityEngine::Material mat) ;

/// @brief Method GetSharedMaterials addr 0x2a5c380 size 0x190 virtual true final false
 ::ArrayW<::UnityEngine::Material> GetSharedMaterials() ;

/// @brief Method SetSharedMaterials addr 0x2a5c510 size 0x368 virtual true final false
 void SetSharedMaterials(::ArrayW<::UnityEngine::Material> materials) ;

/// @brief Method SetOutlineThickness addr 0x2a5c878 size 0x12c virtual true final false
 void SetOutlineThickness(float_t thickness) ;

/// @brief Method SetFaceColor addr 0x2a5c9a4 size 0x128 virtual true final false
 void SetFaceColor(::UnityEngine::Color32 color) ;

/// @brief Method SetOutlineColor addr 0x2a5cacc size 0x128 virtual true final false
 void SetOutlineColor(::UnityEngine::Color32 color) ;

/// @brief Method CreateMaterialInstance addr 0x2a5bfcc size 0xc4 virtual false final false
 void CreateMaterialInstance() ;

/// @brief Method SetShaderDepth addr 0x2a5cbf4 size 0xe8 virtual true final false
 void SetShaderDepth() ;

/// @brief Method SetCulling addr 0x2a5ccdc size 0x2a8 virtual true final false
 void SetCulling() ;

/// @brief Method SetPerspectiveCorrection addr 0x2a5cf84 size 0x84 virtual false final false
 void SetPerspectiveCorrection() ;

/// @brief Method SetArraySizes addr 0x2a5d008 size 0x1ad0 virtual true final false
 int32_t SetArraySizes(::ArrayW<::TMPro::____TMPro__TMP_Text__UnicodeChar> unicodeChars) ;

/// @brief Method ComputeMarginSize addr 0x2a5ead8 size 0x124 virtual true final false
 void ComputeMarginSize() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2a5ebfc size 0x1c virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method OnTransformParentChanged addr 0x2a5ec18 size 0x30 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2a5ec48 size 0x17c virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method InternalUpdate addr 0x2a5edc4 size 0x9c virtual true final false
 void InternalUpdate() ;

/// @brief Method OnPreRenderObject addr 0x2a5a3c0 size 0x25c virtual false final false
 void OnPreRenderObject() ;

/// @brief Method GenerateTextMesh addr 0x2a4741c size 0x7878 virtual true final false
 void GenerateTextMesh() ;

/// @brief Method GetTextContainerLocalCorners addr 0x2a5f110 size 0x9c virtual true final false
 ::ArrayW<::UnityEngine::Vector3> GetTextContainerLocalCorners() ;

/// @brief Method SetMeshFilters addr 0x2a5f1ac size 0x1c0 virtual false final false
 void SetMeshFilters(bool state) ;

/// @brief Method SetActiveSubMeshes addr 0x2a5f36c size 0x108 virtual true final false
 void SetActiveSubMeshes(bool state) ;

/// @brief Method SetActiveSubTextObjectRenderers addr 0x2a5efe4 size 0x12c virtual false final false
 void SetActiveSubTextObjectRenderers(bool state) ;

/// @brief Method DestroySubMeshObjects addr 0x2a5f474 size 0xdc virtual true final false
 void DestroySubMeshObjects() ;

/// @brief Method UpdateSubMeshSortingLayerID addr 0x2a59724 size 0x10c virtual false final false
 void UpdateSubMeshSortingLayerID(int32_t id) ;

/// @brief Method UpdateSubMeshSortingOrder addr 0x2a59978 size 0x10c virtual false final false
 void UpdateSubMeshSortingOrder(int32_t order) ;

/// @brief Method GetCompoundBounds addr 0x2a5f550 size 0x248 virtual true final false
 ::UnityEngine::Bounds GetCompoundBounds() ;

/// @brief Method UpdateSDFScale addr 0x2a5ee60 size 0x184 virtual false final false
 void UpdateSDFScale(float_t scaleDelta) ;

// Ctor Parameters []
explicit TextMeshPro() ;

/// @brief Method .ctor addr 0x2a5f798 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextMeshPro, "TMPro", "TextMeshPro");
