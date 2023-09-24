#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
class RectTransform;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Vector2;
}
namespace TMPro {
struct TextContainerAnchors;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace TMPro {
class TextContainer;
}
// Type: TMPro::TextContainer
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12248))
// CS Name: TMPro.TextContainer
class CORDL_TYPE TextContainer : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~TextContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextContainer", modifiers: " const&", def_value: None }]
constexpr TextContainer(TextContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextContainer", modifiers: "&&", def_value: None }]
constexpr TextContainer(TextContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextContainer(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr TextContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextContainer& operator=(TextContainer&& o) noexcept = default;
  constexpr TextContainer& operator=(TextContainer const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_hasChanged, put=__set_m_hasChanged))  m_hasChanged;

constexpr void __set_m_hasChanged(bool value) ;

constexpr bool __get_m_hasChanged() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_pivot, put=__set_m_pivot))  m_pivot;

constexpr void __set_m_pivot(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_pivot() const;

 TMPro::TextContainerAnchors __declspec(property(get=__get_m_anchorPosition, put=__set_m_anchorPosition))  m_anchorPosition;

constexpr void __set_m_anchorPosition(TMPro::TextContainerAnchors value) ;

constexpr TMPro::TextContainerAnchors __get_m_anchorPosition() const;

 UnityEngine::Rect __declspec(property(get=__get_m_rect, put=__set_m_rect))  m_rect;

constexpr void __set_m_rect(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_m_rect() const;

 bool __declspec(property(get=__get_m_isDefaultWidth, put=__set_m_isDefaultWidth))  m_isDefaultWidth;

constexpr void __set_m_isDefaultWidth(bool value) ;

constexpr bool __get_m_isDefaultWidth() const;

 bool __declspec(property(get=__get_m_isDefaultHeight, put=__set_m_isDefaultHeight))  m_isDefaultHeight;

constexpr void __set_m_isDefaultHeight(bool value) ;

constexpr bool __get_m_isDefaultHeight() const;

 bool __declspec(property(get=__get_m_isAutoFitting, put=__set_m_isAutoFitting))  m_isAutoFitting;

constexpr void __set_m_isAutoFitting(bool value) ;

constexpr bool __get_m_isAutoFitting() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_corners, put=__set_m_corners))  m_corners;

constexpr void __set_m_corners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_corners() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_worldCorners, put=__set_m_worldCorners))  m_worldCorners;

constexpr void __set_m_worldCorners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_worldCorners() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_margins, put=__set_m_margins))  m_margins;

constexpr void __set_m_margins(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_margins() const;

 UnityEngine::RectTransform __declspec(property(get=__get_m_rectTransform, put=__set_m_rectTransform))  m_rectTransform;

constexpr void __set_m_rectTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get_m_rectTransform() const;

static UnityEngine::Vector2 __declspec(property(get=__get_k_defaultSize, put=__set_k_defaultSize))  k_defaultSize;

static void __set_k_defaultSize(UnityEngine::Vector2 value) ;

static UnityEngine::Vector2 __get_k_defaultSize() ;

 TMPro::TextMeshPro __declspec(property(get=__get_m_textMeshPro, put=__set_m_textMeshPro))  m_textMeshPro;

constexpr void __set_m_textMeshPro(TMPro::TextMeshPro value) ;

constexpr TMPro::TextMeshPro __get_m_textMeshPro() const;


// Properties

 bool __declspec(property(get=get_hasChanged, put=set_hasChanged))  hasChanged;

 UnityEngine::Vector2 __declspec(property(get=get_pivot, put=set_pivot))  pivot;

 TMPro::TextContainerAnchors __declspec(property(get=get_anchorPosition, put=set_anchorPosition))  anchorPosition;

 UnityEngine::Rect __declspec(property(get=get_rect, put=set_rect))  rect;

 UnityEngine::Vector2 __declspec(property(get=get_size, put=set_size))  size;

 float_t __declspec(property(get=get_width, put=set_width))  width;

 float_t __declspec(property(get=get_height, put=set_height))  height;

 bool __declspec(property(get=get_isDefaultWidth))  isDefaultWidth;

 bool __declspec(property(get=get_isDefaultHeight))  isDefaultHeight;

 bool __declspec(property(get=get_isAutoFitting, put=set_isAutoFitting))  isAutoFitting;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=get_corners))  corners;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=get_worldCorners))  worldCorners;

 UnityEngine::Vector4 __declspec(property(get=get_margins, put=set_margins))  margins;

 UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;

 TMPro::TextMeshPro __declspec(property(get=get_textMeshPro))  textMeshPro;


// Methods

/// @brief Method get_hasChanged addr 0x2a588bc size 0x8 virtual false final false
 bool get_hasChanged() ;

/// @brief Method set_hasChanged addr 0x2a588c4 size 0xc virtual false final false
 void set_hasChanged(bool value) ;

/// @brief Method get_pivot addr 0x2a588d0 size 0x8 virtual false final false
 UnityEngine::Vector2 get_pivot() ;

/// @brief Method set_pivot addr 0x2a588d8 size 0x58 virtual false final false
 void set_pivot(UnityEngine::Vector2 value) ;

/// @brief Method get_anchorPosition addr 0x2a58b70 size 0x8 virtual false final false
 TMPro::TextContainerAnchors get_anchorPosition() ;

/// @brief Method set_anchorPosition addr 0x2a58b78 size 0x3c virtual false final false
 void set_anchorPosition(TMPro::TextContainerAnchors value) ;

/// @brief Method get_rect addr 0x2a58c2c size 0xc virtual false final false
 UnityEngine::Rect get_rect() ;

/// @brief Method set_rect addr 0x2a58c38 size 0x7c virtual false final false
 void set_rect(UnityEngine::Rect value) ;

/// @brief Method get_size addr 0x2a58cb4 size 0x3c virtual false final false
 UnityEngine::Vector2 get_size() ;

/// @brief Method set_size addr 0x2a58cf0 size 0xa8 virtual false final false
 void set_size(UnityEngine::Vector2 value) ;

/// @brief Method get_width addr 0x2a58e18 size 0xc virtual false final false
 float_t get_width() ;

/// @brief Method set_width addr 0x2a58e24 size 0x48 virtual false final false
 void set_width(float_t value) ;

/// @brief Method get_height addr 0x2a58e6c size 0xc virtual false final false
 float_t get_height() ;

/// @brief Method set_height addr 0x2a58e78 size 0x44 virtual false final false
 void set_height(float_t value) ;

/// @brief Method get_isDefaultWidth addr 0x2a58ebc size 0x8 virtual false final false
 bool get_isDefaultWidth() ;

/// @brief Method get_isDefaultHeight addr 0x2a58ec4 size 0x8 virtual false final false
 bool get_isDefaultHeight() ;

/// @brief Method get_isAutoFitting addr 0x2a58ecc size 0x8 virtual false final false
 bool get_isAutoFitting() ;

/// @brief Method set_isAutoFitting addr 0x2a58ed4 size 0xc virtual false final false
 void set_isAutoFitting(bool value) ;

/// @brief Method get_corners addr 0x2a58ee0 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Vector3> get_corners() ;

/// @brief Method get_worldCorners addr 0x2a58ee8 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Vector3> get_worldCorners() ;

/// @brief Method get_margins addr 0x2a58ef0 size 0xc virtual false final false
 UnityEngine::Vector4 get_margins() ;

/// @brief Method set_margins addr 0x2a58efc size 0x5c virtual false final false
 void set_margins(UnityEngine::Vector4 value) ;

/// @brief Method get_rectTransform addr 0x2a58f58 size 0x94 virtual false final false
 UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method get_textMeshPro addr 0x2a58fec size 0x94 virtual false final false
 TMPro::TextMeshPro get_textMeshPro() ;

/// @brief Method Awake addr 0x2a59080 size 0xc8 virtual true final false
 void Awake() ;

/// @brief Method OnEnable addr 0x2a59148 size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2a5914c size 0x4 virtual true final false
 void OnDisable() ;

/// @brief Method OnContainerChanged addr 0x2a58a20 size 0x150 virtual false final false
 void OnContainerChanged() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2a59328 size 0x160 virtual true final false
 void OnRectTransformDimensionsChange() ;

/// @brief Method SetRect addr 0x2a58d98 size 0x80 virtual false final false
 void SetRect(UnityEngine::Vector2 size) ;

/// @brief Method UpdateCorners addr 0x2a59150 size 0x1d8 virtual false final false
 void UpdateCorners() ;

/// @brief Method GetPivot addr 0x2a58bb4 size 0x78 virtual false final false
 UnityEngine::Vector2 GetPivot(TMPro::TextContainerAnchors anchor) ;

/// @brief Method GetAnchorPosition addr 0x2a58930 size 0xf0 virtual false final false
 TMPro::TextContainerAnchors GetAnchorPosition(UnityEngine::Vector2 pivot) ;

static TMPro::TextContainer New_ctor() ;

/// @brief Method .ctor addr 0x2a59488 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TextContainer);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextContainer, "TMPro", "TextContainer");
