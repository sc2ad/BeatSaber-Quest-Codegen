#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultObjectiveListItem;
}
// Type: ::ResultObjectiveListItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5896))
// CS Name: ResultObjectiveListItem
class CORDL_TYPE ResultObjectiveListItem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ResultObjectiveListItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItem", modifiers: " const&", def_value: None }]
constexpr ResultObjectiveListItem(ResultObjectiveListItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItem", modifiers: "&&", def_value: None }]
constexpr ResultObjectiveListItem(ResultObjectiveListItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResultObjectiveListItem(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ResultObjectiveListItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResultObjectiveListItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResultObjectiveListItem& operator=(ResultObjectiveListItem&& o) noexcept = default;
  constexpr ResultObjectiveListItem& operator=(ResultObjectiveListItem const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UI::Image __declspec(property(get=__get__icon, put=__set__icon))  _icon;

constexpr void __set__icon(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__icon() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__iconGlow, put=__set__iconGlow))  _iconGlow;

constexpr void __set__iconGlow(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__iconGlow() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__titleText, put=__set__titleText))  _titleText;

constexpr void __set__titleText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__titleText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__conditionText, put=__set__conditionText))  _conditionText;

constexpr void __set__conditionText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__conditionText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__valueText, put=__set__valueText))  _valueText;

constexpr void __set__valueText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__valueText() const;


// Properties

 ::UnityEngine::Color __declspec(property(put=set_iconColor))  iconColor;

 ::UnityEngine::Sprite __declspec(property(put=set_icon))  icon;

 ::UnityEngine::Sprite __declspec(property(put=set_iconGlow))  iconGlow;

 ::StringW __declspec(property(put=set_title))  title;

 ::StringW __declspec(property(put=set_conditionText))  conditionText;

 bool __declspec(property(put=set_hideConditionText))  hideConditionText;

 ::StringW __declspec(property(put=set_valueText))  valueText;

 bool __declspec(property(put=set_hideValueText))  hideValueText;


// Methods

/// @brief Method set_iconColor addr 0x218ec70 size 0x24 virtual false final false
 void set_iconColor(::UnityEngine::Color value) ;

/// @brief Method set_icon addr 0x218ec94 size 0x1c virtual false final false
 void set_icon(::UnityEngine::Sprite value) ;

/// @brief Method set_iconGlow addr 0x218ecb0 size 0x1c virtual false final false
 void set_iconGlow(::UnityEngine::Sprite value) ;

/// @brief Method set_title addr 0x218eccc size 0x24 virtual false final false
 void set_title(::StringW value) ;

/// @brief Method set_conditionText addr 0x218ecf0 size 0x24 virtual false final false
 void set_conditionText(::StringW value) ;

/// @brief Method set_hideConditionText addr 0x218ed14 size 0x34 virtual false final false
 void set_hideConditionText(bool value) ;

/// @brief Method set_valueText addr 0x218ed48 size 0x24 virtual false final false
 void set_valueText(::StringW value) ;

/// @brief Method set_hideValueText addr 0x218ed6c size 0x34 virtual false final false
 void set_hideValueText(bool value) ;

// Ctor Parameters []
explicit ResultObjectiveListItem() ;

/// @brief Method .ctor addr 0x218eda0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ResultObjectiveListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultObjectiveListItem, "", "ResultObjectiveListItem");
