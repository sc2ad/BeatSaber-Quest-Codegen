#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class LeaderboardTableCell;
}
// Type: ::LeaderboardTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5523))
// CS Name: LeaderboardTableCell
class CORDL_TYPE LeaderboardTableCell : public HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~LeaderboardTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableCell", modifiers: " const&", def_value: None }]
constexpr LeaderboardTableCell(LeaderboardTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaderboardTableCell", modifiers: "&&", def_value: None }]
constexpr LeaderboardTableCell(LeaderboardTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaderboardTableCell(void* ptr) noexcept : HMUI::TableCell(ptr) {
}


  constexpr LeaderboardTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaderboardTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaderboardTableCell& operator=(LeaderboardTableCell&& o) noexcept = default;
  constexpr LeaderboardTableCell& operator=(LeaderboardTableCell const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__rankText, put=__set__rankText))  _rankText;

constexpr void __set__rankText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__rankText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__playerNameText, put=__set__playerNameText))  _playerNameText;

constexpr void __set__playerNameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__playerNameText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__scoreText, put=__set__scoreText))  _scoreText;

constexpr void __set__scoreText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__scoreText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__fullComboText, put=__set__fullComboText))  _fullComboText;

constexpr void __set__fullComboText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__fullComboText() const;

 UnityEngine::Color __declspec(property(get=__get__normalColor, put=__set__normalColor))  _normalColor;

constexpr void __set__normalColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__normalColor() const;

 UnityEngine::Color __declspec(property(get=__get__specialScoreColor, put=__set__specialScoreColor))  _specialScoreColor;

constexpr void __set__specialScoreColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__specialScoreColor() const;

 UnityEngine::UI::Image __declspec(property(get=__get__separatorImage, put=__set__separatorImage))  _separatorImage;

constexpr void __set__separatorImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__separatorImage() const;


// Properties

 int32_t __declspec(property(put=set_rank))  rank;

 ::StringW __declspec(property(put=set_playerName))  playerName;

 int32_t __declspec(property(put=set_score))  score;

 bool __declspec(property(put=set_showSeparator))  showSeparator;

 bool __declspec(property(put=set_showFullCombo))  showFullCombo;

 bool __declspec(property(put=set_specialScore))  specialScore;


// Methods

/// @brief Method set_rank addr 0x21250e0 size 0x48 virtual false final false
 void set_rank(int32_t value) ;

/// @brief Method set_playerName addr 0x2125128 size 0x24 virtual false final false
 void set_playerName(::StringW value) ;

/// @brief Method set_score addr 0x212514c size 0xa0 virtual false final false
 void set_score(int32_t value) ;

/// @brief Method set_showSeparator addr 0x21251ec size 0x20 virtual false final false
 void set_showSeparator(bool value) ;

/// @brief Method set_showFullCombo addr 0x212520c size 0x20 virtual false final false
 void set_showFullCombo(bool value) ;

/// @brief Method set_specialScore addr 0x212522c size 0xf8 virtual false final false
 void set_specialScore(bool value) ;

// Ctor Parameters []
explicit LeaderboardTableCell() ;

/// @brief Method .ctor addr 0x2125324 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::LeaderboardTableCell);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardTableCell, "", "LeaderboardTableCell");
