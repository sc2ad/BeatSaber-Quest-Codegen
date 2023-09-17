#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class CanvasGroup;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class MultiplayerResultsAvatarController;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsTableCell;
}
// Type: ::MultiplayerResultsTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13715))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5885))
// CS Name: MultiplayerResultsTableCell
class CORDL_TYPE MultiplayerResultsTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xf0};

virtual ~MultiplayerResultsTableCell() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsTableCell", modifiers: " const&", def_value: None }]
constexpr MultiplayerResultsTableCell(MultiplayerResultsTableCell const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsTableCell", modifiers: "&&", def_value: None }]
constexpr MultiplayerResultsTableCell(MultiplayerResultsTableCell&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerResultsTableCell(void* ptr) noexcept : ::HMUI::TableCell(ptr) {
}


  constexpr MultiplayerResultsTableCell& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerResultsTableCell& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerResultsTableCell& operator=(MultiplayerResultsTableCell&& o) noexcept = default;
  constexpr MultiplayerResultsTableCell& operator=(MultiplayerResultsTableCell const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__positionText, put=__set__positionText))  _positionText;

constexpr void __set__positionText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__positionText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__nameText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__scoreText, put=__set__scoreText))  _scoreText;

constexpr void __set__scoreText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__scoreText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__rankText, put=__set__rankText))  _rankText;

constexpr void __set__rankText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__rankText() const;

 ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=__get__lights, put=__set__lights))  _lights;

constexpr void __set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> value) ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight> __get__lights() const;

 ::UnityEngine::UI::Image __declspec(property(get=__get__backgroundImage, put=__set__backgroundImage))  _backgroundImage;

constexpr void __set__backgroundImage(::UnityEngine::UI::Image value) ;

constexpr ::UnityEngine::UI::Image __get__backgroundImage() const;

 ::UnityEngine::CanvasGroup __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup))  _canvasGroup;

constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup value) ;

constexpr ::UnityEngine::CanvasGroup __get__canvasGroup() const;

 ::GlobalNamespace::MultiplayerResultsAvatarController __declspec(property(get=__get__multiplayerResultsAvatarController, put=__set__multiplayerResultsAvatarController))  _multiplayerResultsAvatarController;

constexpr void __set__multiplayerResultsAvatarController(::GlobalNamespace::MultiplayerResultsAvatarController value) ;

constexpr ::GlobalNamespace::MultiplayerResultsAvatarController __get__multiplayerResultsAvatarController() const;

 float_t __declspec(property(get=__get__avatarScale, put=__set__avatarScale))  _avatarScale;

constexpr void __set__avatarScale(float_t value) ;

constexpr float_t __get__avatarScale() const;

 ::UnityEngine::Color __declspec(property(get=__get__normalSecondPlayerColor, put=__set__normalSecondPlayerColor))  _normalSecondPlayerColor;

constexpr void __set__normalSecondPlayerColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__normalSecondPlayerColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__normalLastPlayerColor, put=__set__normalLastPlayerColor))  _normalLastPlayerColor;

constexpr void __set__normalLastPlayerColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__normalLastPlayerColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__localPlayerColor, put=__set__localPlayerColor))  _localPlayerColor;

constexpr void __set__localPlayerColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__localPlayerColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__winnerColor, put=__set__winnerColor))  _winnerColor;

constexpr void __set__winnerColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__winnerColor() const;

 ::UnityEngine::Color __declspec(property(get=__get__lightColor, put=__set__lightColor))  _lightColor;

constexpr void __set__lightColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__lightColor() const;


// Properties

 float_t __declspec(property(put=set_alpha))  alpha;


// Methods

/// @brief Method set_alpha addr 0x218c904 size 0xa0 virtual false final false
 void set_alpha(float_t value) ;

/// @brief Method SetData addr 0x218c9a4 size 0x3c4 virtual false final false
 void SetData(::GlobalNamespace::IConnectedPlayer connectedPlayer, int32_t position, ::StringW playerName, ::GlobalNamespace::LevelCompletionResults levelCompletionResults, bool isLocalPlayer, int32_t numberOfPlayers) ;

// Ctor Parameters []
explicit MultiplayerResultsTableCell() ;

/// @brief Method .ctor addr 0x218cd68 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsTableCell, "", "MultiplayerResultsTableCell");
