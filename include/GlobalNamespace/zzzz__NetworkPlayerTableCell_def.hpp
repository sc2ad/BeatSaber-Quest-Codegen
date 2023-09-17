#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct Color;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Image;
}
namespace HMUI {
struct ____HMUI__SelectableCell__TransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerTableCell;
}
// Type: ::NetworkPlayerTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5676))
// CS Name: NetworkPlayerTableCell
class CORDL_TYPE NetworkPlayerTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~NetworkPlayerTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerTableCell", modifiers: " const&", def_value: None }]
constexpr NetworkPlayerTableCell(NetworkPlayerTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerTableCell", modifiers: "&&", def_value: None }]
constexpr NetworkPlayerTableCell(NetworkPlayerTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetworkPlayerTableCell(void* ptr) noexcept : ::HMUI::TableCell(ptr) {
}


  constexpr NetworkPlayerTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetworkPlayerTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetworkPlayerTableCell& operator=(NetworkPlayerTableCell&& o) noexcept = default;
  constexpr NetworkPlayerTableCell& operator=(NetworkPlayerTableCell const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__playerNameText, put=__set__playerNameText))  _playerNameText;

constexpr void __set__playerNameText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__playerNameText() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__separator, put=__set__separator))  _separator;

constexpr void __set__separator(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__separator() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__privateIcon, put=__set__privateIcon))  _privateIcon;

constexpr void __set__privateIcon(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__privateIcon() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__spectateIcon, put=__set__spectateIcon))  _spectateIcon;

constexpr void __set__spectateIcon(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__spectateIcon() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__partyLeaderIcon, put=__set__partyLeaderIcon))  _partyLeaderIcon;

constexpr void __set__partyLeaderIcon(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__partyLeaderIcon() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__bgImage, put=__set__bgImage))  _bgImage;

constexpr void __set__bgImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__bgImage() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__highlightImage, put=__set__highlightImage))  _highlightImage;

constexpr void __set__highlightImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__highlightImage() const;

 ::UnityEngine::Color __declspec(property(get=__get__textColorNormal, put=__set__textColorNormal))  _textColorNormal;

constexpr void __set__textColorNormal(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__textColorNormal() const;

 ::UnityEngine::Color __declspec(property(get=__get__textColorMe, put=__set__textColorMe))  _textColorMe;

constexpr void __set__textColorMe(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__textColorMe() const;

 ::UnityEngine::Color __declspec(property(get=__get__textColorSelected, put=__set__textColorSelected))  _textColorSelected;

constexpr void __set__textColorSelected(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__textColorSelected() const;

 bool __declspec(property(get=__get__isMe, put=__set__isMe))  _isMe;

constexpr void __set__isMe(bool value) ;

constexpr bool __get__isMe() const;


// Properties

 bool __declspec(property(get=get_showSeparator, put=set_showSeparator))  showSeparator;

 ::UnityEngine::Color __declspec(property(get=get_activeColor))  activeColor;


// Methods

/// @brief Method get_showSeparator addr 0x2151f5c size 0x1c virtual false final false
 bool get_showSeparator() ;

/// @brief Method set_showSeparator addr 0x2151354 size 0x2c virtual false final false
 void set_showSeparator(bool value) ;

/// @brief Method SetData addr 0x21512b8 size 0x9c virtual false final false
 void SetData(::StringW userName, bool isOpenParty, bool wantsToPlayNextLevel, bool isMyPartyOwner, bool isMe) ;

/// @brief Method SelectionDidChange addr 0x215218c size 0x4 virtual true final false
 void SelectionDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HighlightDidChange addr 0x2152190 size 0x4 virtual true final false
 void HighlightDidChange(::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method RefreshVisuals addr 0x2151f78 size 0x214 virtual false final false
 void RefreshVisuals() ;

/// @brief Method get_activeColor addr 0x2152194 size 0x5c virtual false final false
 ::UnityEngine::Color get_activeColor() ;

// Ctor Parameters []
explicit NetworkPlayerTableCell() ;

/// @brief Method .ctor addr 0x21521f0 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerTableCell, "", "NetworkPlayerTableCell");
