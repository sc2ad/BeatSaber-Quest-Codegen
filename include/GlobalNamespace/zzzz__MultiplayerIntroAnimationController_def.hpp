#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct PropertyName;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace GlobalNamespace {
class MultiplayerScoreRingManager;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerTimelineMock;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerIntroAnimationController;
}
// Type: ::MultiplayerIntroAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5307))
// CS Name: MultiplayerIntroAnimationController
class CORDL_TYPE MultiplayerIntroAnimationController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MultiplayerIntroAnimationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroAnimationController", modifiers: " const&", def_value: None }]
constexpr MultiplayerIntroAnimationController(MultiplayerIntroAnimationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroAnimationController", modifiers: "&&", def_value: None }]
constexpr MultiplayerIntroAnimationController(MultiplayerIntroAnimationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerIntroAnimationController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerIntroAnimationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerIntroAnimationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerIntroAnimationController& operator=(MultiplayerIntroAnimationController&& o) noexcept = default;
  constexpr MultiplayerIntroAnimationController& operator=(MultiplayerIntroAnimationController const& o) noexcept = default;
                


// Fields

 UnityEngine::Playables::PlayableDirector __declspec(property(get=__get__introPlayableDirector, put=__set__introPlayableDirector))  _introPlayableDirector;

constexpr void __set__introPlayableDirector(UnityEngine::Playables::PlayableDirector value) ;

constexpr UnityEngine::Playables::PlayableDirector __get__introPlayableDirector() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__playerTimelineTrackNames, put=__set__playerTimelineTrackNames))  _playerTimelineTrackNames;

constexpr void __set__playerTimelineTrackNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__playerTimelineTrackNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__ringTimelineTrackNames, put=__set__ringTimelineTrackNames))  _ringTimelineTrackNames;

constexpr void __set__ringTimelineTrackNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__ringTimelineTrackNames() const;

 ::ArrayW<UnityEngine::PropertyName> __declspec(property(get=__get__playerTimelinePropertyNames, put=__set__playerTimelinePropertyNames))  _playerTimelinePropertyNames;

constexpr void __set__playerTimelinePropertyNames(::ArrayW<UnityEngine::PropertyName> value) ;

constexpr ::ArrayW<UnityEngine::PropertyName> __get__playerTimelinePropertyNames() const;

 ::StringW __declspec(property(get=__get__localPlayerTrackName, put=__set__localPlayerTrackName))  _localPlayerTrackName;

constexpr void __set__localPlayerTrackName(::StringW value) ;

constexpr ::StringW __get__localPlayerTrackName() const;

 ::StringW __declspec(property(get=__get__localPlayerRingTrackName, put=__set__localPlayerRingTrackName))  _localPlayerRingTrackName;

constexpr void __set__localPlayerRingTrackName(::StringW value) ;

constexpr ::StringW __get__localPlayerRingTrackName() const;

 UnityEngine::PropertyName __declspec(property(get=__get__localPlayerTimelinePropertyName, put=__set__localPlayerTimelinePropertyName))  _localPlayerTimelinePropertyName;

constexpr void __set__localPlayerTimelinePropertyName(UnityEngine::PropertyName value) ;

constexpr UnityEngine::PropertyName __get__localPlayerTimelinePropertyName() const;

 float_t __declspec(property(get=__get__firstConnectedPlayerStart, put=__set__firstConnectedPlayerStart))  _firstConnectedPlayerStart;

constexpr void __set__firstConnectedPlayerStart(float_t value) ;

constexpr float_t __get__firstConnectedPlayerStart() const;

 float_t __declspec(property(get=__get__spawnDuration, put=__set__spawnDuration))  _spawnDuration;

constexpr void __set__spawnDuration(float_t value) ;

constexpr float_t __get__spawnDuration() const;

 ::StringW __declspec(property(get=__get__endMarkerName, put=__set__endMarkerName))  _endMarkerName;

constexpr void __set__endMarkerName(::StringW value) ;

constexpr ::StringW __get__endMarkerName() const;

 GlobalNamespace::MultiplayerScoreRingManager __declspec(property(get=__get__scoreRingManager, put=__set__scoreRingManager))  _scoreRingManager;

constexpr void __set__scoreRingManager(GlobalNamespace::MultiplayerScoreRingManager value) ;

constexpr GlobalNamespace::MultiplayerScoreRingManager __get__scoreRingManager() const;

 GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get__multiplayerPlayersManager, put=__set__multiplayerPlayersManager))  _multiplayerPlayersManager;

constexpr void __set__multiplayerPlayersManager(GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr GlobalNamespace::MultiplayerPlayersManager __get__multiplayerPlayersManager() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;

 System::Action __declspec(property(get=__get__onCompleted, put=__set__onCompleted))  _onCompleted;

constexpr void __set__onCompleted(System::Action value) ;

constexpr System::Action __get__onCompleted() const;

 float_t __declspec(property(get=__get__introDuration, put=__set__introDuration))  _introDuration;

constexpr void __set__introDuration(float_t value) ;

constexpr float_t __get__introDuration() const;

 bool __declspec(property(get=__get__bindingFinished, put=__set__bindingFinished))  _bindingFinished;

constexpr void __set__bindingFinished(bool value) ;

constexpr bool __get__bindingFinished() const;


// Methods

/// @brief Method OnValidate addr 0x20f7a7c size 0x57c virtual false final false
 void OnValidate() ;

/// @brief Method SetBeforeIntroValue addr 0x20f6378 size 0x480 virtual false final false
 void SetBeforeIntroValue() ;

/// @brief Method PlayIntroAnimation addr 0x20f3cc0 size 0x114 virtual false final false
 void PlayIntroAnimation(float_t maxDesiredIntroAnimationDuration, System::Action onCompleted) ;

/// @brief Method GetFullIntroAnimationTime addr 0x20f38e4 size 0x3dc virtual false final false
 float_t GetFullIntroAnimationTime() ;

/// @brief Method BindTimeline addr 0x20f7ff8 size 0x788 virtual false final false
 void BindTimeline() ;

/// @brief Method BindRingsAndSetTiming addr 0x20f8d0c size 0x7f4 virtual false final false
 void BindRingsAndSetTiming(int32_t connectedPlayersCount, ::ArrayW<UnityEngine::GameObject> connectedRings, UnityEngine::GameObject localRing) ;

/// @brief Method TransitionToAfterIntroAnimationState addr 0x20f3dd4 size 0xd0 virtual false final false
 void TransitionToAfterIntroAnimationState() ;

/// @brief Method CalculatePlayerIndexSequence addr 0x20f8780 size 0x58c virtual false final false
 System::Collections::Generic::Queue_1<int32_t> CalculatePlayerIndexSequence(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> allActivePlayer) ;

/// @brief Method SetTimelineMock addr 0x20f9500 size 0x12c virtual false final false
 void SetTimelineMock(GlobalNamespace::MultiplayerTimelineMock multiplayerIntroTimelineMock, bool isDuel) ;

/// @brief Method Completed addr 0x20f962c size 0x38 virtual false final false
 void Completed() ;

// Ctor Parameters []
explicit MultiplayerIntroAnimationController() ;

/// @brief Method .ctor addr 0x20f9664 size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerIntroAnimationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroAnimationController, "", "MultiplayerIntroAnimationController");
