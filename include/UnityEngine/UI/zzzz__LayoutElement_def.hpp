#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UI {
class ILayoutIgnorer;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutElement;
}
// Type: UnityEngine.UI::LayoutElement
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13028))
// CS Name: UnityEngine.UI.LayoutElement
class CORDL_TYPE LayoutElement : public UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UI::ILayoutElement
constexpr operator  UnityEngine::UI::ILayoutElement() const noexcept;

/// @brief Convert operator to UnityEngine::UI::ILayoutIgnorer
constexpr operator  UnityEngine::UI::ILayoutIgnorer() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~LayoutElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "LayoutElement", modifiers: " const&", def_value: None }]
constexpr LayoutElement(LayoutElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LayoutElement", modifiers: "&&", def_value: None }]
constexpr LayoutElement(LayoutElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LayoutElement(void* ptr) noexcept : UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr LayoutElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LayoutElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LayoutElement& operator=(LayoutElement&& o) noexcept = default;
  constexpr LayoutElement& operator=(LayoutElement const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_IgnoreLayout, put=__set_m_IgnoreLayout))  m_IgnoreLayout;

constexpr void __set_m_IgnoreLayout(bool value) ;

constexpr bool __get_m_IgnoreLayout() const;

 float_t __declspec(property(get=__get_m_MinWidth, put=__set_m_MinWidth))  m_MinWidth;

constexpr void __set_m_MinWidth(float_t value) ;

constexpr float_t __get_m_MinWidth() const;

 float_t __declspec(property(get=__get_m_MinHeight, put=__set_m_MinHeight))  m_MinHeight;

constexpr void __set_m_MinHeight(float_t value) ;

constexpr float_t __get_m_MinHeight() const;

 float_t __declspec(property(get=__get_m_PreferredWidth, put=__set_m_PreferredWidth))  m_PreferredWidth;

constexpr void __set_m_PreferredWidth(float_t value) ;

constexpr float_t __get_m_PreferredWidth() const;

 float_t __declspec(property(get=__get_m_PreferredHeight, put=__set_m_PreferredHeight))  m_PreferredHeight;

constexpr void __set_m_PreferredHeight(float_t value) ;

constexpr float_t __get_m_PreferredHeight() const;

 float_t __declspec(property(get=__get_m_FlexibleWidth, put=__set_m_FlexibleWidth))  m_FlexibleWidth;

constexpr void __set_m_FlexibleWidth(float_t value) ;

constexpr float_t __get_m_FlexibleWidth() const;

 float_t __declspec(property(get=__get_m_FlexibleHeight, put=__set_m_FlexibleHeight))  m_FlexibleHeight;

constexpr void __set_m_FlexibleHeight(float_t value) ;

constexpr float_t __get_m_FlexibleHeight() const;

 int32_t __declspec(property(get=__get_m_LayoutPriority, put=__set_m_LayoutPriority))  m_LayoutPriority;

constexpr void __set_m_LayoutPriority(int32_t value) ;

constexpr int32_t __get_m_LayoutPriority() const;


// Properties

 bool __declspec(property(get=get_ignoreLayout, put=set_ignoreLayout))  ignoreLayout;

 float_t __declspec(property(get=get_minWidth, put=set_minWidth))  minWidth;

 float_t __declspec(property(get=get_minHeight, put=set_minHeight))  minHeight;

 float_t __declspec(property(get=get_preferredWidth, put=set_preferredWidth))  preferredWidth;

 float_t __declspec(property(get=get_preferredHeight, put=set_preferredHeight))  preferredHeight;

 float_t __declspec(property(get=get_flexibleWidth, put=set_flexibleWidth))  flexibleWidth;

 float_t __declspec(property(get=get_flexibleHeight, put=set_flexibleHeight))  flexibleHeight;

 int32_t __declspec(property(get=get_layoutPriority, put=set_layoutPriority))  layoutPriority;


// Methods

/// @brief Method get_ignoreLayout addr 0x2bfe21c size 0x8 virtual true final false
 bool get_ignoreLayout() ;

/// @brief Method set_ignoreLayout addr 0x2bfe224 size 0x74 virtual true final false
 void set_ignoreLayout(bool value) ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2bfe350 size 0x4 virtual true final false
 void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2bfe354 size 0x4 virtual true final false
 void CalculateLayoutInputVertical() ;

/// @brief Method get_minWidth addr 0x2bfe358 size 0x8 virtual true final false
 float_t get_minWidth() ;

/// @brief Method set_minWidth addr 0x2bfe360 size 0x74 virtual true final false
 void set_minWidth(float_t value) ;

/// @brief Method get_minHeight addr 0x2bfe3d4 size 0x8 virtual true final false
 float_t get_minHeight() ;

/// @brief Method set_minHeight addr 0x2bfe3dc size 0x74 virtual true final false
 void set_minHeight(float_t value) ;

/// @brief Method get_preferredWidth addr 0x2bfe450 size 0x8 virtual true final false
 float_t get_preferredWidth() ;

/// @brief Method set_preferredWidth addr 0x2bfe458 size 0x74 virtual true final false
 void set_preferredWidth(float_t value) ;

/// @brief Method get_preferredHeight addr 0x2bfe4cc size 0x8 virtual true final false
 float_t get_preferredHeight() ;

/// @brief Method set_preferredHeight addr 0x2bfe4d4 size 0x74 virtual true final false
 void set_preferredHeight(float_t value) ;

/// @brief Method get_flexibleWidth addr 0x2bfe548 size 0x8 virtual true final false
 float_t get_flexibleWidth() ;

/// @brief Method set_flexibleWidth addr 0x2bfe550 size 0x74 virtual true final false
 void set_flexibleWidth(float_t value) ;

/// @brief Method get_flexibleHeight addr 0x2bfe5c4 size 0x8 virtual true final false
 float_t get_flexibleHeight() ;

/// @brief Method set_flexibleHeight addr 0x2bfe5cc size 0x74 virtual true final false
 void set_flexibleHeight(float_t value) ;

/// @brief Method get_layoutPriority addr 0x2bfe640 size 0x8 virtual true final false
 int32_t get_layoutPriority() ;

/// @brief Method set_layoutPriority addr 0x2bfe648 size 0x74 virtual true final false
 void set_layoutPriority(int32_t value) ;

static UnityEngine::UI::LayoutElement New_ctor() ;

/// @brief Method .ctor addr 0x2bfe6bc size 0x24 virtual false final false
 void _ctor() ;

/// @brief Method OnEnable addr 0x2bfe6e0 size 0x1c virtual true final false
 void OnEnable() ;

/// @brief Method OnTransformParentChanged addr 0x2bfe6fc size 0x4 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method OnDisable addr 0x2bfe700 size 0x1c virtual true final false
 void OnDisable() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2bfe71c size 0x4 virtual true final false
 void OnDidApplyAnimationProperties() ;

/// @brief Method OnBeforeTransformParentChanged addr 0x2bfe720 size 0x4 virtual true final false
 void OnBeforeTransformParentChanged() ;

/// @brief Method SetDirty addr 0x2bfe298 size 0xb8 virtual false final false
 void SetDirty() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::LayoutElement);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutElement, "UnityEngine.UI", "LayoutElement");
