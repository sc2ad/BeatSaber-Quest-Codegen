#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class CanvasRenderer;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::UI::CoroutineTween {
struct ColorTween;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine::UI::CoroutineTween {
template<typename T>
class TweenRunner_1;
}
// Forward declare root types
namespace UnityEngine::UI {
class Graphic;
}
// Type: UnityEngine.UI::Graphic
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12981))
// CS Name: UnityEngine.UI.Graphic
class CORDL_TYPE Graphic : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UI::ICanvasElement
constexpr operator  UnityEngine::UI::ICanvasElement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~Graphic() = default;

// Ctor Parameters [CppParam { name: "", ty: "Graphic", modifiers: " const&", def_value: None }]
constexpr Graphic(Graphic const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Graphic", modifiers: "&&", def_value: None }]
constexpr Graphic(Graphic&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Graphic(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr Graphic& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Graphic& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Graphic& operator=(Graphic&& o) noexcept = default;
  constexpr Graphic& operator=(Graphic const& o) noexcept = default;
                


// Fields

static UnityEngine::Material __declspec(property(get=__get_s_DefaultUI, put=__set_s_DefaultUI))  s_DefaultUI;

static void __set_s_DefaultUI(UnityEngine::Material value) ;

static UnityEngine::Material __get_s_DefaultUI() ;

static UnityEngine::Texture2D __declspec(property(get=__get_s_WhiteTexture, put=__set_s_WhiteTexture))  s_WhiteTexture;

static void __set_s_WhiteTexture(UnityEngine::Texture2D value) ;

static UnityEngine::Texture2D __get_s_WhiteTexture() ;

 UnityEngine::Material __declspec(property(get=__get_m_Material, put=__set_m_Material))  m_Material;

constexpr void __set_m_Material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_Material() const;

 UnityEngine::Color __declspec(property(get=__get_m_Color, put=__set_m_Color))  m_Color;

constexpr void __set_m_Color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_m_Color() const;

 bool __declspec(property(get=__get_m_SkipLayoutUpdate, put=__set_m_SkipLayoutUpdate))  m_SkipLayoutUpdate;

constexpr void __set_m_SkipLayoutUpdate(bool value) ;

constexpr bool __get_m_SkipLayoutUpdate() const;

 bool __declspec(property(get=__get_m_SkipMaterialUpdate, put=__set_m_SkipMaterialUpdate))  m_SkipMaterialUpdate;

constexpr void __set_m_SkipMaterialUpdate(bool value) ;

constexpr bool __get_m_SkipMaterialUpdate() const;

 bool __declspec(property(get=__get_m_RaycastTarget, put=__set_m_RaycastTarget))  m_RaycastTarget;

constexpr void __set_m_RaycastTarget(bool value) ;

constexpr bool __get_m_RaycastTarget() const;

 bool __declspec(property(get=__get_m_RaycastTargetCache, put=__set_m_RaycastTargetCache))  m_RaycastTargetCache;

constexpr void __set_m_RaycastTargetCache(bool value) ;

constexpr bool __get_m_RaycastTargetCache() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_RaycastPadding, put=__set_m_RaycastPadding))  m_RaycastPadding;

constexpr void __set_m_RaycastPadding(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_RaycastPadding() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_RectTransform, put=__set_m_RectTransform))  m_RectTransform;

constexpr void __set_m_RectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_RectTransform() const;

 UnityEngine::CanvasRenderer __declspec(property(get=__get_m_CanvasRenderer, put=__set_m_CanvasRenderer))  m_CanvasRenderer;

constexpr void __set_m_CanvasRenderer(UnityEngine::CanvasRenderer value) ;

constexpr UnityEngine::CanvasRenderer __get_m_CanvasRenderer() const;

 UnityEngine::Canvas __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas))  m_Canvas;

constexpr void __set_m_Canvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get_m_Canvas() const;

 bool __declspec(property(get=__get_m_VertsDirty, put=__set_m_VertsDirty))  m_VertsDirty;

constexpr void __set_m_VertsDirty(bool value) ;

constexpr bool __get_m_VertsDirty() const;

 bool __declspec(property(get=__get_m_MaterialDirty, put=__set_m_MaterialDirty))  m_MaterialDirty;

constexpr void __set_m_MaterialDirty(bool value) ;

constexpr bool __get_m_MaterialDirty() const;

 UnityEngine::Events::UnityAction __declspec(property(get=__get_m_OnDirtyLayoutCallback, put=__set_m_OnDirtyLayoutCallback))  m_OnDirtyLayoutCallback;

constexpr void __set_m_OnDirtyLayoutCallback(UnityEngine::Events::UnityAction value) ;

constexpr UnityEngine::Events::UnityAction __get_m_OnDirtyLayoutCallback() const;

 UnityEngine::Events::UnityAction __declspec(property(get=__get_m_OnDirtyVertsCallback, put=__set_m_OnDirtyVertsCallback))  m_OnDirtyVertsCallback;

constexpr void __set_m_OnDirtyVertsCallback(UnityEngine::Events::UnityAction value) ;

constexpr UnityEngine::Events::UnityAction __get_m_OnDirtyVertsCallback() const;

 UnityEngine::Events::UnityAction __declspec(property(get=__get_m_OnDirtyMaterialCallback, put=__set_m_OnDirtyMaterialCallback))  m_OnDirtyMaterialCallback;

constexpr void __set_m_OnDirtyMaterialCallback(UnityEngine::Events::UnityAction value) ;

constexpr UnityEngine::Events::UnityAction __get_m_OnDirtyMaterialCallback() const;

static UnityEngine::Mesh __declspec(property(get=__get_s_Mesh, put=__set_s_Mesh))  s_Mesh;

static void __set_s_Mesh(UnityEngine::Mesh value) ;

static UnityEngine::Mesh __get_s_Mesh() ;

static UnityEngine::UI::VertexHelper __declspec(property(get=__get_s_VertexHelper, put=__set_s_VertexHelper))  s_VertexHelper;

static void __set_s_VertexHelper(UnityEngine::UI::VertexHelper value) ;

static UnityEngine::UI::VertexHelper __get_s_VertexHelper() ;

 UnityEngine::Mesh __declspec(property(get=__get_m_CachedMesh, put=__set_m_CachedMesh))  m_CachedMesh;

constexpr void __set_m_CachedMesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get_m_CachedMesh() const;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_m_CachedUvs, put=__set_m_CachedUvs))  m_CachedUvs;

constexpr void __set_m_CachedUvs(::ArrayW<UnityEngine::Vector2> value) ;

constexpr ::ArrayW<UnityEngine::Vector2> __get_m_CachedUvs() const;

 UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::ColorTween> __declspec(property(get=__get_m_ColorTweenRunner, put=__set_m_ColorTweenRunner))  m_ColorTweenRunner;

constexpr void __set_m_ColorTweenRunner(UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::ColorTween> value) ;

constexpr UnityEngine::UI::CoroutineTween::TweenRunner_1<UnityEngine::UI::CoroutineTween::ColorTween> __get_m_ColorTweenRunner() const;

 bool __declspec(property(get=__get__useLegacyMeshGeneration_k__BackingField, put=__set__useLegacyMeshGeneration_k__BackingField))  _useLegacyMeshGeneration_k__BackingField;

constexpr void __set__useLegacyMeshGeneration_k__BackingField(bool value) ;

constexpr bool __get__useLegacyMeshGeneration_k__BackingField() const;


// Properties

static UnityEngine::Material __declspec(property(get=get_defaultGraphicMaterial))  defaultGraphicMaterial;

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 bool __declspec(property(get=get_raycastTarget, put=set_raycastTarget))  raycastTarget;

 UnityEngine::Vector4 __declspec(property(get=get_raycastPadding, put=set_raycastPadding))  raycastPadding;

 bool __declspec(property(get=get_useLegacyMeshGeneration, put=set_useLegacyMeshGeneration))  useLegacyMeshGeneration;

 int32_t __declspec(property(get=get_depth))  depth;

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;

 UnityEngine::Canvas __declspec(property(get=get_canvas))  canvas;

 UnityEngine::CanvasRenderer __declspec(property(get=get_canvasRenderer))  canvasRenderer;

 UnityEngine::Material __declspec(property(get=get_defaultMaterial))  defaultMaterial;

 UnityEngine::Material __declspec(property(get=get_material, put=set_material))  material;

 UnityEngine::Material __declspec(property(get=get_materialForRendering))  materialForRendering;

 UnityEngine::Texture __declspec(property(get=get_mainTexture))  mainTexture;

static UnityEngine::Mesh __declspec(property(get=get_workerMesh))  workerMesh;


// Methods

/// @brief Method get_defaultGraphicMaterial addr 0x2be2710 size 0xdc virtual false final false
static UnityEngine::Material get_defaultGraphicMaterial() ;

/// @brief Method get_color addr 0x2be27ec size 0xc virtual true final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2be27f8 size 0x38 virtual true final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method get_raycastTarget addr 0x2be2830 size 0x8 virtual true final false
 bool get_raycastTarget() ;

/// @brief Method set_raycastTarget addr 0x2be2838 size 0xd4 virtual true final false
 void set_raycastTarget(bool value) ;

/// @brief Method get_raycastPadding addr 0x2be2cf0 size 0xc virtual false final false
 UnityEngine::Vector4 get_raycastPadding() ;

/// @brief Method set_raycastPadding addr 0x2be2cfc size 0xc virtual false final false
 void set_raycastPadding(UnityEngine::Vector4 value) ;

/// @brief Method get_useLegacyMeshGeneration addr 0x2be2d08 size 0x8 virtual false final false
 bool get_useLegacyMeshGeneration() ;

/// @brief Method set_useLegacyMeshGeneration addr 0x2be2d10 size 0xc virtual false final false
 void set_useLegacyMeshGeneration(bool value) ;

// Ctor Parameters []
explicit Graphic() ;

/// @brief Method .ctor addr 0x2be2d1c size 0xb0 virtual false final false
 void _ctor() ;

/// @brief Method SetAllDirty addr 0x2be2dcc size 0x70 virtual true final false
 void SetAllDirty() ;

/// @brief Method SetLayoutDirty addr 0x2be2f0c size 0xa0 virtual true final false
 void SetLayoutDirty() ;

/// @brief Method SetVerticesDirty addr 0x2be3004 size 0x94 virtual true final false
 void SetVerticesDirty() ;

/// @brief Method SetMaterialDirty addr 0x2be3098 size 0x94 virtual true final false
 void SetMaterialDirty() ;

/// @brief Method SetRaycastDirty addr 0x2be2e3c size 0xd0 virtual false final false
 void SetRaycastDirty() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2be312c size 0xac virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method OnBeforeTransformParentChanged addr 0x2be31d8 size 0xa8 virtual true final false
 void OnBeforeTransformParentChanged() ;

/// @brief Method OnTransformParentChanged addr 0x2be3400 size 0xb4 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method get_depth addr 0x2be3818 size 0x1c virtual false final false
 int32_t get_depth() ;

/// @brief Method get_rectTransform addr 0x2be2fac size 0x58 virtual true final true
 UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method get_canvas addr 0x2be290c size 0x74 virtual false final false
 UnityEngine::Canvas get_canvas() ;

/// @brief Method CacheCanvas addr 0x2be34b4 size 0x170 virtual false final false
 void CacheCanvas() ;

/// @brief Method get_canvasRenderer addr 0x2be3834 size 0x90 virtual false final false
 UnityEngine::CanvasRenderer get_canvasRenderer() ;

/// @brief Method get_defaultMaterial addr 0x2be38c4 size 0x4c virtual true final false
 UnityEngine::Material get_defaultMaterial() ;

/// @brief Method get_material addr 0x2be3910 size 0x88 virtual true final false
 UnityEngine::Material get_material() ;

/// @brief Method set_material addr 0x2be3998 size 0x98 virtual true final false
 void set_material(UnityEngine::Material value) ;

/// @brief Method get_materialForRendering addr 0x2be3a30 size 0x224 virtual true final false
 UnityEngine::Material get_materialForRendering() ;

/// @brief Method get_mainTexture addr 0x2be3c54 size 0x58 virtual true final false
 UnityEngine::Texture get_mainTexture() ;

/// @brief Method OnEnable addr 0x2be3cac size 0x130 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2be3ddc size 0x148 virtual true final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2be3f24 size 0x104 virtual true final false
 void OnDestroy() ;

/// @brief Method OnCanvasHierarchyChanged addr 0x2be41cc size 0x138 virtual true final false
 void OnCanvasHierarchyChanged() ;

/// @brief Method OnCullingChanged addr 0x2be4304 size 0x8c virtual true final false
 void OnCullingChanged() ;

/// @brief Method Rebuild addr 0x2be4390 size 0xe4 virtual true final false
 void Rebuild(UnityEngine::UI::CanvasUpdate update) ;

/// @brief Method LayoutComplete addr 0x2be4474 size 0x4 virtual true final false
 void LayoutComplete() ;

/// @brief Method GraphicUpdateComplete addr 0x2be4478 size 0x4 virtual true final false
 void GraphicUpdateComplete() ;

/// @brief Method UpdateMaterial addr 0x2be447c size 0xb8 virtual true final false
 void UpdateMaterial() ;

/// @brief Method UpdateGeometry addr 0x2be4534 size 0x10 virtual true final false
 void UpdateGeometry() ;

/// @brief Method DoMeshGeneration addr 0x2be48e4 size 0x3d4 virtual false final false
 void DoMeshGeneration() ;

/// @brief Method DoLegacyMeshGeneration addr 0x2be4544 size 0x3a0 virtual false final false
 void DoLegacyMeshGeneration() ;

/// @brief Method get_workerMesh addr 0x2be4cb8 size 0x13c virtual false final false
static UnityEngine::Mesh get_workerMesh() ;

/// @brief Method OnFillVBO addr 0x2be4df4 size 0x4 virtual true final false
 void OnFillVBO(System::Collections::Generic::List_1<UnityEngine::UIVertex> vbo) ;

/// @brief Method OnPopulateMesh addr 0x2be4df8 size 0x98 virtual true final false
 void OnPopulateMesh(UnityEngine::Mesh m) ;

/// @brief Method OnPopulateMesh addr 0x2be4e90 size 0x48c virtual true final false
 void OnPopulateMesh(UnityEngine::UI::VertexHelper vh) ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2be5448 size 0x10 virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method SetNativeSize addr 0x2be5458 size 0x4 virtual true final false
 void SetNativeSize() ;

/// @brief Method Raycast addr 0x2be545c size 0x48c virtual true final false
 bool Raycast(UnityEngine::Vector2 sp, UnityEngine::Camera eventCamera) ;

/// @brief Method PixelAdjustPoint addr 0x2be58e8 size 0x140 virtual false final false
 UnityEngine::Vector2 PixelAdjustPoint(UnityEngine::Vector2 point) ;

/// @brief Method GetPixelAdjustedRect addr 0x2be531c size 0x12c virtual false final false
 UnityEngine::Rect GetPixelAdjustedRect() ;

/// @brief Method CrossFadeColor addr 0x2be5a28 size 0x1c virtual true final false
 void CrossFadeColor(UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha) ;

/// @brief Method CrossFadeColor addr 0x2be5a44 size 0x294 virtual true final false
 void CrossFadeColor(UnityEngine::Color targetColor, float_t duration, bool ignoreTimeScale, bool useAlpha, bool useRGB) ;

/// @brief Method CreateColorFromAlpha addr 0x2be5cd8 size 0x14 virtual false final false
static UnityEngine::Color CreateColorFromAlpha(float_t alpha) ;

/// @brief Method CrossFadeAlpha addr 0x2be5cec size 0x9c virtual true final false
 void CrossFadeAlpha(float_t alpha, float_t duration, bool ignoreTimeScale) ;

/// @brief Method RegisterDirtyLayoutCallback addr 0x2be5d88 size 0x80 virtual false final false
 void RegisterDirtyLayoutCallback(UnityEngine::Events::UnityAction action) ;

/// @brief Method UnregisterDirtyLayoutCallback addr 0x2be5e08 size 0x80 virtual false final false
 void UnregisterDirtyLayoutCallback(UnityEngine::Events::UnityAction action) ;

/// @brief Method RegisterDirtyVerticesCallback addr 0x2be5e88 size 0x80 virtual false final false
 void RegisterDirtyVerticesCallback(UnityEngine::Events::UnityAction action) ;

/// @brief Method UnregisterDirtyVerticesCallback addr 0x2be5f08 size 0x80 virtual false final false
 void UnregisterDirtyVerticesCallback(UnityEngine::Events::UnityAction action) ;

/// @brief Method RegisterDirtyMaterialCallback addr 0x2be5f88 size 0x80 virtual false final false
 void RegisterDirtyMaterialCallback(UnityEngine::Events::UnityAction action) ;

/// @brief Method UnregisterDirtyMaterialCallback addr 0x2be6008 size 0x80 virtual false final false
 void UnregisterDirtyMaterialCallback(UnityEngine::Events::UnityAction action) ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform addr 0x2be6118 size 0x8 virtual true final true
 UnityEngine::Transform UnityEngine_UI_ICanvasElement_get_transform() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::Graphic);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Graphic, "UnityEngine.UI", "Graphic");
