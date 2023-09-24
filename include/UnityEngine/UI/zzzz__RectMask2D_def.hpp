#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine::UI {
class RectangularVertexClipper;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::UI {
class IClippable;
}
namespace UnityEngine::UI {
class IClipper;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
class ICanvasRaycastFilter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class MaskableGraphic;
}
// Forward declare root types
namespace UnityEngine::UI {
class RectMask2D;
}
// Type: UnityEngine.UI::RectMask2D
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13046))
// CS Name: UnityEngine.UI.RectMask2D
class CORDL_TYPE RectMask2D : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UI::IClipper
constexpr operator  UnityEngine::UI::IClipper() const noexcept;

/// @brief Convert operator to UnityEngine::ICanvasRaycastFilter
constexpr operator  UnityEngine::ICanvasRaycastFilter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~RectMask2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "RectMask2D", modifiers: " const&", def_value: None }]
constexpr RectMask2D(RectMask2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RectMask2D", modifiers: "&&", def_value: None }]
constexpr RectMask2D(RectMask2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RectMask2D(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr RectMask2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RectMask2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RectMask2D& operator=(RectMask2D&& o) noexcept = default;
  constexpr RectMask2D& operator=(RectMask2D const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::RectangularVertexClipper __declspec(property(get=__get_m_VertexClipper, put=__set_m_VertexClipper))  m_VertexClipper;

constexpr void __set_m_VertexClipper(UnityEngine::UI::RectangularVertexClipper value) ;

constexpr UnityEngine::UI::RectangularVertexClipper __get_m_VertexClipper() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_RectTransform, put=__set_m_RectTransform))  m_RectTransform;

constexpr void __set_m_RectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_RectTransform() const;

 System::Collections::Generic::HashSet_1<UnityEngine::UI::MaskableGraphic> __declspec(property(get=__get_m_MaskableTargets, put=__set_m_MaskableTargets))  m_MaskableTargets;

constexpr void __set_m_MaskableTargets(System::Collections::Generic::HashSet_1<UnityEngine::UI::MaskableGraphic> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::UI::MaskableGraphic> __get_m_MaskableTargets() const;

 System::Collections::Generic::HashSet_1<UnityEngine::UI::IClippable> __declspec(property(get=__get_m_ClipTargets, put=__set_m_ClipTargets))  m_ClipTargets;

constexpr void __set_m_ClipTargets(System::Collections::Generic::HashSet_1<UnityEngine::UI::IClippable> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::UI::IClippable> __get_m_ClipTargets() const;

 bool __declspec(property(get=__get_m_ShouldRecalculateClipRects, put=__set_m_ShouldRecalculateClipRects))  m_ShouldRecalculateClipRects;

constexpr void __set_m_ShouldRecalculateClipRects(bool value) ;

constexpr bool __get_m_ShouldRecalculateClipRects() const;

 System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D> __declspec(property(get=__get_m_Clippers, put=__set_m_Clippers))  m_Clippers;

constexpr void __set_m_Clippers(System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D> __get_m_Clippers() const;

 UnityEngine::Rect __declspec(property(get=__get_m_LastClipRectCanvasSpace, put=__set_m_LastClipRectCanvasSpace))  m_LastClipRectCanvasSpace;

constexpr void __set_m_LastClipRectCanvasSpace(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_m_LastClipRectCanvasSpace() const;

 bool __declspec(property(get=__get_m_ForceClip, put=__set_m_ForceClip))  m_ForceClip;

constexpr void __set_m_ForceClip(bool value) ;

constexpr bool __get_m_ForceClip() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_Padding, put=__set_m_Padding))  m_Padding;

constexpr void __set_m_Padding(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_Padding() const;

 UnityEngine::Vector2Int __declspec(property(get=__get_m_Softness, put=__set_m_Softness))  m_Softness;

constexpr void __set_m_Softness(UnityEngine::Vector2Int value) ;

constexpr UnityEngine::Vector2Int __get_m_Softness() const;

 UnityEngine::Canvas __declspec(property(get=__get_m_Canvas, put=__set_m_Canvas))  m_Canvas;

constexpr void __set_m_Canvas(UnityEngine::Canvas value) ;

constexpr UnityEngine::Canvas __get_m_Canvas() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_Corners, put=__set_m_Corners))  m_Corners;

constexpr void __set_m_Corners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_Corners() const;


// Properties

 UnityEngine::Vector4 __declspec(property(get=get_padding, put=set_padding))  padding;

 UnityEngine::Vector2Int __declspec(property(get=get_softness, put=set_softness))  softness;

 UnityEngine::Canvas __declspec(property(get=get_Canvas))  Canvas;

 UnityEngine::Rect __declspec(property(get=get_canvasRect))  canvasRect;

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;

 UnityEngine::Rect __declspec(property(get=get_rootCanvasRect))  rootCanvasRect;


// Methods

/// @brief Method get_padding addr 0x2c066ec size 0xc virtual false final false
 UnityEngine::Vector4 get_padding() ;

/// @brief Method set_padding addr 0x2c066f8 size 0x10 virtual false final false
 void set_padding(UnityEngine::Vector4 value) ;

/// @brief Method get_softness addr 0x2c06708 size 0x8 virtual false final false
 UnityEngine::Vector2Int get_softness() ;

/// @brief Method set_softness addr 0x2c06710 size 0x1c virtual false final false
 void set_softness(UnityEngine::Vector2Int value) ;

/// @brief Method get_Canvas addr 0x2c0672c size 0x160 virtual false final false
 UnityEngine::Canvas get_Canvas() ;

/// @brief Method get_canvasRect addr 0x2c0688c size 0x44 virtual false final false
 UnityEngine::Rect get_canvasRect() ;

/// @brief Method get_rectTransform addr 0x2c068d0 size 0x58 virtual false final false
 UnityEngine::RectTransform get_rectTransform() ;

static UnityEngine::UI::RectMask2D New_ctor() ;

/// @brief Method .ctor addr 0x2c06928 size 0x158 virtual false final false
 void _ctor() ;

/// @brief Method OnEnable addr 0x2c06a80 size 0x34 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c06ab4 size 0xd0 virtual true final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2c06b84 size 0x20 virtual true final false
 void OnDestroy() ;

/// @brief Method IsRaycastLocationValid addr 0x2c06ba4 size 0xdc virtual true final false
 bool IsRaycastLocationValid(UnityEngine::Vector2 sp, UnityEngine::Camera eventCamera) ;

/// @brief Method get_rootCanvasRect addr 0x2c06c80 size 0x11c virtual false final false
 UnityEngine::Rect get_rootCanvasRect() ;

/// @brief Method PerformClipping addr 0x2c06d9c size 0x724 virtual true final false
 void PerformClipping() ;

/// @brief Method UpdateClipSoftness addr 0x2c074c0 size 0x2f4 virtual true final false
 void UpdateClipSoftness() ;

/// @brief Method AddClippable addr 0x2c077b4 size 0x114 virtual false final false
 void AddClippable(UnityEngine::UI::IClippable clippable) ;

/// @brief Method RemoveClippable addr 0x2c078c8 size 0x1a0 virtual false final false
 void RemoveClippable(UnityEngine::UI::IClippable clippable) ;

/// @brief Method OnTransformParentChanged addr 0x2c07a68 size 0x24 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method OnCanvasHierarchyChanged addr 0x2c07a8c size 0x24 virtual true final false
 void OnCanvasHierarchyChanged() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::RectMask2D);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::RectMask2D, "UnityEngine.UI", "RectMask2D");
