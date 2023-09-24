#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLeaderboardPanelItem;
}
// Type: ::MultiplayerLeaderboardPanelItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5138))
// CS Name: MultiplayerLeaderboardPanelItem
class CORDL_TYPE MultiplayerLeaderboardPanelItem : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MultiplayerLeaderboardPanelItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelItem", modifiers: " const&", def_value: None }]
constexpr MultiplayerLeaderboardPanelItem(MultiplayerLeaderboardPanelItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelItem", modifiers: "&&", def_value: None }]
constexpr MultiplayerLeaderboardPanelItem(MultiplayerLeaderboardPanelItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLeaderboardPanelItem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLeaderboardPanelItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLeaderboardPanelItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLeaderboardPanelItem& operator=(MultiplayerLeaderboardPanelItem&& o) noexcept = default;
  constexpr MultiplayerLeaderboardPanelItem& operator=(MultiplayerLeaderboardPanelItem const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__playerNameText, put=__set__playerNameText))  _playerNameText;

constexpr void __set__playerNameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__playerNameText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__scoreText, put=__set__scoreText))  _scoreText;

constexpr void __set__scoreText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__scoreText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__positionText, put=__set__positionText))  _positionText;

constexpr void __set__positionText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__positionText() const;

 UnityEngine::UI::Image __declspec(property(get=__get__backgroundImage, put=__set__backgroundImage))  _backgroundImage;

constexpr void __set__backgroundImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__backgroundImage() const;

 UnityEngine::Color __declspec(property(get=__get__normalPlayerTextColor, put=__set__normalPlayerTextColor))  _normalPlayerTextColor;

constexpr void __set__normalPlayerTextColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__normalPlayerTextColor() const;

 UnityEngine::Color __declspec(property(get=__get__failedPlayerTextColor, put=__set__failedPlayerTextColor))  _failedPlayerTextColor;

constexpr void __set__failedPlayerTextColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__failedPlayerTextColor() const;

 UnityEngine::Color __declspec(property(get=__get__firstPlayerBackgroundColor, put=__set__firstPlayerBackgroundColor))  _firstPlayerBackgroundColor;

constexpr void __set__firstPlayerBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__firstPlayerBackgroundColor() const;

 UnityEngine::Color __declspec(property(get=__get__lastPlayerBackgroundColor, put=__set__lastPlayerBackgroundColor))  _lastPlayerBackgroundColor;

constexpr void __set__lastPlayerBackgroundColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__lastPlayerBackgroundColor() const;

 int32_t __declspec(property(get=__get__prevPosition, put=__set__prevPosition))  _prevPosition;

constexpr void __set__prevPosition(int32_t value) ;

constexpr int32_t __get__prevPosition() const;

 ::StringW __declspec(property(get=__get__prevPlayerName, put=__set__prevPlayerName))  _prevPlayerName;

constexpr void __set__prevPlayerName(::StringW value) ;

constexpr ::StringW __get__prevPlayerName() const;

 int32_t __declspec(property(get=__get__prevScore, put=__set__prevScore))  _prevScore;

constexpr void __set__prevScore(int32_t value) ;

constexpr int32_t __get__prevScore() const;

 bool __declspec(property(get=__get__prevFailed, put=__set__prevFailed))  _prevFailed;

constexpr void __set__prevFailed(bool value) ;

constexpr bool __get__prevFailed() const;

 int32_t __declspec(property(get=__get__prevNumberOfPlayers, put=__set__prevNumberOfPlayers))  _prevNumberOfPlayers;

constexpr void __set__prevNumberOfPlayers(int32_t value) ;

constexpr int32_t __get__prevNumberOfPlayers() const;


// Properties

 bool __declspec(property(put=set_hide))  hide;


// Methods

/// @brief Method SetData addr 0x22766e4 size 0x2d0 virtual false final false
 void SetData(int32_t position, ::StringW playerName, int32_t score, bool failed, int32_t numberOfPlayers) ;

/// @brief Method set_hide addr 0x2276470 size 0x2c virtual false final false
 void set_hide(bool value) ;

static GlobalNamespace::MultiplayerLeaderboardPanelItem New_ctor() ;

/// @brief Method .ctor addr 0x22769bc size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLeaderboardPanelItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLeaderboardPanelItem, "", "MultiplayerLeaderboardPanelItem");
