#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace GlobalNamespace {
class MultiplayerResultsPyramidView;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MultiplayerTimelineMock;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace UnityEngine {
struct PropertyName;
}
namespace GlobalNamespace {
class MultiplayerScoreRingManager;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerOutroAnimationController;
}
// Type: ::MultiplayerOutroAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5321))
// CS Name: MultiplayerOutroAnimationController
class CORDL_TYPE MultiplayerOutroAnimationController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~MultiplayerOutroAnimationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerOutroAnimationController", modifiers: " const&", def_value: None }]
constexpr MultiplayerOutroAnimationController(MultiplayerOutroAnimationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerOutroAnimationController", modifiers: "&&", def_value: None }]
constexpr MultiplayerOutroAnimationController(MultiplayerOutroAnimationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerOutroAnimationController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerOutroAnimationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerOutroAnimationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerOutroAnimationController& operator=(MultiplayerOutroAnimationController&& o) noexcept = default;
  constexpr MultiplayerOutroAnimationController& operator=(MultiplayerOutroAnimationController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__outroPlayableDirector, put=__set__outroPlayableDirector))  _outroPlayableDirector;

constexpr void __set__outroPlayableDirector(::UnityEngine::Playables::PlayableDirector value) ;

constexpr ::UnityEngine::Playables::PlayableDirector __get__outroPlayableDirector() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__playerTimelineTrackNames, put=__set__playerTimelineTrackNames))  _playerTimelineTrackNames;

constexpr void __set__playerTimelineTrackNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__playerTimelineTrackNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__ringTimelineTrackNames, put=__set__ringTimelineTrackNames))  _ringTimelineTrackNames;

constexpr void __set__ringTimelineTrackNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__ringTimelineTrackNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__resultsTimelineTrackNames, put=__set__resultsTimelineTrackNames))  _resultsTimelineTrackNames;

constexpr void __set__resultsTimelineTrackNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__resultsTimelineTrackNames() const;

 ::ArrayW<::UnityEngine::PropertyName> __declspec(property(get=__get__playerTimelinePropertyNames, put=__set__playerTimelinePropertyNames))  _playerTimelinePropertyNames;

constexpr void __set__playerTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName> value) ;

constexpr ::ArrayW<::UnityEngine::PropertyName> __get__playerTimelinePropertyNames() const;

 ::ArrayW<::UnityEngine::PropertyName> __declspec(property(get=__get__resultsTimelinePropertyNames, put=__set__resultsTimelinePropertyNames))  _resultsTimelinePropertyNames;

constexpr void __set__resultsTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName> value) ;

constexpr ::ArrayW<::UnityEngine::PropertyName> __get__resultsTimelinePropertyNames() const;

 ::StringW __declspec(property(get=__get__localPlayerTrackName, put=__set__localPlayerTrackName))  _localPlayerTrackName;

constexpr void __set__localPlayerTrackName(::StringW value) ;

constexpr ::StringW __get__localPlayerTrackName() const;

 ::UnityEngine::PropertyName __declspec(property(get=__get__localPlayerTimelinePropertyName, put=__set__localPlayerTimelinePropertyName))  _localPlayerTimelinePropertyName;

constexpr void __set__localPlayerTimelinePropertyName(::UnityEngine::PropertyName value) ;

constexpr ::UnityEngine::PropertyName __get__localPlayerTimelinePropertyName() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__badgeTimelineTrackNames, put=__set__badgeTimelineTrackNames))  _badgeTimelineTrackNames;

constexpr void __set__badgeTimelineTrackNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__badgeTimelineTrackNames() const;

 ::ArrayW<::UnityEngine::PropertyName> __declspec(property(get=__get__badgeTimelinePropertyNames, put=__set__badgeTimelinePropertyNames))  _badgeTimelinePropertyNames;

constexpr void __set__badgeTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName> value) ;

constexpr ::ArrayW<::UnityEngine::PropertyName> __get__badgeTimelinePropertyNames() const;

 ::UnityEngine::Transform __declspec(property(get=__get__badgeStartTransform, put=__set__badgeStartTransform))  _badgeStartTransform;

constexpr void __set__badgeStartTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__badgeStartTransform() const;

 ::UnityEngine::Transform __declspec(property(get=__get__badgeMidTransform, put=__set__badgeMidTransform))  _badgeMidTransform;

constexpr void __set__badgeMidTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__badgeMidTransform() const;

 ::StringW __declspec(property(get=__get__songPreviewTrackName, put=__set__songPreviewTrackName))  _songPreviewTrackName;

constexpr void __set__songPreviewTrackName(::StringW value) ;

constexpr ::StringW __get__songPreviewTrackName() const;

 ::StringW __declspec(property(get=__get__resultsMocksActivationTrack, put=__set__resultsMocksActivationTrack))  _resultsMocksActivationTrack;

constexpr void __set__resultsMocksActivationTrack(::StringW value) ;

constexpr ::StringW __get__resultsMocksActivationTrack() const;

 ::GlobalNamespace::MultiplayerScoreRingManager __declspec(property(get=__get__multiplayerScoreRingManager, put=__set__multiplayerScoreRingManager))  _multiplayerScoreRingManager;

constexpr void __set__multiplayerScoreRingManager(::GlobalNamespace::MultiplayerScoreRingManager value) ;

constexpr ::GlobalNamespace::MultiplayerScoreRingManager __get__multiplayerScoreRingManager() const;

 ::GlobalNamespace::MultiplayerResultsPyramidView __declspec(property(get=__get__multiplayerResultsPyramidView, put=__set__multiplayerResultsPyramidView))  _multiplayerResultsPyramidView;

constexpr void __set__multiplayerResultsPyramidView(::GlobalNamespace::MultiplayerResultsPyramidView value) ;

constexpr ::GlobalNamespace::MultiplayerResultsPyramidView __get__multiplayerResultsPyramidView() const;

 ::GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get__multiplayerPlayersManager, put=__set__multiplayerPlayersManager))  _multiplayerPlayersManager;

constexpr void __set__multiplayerPlayersManager(::GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr ::GlobalNamespace::MultiplayerPlayersManager __get__multiplayerPlayersManager() const;

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 ::GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr ::GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;

 ::GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr ::GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;

 ::System::Action __declspec(property(get=__get__onCompleted, put=__set__onCompleted))  _onCompleted;

constexpr void __set__onCompleted(::System::Action value) ;

constexpr ::System::Action __get__onCompleted() const;


// Methods

/// @brief Method Start addr 0x20fc6dc size 0xa0 virtual false final false
 void Start() ;

/// @brief Method OnValidate addr 0x20fc83c size 0x7a4 virtual false final false
 void OnValidate() ;

/// @brief Method OnDestroy addr 0x20fcfe0 size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method AnimateOutro addr 0x20f4cf8 size 0x1c4 virtual false final false
 void AnimateOutro(::GlobalNamespace::MultiplayerResultsData multiplayerResultsData, ::System::Action onCompleted) ;

/// @brief Method BindOutroTimeline addr 0x20fd14c size 0x6b4 virtual false final false
 void BindOutroTimeline() ;

/// @brief Method BindRingsAndAudio addr 0x20fd800 size 0x97c virtual false final false
 void BindRingsAndAudio(::ArrayW<::UnityEngine::GameObject> rings, bool isMock, bool isDuel, ::GlobalNamespace::MultiplayerTimelineMock timelineMock) ;

/// @brief Method SetTimelineMock addr 0x20fe790 size 0x298 virtual false final false
 void SetTimelineMock(::GlobalNamespace::MultiplayerTimelineMock multiplayerIntroTimelineMock, bool isDuel) ;

/// @brief Method Completed addr 0x20fefa4 size 0x24 virtual false final false
 void Completed() ;

/// @brief Method HandlePlayerSpawningDidFinish addr 0x20fc77c size 0x24 virtual false final false
 void HandlePlayerSpawningDidFinish() ;

// Ctor Parameters []
explicit MultiplayerOutroAnimationController() ;

/// @brief Method .ctor addr 0x20ff3c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerOutroAnimationController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerOutroAnimationController, "", "MultiplayerOutroAnimationController");
