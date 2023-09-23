#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerStartState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__PlaceholderFactory_3_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerIntroAnimator;
}
namespace GlobalNamespace {
class MultiplayerScoreDiffText;
}
namespace GlobalNamespace {
class AvatarPoseController;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class MultiplayerBigAvatarAnimator;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerFacade;
}
// Type: ::MultiplayerConnectedPlayerFacade
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5222))
// CS Name: MultiplayerConnectedPlayerFacade
class CORDL_TYPE MultiplayerConnectedPlayerFacade : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Factory = GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MultiplayerConnectedPlayerFacade() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerFacade(MultiplayerConnectedPlayerFacade const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerFacade", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerFacade(MultiplayerConnectedPlayerFacade&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerFacade(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerConnectedPlayerFacade& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerFacade& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerFacade& operator=(MultiplayerConnectedPlayerFacade&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerFacade& operator=(MultiplayerConnectedPlayerFacade const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__outroAnimator, put=__set__outroAnimator))  _outroAnimator;

constexpr void __set__outroAnimator(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__outroAnimator() const;

 GlobalNamespace::MultiplayerBigAvatarAnimator __declspec(property(get=__get__bigAvatarAnimator, put=__set__bigAvatarAnimator))  _bigAvatarAnimator;

constexpr void __set__bigAvatarAnimator(GlobalNamespace::MultiplayerBigAvatarAnimator value) ;

constexpr GlobalNamespace::MultiplayerBigAvatarAnimator __get__bigAvatarAnimator() const;

 float_t __declspec(property(get=__get__bigAvatarDisappearDuration, put=__set__bigAvatarDisappearDuration))  _bigAvatarDisappearDuration;

constexpr void __set__bigAvatarDisappearDuration(float_t value) ;

constexpr float_t __get__bigAvatarDisappearDuration() const;

 GlobalNamespace::EaseType __declspec(property(get=__get__bigAvatarDisappearEasing, put=__set__bigAvatarDisappearEasing))  _bigAvatarDisappearEasing;

constexpr void __set__bigAvatarDisappearEasing(GlobalNamespace::EaseType value) ;

constexpr GlobalNamespace::EaseType __get__bigAvatarDisappearEasing() const;

 GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController __declspec(property(get=__get__songTimeSyncController, put=__set__songTimeSyncController))  _songTimeSyncController;

constexpr void __set__songTimeSyncController(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController __get__songTimeSyncController() const;

 GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator __declspec(property(get=__get__introAnimator, put=__set__introAnimator))  _introAnimator;

constexpr void __set__introAnimator(GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator __get__introAnimator() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::MultiplayerScoreDiffText __declspec(property(get=__get__scoreDiffText, put=__set__scoreDiffText))  _scoreDiffText;

constexpr void __set__scoreDiffText(GlobalNamespace::MultiplayerScoreDiffText value) ;

constexpr GlobalNamespace::MultiplayerScoreDiffText __get__scoreDiffText() const;

 GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager __declspec(property(get=__get__beatmapObjectEventManager, put=__set__beatmapObjectEventManager))  _beatmapObjectEventManager;

constexpr void __set__beatmapObjectEventManager(GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager value) ;

constexpr GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager __get__beatmapObjectEventManager() const;


// Properties

 GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator __declspec(property(get=get_introAnimator))  introAnimator;

 UnityEngine::GameObject __declspec(property(get=get_outroAnimator))  outroAnimator;

 GlobalNamespace::MultiplayerScoreDiffText __declspec(property(get=get_scoreDiffText))  scoreDiffText;


// Methods

/// @brief Method get_introAnimator addr 0x20df518 size 0x8 virtual false final false
 GlobalNamespace::MultiplayerConnectedPlayerIntroAnimator get_introAnimator() ;

/// @brief Method get_outroAnimator addr 0x20df520 size 0x8 virtual false final false
 UnityEngine::GameObject get_outroAnimator() ;

/// @brief Method get_scoreDiffText addr 0x20df528 size 0x8 virtual false final false
 GlobalNamespace::MultiplayerScoreDiffText get_scoreDiffText() ;

/// @brief Method SetSongStartSyncTime addr 0x20df530 size 0x18 virtual false final false
 void SetSongStartSyncTime(float_t songStartSyncTime) ;

/// @brief Method PauseSpawning addr 0x20df66c size 0xa4 virtual false final false
 void PauseSpawning() ;

/// @brief Method ResumeSpawning addr 0x20df710 size 0xa4 virtual false final false
 void ResumeSpawning() ;

/// @brief Method __ForceStopSong addr 0x20df7b4 size 0x34 virtual false final false
 void __ForceStopSong() ;

/// @brief Method HideBigAvatar addr 0x20df7f4 size 0x90 virtual false final false
 void HideBigAvatar() ;

/// @brief Method __GetPlayerAvatar addr 0x20df884 size 0x4c virtual false final false
 GlobalNamespace::AvatarPoseController __GetPlayerAvatar() ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerFacade() ;

/// @brief Method .ctor addr 0x20df8d0 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Factory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10950)), TypeDefinitionIndex(TypeDefinitionIndex(12720)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10950), inst: 3383 }), TypeDefinitionIndex(TypeDefinitionIndex(5328)), TypeDefinitionIndex(TypeDefinitionIndex(5222))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5221))
// CS Name: MultiplayerConnectedPlayerFacade::Factory
class CORDL_TYPE GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory : public Zenject::PlaceholderFactory_3<GlobalNamespace::IConnectedPlayer,GlobalNamespace::MultiplayerPlayerStartState,GlobalNamespace::MultiplayerConnectedPlayerFacade> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory(GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory(GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory(void* ptr) noexcept : Zenject::PlaceholderFactory_3<GlobalNamespace::IConnectedPlayer,GlobalNamespace::MultiplayerPlayerStartState,GlobalNamespace::MultiplayerConnectedPlayerFacade>(ptr) {
}


  constexpr GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory& operator=(GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory& operator=(GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory() ;

/// @brief Method .ctor addr 0x20df8e4 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerFacade__Factory, "", "MultiplayerConnectedPlayerFacade/Factory");
NEED_NO_BOX(GlobalNamespace::MultiplayerConnectedPlayerFacade);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerFacade, "", "MultiplayerConnectedPlayerFacade");
