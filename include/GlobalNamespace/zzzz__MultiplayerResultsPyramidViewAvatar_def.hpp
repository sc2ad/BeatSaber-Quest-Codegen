#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace Tweening {
class Vector3Tween;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace Tweening {
class FloatTween;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class GameObject;
}
namespace Tweening {
class ColorTween;
}
namespace HMUI {
class ImageView;
}
namespace GlobalNamespace {
class GhostDuplicationEffect;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
struct GlobalNamespace__GhostDuplicationEffect__GhostEffectParams;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace UnityEngine {
struct Color;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory;
}
namespace GlobalNamespace {
class MultiplayerResultsPyramidViewAvatar;
}
// Type: ::MultiplayerResultsPyramidViewAvatar
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5335))
// CS Name: MultiplayerResultsPyramidViewAvatar
class CORDL_TYPE MultiplayerResultsPyramidViewAvatar : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Factory = GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1c8};

virtual ~MultiplayerResultsPyramidViewAvatar() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: " const&", def_value: None }]
constexpr MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsPyramidViewAvatar", modifiers: "&&", def_value: None }]
constexpr MultiplayerResultsPyramidViewAvatar(MultiplayerResultsPyramidViewAvatar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerResultsPyramidViewAvatar(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerResultsPyramidViewAvatar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerResultsPyramidViewAvatar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerResultsPyramidViewAvatar& operator=(MultiplayerResultsPyramidViewAvatar&& o) noexcept = default;
  constexpr MultiplayerResultsPyramidViewAvatar& operator=(MultiplayerResultsPyramidViewAvatar const& o) noexcept = default;
                


// Fields

 UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__badgeDirector, put=__set__badgeDirector))  _badgeDirector;

constexpr void __set__badgeDirector(UnityEngine::Playables::PlayableDirector value) ;

constexpr UnityEngine::Playables::PlayableDirector __get__badgeDirector() const;

 ::StringW __declspec(property(get=__get__ghostFirstTrackName, put=__set__ghostFirstTrackName))  _ghostFirstTrackName;

constexpr void __set__ghostFirstTrackName(::StringW value) ;

constexpr ::StringW __get__ghostFirstTrackName() const;

 ::StringW __declspec(property(get=__get__ghostSecondTrackName, put=__set__ghostSecondTrackName))  _ghostSecondTrackName;

constexpr void __set__ghostSecondTrackName(::StringW value) ;

constexpr ::StringW __get__ghostSecondTrackName() const;

 UnityEngine::Transform __declspec(property(get=__get__standWithAvatarTransform, put=__set__standWithAvatarTransform))  _standWithAvatarTransform;

constexpr void __set__standWithAvatarTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__standWithAvatarTransform() const;

 float_t __declspec(property(get=__get__perPositionRotation, put=__set__perPositionRotation))  _perPositionRotation;

constexpr void __set__perPositionRotation(float_t value) ;

constexpr float_t __get__perPositionRotation() const;

 UnityEngine::Color __declspec(property(get=__get__localPlayerColor, put=__set__localPlayerColor))  _localPlayerColor;

constexpr void __set__localPlayerColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__localPlayerColor() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__positionText, put=__set__positionText))  _positionText;

constexpr void __set__positionText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__positionText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__nameText, put=__set__nameText))  _nameText;

constexpr void __set__nameText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__nameText() const;

 HMUI::ImageView __declspec(property(get=__get__nameBackground, put=__set__nameBackground))  _nameBackground;

constexpr void __set__nameBackground(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__nameBackground() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__badgeCanvas, put=__set__badgeCanvas))  _badgeCanvas;

constexpr void __set__badgeCanvas(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__badgeCanvas() const;

 ::ArrayW<TMPro::TextMeshProUGUI> __declspec(property(get=__get__badgeTitles, put=__set__badgeTitles))  _badgeTitles;

constexpr void __set__badgeTitles(::ArrayW<TMPro::TextMeshProUGUI> value) ;

constexpr ::ArrayW<TMPro::TextMeshProUGUI> __get__badgeTitles() const;

 ::ArrayW<HMUI::ImageView> __declspec(property(get=__get__badgeImages, put=__set__badgeImages))  _badgeImages;

constexpr void __set__badgeImages(::ArrayW<HMUI::ImageView> value) ;

constexpr ::ArrayW<HMUI::ImageView> __get__badgeImages() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__badgeSubtitleText, put=__set__badgeSubtitleText))  _badgeSubtitleText;

constexpr void __set__badgeSubtitleText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__badgeSubtitleText() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__badgeSubtitleCanvas, put=__set__badgeSubtitleCanvas))  _badgeSubtitleCanvas;

constexpr void __set__badgeSubtitleCanvas(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__badgeSubtitleCanvas() const;

 GlobalNamespace::GhostDuplicationEffect __declspec(property(get=__get__ghostDuplicationEffect, put=__set__ghostDuplicationEffect))  _ghostDuplicationEffect;

constexpr void __set__ghostDuplicationEffect(GlobalNamespace::GhostDuplicationEffect value) ;

constexpr GlobalNamespace::GhostDuplicationEffect __get__ghostDuplicationEffect() const;

 GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams __declspec(property(get=__get__ghostAppear, put=__set__ghostAppear))  _ghostAppear;

constexpr void __set__ghostAppear(GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams value) ;

constexpr GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams __get__ghostAppear() const;

 GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams __declspec(property(get=__get__ghostReceive, put=__set__ghostReceive))  _ghostReceive;

constexpr void __set__ghostReceive(GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams value) ;

constexpr GlobalNamespace::GlobalNamespace__GhostDuplicationEffect__GhostEffectParams __get__ghostReceive() const;

 HMUI::ImageView __declspec(property(get=__get__trophyImage, put=__set__trophyImage))  _trophyImage;

constexpr void __set__trophyImage(HMUI::ImageView value) ;

constexpr HMUI::ImageView __get__trophyImage() const;

 UnityEngine::Sprite __declspec(property(get=__get__firstPlaceTrophy, put=__set__firstPlaceTrophy))  _firstPlaceTrophy;

constexpr void __set__firstPlaceTrophy(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__firstPlaceTrophy() const;

 UnityEngine::Sprite __declspec(property(get=__get__secondPlaceTrophy, put=__set__secondPlaceTrophy))  _secondPlaceTrophy;

constexpr void __set__secondPlaceTrophy(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__secondPlaceTrophy() const;

 UnityEngine::Sprite __declspec(property(get=__get__thirdPlaceTrophy, put=__set__thirdPlaceTrophy))  _thirdPlaceTrophy;

constexpr void __set__thirdPlaceTrophy(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__thirdPlaceTrophy() const;

 UnityEngine::Color __declspec(property(get=__get__firstPlaceColor, put=__set__firstPlaceColor))  _firstPlaceColor;

constexpr void __set__firstPlaceColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__firstPlaceColor() const;

 UnityEngine::GameObject __declspec(property(get=__get__personalBestVisual, put=__set__personalBestVisual))  _personalBestVisual;

constexpr void __set__personalBestVisual(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__personalBestVisual() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get__difficultyBeatmap, put=__set__difficultyBeatmap))  _difficultyBeatmap;

constexpr void __set__difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get__difficultyBeatmap() const;

 Tweening::Vector3Tween __declspec(property(get=__get__riseTween, put=__set__riseTween))  _riseTween;

constexpr void __set__riseTween(Tweening::Vector3Tween value) ;

constexpr Tweening::Vector3Tween __get__riseTween() const;

 Tweening::Vector3Tween __declspec(property(get=__get__avatarRiseTween, put=__set__avatarRiseTween))  _avatarRiseTween;

constexpr void __set__avatarRiseTween(Tweening::Vector3Tween value) ;

constexpr Tweening::Vector3Tween __get__avatarRiseTween() const;

 Tweening::Vector3Tween __declspec(property(get=__get__badgePositionTween, put=__set__badgePositionTween))  _badgePositionTween;

constexpr void __set__badgePositionTween(Tweening::Vector3Tween value) ;

constexpr Tweening::Vector3Tween __get__badgePositionTween() const;

 Tweening::FloatTween __declspec(property(get=__get__badgeOpacityTween, put=__set__badgeOpacityTween))  _badgeOpacityTween;

constexpr void __set__badgeOpacityTween(Tweening::FloatTween value) ;

constexpr Tweening::FloatTween __get__badgeOpacityTween() const;

 Tweening::FloatTween __declspec(property(get=__get__nameOpacityTween, put=__set__nameOpacityTween))  _nameOpacityTween;

constexpr void __set__nameOpacityTween(Tweening::FloatTween value) ;

constexpr Tweening::FloatTween __get__nameOpacityTween() const;

 Tweening::Vector3Tween __declspec(property(get=__get__namePositionTween, put=__set__namePositionTween))  _namePositionTween;

constexpr void __set__namePositionTween(Tweening::Vector3Tween value) ;

constexpr Tweening::Vector3Tween __get__namePositionTween() const;

 Tweening::ColorTween __declspec(property(get=__get__localGlowTween, put=__set__localGlowTween))  _localGlowTween;

constexpr void __set__localGlowTween(Tweening::ColorTween value) ;

constexpr Tweening::ColorTween __get__localGlowTween() const;

 Tweening::Vector3Tween __declspec(property(get=__get__titleMakingSpaceForBadgeTween, put=__set__titleMakingSpaceForBadgeTween))  _titleMakingSpaceForBadgeTween;

constexpr void __set__titleMakingSpaceForBadgeTween(Tweening::Vector3Tween value) ;

constexpr Tweening::Vector3Tween __get__titleMakingSpaceForBadgeTween() const;

 UnityEngine::Vector3 __declspec(property(get=__get__originalBadgeLocalPos, put=__set__originalBadgeLocalPos))  _originalBadgeLocalPos;

constexpr void __set__originalBadgeLocalPos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__originalBadgeLocalPos() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;


// Properties

 UnityEngine::Playables::PlayableDirector __declspec(property(get=get_badgeDirector))  badgeDirector;


// Methods

/// @brief Method get_badgeDirector addr 0x2101444 size 0x8 virtual false final false
 UnityEngine::Playables::PlayableDirector get_badgeDirector() ;

/// @brief Method Awake addr 0x210144c size 0x20 virtual false final false
 void Awake() ;

/// @brief Method Setup addr 0x2100f5c size 0x464 virtual false final false
 void Setup(GlobalNamespace::MultiplayerPlayerResultsData resultData, int32_t position, int32_t playerCount) ;

/// @brief Method SetupBadgeTimeline addr 0x20fea28 size 0x57c virtual false final false
 void SetupBadgeTimeline(UnityEngine::Transform startTransform, UnityEngine::Transform midTransform) ;

// Ctor Parameters []
explicit MultiplayerResultsPyramidViewAvatar() ;

/// @brief Method .ctor addr 0x210146c size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Factory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10947), inst: 3369 }), TypeDefinitionIndex(TypeDefinitionIndex(12720)), TypeDefinitionIndex(TypeDefinitionIndex(5335)), TypeDefinitionIndex(TypeDefinitionIndex(10947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5334))
// CS Name: MultiplayerResultsPyramidViewAvatar::Factory
class CORDL_TYPE GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory : public Zenject::PlaceholderFactory_2<GlobalNamespace::IConnectedPlayer,GlobalNamespace::MultiplayerResultsPyramidViewAvatar> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory(GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory(GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory(void* ptr) noexcept : Zenject::PlaceholderFactory_2<GlobalNamespace::IConnectedPlayer,GlobalNamespace::MultiplayerResultsPyramidViewAvatar>(ptr) {
}


  constexpr GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory& operator=(GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory& operator=(GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory() ;

/// @brief Method .ctor addr 0x2101498 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerResultsPyramidViewAvatar__Factory, "", "MultiplayerResultsPyramidViewAvatar/Factory");
NEED_NO_BOX(GlobalNamespace::MultiplayerResultsPyramidViewAvatar);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsPyramidViewAvatar, "", "MultiplayerResultsPyramidViewAvatar");
